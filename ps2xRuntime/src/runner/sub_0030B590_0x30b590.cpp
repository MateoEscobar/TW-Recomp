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

// Function: sub_0030B590
// Address: 0x30b590 - 0x30b5c8
void sub_0030B590_0x30b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B590_0x30b590");
#endif

    switch (ctx->pc) {
        case 0x30b5a4u: goto label_30b5a4;
        case 0x30b5acu: goto label_30b5ac;
        case 0x30b5b4u: goto label_30b5b4;
        default: break;
    }

    ctx->pc = 0x30b590u;

    // 0x30b590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b594: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30b594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30b598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b59c: 0xc0c2bea  jal         func_30AFA8
    ctx->pc = 0x30B59Cu;
    SET_GPR_U32(ctx, 31, 0x30B5A4u);
    ctx->pc = 0x30B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B59Cu;
    // 0x30b5a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AFA8u, 0x30B59Cu, 0x30B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5A4u;
label_30b5a4:
    // 0x30b5a4: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30B5A4u;
    SET_GPR_U32(ctx, 31, 0x30B5ACu);
    ctx->pc = 0x30B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5A4u;
    // 0x30b5a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30B5A4u, 0x30B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5ACu;
label_30b5ac:
    // 0x30b5ac: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30B5ACu;
    SET_GPR_U32(ctx, 31, 0x30B5B4u);
    ctx->pc = 0x30B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5ACu;
    // 0x30b5b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30B5ACu, 0x30B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5B4u;
label_30b5b4:
    // 0x30b5b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5BCu;
        // 0x30b5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B5C4u;
    // 0x30b5c4: 0x0  nop
    ctx->pc = 0x30b5c4u;
    // NOP
    ctx->pc = 0x30b5c8u;
}
