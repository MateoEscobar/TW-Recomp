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

// Function: sub_0040A858
// Address: 0x40a858 - 0x40a8b0
void sub_0040A858_0x40a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A858_0x40a858");
#endif

    switch (ctx->pc) {
        case 0x40a870u: goto label_40a870;
        case 0x40a87cu: goto label_40a87c;
        case 0x40a884u: goto label_40a884;
        case 0x40a894u: goto label_40a894;
        default: break;
    }

    ctx->pc = 0x40a858u;

    // 0x40a858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a85c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a868: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A868u;
    SET_GPR_U32(ctx, 31, 0x40A870u);
    ctx->pc = 0x40A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A868u;
    // 0x40a86c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A868u, 0x40A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A870u;
label_40a870:
    // 0x40a870: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40a870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40a874: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40A874u;
    SET_GPR_U32(ctx, 31, 0x40A87Cu);
    ctx->pc = 0x40A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A874u;
    // 0x40a878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A874u, 0x40A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A87Cu;
label_40a87c:
    // 0x40a87c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40A87Cu;
    SET_GPR_U32(ctx, 31, 0x40A884u);
    ctx->pc = 0x40A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A87Cu;
    // 0x40a880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40A87Cu, 0x40A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A884u;
label_40a884:
    // 0x40a884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40a884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a88c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A88Cu;
    SET_GPR_U32(ctx, 31, 0x40A894u);
    ctx->pc = 0x40A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A88Cu;
    // 0x40a890: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A88Cu, 0x40A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A894u;
label_40a894:
    // 0x40a894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40a894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a89c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x40A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A8A4u;
        // 0x40a8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A8ACu;
    // 0x40a8ac: 0x0  nop
    ctx->pc = 0x40a8acu;
    // NOP
    ctx->pc = 0x40a8b0u;
}
