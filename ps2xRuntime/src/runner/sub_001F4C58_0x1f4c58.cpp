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

// Function: sub_001F4C58
// Address: 0x1f4c58 - 0x1f4d58
void sub_001F4C58_0x1f4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C58_0x1f4c58");
#endif

    switch (ctx->pc) {
        case 0x1f4d34u: goto label_1f4d34;
        default: break;
    }

    ctx->pc = 0x1f4c58u;

    // 0x1f4c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1f4c60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4c64: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1f4c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4c6c: 0x2447ee80  addiu       $a3, $v0, -0x1180
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962816));
    // 0x1f4c70: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1f4c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c74: 0x2465f41c  addiu       $a1, $v1, -0xBE4
    ctx->pc = 0x1f4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964252));
    // 0x1f4c78: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4C78u;
    {
        const bool branch_taken_0x1f4c78 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C78u;
        // 0x1f4c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c78) {
            ctx->pc = 0x1F4C94u;
            goto label_1f4c94;
        }
    }
    ctx->pc = 0x1F4C80u;
    // 0x1f4c80: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1f4c80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f4c84: 0x0  nop
    ctx->pc = 0x1f4c84u;
    // NOP
    // 0x1f4c88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f4c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f4c8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4C8Cu;
    {
        const bool branch_taken_0x1f4c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C8Cu;
        // 0x1f4c90: 0xc4e00000  lwc1        $f0, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c8c) {
            ctx->pc = 0x1F4CB4u;
            goto label_1f4cb4;
        }
    }
    ctx->pc = 0x1F4C94u;
label_1f4c94:
    // 0x1f4c94: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1f4c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1f4c98: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x1f4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1f4c9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f4c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f4ca0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f4ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f4ca4: 0x0  nop
    ctx->pc = 0x1f4ca4u;
    // NOP
    // 0x1f4ca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f4ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f4cac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f4cacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1f4cb0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1f4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4cb4:
    // 0x1f4cb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f4cb8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f4cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4cbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f4cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f4cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4cc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f4cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f4cc8: 0xc442f3fc  lwc1        $f2, -0xC04($v0)
    ctx->pc = 0x1f4cc8u;
    { uint32_t bits = FAST_READ32(0x50F3FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4ccc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1f4cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f4cd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f4cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4cd4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f4cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f4cd8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f4cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f4cdc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4CDCu;
    {
        const bool branch_taken_0x1f4cdc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CDCu;
        // 0x1f4ce0: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cdc) {
            ctx->pc = 0x1F4CF8u;
            goto label_1f4cf8;
        }
    }
    ctx->pc = 0x1F4CE4u;
    // 0x1f4ce4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1f4ce4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4ce8: 0x0  nop
    ctx->pc = 0x1f4ce8u;
    // NOP
    // 0x1f4cec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f4cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f4cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4CF0u;
    {
        const bool branch_taken_0x1f4cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CF0u;
        // 0x1f4cf4: 0xc50ff41c  lwc1        $f15, -0xBE4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cf0) {
            ctx->pc = 0x1F4D18u;
            goto label_1f4d18;
        }
    }
    ctx->pc = 0x1F4CF8u;
label_1f4cf8:
    // 0x1f4cf8: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x1f4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1f4cfc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1f4cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1f4d00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f4d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f4d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4d08: 0x0  nop
    ctx->pc = 0x1f4d08u;
    // NOP
    // 0x1f4d0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f4d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f4d10: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1f4d10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1f4d14: 0xc50ff41c  lwc1        $f15, -0xBE4($t0)
    ctx->pc = 0x1f4d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f4d18:
    // 0x1f4d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4d1c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1f4d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1f4d20: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f4d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4d24: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1f4d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1f4d28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4d2c: 0xc0cdd5a  jal         func_337568
    ctx->pc = 0x1F4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D34u);
    ctx->pc = 0x1F4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D2Cu;
    // 0x1f4d30: 0x460f8401  sub.s       $f16, $f16, $f15 (Delay Slot)
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1F4D2Cu, 0x1F4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D34u;
label_1f4d34:
    // 0x1f4d34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f4d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f4d38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4d40: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1f4d40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4d44: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1f4d44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1f4d48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D4Cu;
        // 0x1f4d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4D54u;
    // 0x1f4d54: 0x0  nop
    ctx->pc = 0x1f4d54u;
    // NOP
    ctx->pc = 0x1f4d58u;
}
