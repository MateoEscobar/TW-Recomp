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

// Function: sub_003747B8
// Address: 0x3747b8 - 0x374820
void sub_003747B8_0x3747b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003747B8_0x3747b8");
#endif

    switch (ctx->pc) {
        case 0x3747d8u: goto label_3747d8;
        case 0x3747e0u: goto label_3747e0;
        case 0x3747f8u: goto label_3747f8;
        case 0x374804u: goto label_374804;
        default: break;
    }

    ctx->pc = 0x3747b8u;

    // 0x3747b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3747b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3747bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3747bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3747c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3747c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3747c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3747c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3747c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3747cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3747ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3747d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3747D0u;
    SET_GPR_U32(ctx, 31, 0x3747D8u);
    ctx->pc = 0x3747D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747D0u;
    // 0x3747d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3747D0u, 0x3747D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747D8u;
label_3747d8:
    // 0x3747d8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3747D8u;
    SET_GPR_U32(ctx, 31, 0x3747E0u);
    ctx->pc = 0x3747DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747D8u;
    // 0x3747dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3747D8u, 0x3747E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747E0u;
label_3747e0:
    // 0x3747e0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3747e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3747e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3747e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747e8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3747e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3747ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3747ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747f0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3747F0u;
    SET_GPR_U32(ctx, 31, 0x3747F8u);
    ctx->pc = 0x3747F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747F0u;
    // 0x3747f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3747F0u, 0x3747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747F8u;
label_3747f8:
    // 0x3747f8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3747f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3747fc: 0xc1070b4  jal         func_41C2D0
    ctx->pc = 0x3747FCu;
    SET_GPR_U32(ctx, 31, 0x374804u);
    ctx->pc = 0x374800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747FCu;
    // 0x374800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2D0u, 0x3747FCu, 0x374804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374804u;
label_374804:
    // 0x374804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x374804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37480c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37480cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374814: 0x3e00008  jr          $ra
    ctx->pc = 0x374814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374814u;
        // 0x374818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37481Cu;
    // 0x37481c: 0x0  nop
    ctx->pc = 0x37481cu;
    // NOP
    ctx->pc = 0x374820u;
}
