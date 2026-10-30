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

// Function: sub_003292E0
// Address: 0x3292e0 - 0x329350
void sub_003292E0_0x3292e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003292E0_0x3292e0");
#endif

    switch (ctx->pc) {
        case 0x329310u: goto label_329310;
        default: break;
    }

    ctx->pc = 0x3292e0u;

    // 0x3292e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3292e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3292e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3292e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3292e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3292e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3292ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3292f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3292f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3292f4: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x3292f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3292f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3292f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292fc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3292fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x329300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x329304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329308: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x329308u;
    SET_GPR_U32(ctx, 31, 0x329310u);
    ctx->pc = 0x32930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329308u;
    // 0x32930c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x329308u, 0x329310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329310u;
label_329310:
    // 0x329310: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x329310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x329314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32931c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32931cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x329320: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x329320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x329324: 0xa492000e  sh          $s2, 0xE($a0)
    ctx->pc = 0x329324u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x329328: 0xac840008  sw          $a0, 0x8($a0)
    ctx->pc = 0x329328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
    // 0x32932c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32932cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329330: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x329330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x329334: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x329334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x329338: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x329338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x32933c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32933cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329340: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x329340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329344: 0x3e00008  jr          $ra
    ctx->pc = 0x329344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329344u;
        // 0x329348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32934Cu;
    // 0x32934c: 0x0  nop
    ctx->pc = 0x32934cu;
    // NOP
    ctx->pc = 0x329350u;
}
