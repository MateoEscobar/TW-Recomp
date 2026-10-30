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

// Function: sub_00325298
// Address: 0x325298 - 0x3252f8
void sub_00325298_0x325298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325298_0x325298");
#endif

    switch (ctx->pc) {
        case 0x3252acu: goto label_3252ac;
        case 0x3252b8u: goto label_3252b8;
        case 0x3252d0u: goto label_3252d0;
        case 0x3252dcu: goto label_3252dc;
        case 0x3252e4u: goto label_3252e4;
        default: break;
    }

    ctx->pc = 0x325298u;

    // 0x325298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32529c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3252a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3252a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3252a4: 0xc0c8f36  jal         func_323CD8
    ctx->pc = 0x3252A4u;
    SET_GPR_U32(ctx, 31, 0x3252ACu);
    ctx->pc = 0x3252A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252A4u;
    // 0x3252a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323CD8u, 0x3252A4u, 0x3252ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252ACu;
label_3252ac:
    // 0x3252ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3252acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252b0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3252B0u;
    SET_GPR_U32(ctx, 31, 0x3252B8u);
    ctx->pc = 0x3252B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252B0u;
    // 0x3252b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3252B0u, 0x3252B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252B8u;
label_3252b8:
    // 0x3252b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3252b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3252bc: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3252BCu;
    {
        const bool branch_taken_0x3252bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3252C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252BCu;
        // 0x3252c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252bc) {
            ctx->pc = 0x3252E4u;
            goto label_3252e4;
        }
    }
    ctx->pc = 0x3252C4u;
    // 0x3252c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3252c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252c8: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x3252C8u;
    SET_GPR_U32(ctx, 31, 0x3252D0u);
    ctx->pc = 0x3252CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252C8u;
    // 0x3252cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x3252C8u, 0x3252D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252D0u;
label_3252d0:
    // 0x3252d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3252d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252d4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3252D4u;
    SET_GPR_U32(ctx, 31, 0x3252DCu);
    ctx->pc = 0x3252D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252D4u;
    // 0x3252d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3252D4u, 0x3252DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252DCu;
label_3252dc:
    // 0x3252dc: 0xc0c9000  jal         func_324000
    ctx->pc = 0x3252DCu;
    SET_GPR_U32(ctx, 31, 0x3252E4u);
    ctx->pc = 0x3252E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252DCu;
    // 0x3252e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324000u, 0x3252DCu, 0x3252E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252E4u;
label_3252e4:
    // 0x3252e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3252e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3252e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3252e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3252ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3252ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3252f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3252F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3252F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252F0u;
        // 0x3252f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3252F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3252F8u;
}
