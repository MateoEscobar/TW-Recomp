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

// Function: sub_00422B00
// Address: 0x422b00 - 0x422bd8
void sub_00422B00_0x422b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422B00_0x422b00");
#endif

    switch (ctx->pc) {
        case 0x422b30u: goto label_422b30;
        case 0x422b44u: goto label_422b44;
        case 0x422b54u: goto label_422b54;
        default: break;
    }

    ctx->pc = 0x422b00u;

    // 0x422b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x422b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x422b04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x422b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x422b08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x422b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x422b0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x422b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x422b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x422b14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x422b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b18: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x422b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x422b1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x422b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422b24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x422b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x422b28: 0xc108aba  jal         func_422AE8
    ctx->pc = 0x422B28u;
    SET_GPR_U32(ctx, 31, 0x422B30u);
    ctx->pc = 0x422B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422B28u;
    // 0x422b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422AE8u, 0x422B28u, 0x422B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422B30u;
label_422b30:
    // 0x422b30: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x422B30u;
    {
        const bool branch_taken_0x422b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B30u;
        // 0x422b34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b30) {
            ctx->pc = 0x422BA8u;
            goto label_422ba8;
        }
    }
    ctx->pc = 0x422B38u;
    // 0x422b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x422b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b3c: 0xc108aa4  jal         func_422A90
    ctx->pc = 0x422B3Cu;
    SET_GPR_U32(ctx, 31, 0x422B44u);
    ctx->pc = 0x422B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422B3Cu;
    // 0x422b40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422A90u, 0x422B3Cu, 0x422B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422B44u;
label_422b44:
    // 0x422b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x422b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x422b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b4c: 0xc108aba  jal         func_422AE8
    ctx->pc = 0x422B4Cu;
    SET_GPR_U32(ctx, 31, 0x422B54u);
    ctx->pc = 0x422B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422B4Cu;
    // 0x422b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422AE8u, 0x422B4Cu, 0x422B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422B54u;
label_422b54:
    // 0x422b54: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x422B54u;
    {
        const bool branch_taken_0x422b54 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x422B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B54u;
        // 0x422b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b54) {
            ctx->pc = 0x422B70u;
            goto label_422b70;
        }
    }
    ctx->pc = 0x422B5Cu;
    // 0x422b5c: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x422b5cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x422b60: 0x0  nop
    ctx->pc = 0x422b60u;
    // NOP
    // 0x422b64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x422b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x422b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x422B68u;
    {
        const bool branch_taken_0x422b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422b68) {
            ctx->pc = 0x422B8Cu;
            goto label_422b8c;
        }
    }
    ctx->pc = 0x422B70u;
label_422b70:
    // 0x422b70: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x422b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x422b74: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x422b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x422b78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x422b7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x422b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x422b80: 0x0  nop
    ctx->pc = 0x422b80u;
    // NOP
    // 0x422b84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x422b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x422b88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x422b88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_422b8c:
    // 0x422b8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x422b8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x422b90: 0x0  nop
    ctx->pc = 0x422b90u;
    // NOP
    // 0x422b94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x422b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x422b98: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x422b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x422b9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x422b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x422ba0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x422ba0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x422ba4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x422ba4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_422ba8:
    // 0x422ba8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x422ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x422bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x422bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x422bb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x422bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x422bb4: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x422bb4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x422bb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x422bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422bbc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x422bbcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x422bc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x422bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422bc8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x422bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x422bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x422BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422BCCu;
        // 0x422bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422BD4u;
    // 0x422bd4: 0x0  nop
    ctx->pc = 0x422bd4u;
    // NOP
    ctx->pc = 0x422bd8u;
}
