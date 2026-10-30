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

// Function: sub_001D7648
// Address: 0x1d7648 - 0x1d7698
void sub_001D7648_0x1d7648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7648_0x1d7648");
#endif

    switch (ctx->pc) {
        case 0x1d765cu: goto label_1d765c;
        case 0x1d7670u: goto label_1d7670;
        case 0x1d7678u: goto label_1d7678;
        case 0x1d7680u: goto label_1d7680;
        default: break;
    }

    ctx->pc = 0x1d7648u;

    // 0x1d7648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d764c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7654: 0xc075b7e  jal         func_1D6DF8
    ctx->pc = 0x1D7654u;
    SET_GPR_U32(ctx, 31, 0x1D765Cu);
    ctx->pc = 0x1D7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7654u;
    // 0x1d7658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DF8u, 0x1D7654u, 0x1D765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D765Cu;
label_1d765c:
    // 0x1d765c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d7660: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1d7664: 0x2463ba68  addiu       $v1, $v1, -0x4598
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949480));
    // 0x1d7668: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D7668u;
    SET_GPR_U32(ctx, 31, 0x1D7670u);
    ctx->pc = 0x1D766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7668u;
    // 0x1d766c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D7668u, 0x1D7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7670u;
label_1d7670:
    // 0x1d7670: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D7670u;
    SET_GPR_U32(ctx, 31, 0x1D7678u);
    ctx->pc = 0x1D7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7670u;
    // 0x1d7674: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D7670u, 0x1D7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7678u;
label_1d7678:
    // 0x1d7678: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D7678u;
    SET_GPR_U32(ctx, 31, 0x1D7680u);
    ctx->pc = 0x1D767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7678u;
    // 0x1d767c: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D7678u, 0x1D7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7680u;
label_1d7680:
    // 0x1d7680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7688: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d768c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D768Cu;
        // 0x1d7690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7694u;
    // 0x1d7694: 0x0  nop
    ctx->pc = 0x1d7694u;
    // NOP
    ctx->pc = 0x1d7698u;
}
