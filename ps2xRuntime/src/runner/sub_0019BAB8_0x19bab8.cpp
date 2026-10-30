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

// Function: sub_0019BAB8
// Address: 0x19bab8 - 0x19bbb0
void sub_0019BAB8_0x19bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BAB8_0x19bab8");
#endif

    switch (ctx->pc) {
        case 0x19bab8u: goto label_19bab8;
        case 0x19babcu: goto label_19babc;
        case 0x19bac0u: goto label_19bac0;
        case 0x19bac4u: goto label_19bac4;
        case 0x19bac8u: goto label_19bac8;
        case 0x19baccu: goto label_19bacc;
        case 0x19bad0u: goto label_19bad0;
        case 0x19bad4u: goto label_19bad4;
        case 0x19bad8u: goto label_19bad8;
        case 0x19badcu: goto label_19badc;
        case 0x19bae0u: goto label_19bae0;
        case 0x19bae4u: goto label_19bae4;
        case 0x19bae8u: goto label_19bae8;
        case 0x19baecu: goto label_19baec;
        case 0x19baf0u: goto label_19baf0;
        case 0x19baf4u: goto label_19baf4;
        case 0x19baf8u: goto label_19baf8;
        case 0x19bafcu: goto label_19bafc;
        case 0x19bb00u: goto label_19bb00;
        case 0x19bb04u: goto label_19bb04;
        case 0x19bb08u: goto label_19bb08;
        case 0x19bb0cu: goto label_19bb0c;
        case 0x19bb10u: goto label_19bb10;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb18u: goto label_19bb18;
        case 0x19bb1cu: goto label_19bb1c;
        case 0x19bb20u: goto label_19bb20;
        case 0x19bb24u: goto label_19bb24;
        case 0x19bb28u: goto label_19bb28;
        case 0x19bb2cu: goto label_19bb2c;
        case 0x19bb30u: goto label_19bb30;
        case 0x19bb34u: goto label_19bb34;
        case 0x19bb38u: goto label_19bb38;
        case 0x19bb3cu: goto label_19bb3c;
        case 0x19bb40u: goto label_19bb40;
        case 0x19bb44u: goto label_19bb44;
        case 0x19bb48u: goto label_19bb48;
        case 0x19bb4cu: goto label_19bb4c;
        case 0x19bb50u: goto label_19bb50;
        case 0x19bb54u: goto label_19bb54;
        case 0x19bb58u: goto label_19bb58;
        case 0x19bb5cu: goto label_19bb5c;
        case 0x19bb60u: goto label_19bb60;
        case 0x19bb64u: goto label_19bb64;
        case 0x19bb68u: goto label_19bb68;
        case 0x19bb6cu: goto label_19bb6c;
        case 0x19bb70u: goto label_19bb70;
        case 0x19bb74u: goto label_19bb74;
        case 0x19bb78u: goto label_19bb78;
        case 0x19bb7cu: goto label_19bb7c;
        case 0x19bb80u: goto label_19bb80;
        case 0x19bb84u: goto label_19bb84;
        case 0x19bb88u: goto label_19bb88;
        case 0x19bb8cu: goto label_19bb8c;
        case 0x19bb90u: goto label_19bb90;
        case 0x19bb94u: goto label_19bb94;
        case 0x19bb98u: goto label_19bb98;
        case 0x19bb9cu: goto label_19bb9c;
        case 0x19bba0u: goto label_19bba0;
        case 0x19bba4u: goto label_19bba4;
        case 0x19bba8u: goto label_19bba8;
        case 0x19bbacu: goto label_19bbac;
        default: break;
    }

    ctx->pc = 0x19bab8u;

label_19bab8:
    // 0x19bab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19babc:
    // 0x19babc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_19bac0:
    // 0x19bac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19bac4:
    // 0x19bac4: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
label_19bac8:
    // 0x19bac8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19bacc:
    // 0x19bacc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19baccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bad0:
    // 0x19bad0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19bad4:
    // 0x19bad4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19bad8:
    // 0x19bad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19badc:
    // 0x19badc: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x19badcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
label_19bae0:
    // 0x19bae0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x19bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19bae4:
    // 0x19bae4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bae8:
    // 0x19bae8: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_19baec:
    if (ctx->pc == 0x19BAECu) {
        ctx->pc = 0x19BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAE8u;
        // 0x19baec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BAF0u;
        goto label_19baf0;
    }
    ctx->pc = 0x19BAE8u;
    {
        const bool branch_taken_0x19bae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAE8u;
        // 0x19baec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bae8) {
            ctx->pc = 0x19BB14u;
            goto label_19bb14;
        }
    }
    ctx->pc = 0x19BAF0u;
label_19baf0:
    // 0x19baf0: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_19baf4:
    // 0x19baf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19baf8:
    // 0x19baf8: 0x26253968  addiu       $a1, $s1, 0x3968
    ctx->pc = 0x19baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14696));
label_19bafc:
    // 0x19bafc: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x19bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_19bb00:
    // 0x19bb00: 0xc138e72  jal         func_4E39C8
label_19bb04:
    if (ctx->pc == 0x19BB04u) {
        ctx->pc = 0x19BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB00u;
        // 0x19bb04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB08u;
        goto label_19bb08;
    }
    ctx->pc = 0x19BB00u;
    SET_GPR_U32(ctx, 31, 0x19BB08u);
    ctx->pc = 0x19BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB00u;
    // 0x19bb04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x19BB00u, 0x19BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB08u;
label_19bb08:
    // 0x19bb08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bb0c:
    // 0x19bb0c: 0x5602fffa  bnel        $s0, $v0, . + 4 + (-0x6 << 2)
label_19bb10:
    if (ctx->pc == 0x19BB10u) {
        ctx->pc = 0x19BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB0Cu;
        // 0x19bb10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB14u;
        goto label_19bb14;
    }
    ctx->pc = 0x19BB0Cu;
    {
        const bool branch_taken_0x19bb0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19bb0c) {
            ctx->pc = 0x19BB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB0Cu;
            // 0x19bb10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19baf8;
        }
    }
    ctx->pc = 0x19BB14u;
label_19bb14:
    // 0x19bb14: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19bb18:
    // 0x19bb18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bb1c:
    // 0x19bb1c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bb20:
    // 0x19bb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bb24:
    // 0x19bb24: 0xc10c1bb  jal         func_4306EC
label_19bb28:
    if (ctx->pc == 0x19BB28u) {
        ctx->pc = 0x19BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB24u;
        // 0x19bb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB2Cu;
        goto label_19bb2c;
    }
    ctx->pc = 0x19BB24u;
    SET_GPR_U32(ctx, 31, 0x19BB2Cu);
    ctx->pc = 0x19BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB24u;
    // 0x19bb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x19BB24u, 0x19BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB2Cu;
label_19bb2c:
    // 0x19bb2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bb30:
    // 0x19bb30: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19bb34:
    // 0x19bb34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bb38:
    // 0x19bb38: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x19bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_19bb3c:
    // 0x19bb3c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x19bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19bb40:
    // 0x19bb40: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x19bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_19bb44:
    // 0x19bb44: 0xc10c1fa  jal         func_4307E8
label_19bb48:
    if (ctx->pc == 0x19BB48u) {
        ctx->pc = 0x19BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB44u;
        // 0x19bb48: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB4Cu;
        goto label_19bb4c;
    }
    ctx->pc = 0x19BB44u;
    SET_GPR_U32(ctx, 31, 0x19BB4Cu);
    ctx->pc = 0x19BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB44u;
    // 0x19bb48: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x19BB44u, 0x19BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB4Cu;
label_19bb4c:
    // 0x19bb4c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x19bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19bb50:
    // 0x19bb50: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_19bb54:
    if (ctx->pc == 0x19BB54u) {
        ctx->pc = 0x19BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB50u;
        // 0x19bb54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB58u;
        goto label_19bb58;
    }
    ctx->pc = 0x19BB50u;
    {
        const bool branch_taken_0x19bb50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB50u;
        // 0x19bb54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb50) {
            ctx->pc = 0x19BB7Cu;
            goto label_19bb7c;
        }
    }
    ctx->pc = 0x19BB58u;
label_19bb58:
    // 0x19bb58: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x19bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_19bb5c:
    // 0x19bb5c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_19bb60:
    // 0x19bb60: 0x24c63940  addiu       $a2, $a2, 0x3940
    ctx->pc = 0x19bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14656));
label_19bb64:
    // 0x19bb64: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x19bb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_19bb68:
    // 0x19bb68: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19bb6c:
    // 0x19bb6c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_19bb70:
    // 0x19bb70: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_19bb74:
    // 0x19bb74: 0x60f809  jalr        $v1
label_19bb78:
    if (ctx->pc == 0x19BB78u) {
        ctx->pc = 0x19BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB74u;
        // 0x19bb78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB7Cu;
        goto label_19bb7c;
    }
    ctx->pc = 0x19BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19BB7Cu);
        ctx->pc = 0x19BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB74u;
        // 0x19bb78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BB74u, 0x19BB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BB7Cu;
label_19bb7c:
    // 0x19bb7c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x19bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_19bb80:
    // 0x19bb80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19bb84:
    if (ctx->pc == 0x19BB84u) {
        ctx->pc = 0x19BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB80u;
        // 0x19bb84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB88u;
        goto label_19bb88;
    }
    ctx->pc = 0x19BB80u;
    {
        const bool branch_taken_0x19bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB80u;
        // 0x19bb84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb80) {
            ctx->pc = 0x19BB94u;
            goto label_19bb94;
        }
    }
    ctx->pc = 0x19BB88u;
label_19bb88:
    // 0x19bb88: 0xc10b208  jal         func_42C820
label_19bb8c:
    if (ctx->pc == 0x19BB8Cu) {
        ctx->pc = 0x19BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB88u;
        // 0x19bb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BB90u;
        goto label_19bb90;
    }
    ctx->pc = 0x19BB88u;
    SET_GPR_U32(ctx, 31, 0x19BB90u);
    ctx->pc = 0x19BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB88u;
    // 0x19bb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x19BB88u, 0x19BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB90u;
label_19bb90:
    // 0x19bb90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19bb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19bb94:
    // 0x19bb94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19bb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19bb98:
    // 0x19bb98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19bb9c:
    // 0x19bb9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19bb9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19bba0:
    // 0x19bba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bba4:
    // 0x19bba4: 0x3e00008  jr          $ra
label_19bba8:
    if (ctx->pc == 0x19BBA8u) {
        ctx->pc = 0x19BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBA4u;
        // 0x19bba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBACu;
        goto label_19bbac;
    }
    ctx->pc = 0x19BBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBA4u;
        // 0x19bba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBACu;
label_19bbac:
    // 0x19bbac: 0x0  nop
    ctx->pc = 0x19bbacu;
    // NOP
    ctx->pc = 0x19bbb0u;
}
