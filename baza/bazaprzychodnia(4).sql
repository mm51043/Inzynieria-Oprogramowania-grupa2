-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:4306
-- Generation Time: Jun 09, 2025 at 12:20 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bazaprzychodnia`
--

-- --------------------------------------------------------

--
-- Table structure for table `administrator`
--

CREATE TABLE `administrator` (
  `PracownikID` int(10) NOT NULL,
  `nrTelefonuSluzbowego` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `administrator`
--

INSERT INTO `administrator` (`PracownikID`, `nrTelefonuSluzbowego`) VALUES
(1, 601001001);

-- --------------------------------------------------------

--
-- Table structure for table `dyrektor`
--

CREATE TABLE `dyrektor` (
  `PracownikID` int(10) NOT NULL,
  `nrTelefonuSluzbowego` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `dyrektor`
--

INSERT INTO `dyrektor` (`PracownikID`, `nrTelefonuSluzbowego`) VALUES
(2, 601002002);

-- --------------------------------------------------------

--
-- Table structure for table `lek`
--

CREATE TABLE `lek` (
  `LekID` int(10) NOT NULL,
  `nazwa` varchar(50) NOT NULL,
  `cena` decimal(5,2) NOT NULL,
  `iloscMagazyn` int(3) NOT NULL,
  `naRecepte` binary(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `lek`
--

INSERT INTO `lek` (`LekID`, `nazwa`, `cena`, `iloscMagazyn`, `naRecepte`) VALUES
(1, 'Paracetamol', 8.50, 50, 0x30),
(2, 'Ibuprofen', 12.30, 40, 0x30),
(3, 'Amoxicillin', 18.75, 20, 0x31),
(4, 'Metformina', 15.60, 30, 0x31),
(5, 'Ketonal', 11.00, 25, 0x31),
(6, 'Rutinoscorbin', 7.20, 60, 0x30),
(7, 'Apap', 9.00, 45, 0x30),
(8, 'Neospasmina', 10.50, 15, 0x30),
(9, 'Nurofen', 13.40, 35, 0x30),
(10, 'Zinnat', 24.00, 10, 0x31),
(11, 'Acard', 6.30, 70, 0x31),
(12, 'Tantum Verde', 14.20, 30, 0x30),
(13, 'Xanax', 19.99, 1, 0x31),
(14, 'Diclac', 16.00, 12, 0x31),
(15, 'Fluimucil', 13.00, 20, 0x30),
(16, 'Nospa', 8.10, 40, 0x30),
(17, 'Validol', 5.50, 100, 0x30),
(18, 'Polopiryna', 7.90, 60, 0x30),
(19, 'Fervex', 10.00, 33, 0x30),
(20, 'Cerutin', 6.90, 70, 0x30);

-- --------------------------------------------------------

--
-- Table structure for table `lekarz`
--

CREATE TABLE `lekarz` (
  `PracownikID` int(10) NOT NULL,
  `nrGabinetu` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `lekarz`
--

INSERT INTO `lekarz` (`PracownikID`, `nrGabinetu`) VALUES
(12, 101),
(13, 102),
(14, 103),
(15, 104),
(16, 105),
(17, 106),
(18, 107),
(19, 108),
(20, 109);

-- --------------------------------------------------------

--
-- Table structure for table `pacjent`
--

CREATE TABLE `pacjent` (
  `PacjentID` int(10) NOT NULL,
  `imie` varchar(20) NOT NULL,
  `nazwisko` varchar(30) NOT NULL,
  `pesel` varchar(11) NOT NULL,
  `historia` varchar(1000) DEFAULT NULL,
  `nrTelefonu` int(11) NOT NULL,
  `miasto` varchar(42) NOT NULL,
  `ulica` varchar(56) NOT NULL,
  `nrDomu` int(10) NOT NULL,
  `nrMieszkania` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `pacjent`
--

INSERT INTO `pacjent` (`PacjentID`, `imie`, `nazwisko`, `pesel`, `historia`, `nrTelefonu`, `miasto`, `ulica`, `nrDomu`, `nrMieszkania`) VALUES
(1, 'Adam', 'Malinowski', '20000101001', 'Brak', 700001001, 'Szczecin', 'Lipowa', 10, 1),
(2, 'Beata', 'Kaczmarek', '20000101002', NULL, 700001002, 'Szczecin', 'Brzozowa', 12, 2),
(3, 'Cezary', 'Lis', '20000101003', 'Alergie', 700001003, 'Szczecin', 'Topolowa', 14, NULL),
(4, 'Dorota', 'Górska', '20000101004', NULL, 700001004, 'Szczecin', 'Klonowa', 5, 4),
(5, 'Emil', 'Jabłoński', '20000101005', 'Cukrzyca', 700001005, 'Szczecin', 'Jesionowa', 6, 5),
(6, 'Filip', 'Bąk', '20000101006', NULL, 700001006, 'Szczecin', 'Grabowa', 9, NULL),
(7, 'Grażyna', 'Czarnecka', '20000101007', 'Problemy z sercem', 700001007, 'Szczecin', 'Akacjowa', 20, 1),
(8, 'Hubert', 'Krupa', '20000101008', NULL, 700001008, 'Szczecin', 'Wrzosowa', 21, NULL),
(9, 'Irena', 'Urban', '20000101009', NULL, 700001009, 'Szczecin', 'Sosnowa', 22, 2),
(10, 'Jerzy', 'Rogowski', '20000101010', NULL, 700001010, 'Szczecin', 'Bukowa', 23, 3),
(11, 'Katarzyna', 'Michalak', '20000101011', NULL, 700001011, 'Szczecin', 'Świerkowa', 24, NULL),
(12, 'Łukasz', 'Sawicki', '20000101012', NULL, 700001012, 'Szczecin', 'Cisowa', 25, 1),
(13, 'Monika', 'Zalewska', '20000101013', NULL, 700001013, 'Szczecin', 'Leszczynowa', 26, 2),
(14, 'Norbert', 'Marciniak', '20000101014', NULL, 700001014, 'Szczecin', 'Jarzębinowa', 27, NULL),
(15, 'Olga', 'Pawlak', '20000101015', NULL, 700001015, 'Szczecin', 'Modrzewiowa', 28, 3),
(16, 'Patryk', 'Zięba', '20000101016', NULL, 700001016, 'Szczecin', 'Olchowa', 29, NULL),
(17, 'Renata', 'Bednarek', '20000101017', NULL, 700001017, 'Szczecin', 'Jaśminowa', 30, 2),
(18, 'Sebastian', 'Ratajczak', '20000101018', NULL, 700001018, 'Szczecin', 'Czereśniowa', 31, NULL),
(19, 'Teresa', 'Czerwińska', '20000101019', NULL, 700001019, 'Szczecin', 'Malinowa', 32, 3),
(20, 'Urszula', 'Makowska', '20000101020', NULL, 700001020, 'Szczecin', 'Poziomkowa', 33, NULL),
(21, 'Michał', 'Marcinkowski', '72727272727', 'Zjadł wczoraj niezwykle dobry kebab', 727727727, 'Police', 'Policka', 72, 7);

-- --------------------------------------------------------

--
-- Table structure for table `pracownik`
--

CREATE TABLE `pracownik` (
  `PracownikID` int(10) NOT NULL,
  `imie` varchar(20) NOT NULL,
  `nazwisko` varchar(30) NOT NULL,
  `nrTelefonu` int(11) NOT NULL,
  `pesel` varchar(11) NOT NULL,
  `ostatniLogin` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `pracownik`
--

INSERT INTO `pracownik` (`PracownikID`, `imie`, `nazwisko`, `nrTelefonu`, `pesel`, `ostatniLogin`) VALUES
(1, 'Anna', 'Nowak', 501001001, '90010112345', '2025-06-02'),
(2, 'Jan', 'Kowalski', 502002002, '80020212345', '2025-06-07'),
(3, 'Marta', 'Wiśniewska', 503003003, '85030312345', '2025-06-05'),
(4, 'Paweł', 'Zieliński', 504004004, '82040412345', '2025-06-01'),
(5, 'Karolina', 'Wójcik', 505005005, '83050512345', '2025-06-06'),
(6, 'Tomasz', 'Kamiński', 506006006, '87060612345', '2025-06-04'),
(7, 'Ewa', 'Lewandowska', 507007007, '81070712345', '2025-06-07'),
(8, 'Krzysztof', 'Dąbrowski', 508008008, '89080812345', '2025-06-09'),
(9, 'Magda', 'Szymańska', 509009009, '88090912345', '2025-06-03'),
(10, 'Robert', 'Woźniak', 510010010, '89101012345', '2025-06-08'),
(11, 'Agnieszka', 'Mazur', 511011011, '88111112345', '2025-06-02'),
(12, 'Piotr', 'Krawczyk', 512012012, '86121212345', '2025-06-05'),
(13, 'Zofia', 'Zając', 513013013, '92010112345', '2025-06-06'),
(14, 'Grzegorz', 'Król', 514014014, '93020212345', '2025-06-01'),
(15, 'Natalia', 'Wieczorek', 515015015, '94030312345', '2025-06-08'),
(16, 'Marek', 'Jankowski', 516016016, '95040412345', '2025-06-03'),
(17, 'Iwona', 'Baran', 517017017, '96050512345', '2025-06-04'),
(18, 'Artur', 'Sikora', 518018018, '97060612345', '2025-06-09'),
(19, 'Elżbieta', 'Wróbel', 519019019, '98070712345', '2025-06-07'),
(20, 'Damian', 'Nowicki', 520020020, '99080812345', '2025-06-02');

-- --------------------------------------------------------

--
-- Table structure for table `pracowniklogin`
--

CREATE TABLE `pracowniklogin` (
  `pracownikID` int(11) NOT NULL,
  `login` varchar(50) NOT NULL,
  `hasloHash` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pracowniklogin`
--

INSERT INTO `pracowniklogin` (`pracownikID`, `login`, `hasloHash`) VALUES
(1, 'anna', '2045632'),
(2, 'jan', '74231'),
(3, 'marta', '74114091'),
(4, 'paweł', '2383562044'),
(5, 'karolina', '1124855971'),
(6, 'tomasz', '2510703638'),
(7, 'ewa', '70095'),
(8, 'krzysztof', '3172132414'),
(9, 'magda', '74103024'),
(10, 'robert', '2453121442'),
(11, 'agnieszka', '3839422465'),
(12, 'piotr', '77120116'),
(13, 'zofia', '86525065'),
(14, 'grzegorz', '870897574'),
(15, 'natalia', '3392963332'),
(16, 'marek', '74113636'),
(17, 'iwona', '71072340'),
(18, 'artur', '63540256'),
(19, 'elzbieta', '647468856'),
(20, 'damian', '2039715046');

-- --------------------------------------------------------

--
-- Table structure for table `recepta`
--

CREATE TABLE `recepta` (
  `ReceptaID` int(10) NOT NULL,
  `PracownikID` int(10) NOT NULL,
  `PacjentID` int(10) NOT NULL,
  `zrealizowano` binary(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `recepta`
--

INSERT INTO `recepta` (`ReceptaID`, `PracownikID`, `PacjentID`, `zrealizowano`) VALUES
(1, 12, 1, 0x31),
(2, 13, 2, 0x31),
(3, 14, 3, 0x30),
(4, 15, 4, 0x30),
(5, 16, 5, 0x31),
(6, 17, 6, 0x30),
(7, 18, 7, 0x31),
(8, 19, 8, 0x30),
(9, 20, 9, 0x30),
(10, 12, 10, 0x31);

-- --------------------------------------------------------

--
-- Table structure for table `receptalek`
--

CREATE TABLE `receptalek` (
  `ReceptaID` int(10) NOT NULL,
  `LekID` int(10) NOT NULL,
  `ilosc` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `receptalek`
--

INSERT INTO `receptalek` (`ReceptaID`, `LekID`, `ilosc`) VALUES
(1, 1, 1),
(1, 3, 2),
(2, 4, 1),
(2, 5, 1),
(3, 6, 1),
(3, 7, 2),
(4, 8, 1),
(4, 9, 1),
(5, 10, 1),
(5, 11, 1),
(6, 12, 2),
(6, 13, 1),
(7, 14, 1),
(7, 15, 2),
(8, 16, 1),
(8, 17, 1),
(9, 18, 1),
(9, 19, 2),
(10, 20, 1),
(10, 2, 1);

-- --------------------------------------------------------

--
-- Table structure for table `rejestracja`
--

CREATE TABLE `rejestracja` (
  `PracownikID` int(10) NOT NULL,
  `zmiana` binary(1) NOT NULL,
  `stanowisko` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `rejestracja`
--

INSERT INTO `rejestracja` (`PracownikID`, `zmiana`, `stanowisko`) VALUES
(6, 0x30, 1),
(7, 0x30, 2),
(8, 0x31, 1),
(9, 0x31, 2),
(10, 0x30, 3),
(11, 0x31, 3);

-- --------------------------------------------------------

--
-- Table structure for table `sprzedawca`
--

CREATE TABLE `sprzedawca` (
  `PracownikID` int(10) NOT NULL,
  `zmiana` binary(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `sprzedawca`
--

INSERT INTO `sprzedawca` (`PracownikID`, `zmiana`) VALUES
(3, 0x30),
(4, 0x31),
(5, 0x30);

-- --------------------------------------------------------

--
-- Table structure for table `sprzedaz`
--

CREATE TABLE `sprzedaz` (
  `SprzedazID` int(10) NOT NULL,
  `ReceptaID` int(10) NOT NULL,
  `PracownikID` int(10) NOT NULL,
  `data` date NOT NULL,
  `godzina` time(6) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `sprzedaz`
--

INSERT INTO `sprzedaz` (`SprzedazID`, `ReceptaID`, `PracownikID`, `data`, `godzina`) VALUES
(1, 1, 3, '2025-05-10', '10:00:00.000000'),
(2, 2, 3, '2025-05-10', '10:15:00.000000'),
(3, 5, 4, '2025-05-10', '10:30:00.000000'),
(4, 7, 4, '2025-05-10', '10:45:00.000000'),
(5, 10, 5, '2025-05-10', '11:00:00.000000'),
(6, 6, 5, '2025-05-10', '11:15:00.000000'),
(7, 8, 3, '2025-05-10', '11:30:00.000000'),
(8, 9, 4, '2025-05-10', '11:45:00.000000'),
(9, 3, 5, '2025-05-10', '12:00:00.000000'),
(10, 4, 3, '2025-05-10', '12:15:00.000000');

-- --------------------------------------------------------

--
-- Table structure for table `sprzedazlek`
--

CREATE TABLE `sprzedazlek` (
  `SprzedazID` int(10) NOT NULL,
  `LekID` int(10) NOT NULL,
  `ilosc` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `sprzedazlek`
--

INSERT INTO `sprzedazlek` (`SprzedazID`, `LekID`, `ilosc`) VALUES
(1, 1, 1),
(1, 3, 2),
(2, 4, 1),
(3, 10, 1),
(4, 14, 1),
(5, 20, 1),
(6, 13, 1),
(7, 16, 1),
(8, 18, 1),
(9, 6, 1),
(10, 8, 1);

-- --------------------------------------------------------

--
-- Table structure for table `wiadomosci`
--

CREATE TABLE `wiadomosci` (
  `WiadomoscID` int(11) NOT NULL,
  `nadawca` int(11) NOT NULL,
  `odbiorca` int(11) NOT NULL,
  `tytul` varchar(50) NOT NULL,
  `czasNadania` time NOT NULL,
  `dataNadania` date NOT NULL,
  `tresc` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `wiadomosci`
--

INSERT INTO `wiadomosci` (`WiadomoscID`, `nadawca`, `odbiorca`, `tytul`, `czasNadania`, `dataNadania`, `tresc`) VALUES
(1, 2, 12, 'Szkolenie BHP w piątek o 13:00', '07:30:00', '2025-05-01', 'Przypominam o obowiązkowym szkoleniu BHP w piątek o 13:00.'),
(2, 2, 12, 'Przesłanie grafików na przyszły tydzień', '08:00:00', '2025-05-01', ' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas suscipit ante ut nunc faucibus ornare. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse lacinia dignissim pellentesque. Integer ac felis massa. Fusce at pulvinar arcu, in viverra ante. Maecenas lacus ex, placerat faucibus convallis at, fermentum finibus mi. Aliquam imperdiet felis nunc, vel vulputate diam commodo a. In nec ultrices urna. Nunc lacinia dui iaculis vestibulum cursus. Pellentesque vitae nisl mattis, lacinia eros eu, elementum dolor. Cras eget ipsum leo. Vestibulum accumsan mauris non diam rhoncus, eu viverra metus rhoncus. Vivamus ac volutpat est. Nulla porttitor suscipit purus at volutpat. In eleifend blandit libero. Lorem ipsum dolor sit amet, consectetur adipiscing elit.\r\n\r\nUt finibus, nunc in dapibus varius, tortor nibh varius enim, pellentesque interdum mi ligula sed lorem. Maecenas elementum lectus euismod, consectetur mauris dapibus, fermentum nisl. Etiam pellentesque erat vel convallis bibendum. Morbi sed orci sit amet sem posuere scelerisque. Etiam tempor mauris nec turpis sollicitudin semper. In quam magna, ultricies quis odio nec, pulvinar viverra mauris. Ut non vehicula massa. Pellentesque nec sem imperdiet quam varius suscipit rhoncus quis nisi.\r\n\r\nSuspendisse potenti. Maecenas laoreet vulputate condimentum. Donec maximus viverra accumsan. Phasellus eget pellentesque lorem. Donec nec scelerisque diam. Vivamus congue lectus et efficitur mattis. Phasellus non volutpat lectus, a euismod eros. Nulla facilisi. Nunc vel nunc consectetur, iaculis ligula eget, rutrum velit. Praesent tincidunt massa ut justo imperdiet iaculis. In hac habitasse platea dictumst. '),
(3, 2, 12, 'Przychodnia czynna w sobotę do 14:00', '09:15:00', '2025-05-02', 'W sobotę przychodnia będzie czynna tylko do godziny 14:00.'),
(4, 2, 12, 'Nowe zasady rejestracji pacjentów', '10:00:00', '2025-05-03', 'Nowe zasady rejestracji pacjentów obowiązują od poniedziałku.'),
(5, 2, 12, 'Uzupełnianie dokumentacji medycznej', '15:30:00', '2025-05-03', 'Proszę pamiętać o uzupełnianiu dokumentacji medycznej na bieżąco.'),
(6, 1, 13, 'Dostawa środków ochrony osobistej', '07:45:00', '2025-05-04', 'Dostawa środków ochrony osobistej planowana jest na wtorek rano.'),
(7, 2, 13, 'Spotkanie organizacyjne w środę o 14:00', '12:10:00', '2025-05-04', 'W środę odbędzie się spotkanie organizacyjne o godzinie 14:00 w sali konferencyjnej.'),
(8, 1, 13, 'Zgłaszanie problemów do działu IT', '08:30:00', '2025-05-05', 'Proszę zgłaszać wszelkie problemy z systemem informatycznym do działu IT.'),
(9, 1, 13, 'Zaktualizowano procedury dezynfekcji', '09:00:00', '2025-05-05', 'Zaktualizowano procedury dotyczące dezynfekcji po każdej wizycie.'),
(10, 2, 13, 'Punktualne rozpoczynanie wizyt', '07:20:00', '2025-05-06', 'Zwracam uwagę na punktualne rozpoczynanie wizyt – pacjenci zgłaszają opóźnienia.'),
(11, 1, 14, 'Słuchajcie', '03:13:01', '2025-06-09', 'W Iskanderze jest promocja na rollo (-50% na drugie), więc o własnych siłach do roboty nie dojdę, biorę l4 który cwaniak mi wystawi?'),
(12, 1, 12, 'typie', '06:31:59', '2025-06-09', 'siema');

-- --------------------------------------------------------

--
-- Table structure for table `wizyta`
--

CREATE TABLE `wizyta` (
  `WizytaID` int(10) NOT NULL,
  `PracownikID` int(10) NOT NULL,
  `PacjentID` int(10) NOT NULL,
  `godzinaPoczatek` time(6) NOT NULL,
  `godzinaKoniec` time(6) NOT NULL,
  `zakonczone` binary(1) NOT NULL,
  `tytul` varchar(50) DEFAULT NULL,
  `data` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `wizyta`
--

INSERT INTO `wizyta` (`WizytaID`, `PracownikID`, `PacjentID`, `godzinaPoczatek`, `godzinaKoniec`, `zakonczone`, `tytul`, `data`) VALUES
(1, 12, 1, '08:00:00.000000', '08:15:00.000000', 0x31, 'Kontrola', '2025-05-01'),
(2, 13, 2, '08:15:00.000000', '08:30:00.000000', 0x31, 'Nowy pacjent', '2025-05-01'),
(3, 14, 3, '08:30:00.000000', '08:45:00.000000', 0x31, 'Ból głowy', '2025-05-01'),
(4, 15, 4, '08:45:00.000000', '09:00:00.000000', 0x31, 'Przeziębienie', '2025-05-01'),
(5, 16, 5, '09:00:00.000000', '09:15:00.000000', 0x31, 'Recepta', '2025-05-01'),
(6, 17, 6, '09:15:00.000000', '09:30:00.000000', 0x30, 'Konsultacja', '2025-05-01'),
(7, 18, 7, '09:30:00.000000', '09:45:00.000000', 0x31, 'Alergia', '2025-05-01'),
(8, 19, 8, '09:45:00.000000', '10:00:00.000000', 0x30, 'Duszności', '2025-05-01'),
(9, 20, 9, '10:00:00.000000', '10:15:00.000000', 0x31, 'Profilaktyka', '2025-05-01'),
(10, 12, 10, '10:15:00.000000', '10:30:00.000000', 0x31, 'Wizyta kontrolna', '2025-05-01'),
(11, 12, 1, '08:00:00.000000', '09:00:00.000000', 0x30, 'kookok', '2025-07-04'),
(12, 12, 21, '10:00:00.000000', '11:00:00.000000', 0x30, 'W-F', '2025-06-10');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `administrator`
--
ALTER TABLE `administrator`
  ADD UNIQUE KEY `nrTelefonuSluzbowego` (`nrTelefonuSluzbowego`),
  ADD UNIQUE KEY `PracownikID` (`PracownikID`);

--
-- Indexes for table `dyrektor`
--
ALTER TABLE `dyrektor`
  ADD UNIQUE KEY `nrTelefonuSluzbowego` (`nrTelefonuSluzbowego`),
  ADD UNIQUE KEY `PracownikID` (`PracownikID`);

--
-- Indexes for table `lek`
--
ALTER TABLE `lek`
  ADD PRIMARY KEY (`LekID`),
  ADD UNIQUE KEY `LekID` (`LekID`);

--
-- Indexes for table `lekarz`
--
ALTER TABLE `lekarz`
  ADD UNIQUE KEY `PracownikID` (`PracownikID`),
  ADD UNIQUE KEY `nrGabinetu` (`nrGabinetu`);

--
-- Indexes for table `pacjent`
--
ALTER TABLE `pacjent`
  ADD PRIMARY KEY (`PacjentID`),
  ADD UNIQUE KEY `pesel` (`pesel`),
  ADD UNIQUE KEY `nrTelefonu` (`nrTelefonu`),
  ADD UNIQUE KEY `PacjentID` (`PacjentID`);

--
-- Indexes for table `pracownik`
--
ALTER TABLE `pracownik`
  ADD PRIMARY KEY (`PracownikID`),
  ADD UNIQUE KEY `nrTelefonu` (`nrTelefonu`),
  ADD UNIQUE KEY `pesel` (`pesel`),
  ADD UNIQUE KEY `PracownikID` (`PracownikID`);

--
-- Indexes for table `pracowniklogin`
--
ALTER TABLE `pracowniklogin`
  ADD UNIQUE KEY `pracownikID` (`pracownikID`);

--
-- Indexes for table `recepta`
--
ALTER TABLE `recepta`
  ADD PRIMARY KEY (`ReceptaID`),
  ADD UNIQUE KEY `ReceptaID` (`ReceptaID`),
  ADD KEY `FKRecepta525467` (`PracownikID`),
  ADD KEY `FKRecepta754398` (`PacjentID`);

--
-- Indexes for table `receptalek`
--
ALTER TABLE `receptalek`
  ADD KEY `FKReceptaLek865329` (`ReceptaID`),
  ADD KEY `FKReceptaLek152797` (`LekID`);

--
-- Indexes for table `rejestracja`
--
ALTER TABLE `rejestracja`
  ADD UNIQUE KEY `PracownikID` (`PracownikID`);

--
-- Indexes for table `sprzedawca`
--
ALTER TABLE `sprzedawca`
  ADD UNIQUE KEY `PracownikID` (`PracownikID`);

--
-- Indexes for table `sprzedaz`
--
ALTER TABLE `sprzedaz`
  ADD PRIMARY KEY (`SprzedazID`),
  ADD UNIQUE KEY `SprzedazID` (`SprzedazID`),
  ADD KEY `FKSprzedaz870402` (`PracownikID`),
  ADD KEY `FKSprzedaz207623` (`ReceptaID`);

--
-- Indexes for table `sprzedazlek`
--
ALTER TABLE `sprzedazlek`
  ADD KEY `FKSprzedazLe966989` (`SprzedazID`),
  ADD KEY `FKSprzedazLe780692` (`LekID`);

--
-- Indexes for table `wiadomosci`
--
ALTER TABLE `wiadomosci`
  ADD PRIMARY KEY (`WiadomoscID`),
  ADD KEY `nadawca` (`nadawca`),
  ADD KEY `idx_wiadomosci_data_czas` (`dataNadania`,`czasNadania`),
  ADD KEY `odbiorca` (`odbiorca`);

--
-- Indexes for table `wizyta`
--
ALTER TABLE `wizyta`
  ADD PRIMARY KEY (`WizytaID`),
  ADD UNIQUE KEY `WizytaID` (`WizytaID`),
  ADD KEY `FKWizyta965225` (`PracownikID`),
  ADD KEY `FKWizyta245092` (`PacjentID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `lek`
--
ALTER TABLE `lek`
  MODIFY `LekID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `pacjent`
--
ALTER TABLE `pacjent`
  MODIFY `PacjentID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;

--
-- AUTO_INCREMENT for table `pracownik`
--
ALTER TABLE `pracownik`
  MODIFY `PracownikID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `recepta`
--
ALTER TABLE `recepta`
  MODIFY `ReceptaID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table `sprzedaz`
--
ALTER TABLE `sprzedaz`
  MODIFY `SprzedazID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `wiadomosci`
--
ALTER TABLE `wiadomosci`
  MODIFY `WiadomoscID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table `wizyta`
--
ALTER TABLE `wizyta`
  MODIFY `WizytaID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `administrator`
--
ALTER TABLE `administrator`
  ADD CONSTRAINT `FKAdministra307214` FOREIGN KEY (`PracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `dyrektor`
--
ALTER TABLE `dyrektor`
  ADD CONSTRAINT `FKDyrektor311594` FOREIGN KEY (`PracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `lekarz`
--
ALTER TABLE `lekarz`
  ADD CONSTRAINT `FKLekarz18337` FOREIGN KEY (`PracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `pracowniklogin`
--
ALTER TABLE `pracowniklogin`
  ADD CONSTRAINT `pracowniklogin_ibfk_1` FOREIGN KEY (`pracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `recepta`
--
ALTER TABLE `recepta`
  ADD CONSTRAINT `FKRecepta525467` FOREIGN KEY (`PracownikID`) REFERENCES `lekarz` (`PracownikID`),
  ADD CONSTRAINT `FKRecepta754398` FOREIGN KEY (`PacjentID`) REFERENCES `pacjent` (`PacjentID`);

--
-- Constraints for table `receptalek`
--
ALTER TABLE `receptalek`
  ADD CONSTRAINT `FKReceptaLek152797` FOREIGN KEY (`LekID`) REFERENCES `lek` (`LekID`),
  ADD CONSTRAINT `FKReceptaLek865329` FOREIGN KEY (`ReceptaID`) REFERENCES `recepta` (`ReceptaID`);

--
-- Constraints for table `rejestracja`
--
ALTER TABLE `rejestracja`
  ADD CONSTRAINT `FKRejestracj956527` FOREIGN KEY (`PracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `sprzedawca`
--
ALTER TABLE `sprzedawca`
  ADD CONSTRAINT `FKSprzedawca473265` FOREIGN KEY (`PracownikID`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `sprzedaz`
--
ALTER TABLE `sprzedaz`
  ADD CONSTRAINT `FKSprzedaz207623` FOREIGN KEY (`ReceptaID`) REFERENCES `recepta` (`ReceptaID`),
  ADD CONSTRAINT `FKSprzedaz870402` FOREIGN KEY (`PracownikID`) REFERENCES `sprzedawca` (`PracownikID`);

--
-- Constraints for table `sprzedazlek`
--
ALTER TABLE `sprzedazlek`
  ADD CONSTRAINT `FKSprzedazLe780692` FOREIGN KEY (`LekID`) REFERENCES `lek` (`LekID`),
  ADD CONSTRAINT `FKSprzedazLe966989` FOREIGN KEY (`SprzedazID`) REFERENCES `sprzedaz` (`SprzedazID`);

--
-- Constraints for table `wiadomosci`
--
ALTER TABLE `wiadomosci`
  ADD CONSTRAINT `wiadomosci_ibfk_1` FOREIGN KEY (`nadawca`) REFERENCES `pracownik` (`PracownikID`),
  ADD CONSTRAINT `wiadomosci_ibfk_2` FOREIGN KEY (`odbiorca`) REFERENCES `pracownik` (`PracownikID`);

--
-- Constraints for table `wizyta`
--
ALTER TABLE `wizyta`
  ADD CONSTRAINT `FKWizyta245092` FOREIGN KEY (`PacjentID`) REFERENCES `pacjent` (`PacjentID`),
  ADD CONSTRAINT `FKWizyta965225` FOREIGN KEY (`PracownikID`) REFERENCES `lekarz` (`PracownikID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
