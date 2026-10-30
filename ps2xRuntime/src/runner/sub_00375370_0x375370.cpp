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

// Function: sub_00375370
// Address: 0x375370 - 0x3753d0
void sub_00375370_0x375370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375370_0x375370");
#endif

    switch (ctx->pc) {
        case 0x375390u: goto label_375390;
        case 0x375398u: goto label_375398;
        case 0x3753acu: goto label_3753ac;
        case 0x3753b8u: goto label_3753b8;
        default: break;
    }

    ctx->pc = 0x375370u;

    // 0x375370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x375378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37537c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x375384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375388: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375388u;
    SET_GPR_U32(ctx, 31, 0x375390u);
    ctx->pc = 0x37538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375388u;
    // 0x37538c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375388u, 0x375390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375390u;
label_375390:
    // 0x375390: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375390u;
    SET_GPR_U32(ctx, 31, 0x375398u);
    ctx->pc = 0x375394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375390u;
    // 0x375394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375390u, 0x375398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375398u;
label_375398:
    // 0x375398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x375398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3753a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753a4: 0xc102488  jal         func_409220
    ctx->pc = 0x3753A4u;
    SET_GPR_U32(ctx, 31, 0x3753ACu);
    ctx->pc = 0x3753A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753A4u;
    // 0x3753a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3753A4u, 0x3753ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753ACu;
label_3753ac:
    // 0x3753ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3753acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753b0: 0xc0c1d52  jal         func_307548
    ctx->pc = 0x3753B0u;
    SET_GPR_U32(ctx, 31, 0x3753B8u);
    ctx->pc = 0x3753B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753B0u;
    // 0x3753b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307548u, 0x3753B0u, 0x3753B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753B8u;
label_3753b8:
    // 0x3753b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3753b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3753bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3753bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3753c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3753c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3753c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3753c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3753C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3753CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753C8u;
        // 0x3753cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3753C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3753D0u;
}
