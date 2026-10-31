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

// Function: sub_00125A40
// Address: 0x125a40 - 0x125ac8
void sub_00125A40_0x125a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125A40_0x125a40");
#endif

    switch (ctx->pc) {
        case 0x125a70u: goto label_125a70;
        case 0x125a90u: goto label_125a90;
        default: break;
    }

    ctx->pc = 0x125a40u;

    // 0x125a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125a44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x125a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a58: 0xe60c0304  swc1        $f12, 0x304($s0)
    ctx->pc = 0x125a58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x125a5c: 0xc6010208  lwc1        $f1, 0x208($s0)
    ctx->pc = 0x125a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125a64: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x125a64u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x125a68: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x125A68u;
    SET_GPR_U32(ctx, 31, 0x125A70u);
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x125A68u, 0x125A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A70u;
label_125a70:
    // 0x125a70: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x125a74: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x125a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a80: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x125a80u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x125a84: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x125a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x125a88: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x125A88u;
    SET_GPR_U32(ctx, 31, 0x125A90u);
    ctx->pc = 0x125A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A88u;
    // 0x125a8c: 0xe60003b0  swc1        $f0, 0x3B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x125A88u, 0x125A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0xc601034c  lwc1        $f1, 0x34C($s0)
    ctx->pc = 0x125a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125a94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a98: 0x0  nop
    ctx->pc = 0x125a98u;
    // NOP
    // 0x125a9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x125a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125aa0: 0x0  nop
    ctx->pc = 0x125aa0u;
    // NOP
    // 0x125aa4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x125AA4u;
    {
        const bool branch_taken_0x125aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125aa4) {
            ctx->pc = 0x125AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125AA4u;
            // 0x125aa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125ABCu;
            goto label_125abc;
        }
    }
    ctx->pc = 0x125AACu;
    // 0x125aac: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x125aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ab0: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x125ab0u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x125ab4: 0xe600034c  swc1        $f0, 0x34C($s0)
    ctx->pc = 0x125ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
    // 0x125ab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125abc:
    // 0x125abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x125AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AC0u;
        // 0x125ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125AC8u;
}
