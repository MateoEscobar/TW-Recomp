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

// Function: sub_001094F0
// Address: 0x1094f0 - 0x109588
void sub_001094F0_0x1094f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094F0_0x1094f0");
#endif

    ctx->pc = 0x1094f0u;

    // 0x1094f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1094f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094f4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1094f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1094f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1094f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1094fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1094FCu;
    {
        const bool branch_taken_0x1094fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1094fc) {
            ctx->pc = 0x109500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1094FCu;
            // 0x109500: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10953Cu;
            goto label_10953c;
        }
    }
    ctx->pc = 0x109504u;
    // 0x109504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109508: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x109508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x10950c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10950cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109510: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x109510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109514: 0x0  nop
    ctx->pc = 0x109514u;
    // NOP
    // 0x109518: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x109518u;
    {
        const bool branch_taken_0x109518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109518u;
        // 0x10951c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109518) {
            ctx->pc = 0x109524u;
            goto label_109524;
        }
    }
    ctx->pc = 0x109520u;
    // 0x109520: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x109520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_109524:
    // 0x109524: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x109524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109528: 0x0  nop
    ctx->pc = 0x109528u;
    // NOP
    // 0x10952c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10952Cu;
    {
        const bool branch_taken_0x10952c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10952c) {
            ctx->pc = 0x109530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10952Cu;
            // 0x109530: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109534u;
            goto label_109534;
        }
    }
    ctx->pc = 0x109534u;
label_109534:
    // 0x109534: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x109534u;
    {
        const bool branch_taken_0x109534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109534u;
        // 0x109538: 0xe4c10028  swc1        $f1, 0x28($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109534) {
            ctx->pc = 0x10957Cu;
            goto label_10957c;
        }
    }
    ctx->pc = 0x10953Cu;
label_10953c:
    // 0x10953c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x109540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109544: 0x0  nop
    ctx->pc = 0x109544u;
    // NOP
    // 0x109548: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x109548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x10954c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10954cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x109550: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x109550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109554: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x109554u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x109558: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x109558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10955c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x10955cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x109560: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x109560u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x109564: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x109564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x109568: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x109568u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x10956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109570: 0x0  nop
    ctx->pc = 0x109570u;
    // NOP
    // 0x109574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x109578: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x109578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_10957c:
    // 0x10957c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x10957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x109580: 0x3e00008  jr          $ra
    ctx->pc = 0x109580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109580u;
        // 0x109584: 0xe4c00024  swc1        $f0, 0x24($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109588u;
}
