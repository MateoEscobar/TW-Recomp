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

// Function: sub_001D7698
// Address: 0x1d7698 - 0x1d7700
void sub_001D7698_0x1d7698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7698_0x1d7698");
#endif

    switch (ctx->pc) {
        case 0x1d76c8u: goto label_1d76c8;
        case 0x1d76d4u: goto label_1d76d4;
        case 0x1d76e0u: goto label_1d76e0;
        case 0x1d76ecu: goto label_1d76ec;
        default: break;
    }

    ctx->pc = 0x1d7698u;

    // 0x1d7698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d769c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d76a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d76a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d76a4: 0x2442ba68  addiu       $v0, $v0, -0x4598
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949480));
    // 0x1d76a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d76ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d76acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d76b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d76b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d76bc: 0x26040850  addiu       $a0, $s0, 0x850
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    // 0x1d76c0: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D76C0u;
    SET_GPR_U32(ctx, 31, 0x1D76C8u);
    ctx->pc = 0x1D76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76C0u;
    // 0x1d76c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D76C0u, 0x1D76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76C8u;
label_1d76c8:
    // 0x1d76c8: 0x26040750  addiu       $a0, $s0, 0x750
    ctx->pc = 0x1d76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    // 0x1d76cc: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D76CCu;
    SET_GPR_U32(ctx, 31, 0x1D76D4u);
    ctx->pc = 0x1D76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76CCu;
    // 0x1d76d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D76CCu, 0x1D76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76D4u;
label_1d76d4:
    // 0x1d76d4: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1d76d8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D76D8u;
    SET_GPR_U32(ctx, 31, 0x1D76E0u);
    ctx->pc = 0x1D76DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76D8u;
    // 0x1d76dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D76D8u, 0x1D76E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76E0u;
label_1d76e0:
    // 0x1d76e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d76e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76e4: 0xc075ba0  jal         func_1D6E80
    ctx->pc = 0x1D76E4u;
    SET_GPR_U32(ctx, 31, 0x1D76ECu);
    ctx->pc = 0x1D76E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76E4u;
    // 0x1d76e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6E80u, 0x1D76E4u, 0x1D76ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76ECu;
label_1d76ec:
    // 0x1d76ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d76ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d76f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d76f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d76f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d76f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d76f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D76F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76F8u;
        // 0x1d76fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D76F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7700u;
}
