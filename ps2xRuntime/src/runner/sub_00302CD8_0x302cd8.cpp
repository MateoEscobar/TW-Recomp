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

// Function: sub_00302CD8
// Address: 0x302cd8 - 0x302df8
void sub_00302CD8_0x302cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302CD8_0x302cd8");
#endif

    switch (ctx->pc) {
        case 0x302cf0u: goto label_302cf0;
        case 0x302d04u: goto label_302d04;
        case 0x302d4cu: goto label_302d4c;
        case 0x302d5cu: goto label_302d5c;
        case 0x302da0u: goto label_302da0;
        case 0x302db4u: goto label_302db4;
        case 0x302dbcu: goto label_302dbc;
        case 0x302dd4u: goto label_302dd4;
        default: break;
    }

    ctx->pc = 0x302cd8u;

    // 0x302cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x302cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x302cdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x302cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x302ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x302ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302ce8: 0xc0a3eba  jal         func_28FAE8
    ctx->pc = 0x302CE8u;
    SET_GPR_U32(ctx, 31, 0x302CF0u);
    ctx->pc = 0x302CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CE8u;
    // 0x302cec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x302CE8u, 0x302CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CF0u;
label_302cf0:
    // 0x302cf0: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x302cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x302cf4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x302CF4u;
    {
        const bool branch_taken_0x302cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302cf4) {
            ctx->pc = 0x302CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302CF4u;
            // 0x302cf8: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D10u;
            goto label_302d10;
        }
    }
    ctx->pc = 0x302CFCu;
    // 0x302cfc: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x302CFCu;
    SET_GPR_U32(ctx, 31, 0x302D04u);
    ctx->pc = 0x302D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CFCu;
    // 0x302d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x302CFCu, 0x302D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D04u;
label_302d04:
    // 0x302d04: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x302D04u;
    {
        const bool branch_taken_0x302d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d04) {
            ctx->pc = 0x302D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D04u;
            // 0x302d08: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D0Cu;
            goto label_302d0c;
        }
    }
    ctx->pc = 0x302D0Cu;
label_302d0c:
    // 0x302d0c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x302d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_302d10:
    // 0x302d10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x302d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x302d14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x302D14u;
    {
        const bool branch_taken_0x302d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d14) {
            ctx->pc = 0x302D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D14u;
            // 0x302d18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D1Cu;
            goto label_302d1c;
        }
    }
    ctx->pc = 0x302D1Cu;
label_302d1c:
    // 0x302d1c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x302d1cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x302d20: 0x1810  mfhi        $v1
    ctx->pc = 0x302d20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x302d24: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x302D24u;
    {
        const bool branch_taken_0x302d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d24) {
            ctx->pc = 0x302D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D24u;
            // 0x302d28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DE4u;
            goto label_302de4;
        }
    }
    ctx->pc = 0x302D2Cu;
    // 0x302d2c: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x302d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x302d30: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x302D30u;
    {
        const bool branch_taken_0x302d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d30) {
            ctx->pc = 0x302D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D30u;
            // 0x302d34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DE4u;
            goto label_302de4;
        }
    }
    ctx->pc = 0x302D38u;
    // 0x302d38: 0x92020265  lbu         $v0, 0x265($s0)
    ctx->pc = 0x302d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 613)));
    // 0x302d3c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x302D3Cu;
    {
        const bool branch_taken_0x302d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d3c) {
            ctx->pc = 0x302D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D3Cu;
            // 0x302d40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DE4u;
            goto label_302de4;
        }
    }
    ctx->pc = 0x302D44u;
    // 0x302d44: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x302D44u;
    SET_GPR_U32(ctx, 31, 0x302D4Cu);
    ctx->pc = 0x302D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302D44u;
    // 0x302d48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x302D44u, 0x302D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D4Cu;
label_302d4c:
    // 0x302d4c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x302D4Cu;
    {
        const bool branch_taken_0x302d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d4c) {
            ctx->pc = 0x302D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D4Cu;
            // 0x302d50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DE4u;
            goto label_302de4;
        }
    }
    ctx->pc = 0x302D54u;
    // 0x302d54: 0xc08a08a  jal         func_228228
    ctx->pc = 0x302D54u;
    SET_GPR_U32(ctx, 31, 0x302D5Cu);
    ctx->pc = 0x302D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302D54u;
    // 0x302d58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x302D54u, 0x302D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D5Cu;
label_302d5c:
    // 0x302d5c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x302D5Cu;
    {
        const bool branch_taken_0x302d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d5c) {
            ctx->pc = 0x302D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D5Cu;
            // 0x302d60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DE4u;
            goto label_302de4;
        }
    }
    ctx->pc = 0x302D64u;
    // 0x302d64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x302d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x302d68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x302d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302d6c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x302d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x302d70: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x302d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
    // 0x302d74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x302d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x302d78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x302d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302d80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x302d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x302d84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x302d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x302d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x302d8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302d90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302d94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x302d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d98: 0xc0a757c  jal         func_29D5F0
    ctx->pc = 0x302D98u;
    SET_GPR_U32(ctx, 31, 0x302DA0u);
    ctx->pc = 0x302D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302D98u;
    // 0x302d9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x302D98u, 0x302DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DA0u;
label_302da0:
    // 0x302da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302da4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x302DA4u;
    {
        const bool branch_taken_0x302da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DA4u;
        // 0x302da8: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302da4) {
            ctx->pc = 0x302DD8u;
            goto label_302dd8;
        }
    }
    ctx->pc = 0x302DACu;
    // 0x302dac: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x302DACu;
    SET_GPR_U32(ctx, 31, 0x302DB4u);
    ctx->pc = 0x302DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DACu;
    // 0x302db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x302DACu, 0x302DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DB4u;
label_302db4:
    // 0x302db4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x302DB4u;
    SET_GPR_U32(ctx, 31, 0x302DBCu);
    ctx->pc = 0x302DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DB4u;
    // 0x302db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x302DB4u, 0x302DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DBCu;
label_302dbc:
    // 0x302dbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302DBCu;
    {
        const bool branch_taken_0x302dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DBCu;
        // 0x302dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dbc) {
            ctx->pc = 0x302DD4u;
            goto label_302dd4;
        }
    }
    ctx->pc = 0x302DC4u;
    // 0x302dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dcc: 0xc0bebe6  jal         func_2FAF98
    ctx->pc = 0x302DCCu;
    SET_GPR_U32(ctx, 31, 0x302DD4u);
    ctx->pc = 0x302DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DCCu;
    // 0x302dd0: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x302DCCu, 0x302DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DD4u;
label_302dd4:
    // 0x302dd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x302dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_302dd8:
    // 0x302dd8: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x302dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x302ddc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x302ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x302de0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x302de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302de4:
    // 0x302de4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302dec: 0x3e00008  jr          $ra
    ctx->pc = 0x302DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DECu;
        // 0x302df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302DF4u;
    // 0x302df4: 0x0  nop
    ctx->pc = 0x302df4u;
    // NOP
    ctx->pc = 0x302df8u;
}
