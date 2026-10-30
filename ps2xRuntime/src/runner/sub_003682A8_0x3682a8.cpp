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

// Function: sub_003682A8
// Address: 0x3682a8 - 0x368320
void sub_003682A8_0x3682a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003682A8_0x3682a8");
#endif

    switch (ctx->pc) {
        case 0x3682d0u: goto label_3682d0;
        case 0x3682d8u: goto label_3682d8;
        case 0x3682ecu: goto label_3682ec;
        case 0x3682f4u: goto label_3682f4;
        case 0x368300u: goto label_368300;
        default: break;
    }

    ctx->pc = 0x3682a8u;

    // 0x3682a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3682a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3682ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3682acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3682b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3682b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3682b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3682b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3682b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3682b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3682bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3682c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3682c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3682c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3682c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3682C8u;
    SET_GPR_U32(ctx, 31, 0x3682D0u);
    ctx->pc = 0x3682CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682C8u;
    // 0x3682cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3682C8u, 0x3682D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682D0u;
label_3682d0:
    // 0x3682d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3682D0u;
    SET_GPR_U32(ctx, 31, 0x3682D8u);
    ctx->pc = 0x3682D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682D0u;
    // 0x3682d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3682D0u, 0x3682D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682D8u;
label_3682d8:
    // 0x3682d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3682d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3682dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3682e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3682e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3682E4u;
    SET_GPR_U32(ctx, 31, 0x3682ECu);
    ctx->pc = 0x3682E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682E4u;
    // 0x3682e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3682E4u, 0x3682ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682ECu;
label_3682ec:
    // 0x3682ec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3682ECu;
    SET_GPR_U32(ctx, 31, 0x3682F4u);
    ctx->pc = 0x3682F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682ECu;
    // 0x3682f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3682ECu, 0x3682F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682F4u;
label_3682f4:
    // 0x3682f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3682f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682f8: 0xc062c5a  jal         func_18B168
    ctx->pc = 0x3682F8u;
    SET_GPR_U32(ctx, 31, 0x368300u);
    ctx->pc = 0x3682FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682F8u;
    // 0x3682fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x3682F8u, 0x368300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368300u;
label_368300:
    // 0x368300: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x368300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368308: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x368308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36830c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36830cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368314: 0x3e00008  jr          $ra
    ctx->pc = 0x368314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368314u;
        // 0x368318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36831Cu;
    // 0x36831c: 0x0  nop
    ctx->pc = 0x36831cu;
    // NOP
    ctx->pc = 0x368320u;
}
