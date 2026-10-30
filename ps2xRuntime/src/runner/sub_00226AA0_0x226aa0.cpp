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

// Function: sub_00226AA0
// Address: 0x226aa0 - 0x226af8
void sub_00226AA0_0x226aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226AA0_0x226aa0");
#endif

    switch (ctx->pc) {
        case 0x226ac8u: goto label_226ac8;
        default: break;
    }

    ctx->pc = 0x226aa0u;

    // 0x226aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x226aa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x226aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x226aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ab4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x226ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226abc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ac0: 0xc08f34c  jal         func_23CD30
    ctx->pc = 0x226AC0u;
    SET_GPR_U32(ctx, 31, 0x226AC8u);
    ctx->pc = 0x226AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AC0u;
    // 0x226ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD30u, 0x226AC0u, 0x226AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AC8u;
label_226ac8:
    // 0x226ac8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x226ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x226acc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x226accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ad0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x226ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226ad8: 0x7a0301e0  lq          $v1, 0x1E0($s0)
    ctx->pc = 0x226ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x226adc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226ae0: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x226ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x226ae4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ae8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x226ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226aec: 0x3e00008  jr          $ra
    ctx->pc = 0x226AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AECu;
        // 0x226af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226AF4u;
    // 0x226af4: 0x0  nop
    ctx->pc = 0x226af4u;
    // NOP
    ctx->pc = 0x226af8u;
}
