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

// Function: sub_001986E8
// Address: 0x1986e8 - 0x198738
void sub_001986E8_0x1986e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986E8_0x1986e8");
#endif

    switch (ctx->pc) {
        case 0x198710u: goto label_198710;
        case 0x198724u: goto label_198724;
        default: break;
    }

    ctx->pc = 0x1986e8u;

    // 0x1986e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1986ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1986f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1986f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1986f4: 0x24428f78  addiu       $v0, $v0, -0x7088
    ctx->pc = 0x1986f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938488));
    // 0x1986f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1986f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1986fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1986fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198708: 0xc0661ee  jal         func_1987B8
    ctx->pc = 0x198708u;
    SET_GPR_U32(ctx, 31, 0x198710u);
    ctx->pc = 0x19870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198708u;
    // 0x19870c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1987B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1987B8u, 0x198708u, 0x198710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198710u;
label_198710:
    // 0x198710: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x198710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x198714: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198714u;
    {
        const bool branch_taken_0x198714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198714u;
        // 0x198718: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198714) {
            ctx->pc = 0x198728u;
            goto label_198728;
        }
    }
    ctx->pc = 0x19871Cu;
    // 0x19871c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x19871Cu;
    SET_GPR_U32(ctx, 31, 0x198724u);
    ctx->pc = 0x198720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19871Cu;
    // 0x198720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x19871Cu, 0x198724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198728:
    // 0x198728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19872c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19872cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198730: 0x3e00008  jr          $ra
    ctx->pc = 0x198730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198730u;
        // 0x198734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198738u;
}
