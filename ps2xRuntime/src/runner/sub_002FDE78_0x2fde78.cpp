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

// Function: sub_002FDE78
// Address: 0x2fde78 - 0x2fdec8
void sub_002FDE78_0x2fde78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDE78_0x2fde78");
#endif

    switch (ctx->pc) {
        case 0x2fdea0u: goto label_2fdea0;
        default: break;
    }

    ctx->pc = 0x2fde78u;

    // 0x2fde78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fde78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fde7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fde7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fde80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fde84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fde84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fde88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fde88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2fde8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fde90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fde94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fde98: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2FDE98u;
    SET_GPR_U32(ctx, 31, 0x2FDEA0u);
    ctx->pc = 0x2FDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE98u;
    // 0x2fde9c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2FDE98u, 0x2FDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDEA0u;
label_2fdea0:
    // 0x2fdea0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fdea4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2fdea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2fdea8: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x2fdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
    // 0x2fdeac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fdeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdeb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2fdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2fdeb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fdeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEC0u;
        // 0x2fdec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEC8u;
}
