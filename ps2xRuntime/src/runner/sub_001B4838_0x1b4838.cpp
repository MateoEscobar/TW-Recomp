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

// Function: sub_001B4838
// Address: 0x1b4838 - 0x1b48d0
void sub_001B4838_0x1b4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4838_0x1b4838");
#endif

    switch (ctx->pc) {
        case 0x1b48c4u: goto label_1b48c4;
        default: break;
    }

    ctx->pc = 0x1b4838u;

    // 0x1b4838: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b483c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4840: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1b4844: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x1b4844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4848: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b484c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4850: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b4850u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b4854: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4854u;
    {
        const bool branch_taken_0x1b4854 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4854u;
        // 0x1b4858: 0xa0a257a4  sb          $v0, 0x57A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 22436), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4854) {
            ctx->pc = 0x1B4870u;
            goto label_1b4870;
        }
    }
    ctx->pc = 0x1B485Cu;
    // 0x1b485c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b485cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4860: 0x0  nop
    ctx->pc = 0x1b4860u;
    // NOP
    // 0x1b4864: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4868u;
    {
        const bool branch_taken_0x1b4868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4868) {
            ctx->pc = 0x1B488Cu;
            goto label_1b488c;
        }
    }
    ctx->pc = 0x1B4870u;
label_1b4870:
    // 0x1b4870: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b4870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b4874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b4874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b487c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b487cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4880: 0x0  nop
    ctx->pc = 0x1b4880u;
    // NOP
    // 0x1b4884: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4888: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b4888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b488c:
    // 0x1b488c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1b4890: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1b4890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x1b4894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4898: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b4898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b489c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b48a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b48a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b48a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b48a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b48ac: 0x8c44cce4  lw          $a0, -0x331C($v0)
    ctx->pc = 0x1b48acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x1b48b0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b48b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b48b4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b48b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b48b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b48bc: 0xc05fb0e  jal         func_17EC38
    ctx->pc = 0x1B48BCu;
    SET_GPR_U32(ctx, 31, 0x1B48C4u);
    ctx->pc = 0x1B48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B48BCu;
    // 0x1b48c0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC38u, 0x1B48BCu, 0x1B48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48C4u;
label_1b48c4:
    // 0x1b48c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b48c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b48c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B48C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48C8u;
        // 0x1b48cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B48C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B48D0u;
}
