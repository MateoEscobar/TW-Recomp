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

// Function: sub_0036C568
// Address: 0x36c568 - 0x36c5c0
void sub_0036C568_0x36c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C568_0x36c568");
#endif

    switch (ctx->pc) {
        case 0x36c584u: goto label_36c584;
        case 0x36c58cu: goto label_36c58c;
        case 0x36c594u: goto label_36c594;
        case 0x36c59cu: goto label_36c59c;
        case 0x36c5a8u: goto label_36c5a8;
        default: break;
    }

    ctx->pc = 0x36c568u;

    // 0x36c568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c570: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36c574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c57c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C57Cu;
    SET_GPR_U32(ctx, 31, 0x36C584u);
    ctx->pc = 0x36C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C57Cu;
    // 0x36c580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C57Cu, 0x36C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C584u;
label_36c584:
    // 0x36c584: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C584u;
    SET_GPR_U32(ctx, 31, 0x36C58Cu);
    ctx->pc = 0x36C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C584u;
    // 0x36c588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C584u, 0x36C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C58Cu;
label_36c58c:
    // 0x36c58c: 0xc1075bc  jal         func_41D6F0
    ctx->pc = 0x36C58Cu;
    SET_GPR_U32(ctx, 31, 0x36C594u);
    ctx->pc = 0x36C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C58Cu;
    // 0x36c590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D6F0u, 0x36C58Cu, 0x36C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C594u;
label_36c594:
    // 0x36c594: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C594u;
    SET_GPR_U32(ctx, 31, 0x36C59Cu);
    ctx->pc = 0x36C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C594u;
    // 0x36c598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C594u, 0x36C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C59Cu;
label_36c59c:
    // 0x36c59c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5a0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C5A0u;
    SET_GPR_U32(ctx, 31, 0x36C5A8u);
    ctx->pc = 0x36C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5A0u;
    // 0x36c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C5A0u, 0x36C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5A8u;
label_36c5a8:
    // 0x36c5a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c5ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C5B4u;
        // 0x36c5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C5BCu;
    // 0x36c5bc: 0x0  nop
    ctx->pc = 0x36c5bcu;
    // NOP
    ctx->pc = 0x36c5c0u;
}
