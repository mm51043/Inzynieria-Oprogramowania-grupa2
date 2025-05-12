-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 12, 2025 at 04:42 PM
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

-- --------------------------------------------------------

--
-- Table structure for table `dyrektor`
--

CREATE TABLE `dyrektor` (
  `PracownikID` int(10) NOT NULL,
  `nrTelefonuSluzbowego` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

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

-- --------------------------------------------------------

--
-- Table structure for table `lekarz`
--

CREATE TABLE `lekarz` (
  `PracownikID` int(10) NOT NULL,
  `nrGabinetu` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `pacjent`
--

CREATE TABLE `pacjent` (
  `PacjentID` int(10) NOT NULL,
  `imie` varchar(20) NOT NULL,
  `nazwisko` varchar(30) NOT NULL,
  `pesel` int(11) NOT NULL,
  `historia` varchar(1000) DEFAULT NULL,
  `nrTelefonu` int(11) NOT NULL,
  `miasto` varchar(42) NOT NULL,
  `ulica` varchar(56) NOT NULL,
  `nrDomu` int(10) NOT NULL,
  `nrMieszkania` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `pracownik`
--

CREATE TABLE `pracownik` (
  `PracownikID` int(10) NOT NULL,
  `imie` varchar(20) NOT NULL,
  `Nazwisko` varchar(30) NOT NULL,
  `nrTelefonu` int(11) NOT NULL,
  `pesel` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `pracowniklogin`
--

CREATE TABLE `pracowniklogin` (
  `pracownikID` int(11) NOT NULL,
  `loginHash` varchar(50) NOT NULL,
  `hasloHash` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

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

-- --------------------------------------------------------

--
-- Table structure for table `receptalek`
--

CREATE TABLE `receptalek` (
  `ReceptaID` int(10) NOT NULL,
  `LekID` int(10) NOT NULL,
  `ilosc` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `rejestracja`
--

CREATE TABLE `rejestracja` (
  `PracownikID` int(10) NOT NULL,
  `zmiana` binary(1) NOT NULL,
  `stanowisko` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `sprzedawca`
--

CREATE TABLE `sprzedawca` (
  `PracownikID` int(10) NOT NULL,
  `zmiana` binary(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

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

-- --------------------------------------------------------

--
-- Table structure for table `sprzedazlek`
--

CREATE TABLE `sprzedazlek` (
  `SprzedazID` int(10) NOT NULL,
  `LekID` int(10) NOT NULL,
  `ilosc` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

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
  MODIFY `LekID` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pacjent`
--
ALTER TABLE `pacjent`
  MODIFY `PacjentID` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pracownik`
--
ALTER TABLE `pracownik`
  MODIFY `PracownikID` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `recepta`
--
ALTER TABLE `recepta`
  MODIFY `ReceptaID` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `sprzedaz`
--
ALTER TABLE `sprzedaz`
  MODIFY `SprzedazID` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `wizyta`
--
ALTER TABLE `wizyta`
  MODIFY `WizytaID` int(10) NOT NULL AUTO_INCREMENT;

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
-- Constraints for table `wizyta`
--
ALTER TABLE `wizyta`
  ADD CONSTRAINT `FKWizyta245092` FOREIGN KEY (`PacjentID`) REFERENCES `pacjent` (`PacjentID`),
  ADD CONSTRAINT `FKWizyta965225` FOREIGN KEY (`PracownikID`) REFERENCES `lekarz` (`PracownikID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
