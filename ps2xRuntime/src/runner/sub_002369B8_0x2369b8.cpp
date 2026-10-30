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

// Function: sub_002369B8
// Address: 0x2369b8 - 0x236a68
void sub_002369B8_0x2369b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002369B8_0x2369b8");
#endif

    switch (ctx->pc) {
        case 0x2369d8u: goto label_2369d8;
        case 0x2369e0u: goto label_2369e0;
        case 0x2369f4u: goto label_2369f4;
        default: break;
    }

    ctx->pc = 0x2369b8u;

    // 0x2369b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2369b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2369bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2369bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2369c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2369c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2369c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2369c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2369c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2369c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2369cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2369ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2369d0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2369D0u;
    SET_GPR_U32(ctx, 31, 0x2369D8u);
    ctx->pc = 0x2369D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369D0u;
    // 0x2369d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2369D0u, 0x2369D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369D8u;
label_2369d8:
    // 0x2369d8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2369D8u;
    SET_GPR_U32(ctx, 31, 0x2369E0u);
    ctx->pc = 0x2369DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369D8u;
    // 0x2369dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2369D8u, 0x2369E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369E0u;
label_2369e0:
    // 0x2369e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2369e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369e4: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2369E4u;
    {
        const bool branch_taken_0x2369e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2369e4) {
            ctx->pc = 0x2369E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2369E4u;
            // 0x2369e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236A58u;
            goto label_236a58;
        }
    }
    ctx->pc = 0x2369ECu;
    // 0x2369ec: 0xc088c98  jal         func_223260
    ctx->pc = 0x2369ECu;
    SET_GPR_U32(ctx, 31, 0x2369F4u);
    ctx->pc = 0x2369F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369ECu;
    // 0x2369f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x2369ECu, 0x2369F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369F4u;
label_2369f4:
    // 0x2369f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2369F4u;
    {
        const bool branch_taken_0x2369f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2369F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369F4u;
        // 0x2369f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369f4) {
            ctx->pc = 0x236A10u;
            goto label_236a10;
        }
    }
    ctx->pc = 0x2369FCu;
    // 0x2369fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2369fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236a00: 0x0  nop
    ctx->pc = 0x236a00u;
    // NOP
    // 0x236a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x236a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x236a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x236A08u;
    {
        const bool branch_taken_0x236a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A08u;
        // 0x236a0c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a08) {
            ctx->pc = 0x236A2Cu;
            goto label_236a2c;
        }
    }
    ctx->pc = 0x236A10u;
label_236a10:
    // 0x236a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x236a14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x236a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236a1c: 0x0  nop
    ctx->pc = 0x236a1cu;
    // NOP
    // 0x236a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x236a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x236a24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x236a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x236a28: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x236a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_236a2c:
    // 0x236a2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x236a30: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x236a34: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x236a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x236a38: 0xae000654  sw          $zero, 0x654($s0)
    ctx->pc = 0x236a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 0));
    // 0x236a3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x236a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x236a40: 0xe6010650  swc1        $f1, 0x650($s0)
    ctx->pc = 0x236a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x236a44: 0x8c830290  lw          $v1, 0x290($a0)
    ctx->pc = 0x236a44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510290u));
    // 0x236a48: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x236a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236a50: 0xae020648  sw          $v0, 0x648($s0)
    ctx->pc = 0x236a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1608), GPR_U32(ctx, 2));
    // 0x236a54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236a58:
    // 0x236a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a5c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x236a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236a60: 0x3e00008  jr          $ra
    ctx->pc = 0x236A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A60u;
        // 0x236a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A68u;
}
