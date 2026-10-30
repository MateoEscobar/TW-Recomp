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

// Function: sub_00104BC8
// Address: 0x104bc8 - 0x104ce0
void sub_00104BC8_0x104bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104BC8_0x104bc8");
#endif

    switch (ctx->pc) {
        case 0x104cd4u: goto label_104cd4;
        default: break;
    }

    ctx->pc = 0x104bc8u;

    // 0x104bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104bcc: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x104bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x104bd0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x104bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x104bd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x104bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x104bd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104bdc: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x104be0: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x104be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x104be4: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x104be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x104be8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x104be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x104bec: 0x2488000a  addiu       $t0, $a0, 0xA
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x104bf0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x104bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x104bf4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x104bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x104bf8: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x104bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x104bfc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x104bfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104c00: 0x0  nop
    ctx->pc = 0x104c00u;
    // NOP
    // 0x104c04: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x104c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x104c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104c0c: 0x0  nop
    ctx->pc = 0x104c0cu;
    // NOP
    // 0x104c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104c14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104c18: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x104c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x104c1c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x104c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104c20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x104c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104c24: 0x0  nop
    ctx->pc = 0x104c24u;
    // NOP
    // 0x104c28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x104c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x104c2c: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x104c2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x104c30: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x104c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x104c34: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x104c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x104c38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x104c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x104c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104c40: 0x0  nop
    ctx->pc = 0x104c40u;
    // NOP
    // 0x104c44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x104c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x104c48: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c4c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x104c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x104c50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x104c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x104c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x104c58: 0x0  nop
    ctx->pc = 0x104c58u;
    // NOP
    // 0x104c5c: 0x0  nop
    ctx->pc = 0x104c5cu;
    // NOP
    // 0x104c60: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x104c60u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x104c64: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x104c64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x104c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104c6c: 0x0  nop
    ctx->pc = 0x104c6cu;
    // NOP
    // 0x104c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104c74: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x104c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x104c78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x104c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x104c7c: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x104c80: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x104c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x104c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104c88: 0x0  nop
    ctx->pc = 0x104c88u;
    // NOP
    // 0x104c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104c90: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x104c90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x104c94: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x104c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x104c98: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x104c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x104c9c: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x104c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x104ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104ca4: 0x0  nop
    ctx->pc = 0x104ca4u;
    // NOP
    // 0x104ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104cac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x104cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x104cb0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x104cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x104cb4: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x104cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x104cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104cbc: 0x0  nop
    ctx->pc = 0x104cbcu;
    // NOP
    // 0x104cc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104cc4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x104cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x104cc8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x104cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x104ccc: 0xc0cdaee  jal         func_336BB8
    ctx->pc = 0x104CCCu;
    SET_GPR_U32(ctx, 31, 0x104CD4u);
    ctx->pc = 0x104CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CCCu;
    // 0x104cd0: 0xe466000c  swc1        $f6, 0xC($v1) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x104CCCu, 0x104CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CD4u;
label_104cd4:
    // 0x104cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x104CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CD8u;
        // 0x104cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104CE0u;
}
