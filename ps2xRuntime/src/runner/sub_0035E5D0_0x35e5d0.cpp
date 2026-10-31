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

// Function: sub_0035E5D0
// Address: 0x35e5d0 - 0x35e630
void sub_0035E5D0_0x35e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E5D0_0x35e5d0");
#endif

    switch (ctx->pc) {
        case 0x35e5f0u: goto label_35e5f0;
        case 0x35e5f8u: goto label_35e5f8;
        case 0x35e60cu: goto label_35e60c;
        case 0x35e618u: goto label_35e618;
        default: break;
    }

    ctx->pc = 0x35e5d0u;

    // 0x35e5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e5d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e5d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e5e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E5E8u;
    SET_GPR_U32(ctx, 31, 0x35E5F0u);
    ctx->pc = 0x35E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E5E8u;
    // 0x35e5ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E5E8u, 0x35E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5F0u;
label_35e5f0:
    // 0x35e5f0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E5F0u;
    SET_GPR_U32(ctx, 31, 0x35E5F8u);
    ctx->pc = 0x35E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E5F0u;
    // 0x35e5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E5F0u, 0x35E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5F8u;
label_35e5f8:
    // 0x35e5f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e604: 0xc102488  jal         func_409220
    ctx->pc = 0x35E604u;
    SET_GPR_U32(ctx, 31, 0x35E60Cu);
    ctx->pc = 0x35E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E604u;
    // 0x35e608: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E604u, 0x35E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E60Cu;
label_35e60c:
    // 0x35e60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e610: 0xc107662  jal         func_41D988
    ctx->pc = 0x35E610u;
    SET_GPR_U32(ctx, 31, 0x35E618u);
    ctx->pc = 0x35E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E610u;
    // 0x35e614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D988u, 0x35E610u, 0x35E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E618u;
label_35e618:
    // 0x35e618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e628: 0x3e00008  jr          $ra
    ctx->pc = 0x35E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E628u;
        // 0x35e62c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E630u;
}
