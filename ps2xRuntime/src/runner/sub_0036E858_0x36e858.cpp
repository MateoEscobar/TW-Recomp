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

// Function: sub_0036E858
// Address: 0x36e858 - 0x36e8d8
void sub_0036E858_0x36e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E858_0x36e858");
#endif

    switch (ctx->pc) {
        case 0x36e87cu: goto label_36e87c;
        case 0x36e884u: goto label_36e884;
        case 0x36e898u: goto label_36e898;
        case 0x36e8acu: goto label_36e8ac;
        case 0x36e8bcu: goto label_36e8bc;
        default: break;
    }

    ctx->pc = 0x36e858u;

    // 0x36e858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e85c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e860: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36e864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e868: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36e86c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36e870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e874: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E874u;
    SET_GPR_U32(ctx, 31, 0x36E87Cu);
    ctx->pc = 0x36E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E874u;
    // 0x36e878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E874u, 0x36E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E87Cu;
label_36e87c:
    // 0x36e87c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E87Cu;
    SET_GPR_U32(ctx, 31, 0x36E884u);
    ctx->pc = 0x36E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E87Cu;
    // 0x36e880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E87Cu, 0x36E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E884u;
label_36e884:
    // 0x36e884: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e88c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e890: 0xc102488  jal         func_409220
    ctx->pc = 0x36E890u;
    SET_GPR_U32(ctx, 31, 0x36E898u);
    ctx->pc = 0x36E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E890u;
    // 0x36e894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36E890u, 0x36E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E898u;
label_36e898:
    // 0x36e898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e8a4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E8A4u;
    SET_GPR_U32(ctx, 31, 0x36E8ACu);
    ctx->pc = 0x36E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E8A4u;
    // 0x36e8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E8A4u, 0x36E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8ACu;
label_36e8ac:
    // 0x36e8ac: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x36e8acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36e8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8b4: 0xc06d6c2  jal         func_1B5B08
    ctx->pc = 0x36E8B4u;
    SET_GPR_U32(ctx, 31, 0x36E8BCu);
    ctx->pc = 0x36E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E8B4u;
    // 0x36e8b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B08u, 0x36E8B4u, 0x36E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8BCu;
label_36e8bc:
    // 0x36e8bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36e8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e8c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36e8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e8c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36e8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8D0u;
        // 0x36e8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E8D8u;
}
