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

// Function: sub_00189628
// Address: 0x189628 - 0x1896c0
void sub_00189628_0x189628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189628_0x189628");
#endif

    switch (ctx->pc) {
        case 0x189648u: goto label_189648;
        default: break;
    }

    ctx->pc = 0x189628u;

    // 0x189628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18962c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18962cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189634: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x189638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18963c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189640: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x189640u;
    SET_GPR_U32(ctx, 31, 0x189648u);
    ctx->pc = 0x189644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189640u;
    // 0x189644: 0x26040bbc  addiu       $a0, $s0, 0xBBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x189640u, 0x189648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189648u;
label_189648:
    // 0x189648: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x189648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x18964c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x189650: 0xc4612d6c  lwc1        $f1, 0x2D6C($v1)
    ctx->pc = 0x189650u;
    { uint32_t bits = FAST_READ32(0x552D6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189654: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x189654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x189658: 0xc4402d70  lwc1        $f0, 0x2D70($v0)
    ctx->pc = 0x189658u;
    { uint32_t bits = FAST_READ32(0x552D70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18965c: 0xe6010bfc  swc1        $f1, 0xBFC($s0)
    ctx->pc = 0x18965cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3068), bits); }
    // 0x189660: 0xe6000bf8  swc1        $f0, 0xBF8($s0)
    ctx->pc = 0x189660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3064), bits); }
    // 0x189664: 0xae000bbc  sw          $zero, 0xBBC($s0)
    ctx->pc = 0x189664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 0));
    // 0x189668: 0xe6010bcc  swc1        $f1, 0xBCC($s0)
    ctx->pc = 0x189668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3020), bits); }
    // 0x18966c: 0xe6000bc8  swc1        $f0, 0xBC8($s0)
    ctx->pc = 0x18966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3016), bits); }
    // 0x189670: 0xe6010bdc  swc1        $f1, 0xBDC($s0)
    ctx->pc = 0x189670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3036), bits); }
    // 0x189674: 0xe6000bd8  swc1        $f0, 0xBD8($s0)
    ctx->pc = 0x189674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3032), bits); }
    // 0x189678: 0xe6010bec  swc1        $f1, 0xBEC($s0)
    ctx->pc = 0x189678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3052), bits); }
    // 0x18967c: 0xe6000be8  swc1        $f0, 0xBE8($s0)
    ctx->pc = 0x18967cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3048), bits); }
    // 0x189680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189684: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x189684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x189688: 0xae020bc4  sw          $v0, 0xBC4($s0)
    ctx->pc = 0x189688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3012), GPR_U32(ctx, 2));
    // 0x18968c: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x18968cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x189690: 0xae030bc0  sw          $v1, 0xBC0($s0)
    ctx->pc = 0x189690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3008), GPR_U32(ctx, 3));
    // 0x189694: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x189698: 0xae020bd4  sw          $v0, 0xBD4($s0)
    ctx->pc = 0x189698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 2));
    // 0x18969c: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x18969cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1896a0: 0xae030bd0  sw          $v1, 0xBD0($s0)
    ctx->pc = 0x1896a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3024), GPR_U32(ctx, 3));
    // 0x1896a4: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x1896a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1896a8: 0xae020bf4  sw          $v0, 0xBF4($s0)
    ctx->pc = 0x1896a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3060), GPR_U32(ctx, 2));
    // 0x1896ac: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1896b0: 0xae030bf0  sw          $v1, 0xBF0($s0)
    ctx->pc = 0x1896b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3056), GPR_U32(ctx, 3));
    // 0x1896b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1896b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1896b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1896B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B8u;
        // 0x1896bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1896C0u;
}
