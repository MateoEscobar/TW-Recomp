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

// Function: sub_00294CE0
// Address: 0x294ce0 - 0x294e98
void sub_00294CE0_0x294ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294CE0_0x294ce0");
#endif

    switch (ctx->pc) {
        case 0x294d20u: goto label_294d20;
        case 0x294d28u: goto label_294d28;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d88u: goto label_294d88;
        case 0x294d90u: goto label_294d90;
        case 0x294da8u: goto label_294da8;
        case 0x294de4u: goto label_294de4;
        case 0x294df8u: goto label_294df8;
        default: break;
    }

    ctx->pc = 0x294ce0u;

    // 0x294ce0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x294ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x294ce4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x294ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x294ce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x294ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cec: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x294cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x294cf0: 0x264301b4  addiu       $v1, $s2, 0x1B4
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x294cf4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x294cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x294cf8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x294cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x294cfc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x294cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x294d00: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x294d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x294d04: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x294d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x294d08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x294d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x294d0c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x294d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x294d10: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x294d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x294d14: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x294d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x294d18: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x294d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x294d1c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x294d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_294d20:
    // 0x294d20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x294d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x294d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_294d28:
    // 0x294d28: 0x26b70001  addiu       $s7, $s5, 0x1
    ctx->pc = 0x294d28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x294d2c: 0x2a48018  mult        $s0, $s5, $a0
    ctx->pc = 0x294d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x294d30: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x294d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x294d34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x294D34u;
    SET_GPR_U32(ctx, 31, 0x294D3Cu);
    ctx->pc = 0x294D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D34u;
    // 0x294d38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x294D34u, 0x294D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D3Cu;
label_294d3c:
    // 0x294d3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x294d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d40: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x294D40u;
    {
        const bool branch_taken_0x294d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D40u;
        // 0x294d44: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d40) {
            ctx->pc = 0x294E34u;
            goto label_294e34;
        }
    }
    ctx->pc = 0x294D48u;
    // 0x294d48: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x294d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x294d4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x294d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294d50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294d54: 0x10c20037  beq         $a2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x294D54u;
    {
        const bool branch_taken_0x294d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x294D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D54u;
        // 0x294d58: 0x265601b4  addiu       $s6, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d54) {
            ctx->pc = 0x294E34u;
            goto label_294e34;
        }
    }
    ctx->pc = 0x294D5Cu;
    // 0x294d5c: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x294d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x294d60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x294d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x294d64: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x294d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x294d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x294d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d6c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x294d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x294d70: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x294d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x294d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294d78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x294d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294d80: 0xc0a5904  jal         func_296410
    ctx->pc = 0x294D80u;
    SET_GPR_U32(ctx, 31, 0x294D88u);
    ctx->pc = 0x294D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D80u;
    // 0x294d84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x294D80u, 0x294D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D88u;
label_294d88:
    // 0x294d88: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x294d8c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x294d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_294d90:
    // 0x294d90: 0x12b10024  beq         $s5, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x294D90u;
    {
        const bool branch_taken_0x294d90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x294D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D90u;
        // 0x294d94: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d90) {
            ctx->pc = 0x294E24u;
            goto label_294e24;
        }
    }
    ctx->pc = 0x294D98u;
    // 0x294d98: 0x2348018  mult        $s0, $s1, $s4
    ctx->pc = 0x294d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x294d9c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x294d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x294da0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x294DA0u;
    SET_GPR_U32(ctx, 31, 0x294DA8u);
    ctx->pc = 0x294DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DA0u;
    // 0x294da4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x294DA0u, 0x294DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DA8u;
label_294da8:
    // 0x294da8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x294DA8u;
    {
        const bool branch_taken_0x294da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DA8u;
        // 0x294dac: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294da8) {
            ctx->pc = 0x294E24u;
            goto label_294e24;
        }
    }
    ctx->pc = 0x294DB0u;
    // 0x294db0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x294db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294db4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294db8: 0x10c4001a  beq         $a2, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x294DB8u;
    {
        const bool branch_taken_0x294db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x294DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DB8u;
        // 0x294dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294db8) {
            ctx->pc = 0x294E24u;
            goto label_294e24;
        }
    }
    ctx->pc = 0x294DC0u;
    // 0x294dc0: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x294dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x294dc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x294dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x294dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x294dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294dcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x294dd0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x294dd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x294dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294dd8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x294dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294ddc: 0xc0a5904  jal         func_296410
    ctx->pc = 0x294DDCu;
    SET_GPR_U32(ctx, 31, 0x294DE4u);
    ctx->pc = 0x294DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DDCu;
    // 0x294de0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x294DDCu, 0x294DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DE4u;
label_294de4:
    // 0x294de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294de8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x294de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294dec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x294decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294df0: 0xc0cdcc2  jal         func_337308
    ctx->pc = 0x294DF0u;
    SET_GPR_U32(ctx, 31, 0x294DF8u);
    ctx->pc = 0x294DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DF0u;
    // 0x294df4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337308u, 0x294DF0u, 0x294DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DF8u;
label_294df8:
    // 0x294df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294dfc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x294DFCu;
    {
        const bool branch_taken_0x294dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x294dfc) {
            ctx->pc = 0x294E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294DFCu;
            // 0x294e00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294E28u;
            goto label_294e28;
        }
    }
    ctx->pc = 0x294E04u;
    // 0x294e04: 0x2b41818  mult        $v1, $s5, $s4
    ctx->pc = 0x294e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294e0c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x294e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294e14: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x294e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x294e18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294e1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x294e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x294e20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x294e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_294e24:
    // 0x294e24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_294e28:
    // 0x294e28: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x294e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x294e2c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x294E2Cu;
    {
        const bool branch_taken_0x294e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294e2c) {
            ctx->pc = 0x294D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294d90;
        }
    }
    ctx->pc = 0x294E34u;
label_294e34:
    // 0x294e34: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x294e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e38: 0x2aa20009  slti        $v0, $s5, 0x9
    ctx->pc = 0x294e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x294e3c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x294E3Cu;
    {
        const bool branch_taken_0x294e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E3Cu;
        // 0x294e40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e3c) {
            ctx->pc = 0x294D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294d28;
        }
    }
    ctx->pc = 0x294E44u;
    // 0x294e44: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x294e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x294e48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294E48u;
    {
        const bool branch_taken_0x294e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E48u;
        // 0x294e4c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e48) {
            ctx->pc = 0x294E64u;
            goto label_294e64;
        }
    }
    ctx->pc = 0x294E50u;
    // 0x294e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x294e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x294e54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x294e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x294e58: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x294e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294e5c: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x294E5Cu;
    {
        const bool branch_taken_0x294e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294e5c) {
            ctx->pc = 0x294E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294E5Cu;
            // 0x294e60: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294d20;
        }
    }
    ctx->pc = 0x294E64u;
label_294e64:
    // 0x294e64: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x294e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x294e68: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x294e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x294e6c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x294e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x294e70: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x294e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x294e74: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x294e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x294e78: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x294e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294e7c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x294e7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294e80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x294e80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294e84: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x294e84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x294e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x294E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E8Cu;
        // 0x294e90: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E94u;
    // 0x294e94: 0x0  nop
    ctx->pc = 0x294e94u;
    // NOP
    ctx->pc = 0x294e98u;
}
