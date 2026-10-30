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

// Function: sub_00109460
// Address: 0x109460 - 0x1094f0
void sub_00109460_0x109460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109460_0x109460");
#endif

    ctx->pc = 0x109460u;

    // 0x109460: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109464: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x109464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x109468: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x109468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x10946c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10946Cu;
    {
        const bool branch_taken_0x10946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10946c) {
            ctx->pc = 0x109470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10946Cu;
            // 0x109470: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1094ACu;
            goto label_1094ac;
        }
    }
    ctx->pc = 0x109474u;
    // 0x109474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109478: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x109478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x10947c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10947cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109480: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x109480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109484: 0x0  nop
    ctx->pc = 0x109484u;
    // NOP
    // 0x109488: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x109488u;
    {
        const bool branch_taken_0x109488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109488u;
        // 0x10948c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109488) {
            ctx->pc = 0x109494u;
            goto label_109494;
        }
    }
    ctx->pc = 0x109490u;
    // 0x109490: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x109490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_109494:
    // 0x109494: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x109494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109498: 0x0  nop
    ctx->pc = 0x109498u;
    // NOP
    // 0x10949c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10949Cu;
    {
        const bool branch_taken_0x10949c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10949c) {
            ctx->pc = 0x1094A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10949Cu;
            // 0x1094a0: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1094A4u;
            goto label_1094a4;
        }
    }
    ctx->pc = 0x1094A4u;
label_1094a4:
    // 0x1094a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1094A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1094A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094A4u;
        // 0x1094a8: 0xe4c10024  swc1        $f1, 0x24($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094ACu;
label_1094ac:
    // 0x1094ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1094acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1094b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1094b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1094b4: 0x0  nop
    ctx->pc = 0x1094b4u;
    // NOP
    // 0x1094b8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1094b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1094bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1094bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1094c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1094c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1094c4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1094c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1094c8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x1094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1094cc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1094ccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1094d0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1094d0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1094d4: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1094d8: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1094d8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1094dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1094dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1094e0: 0x0  nop
    ctx->pc = 0x1094e0u;
    // NOP
    // 0x1094e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1094e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1094e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1094E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1094ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094E8u;
        // 0x1094ec: 0xe4c00024  swc1        $f0, 0x24($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094F0u;
}
