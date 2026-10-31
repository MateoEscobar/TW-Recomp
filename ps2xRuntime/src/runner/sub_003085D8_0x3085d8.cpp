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

// Function: sub_003085D8
// Address: 0x3085d8 - 0x308698
void sub_003085D8_0x3085d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003085D8_0x3085d8");
#endif

    switch (ctx->pc) {
        case 0x308648u: goto label_308648;
        default: break;
    }

    ctx->pc = 0x3085d8u;

    // 0x3085d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3085dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3085e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3085e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3085e4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x3085e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x3085e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3085e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3085ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3085f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3085f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3085f4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3085f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3085f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3085fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3085fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308600: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x308600u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x308604: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x308604u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x308608: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x308608u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x30860c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x30860cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x308610: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x308610u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x308614: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x308614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x308618: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x308618u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x30861c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x308620: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x308620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x308624: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x308624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x308628: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x308628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30862c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30862cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x308630: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x308630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x308634: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x308634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x308638: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x308638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30863c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30863cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x308640: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x308640u;
    SET_GPR_U32(ctx, 31, 0x308648u);
    ctx->pc = 0x308644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308640u;
    // 0x308644: 0xae090008  sw          $t1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x308640u, 0x308648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308648u;
label_308648:
    // 0x308648: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x308648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30864c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x30864cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x308650: 0x24423380  addiu       $v0, $v0, 0x3380
    ctx->pc = 0x308650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13184));
    // 0x308654: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x308654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x308658: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x308658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30865c: 0xe6170028  swc1        $f23, 0x28($s0)
    ctx->pc = 0x30865cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x308660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x308660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308664: 0xe616002c  swc1        $f22, 0x2C($s0)
    ctx->pc = 0x308664u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x308668: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x308668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x30866c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x30866cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x308670: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x308670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308674: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308678: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x308678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30867c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30867cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308680: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x308680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x308684: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x308684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x308688: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x308688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30868c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x30868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308690: 0x3e00008  jr          $ra
    ctx->pc = 0x308690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308690u;
        // 0x308694: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308698u;
}
