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

// Function: sub_003128F8
// Address: 0x3128f8 - 0x312960
void sub_003128F8_0x3128f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003128F8_0x3128f8");
#endif

    switch (ctx->pc) {
        case 0x312938u: goto label_312938;
        default: break;
    }

    ctx->pc = 0x3128f8u;

    // 0x3128f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3128f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3128fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3128fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x312900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x312900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312904: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x312904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x312908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31290c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312910: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x312910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x312914: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x312914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x312918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31291c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31291cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x312920: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x312920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x312924: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x312924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x312928: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x312928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31292c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x312930: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x312930u;
    SET_GPR_U32(ctx, 31, 0x312938u);
    ctx->pc = 0x312934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312930u;
    // 0x312934: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x312930u, 0x312938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312938u;
label_312938:
    // 0x312938: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x312938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31293c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31293cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312940: 0x24633980  addiu       $v1, $v1, 0x3980
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14720));
    // 0x312944: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x312944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x312948: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x312948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x31294c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31294cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312954: 0x3e00008  jr          $ra
    ctx->pc = 0x312954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312954u;
        // 0x312958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31295Cu;
    // 0x31295c: 0x0  nop
    ctx->pc = 0x31295cu;
    // NOP
    ctx->pc = 0x312960u;
}
