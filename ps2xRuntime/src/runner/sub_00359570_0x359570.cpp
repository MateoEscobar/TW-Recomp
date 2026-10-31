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

// Function: sub_00359570
// Address: 0x359570 - 0x3595d0
void sub_00359570_0x359570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359570_0x359570");
#endif

    switch (ctx->pc) {
        case 0x359590u: goto label_359590;
        case 0x359598u: goto label_359598;
        case 0x3595acu: goto label_3595ac;
        case 0x3595b8u: goto label_3595b8;
        default: break;
    }

    ctx->pc = 0x359570u;

    // 0x359570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359578: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35957c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35957cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359588: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359588u;
    SET_GPR_U32(ctx, 31, 0x359590u);
    ctx->pc = 0x35958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359588u;
    // 0x35958c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359588u, 0x359590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359590u;
label_359590:
    // 0x359590: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359590u;
    SET_GPR_U32(ctx, 31, 0x359598u);
    ctx->pc = 0x359594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359590u;
    // 0x359594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359590u, 0x359598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359598u;
label_359598:
    // 0x359598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35959c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3595a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595a4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3595A4u;
    SET_GPR_U32(ctx, 31, 0x3595ACu);
    ctx->pc = 0x3595A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595A4u;
    // 0x3595a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3595A4u, 0x3595ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595ACu;
label_3595ac:
    // 0x3595ac: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3595acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3595b0: 0xc08dace  jal         func_236B38
    ctx->pc = 0x3595B0u;
    SET_GPR_U32(ctx, 31, 0x3595B8u);
    ctx->pc = 0x3595B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595B0u;
    // 0x3595b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B38u, 0x3595B0u, 0x3595B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595B8u;
label_3595b8:
    // 0x3595b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3595b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3595bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3595bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3595c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3595c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3595c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3595c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3595C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595C8u;
        // 0x3595cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3595D0u;
}
