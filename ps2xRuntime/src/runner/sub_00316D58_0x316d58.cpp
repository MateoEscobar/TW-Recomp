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

// Function: sub_00316D58
// Address: 0x316d58 - 0x316dd8
void sub_00316D58_0x316d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316D58_0x316d58");
#endif

    switch (ctx->pc) {
        case 0x316d7cu: goto label_316d7c;
        case 0x316d90u: goto label_316d90;
        case 0x316db0u: goto label_316db0;
        case 0x316dbcu: goto label_316dbc;
        default: break;
    }

    ctx->pc = 0x316d58u;

    // 0x316d58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x316d5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316d60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x316d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x316d64: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316d64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316d68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x316d6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x316d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x316d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316d74: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316D74u;
    SET_GPR_U32(ctx, 31, 0x316D7Cu);
    ctx->pc = 0x316D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D74u;
    // 0x316d78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316D74u, 0x316D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D7Cu;
label_316d7c:
    // 0x316d7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d80: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x316D80u;
    {
        const bool branch_taken_0x316d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D80u;
        // 0x316d84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d80) {
            ctx->pc = 0x316DC0u;
            goto label_316dc0;
        }
    }
    ctx->pc = 0x316D88u;
    // 0x316d88: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316D88u;
    SET_GPR_U32(ctx, 31, 0x316D90u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316D88u, 0x316D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D90u;
label_316d90:
    // 0x316d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x316D94u;
    {
        const bool branch_taken_0x316d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D94u;
        // 0x316d98: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d94) {
            ctx->pc = 0x316DB0u;
            goto label_316db0;
        }
    }
    ctx->pc = 0x316D9Cu;
    // 0x316d9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x316d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x316da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316da8: 0xc0c6f34  jal         func_31BCD0
    ctx->pc = 0x316DA8u;
    SET_GPR_U32(ctx, 31, 0x316DB0u);
    ctx->pc = 0x316DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DA8u;
    // 0x316dac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BCD0u, 0x316DA8u, 0x316DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DB0u;
label_316db0:
    // 0x316db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316db4: 0xc059590  jal         func_165640
    ctx->pc = 0x316DB4u;
    SET_GPR_U32(ctx, 31, 0x316DBCu);
    ctx->pc = 0x316DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DB4u;
    // 0x316db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316DB4u, 0x316DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DBCu;
label_316dbc:
    // 0x316dbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x316dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_316dc0:
    // 0x316dc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x316dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316dc4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x316dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x316DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DCCu;
        // 0x316dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316DD4u;
    // 0x316dd4: 0x0  nop
    ctx->pc = 0x316dd4u;
    // NOP
    ctx->pc = 0x316dd8u;
}
