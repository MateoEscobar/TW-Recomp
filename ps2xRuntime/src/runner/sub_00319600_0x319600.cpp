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

// Function: sub_00319600
// Address: 0x319600 - 0x319688
void sub_00319600_0x319600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319600_0x319600");
#endif

    switch (ctx->pc) {
        case 0x319648u: goto label_319648;
        case 0x319670u: goto label_319670;
        default: break;
    }

    ctx->pc = 0x319600u;

    // 0x319600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319604: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x319604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x319608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31960c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x319610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319618: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x319618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31961c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x319620: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x319620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x319624: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x319624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x319628: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x319628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31962c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31962cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x319630: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x319630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x319634: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x319634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x319638: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x319638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31963c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x31963cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x319640: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x319640u;
    SET_GPR_U32(ctx, 31, 0x319648u);
    ctx->pc = 0x319644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319640u;
    // 0x319644: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x319640u, 0x319648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319648u;
label_319648:
    // 0x319648: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31964c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x31964cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x319650: 0x24423d40  addiu       $v0, $v0, 0x3D40
    ctx->pc = 0x319650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
    // 0x319654: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x319654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x319658: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x319658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x31965c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319660: 0xa200003e  sb          $zero, 0x3E($s0)
    ctx->pc = 0x319660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x319664: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x319664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x319668: 0xc0c6628  jal         func_3198A0
    ctx->pc = 0x319668u;
    SET_GPR_U32(ctx, 31, 0x319670u);
    ctx->pc = 0x31966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319668u;
    // 0x31966c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198A0u, 0x319668u, 0x319670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319670u;
label_319670:
    // 0x319670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x319670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319678: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x319678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31967c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x31967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319680: 0x3e00008  jr          $ra
    ctx->pc = 0x319680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319680u;
        // 0x319684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319688u;
}
