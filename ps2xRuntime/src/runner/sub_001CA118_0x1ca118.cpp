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

// Function: sub_001CA118
// Address: 0x1ca118 - 0x1ca180
void sub_001CA118_0x1ca118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA118_0x1ca118");
#endif

    switch (ctx->pc) {
        case 0x1ca134u: goto label_1ca134;
        case 0x1ca15cu: goto label_1ca15c;
        default: break;
    }

    ctx->pc = 0x1ca118u;

    // 0x1ca118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ca120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca124: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ca124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ca128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca12c: 0xc0726b4  jal         func_1C9AD0
    ctx->pc = 0x1CA12Cu;
    SET_GPR_U32(ctx, 31, 0x1CA134u);
    ctx->pc = 0x1CA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA12Cu;
    // 0x1ca130: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9AD0u, 0x1CA12Cu, 0x1CA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA134u;
label_1ca134:
    // 0x1ca134: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ca138: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ca13c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca144: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x1ca144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1ca148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca14c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ca14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ca150: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca154: 0xc072884  jal         func_1CA210
    ctx->pc = 0x1CA154u;
    SET_GPR_U32(ctx, 31, 0x1CA15Cu);
    ctx->pc = 0x1CA158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA154u;
    // 0x1ca158: 0xe6000b04  swc1        $f0, 0xB04($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2820), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA210u, 0x1CA154u, 0x1CA15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA15Cu;
label_1ca15c:
    // 0x1ca15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca160: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ca164: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ca164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ca168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca170: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ca170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca174: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA174u;
        // 0x1ca178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA17Cu;
    // 0x1ca17c: 0x0  nop
    ctx->pc = 0x1ca17cu;
    // NOP
    ctx->pc = 0x1ca180u;
}
