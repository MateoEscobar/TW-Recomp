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

// Function: sub_0037D280
// Address: 0x37d280 - 0x37d318
void sub_0037D280_0x37d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D280_0x37d280");
#endif

    switch (ctx->pc) {
        case 0x37d2a8u: goto label_37d2a8;
        case 0x37d2b0u: goto label_37d2b0;
        case 0x37d2c4u: goto label_37d2c4;
        case 0x37d2ccu: goto label_37d2cc;
        case 0x37d2e0u: goto label_37d2e0;
        case 0x37d2f0u: goto label_37d2f0;
        case 0x37d2fcu: goto label_37d2fc;
        default: break;
    }

    ctx->pc = 0x37d280u;

    // 0x37d280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37d284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37d28c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37d28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37d290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37d290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37d294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d298: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37d29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d2a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D2A0u;
    SET_GPR_U32(ctx, 31, 0x37D2A8u);
    ctx->pc = 0x37D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2A0u;
    // 0x37d2a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D2A0u, 0x37D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2A8u;
label_37d2a8:
    // 0x37d2a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D2A8u;
    SET_GPR_U32(ctx, 31, 0x37D2B0u);
    ctx->pc = 0x37D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2A8u;
    // 0x37d2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D2A8u, 0x37D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2B0u;
label_37d2b0:
    // 0x37d2b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37d2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37d2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d2bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D2BCu;
    SET_GPR_U32(ctx, 31, 0x37D2C4u);
    ctx->pc = 0x37D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2BCu;
    // 0x37d2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D2BCu, 0x37D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2C4u;
label_37d2c4:
    // 0x37d2c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D2C4u;
    SET_GPR_U32(ctx, 31, 0x37D2CCu);
    ctx->pc = 0x37D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2C4u;
    // 0x37d2c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D2C4u, 0x37D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2CCu;
label_37d2cc:
    // 0x37d2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37d2d8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37D2D8u;
    SET_GPR_U32(ctx, 31, 0x37D2E0u);
    ctx->pc = 0x37D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2D8u;
    // 0x37d2dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37D2D8u, 0x37D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2E0u;
label_37d2e0:
    // 0x37d2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37d2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2e8: 0xc108e6c  jal         func_4239B0
    ctx->pc = 0x37D2E8u;
    SET_GPR_U32(ctx, 31, 0x37D2F0u);
    ctx->pc = 0x37D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2E8u;
    // 0x37d2ec: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4239B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4239B0u, 0x37D2E8u, 0x37D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2F0u;
label_37d2f0:
    // 0x37d2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2f4: 0xc102562  jal         func_409588
    ctx->pc = 0x37D2F4u;
    SET_GPR_U32(ctx, 31, 0x37D2FCu);
    ctx->pc = 0x37D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2F4u;
    // 0x37d2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37D2F4u, 0x37D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2FCu;
label_37d2fc:
    // 0x37d2fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37d2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d304: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37d304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d308: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37d308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d310: 0x3e00008  jr          $ra
    ctx->pc = 0x37D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D310u;
        // 0x37d314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D318u;
}
