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

// Function: sub_001798F8
// Address: 0x1798f8 - 0x179958
void sub_001798F8_0x1798f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001798F8_0x1798f8");
#endif

    switch (ctx->pc) {
        case 0x179910u: goto label_179910;
        default: break;
    }

    ctx->pc = 0x1798f8u;

    // 0x1798f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1798fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1798fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x179900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179908: 0xc05e602  jal         func_179808
    ctx->pc = 0x179908u;
    SET_GPR_U32(ctx, 31, 0x179910u);
    ctx->pc = 0x17990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179908u;
    // 0x17990c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x179908u, 0x179910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179910u;
label_179910:
    // 0x179910: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x179910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179914: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x179914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179918: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x179918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17991c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x179920: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x179924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179928: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x179928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17992c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x179930: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x179930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x179934: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x179934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x179938: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x179938u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17993c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179944: 0x3e00008  jr          $ra
    ctx->pc = 0x179944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179944u;
        // 0x179948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17994Cu;
    // 0x17994c: 0x0  nop
    ctx->pc = 0x17994cu;
    // NOP
    // 0x179950: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x179950u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x179954: 0x0  nop
    ctx->pc = 0x179954u;
    // NOP
    ctx->pc = 0x179958u;
}
