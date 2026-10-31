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

// Function: sub_0011FF50
// Address: 0x11ff50 - 0x120038
void sub_0011FF50_0x11ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FF50_0x11ff50");
#endif

    switch (ctx->pc) {
        case 0x11ff50u: goto label_11ff50;
        case 0x11ff54u: goto label_11ff54;
        case 0x11ff58u: goto label_11ff58;
        case 0x11ff5cu: goto label_11ff5c;
        case 0x11ff60u: goto label_11ff60;
        case 0x11ff64u: goto label_11ff64;
        case 0x11ff68u: goto label_11ff68;
        case 0x11ff6cu: goto label_11ff6c;
        case 0x11ff70u: goto label_11ff70;
        case 0x11ff74u: goto label_11ff74;
        case 0x11ff78u: goto label_11ff78;
        case 0x11ff7cu: goto label_11ff7c;
        case 0x11ff80u: goto label_11ff80;
        case 0x11ff84u: goto label_11ff84;
        case 0x11ff88u: goto label_11ff88;
        case 0x11ff8cu: goto label_11ff8c;
        case 0x11ff90u: goto label_11ff90;
        case 0x11ff94u: goto label_11ff94;
        case 0x11ff98u: goto label_11ff98;
        case 0x11ff9cu: goto label_11ff9c;
        case 0x11ffa0u: goto label_11ffa0;
        case 0x11ffa4u: goto label_11ffa4;
        case 0x11ffa8u: goto label_11ffa8;
        case 0x11ffacu: goto label_11ffac;
        case 0x11ffb0u: goto label_11ffb0;
        case 0x11ffb4u: goto label_11ffb4;
        case 0x11ffb8u: goto label_11ffb8;
        case 0x11ffbcu: goto label_11ffbc;
        case 0x11ffc0u: goto label_11ffc0;
        case 0x11ffc4u: goto label_11ffc4;
        case 0x11ffc8u: goto label_11ffc8;
        case 0x11ffccu: goto label_11ffcc;
        case 0x11ffd0u: goto label_11ffd0;
        case 0x11ffd4u: goto label_11ffd4;
        case 0x11ffd8u: goto label_11ffd8;
        case 0x11ffdcu: goto label_11ffdc;
        case 0x11ffe0u: goto label_11ffe0;
        case 0x11ffe4u: goto label_11ffe4;
        case 0x11ffe8u: goto label_11ffe8;
        case 0x11ffecu: goto label_11ffec;
        case 0x11fff0u: goto label_11fff0;
        case 0x11fff4u: goto label_11fff4;
        case 0x11fff8u: goto label_11fff8;
        case 0x11fffcu: goto label_11fffc;
        case 0x120000u: goto label_120000;
        case 0x120004u: goto label_120004;
        case 0x120008u: goto label_120008;
        case 0x12000cu: goto label_12000c;
        case 0x120010u: goto label_120010;
        case 0x120014u: goto label_120014;
        case 0x120018u: goto label_120018;
        case 0x12001cu: goto label_12001c;
        case 0x120020u: goto label_120020;
        case 0x120024u: goto label_120024;
        case 0x120028u: goto label_120028;
        case 0x12002cu: goto label_12002c;
        case 0x120030u: goto label_120030;
        case 0x120034u: goto label_120034;
        default: break;
    }

    ctx->pc = 0x11ff50u;

label_11ff50:
    // 0x11ff50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11ff54:
    // 0x11ff54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11ff58:
    // 0x11ff58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11ff5c:
    // 0x11ff5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ff5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ff60:
    // 0x11ff60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11ff64:
    // 0x11ff64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11ff68:
    // 0x11ff68: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11ff6c:
    if (ctx->pc == 0x11FF6Cu) {
        ctx->pc = 0x11FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF68u;
        // 0x11ff6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF70u;
        goto label_11ff70;
    }
    ctx->pc = 0x11FF68u;
    {
        const bool branch_taken_0x11ff68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF68u;
        // 0x11ff6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff68) {
            ctx->pc = 0x11FF78u;
            goto label_11ff78;
        }
    }
    ctx->pc = 0x11FF70u;
label_11ff70:
    // 0x11ff70: 0x10000029  b           . + 4 + (0x29 << 2)
label_11ff74:
    if (ctx->pc == 0x11FF74u) {
        ctx->pc = 0x11FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF70u;
        // 0x11ff74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF78u;
        goto label_11ff78;
    }
    ctx->pc = 0x11FF70u;
    {
        const bool branch_taken_0x11ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF70u;
        // 0x11ff74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff70) {
            ctx->pc = 0x120018u;
            goto label_120018;
        }
    }
    ctx->pc = 0x11FF78u;
label_11ff78:
    // 0x11ff78: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11ff78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11ff7c:
    // 0x11ff7c: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11ff80:
    if (ctx->pc == 0x11FF80u) {
        ctx->pc = 0x11FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF7Cu;
        // 0x11ff80: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF84u;
        goto label_11ff84;
    }
    ctx->pc = 0x11FF7Cu;
    {
        const bool branch_taken_0x11ff7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF7Cu;
        // 0x11ff80: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff7c) {
            ctx->pc = 0x12000Cu;
            goto label_12000c;
        }
    }
    ctx->pc = 0x11FF84u;
label_11ff84:
    // 0x11ff84: 0x26629168  addiu       $v0, $s3, -0x6E98
    ctx->pc = 0x11ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938984));
label_11ff88:
    // 0x11ff88: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11ff88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11ff8c:
    // 0x11ff8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11ff90:
    // 0x11ff90: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11ff94:
    if (ctx->pc == 0x11FF94u) {
        ctx->pc = 0x11FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF90u;
        // 0x11ff94: 0x26639168  addiu       $v1, $s3, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF98u;
        goto label_11ff98;
    }
    ctx->pc = 0x11FF90u;
    {
        const bool branch_taken_0x11ff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF90u;
        // 0x11ff94: 0x26639168  addiu       $v1, $s3, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff90) {
            ctx->pc = 0x120010u;
            goto label_120010;
        }
    }
    ctx->pc = 0x11FF98u;
label_11ff98:
    // 0x11ff98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11ff9c:
    // 0x11ff9c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11ffa0:
    // 0x11ffa0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11ffa4:
    // 0x11ffa4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11ffa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11ffa8:
    // 0x11ffa8: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x11ffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_11ffac:
    // 0x11ffac: 0x24a586f8  addiu       $a1, $a1, -0x7908
    ctx->pc = 0x11ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
label_11ffb0:
    // 0x11ffb0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11ffb4:
    // 0x11ffb4: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11ffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11ffb8:
    // 0x11ffb8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11ffb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11ffbc:
    // 0x11ffbc: 0x240904a9  addiu       $t1, $zero, 0x4A9
    ctx->pc = 0x11ffbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1193));
label_11ffc0:
    // 0x11ffc0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11ffc4:
    // 0x11ffc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ffc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ffc8:
    // 0x11ffc8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11ffcc:
    // 0x11ffcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11ffccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ffd0:
    // 0x11ffd0: 0x40f809  jalr        $v0
label_11ffd4:
    if (ctx->pc == 0x11FFD4u) {
        ctx->pc = 0x11FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD0u;
        // 0x11ffd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFD8u;
        goto label_11ffd8;
    }
    ctx->pc = 0x11FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FFD8u);
        ctx->pc = 0x11FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD0u;
        // 0x11ffd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FFD0u, 0x11FFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FFD8u;
label_11ffd8:
    // 0x11ffd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11ffd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ffdc:
    // 0x11ffdc: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11ffe0:
    if (ctx->pc == 0x11FFE0u) {
        ctx->pc = 0x11FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFDCu;
        // 0x11ffe0: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFE4u;
        goto label_11ffe4;
    }
    ctx->pc = 0x11FFDCu;
    {
        const bool branch_taken_0x11ffdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ffdc) {
            ctx->pc = 0x11FFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FFDCu;
            // 0x11ffe0: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FFF4u;
            goto label_11fff4;
        }
    }
    ctx->pc = 0x11FFE4u;
label_11ffe4:
    // 0x11ffe4: 0xc04d2e4  jal         func_134B90
label_11ffe8:
    if (ctx->pc == 0x11FFE8u) {
        ctx->pc = 0x11FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFE4u;
        // 0x11ffe8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFECu;
        goto label_11ffec;
    }
    ctx->pc = 0x11FFE4u;
    SET_GPR_U32(ctx, 31, 0x11FFECu);
    ctx->pc = 0x11FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFE4u;
    // 0x11ffe8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B90u, 0x11FFE4u, 0x11FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFECu;
label_11ffec:
    // 0x11ffec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fff0:
    // 0x11fff0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fff4:
    // 0x11fff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fff8:
    // 0x11fff8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fffc:
    // 0x11fffc: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_120000:
    // 0x120000: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x120000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_120004:
    // 0x120004: 0x60f809  jalr        $v1
label_120008:
    if (ctx->pc == 0x120008u) {
        ctx->pc = 0x120008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120004u;
        // 0x120008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12000Cu;
        goto label_12000c;
    }
    ctx->pc = 0x120004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12000Cu);
        ctx->pc = 0x120008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120004u;
        // 0x120008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120004u, 0x12000Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12000Cu;
label_12000c:
    // 0x12000c: 0x26639168  addiu       $v1, $s3, -0x6E98
    ctx->pc = 0x12000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938984));
label_120010:
    // 0x120010: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_120014:
    // 0x120014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120018:
    // 0x120018: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x120018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12001c:
    // 0x12001c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12001cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120020:
    // 0x120020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120024:
    // 0x120024: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x120024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120028:
    // 0x120028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12002c:
    // 0x12002c: 0x3e00008  jr          $ra
label_120030:
    if (ctx->pc == 0x120030u) {
        ctx->pc = 0x120030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12002Cu;
        // 0x120030: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120034u;
        goto label_120034;
    }
    ctx->pc = 0x12002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12002Cu;
        // 0x120030: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12002Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120034u;
label_120034:
    // 0x120034: 0x0  nop
    ctx->pc = 0x120034u;
    // NOP
    ctx->pc = 0x120038u;
}
