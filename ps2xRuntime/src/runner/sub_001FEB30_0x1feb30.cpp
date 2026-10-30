#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEB30
// Address: 0x1feb30 - 0x1fec20
void sub_001FEB30_0x1feb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB30_0x1feb30");
#endif

    switch (ctx->pc) {
        case 0x1feb30u: goto label_1feb30;
        case 0x1feb34u: goto label_1feb34;
        case 0x1feb38u: goto label_1feb38;
        case 0x1feb3cu: goto label_1feb3c;
        case 0x1feb40u: goto label_1feb40;
        case 0x1feb44u: goto label_1feb44;
        case 0x1feb48u: goto label_1feb48;
        case 0x1feb4cu: goto label_1feb4c;
        case 0x1feb50u: goto label_1feb50;
        case 0x1feb54u: goto label_1feb54;
        case 0x1feb58u: goto label_1feb58;
        case 0x1feb5cu: goto label_1feb5c;
        case 0x1feb60u: goto label_1feb60;
        case 0x1feb64u: goto label_1feb64;
        case 0x1feb68u: goto label_1feb68;
        case 0x1feb6cu: goto label_1feb6c;
        case 0x1feb70u: goto label_1feb70;
        case 0x1feb74u: goto label_1feb74;
        case 0x1feb78u: goto label_1feb78;
        case 0x1feb7cu: goto label_1feb7c;
        case 0x1feb80u: goto label_1feb80;
        case 0x1feb84u: goto label_1feb84;
        case 0x1feb88u: goto label_1feb88;
        case 0x1feb8cu: goto label_1feb8c;
        case 0x1feb90u: goto label_1feb90;
        case 0x1feb94u: goto label_1feb94;
        case 0x1feb98u: goto label_1feb98;
        case 0x1feb9cu: goto label_1feb9c;
        case 0x1feba0u: goto label_1feba0;
        case 0x1feba4u: goto label_1feba4;
        case 0x1feba8u: goto label_1feba8;
        case 0x1febacu: goto label_1febac;
        case 0x1febb0u: goto label_1febb0;
        case 0x1febb4u: goto label_1febb4;
        case 0x1febb8u: goto label_1febb8;
        case 0x1febbcu: goto label_1febbc;
        case 0x1febc0u: goto label_1febc0;
        case 0x1febc4u: goto label_1febc4;
        case 0x1febc8u: goto label_1febc8;
        case 0x1febccu: goto label_1febcc;
        case 0x1febd0u: goto label_1febd0;
        case 0x1febd4u: goto label_1febd4;
        case 0x1febd8u: goto label_1febd8;
        case 0x1febdcu: goto label_1febdc;
        case 0x1febe0u: goto label_1febe0;
        case 0x1febe4u: goto label_1febe4;
        case 0x1febe8u: goto label_1febe8;
        case 0x1febecu: goto label_1febec;
        case 0x1febf0u: goto label_1febf0;
        case 0x1febf4u: goto label_1febf4;
        case 0x1febf8u: goto label_1febf8;
        case 0x1febfcu: goto label_1febfc;
        case 0x1fec00u: goto label_1fec00;
        case 0x1fec04u: goto label_1fec04;
        case 0x1fec08u: goto label_1fec08;
        case 0x1fec0cu: goto label_1fec0c;
        case 0x1fec10u: goto label_1fec10;
        case 0x1fec14u: goto label_1fec14;
        case 0x1fec18u: goto label_1fec18;
        case 0x1fec1cu: goto label_1fec1c;
        default: break;
    }

    ctx->pc = 0x1feb30u;

label_1feb30:
    // 0x1feb30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1feb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1feb34:
    // 0x1feb34: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1feb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1feb38:
    // 0x1feb38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1feb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1feb3c:
    // 0x1feb3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1feb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1feb40:
    // 0x1feb40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1feb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1feb44:
    // 0x1feb44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1feb44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1feb48:
    // 0x1feb48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1feb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1feb4c:
    // 0x1feb4c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1feb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1feb50:
    // 0x1feb50: 0xc07fabc  jal         func_1FEAF0
label_1feb54:
    if (ctx->pc == 0x1FEB54u) {
        ctx->pc = 0x1FEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB50u;
        // 0x1feb54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB58u;
        goto label_1feb58;
    }
    ctx->pc = 0x1FEB50u;
    SET_GPR_U32(ctx, 31, 0x1FEB58u);
    ctx->pc = 0x1FEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB50u;
    // 0x1feb54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAF0u, 0x1FEB50u, 0x1FEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB58u;
label_1feb58:
    // 0x1feb58: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1feb5c:
    if (ctx->pc == 0x1FEB5Cu) {
        ctx->pc = 0x1FEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB58u;
        // 0x1feb5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEB60u;
        goto label_1feb60;
    }
    ctx->pc = 0x1FEB58u;
    {
        const bool branch_taken_0x1feb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb58) {
            ctx->pc = 0x1FEB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB58u;
            // 0x1feb5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC0Cu;
            goto label_1fec0c;
        }
    }
    ctx->pc = 0x1FEB60u;
label_1feb60:
    // 0x1feb60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1feb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1feb64:
    // 0x1feb64: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1feb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1feb68:
    // 0x1feb68: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1feb68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1feb6c:
    // 0x1feb6c: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_1feb70:
    // 0x1feb70: 0x24a58288  addiu       $a1, $a1, -0x7D78
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935176));
label_1feb74:
    // 0x1feb74: 0x25088298  addiu       $t0, $t0, -0x7D68
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935192));
label_1feb78:
    // 0x1feb78: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1feb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1feb7c:
    // 0x1feb7c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1feb80:
    // 0x1feb80: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1feb84:
    // 0x1feb84: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x1feb84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1feb88:
    // 0x1feb88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1feb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1feb8c:
    // 0x1feb8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1feb8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feb90:
    // 0x1feb90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1feb94:
    // 0x1feb94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1feb94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feb98:
    // 0x1feb98: 0x40f809  jalr        $v0
label_1feb9c:
    if (ctx->pc == 0x1FEB9Cu) {
        ctx->pc = 0x1FEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB98u;
        // 0x1feb9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBA0u;
        goto label_1feba0;
    }
    ctx->pc = 0x1FEB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEBA0u);
        ctx->pc = 0x1FEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB98u;
        // 0x1feb9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB98u, 0x1FEBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEBA0u;
label_1feba0:
    // 0x1feba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1feba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1feba4:
    // 0x1feba4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1feba8:
    if (ctx->pc == 0x1FEBA8u) {
        ctx->pc = 0x1FEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBA4u;
        // 0x1feba8: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBACu;
        goto label_1febac;
    }
    ctx->pc = 0x1FEBA4u;
    {
        const bool branch_taken_0x1feba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBA4u;
        // 0x1feba8: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feba4) {
            ctx->pc = 0x1FEBD0u;
            goto label_1febd0;
        }
    }
    ctx->pc = 0x1FEBACu;
label_1febac:
    // 0x1febac: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x1febacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_1febb0:
    // 0x1febb0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1febb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1febb4:
    // 0x1febb4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1febb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_1febb8:
    // 0x1febb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1febbc:
    // 0x1febbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1febbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1febc0:
    // 0x1febc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1febc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1febc4:
    // 0x1febc4: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x1febc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
label_1febc8:
    // 0x1febc8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1febc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1febcc:
    // 0x1febcc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1febccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1febd0:
    // 0x1febd0: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x1febd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1febd4:
    // 0x1febd4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1febd8:
    // 0x1febd8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1febdc:
    // 0x1febdc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1febe0:
    if (ctx->pc == 0x1FEBE0u) {
        ctx->pc = 0x1FEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBDCu;
        // 0x1febe0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBE4u;
        goto label_1febe4;
    }
    ctx->pc = 0x1FEBDCu;
    {
        const bool branch_taken_0x1febdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBDCu;
        // 0x1febe0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febdc) {
            ctx->pc = 0x1FEC00u;
            goto label_1fec00;
        }
    }
    ctx->pc = 0x1FEBE4u;
label_1febe4:
    // 0x1febe4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1febe8:
    if (ctx->pc == 0x1FEBE8u) {
        ctx->pc = 0x1FEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE4u;
        // 0x1febe8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEBECu;
        goto label_1febec;
    }
    ctx->pc = 0x1FEBE4u;
    {
        const bool branch_taken_0x1febe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE4u;
        // 0x1febe8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe4) {
            ctx->pc = 0x1FEBF0u;
            goto label_1febf0;
        }
    }
    ctx->pc = 0x1FEBECu;
label_1febec:
    // 0x1febec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1febecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1febf0:
    // 0x1febf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1febf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1febf4:
    // 0x1febf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1febf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1febf8:
    // 0x1febf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1febfc:
    if (ctx->pc == 0x1FEBFCu) {
        ctx->pc = 0x1FEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBF8u;
        // 0x1febfc: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC00u;
        goto label_1fec00;
    }
    ctx->pc = 0x1FEBF8u;
    {
        const bool branch_taken_0x1febf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBF8u;
        // 0x1febfc: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febf8) {
            ctx->pc = 0x1FEC08u;
            goto label_1fec08;
        }
    }
    ctx->pc = 0x1FEC00u;
label_1fec00:
    // 0x1fec00: 0xc13ac1c  jal         func_4EB070
label_1fec04:
    if (ctx->pc == 0x1FEC04u) {
        ctx->pc = 0x1FEC08u;
        goto label_1fec08;
    }
    ctx->pc = 0x1FEC00u;
    SET_GPR_U32(ctx, 31, 0x1FEC08u);
    ctx->pc = 0x4EB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB070u, 0x1FEC00u, 0x1FEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC08u;
label_1fec08:
    // 0x1fec08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fec08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fec0c:
    // 0x1fec0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fec0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fec10:
    // 0x1fec10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fec10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fec14:
    // 0x1fec14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fec18:
    // 0x1fec18: 0x3e00008  jr          $ra
label_1fec1c:
    if (ctx->pc == 0x1FEC1Cu) {
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEC20u;
        goto label_fallthrough_0x1fec18;
    }
    ctx->pc = 0x1FEC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fec18:
    ctx->pc = 0x1FEC20u;
}
