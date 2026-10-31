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

// Function: sub_00485C28
// Address: 0x485c28 - 0x485d40
void sub_00485C28_0x485c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485C28_0x485c28");
#endif

    switch (ctx->pc) {
        case 0x485c90u: goto label_485c90;
        case 0x485ca8u: goto label_485ca8;
        case 0x485cd4u: goto label_485cd4;
        default: break;
    }

    ctx->pc = 0x485c28u;

    // 0x485c28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x485c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x485c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x485c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x485c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x485c34: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x485c34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x485c38: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x485c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x485c3c: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x485c3cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x485c40: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x485c40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x485c44: 0x46150603  div.s       $f24, $f0, $f21
    ctx->pc = 0x485c44u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x485c48: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x485c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x485c4c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x485c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x485c50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x485c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x485c54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x485c58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x485c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x485c5c: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x485c5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x485c60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485c64: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x485c64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x485c68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x485c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485c70: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x485c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x485c74: 0xa060010c  sb          $zero, 0x10C($v1)
    ctx->pc = 0x485c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x485c78: 0xe475020c  swc1        $f21, 0x20C($v1)
    ctx->pc = 0x485c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 524), bits); }
    // 0x485c7c: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x485c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x485c80: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x485c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x485c84: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x485c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x485c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x485c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x485c8c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x485c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_485c90:
    // 0x485c90: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x485c90u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x485c94: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x485c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x485c98: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x485c98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x485c9c: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x485c9cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x485ca0: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x485CA0u;
    SET_GPR_U32(ctx, 31, 0x485CA8u);
    ctx->pc = 0x485CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485CA0u;
    // 0x485ca4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x485CA0u, 0x485CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485CA8u;
label_485ca8:
    // 0x485ca8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x485ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x485cac: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x485cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x485cb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x485cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x485cb4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x485cb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x485cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x485cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x485cbc: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x485cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x485cc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x485cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x485cc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x485cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x485cc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x485cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x485ccc: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x485CCCu;
    SET_GPR_U32(ctx, 31, 0x485CD4u);
    ctx->pc = 0x485CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485CCCu;
    // 0x485cd0: 0xa044000c  sb          $a0, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x485CCCu, 0x485CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485CD4u;
label_485cd4:
    // 0x485cd4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x485cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x485cd8: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x485cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x485cdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x485cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x485ce0: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x485ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x485ce4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x485ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x485ce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x485ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x485cec: 0x2a030100  slti        $v1, $s0, 0x100
    ctx->pc = 0x485cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x485cf0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x485cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x485cf4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x485cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x485cf8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x485CF8u;
    {
        const bool branch_taken_0x485cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x485CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485CF8u;
        // 0x485cfc: 0xa044010c  sb          $a0, 0x10C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485cf8) {
            ctx->pc = 0x485C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485c90;
        }
    }
    ctx->pc = 0x485D00u;
    // 0x485d00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x485d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485d10: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x485d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x485d14: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x485d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x485d18: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x485d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x485d1c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x485d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x485d20: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x485d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x485d24: 0x3e00008  jr          $ra
    ctx->pc = 0x485D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485D24u;
        // 0x485d28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485D2Cu;
    // 0x485d2c: 0x0  nop
    ctx->pc = 0x485d2cu;
    // NOP
    // 0x485d30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x485d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x485d34: 0x0  nop
    ctx->pc = 0x485d34u;
    // NOP
    // 0x485d38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x485d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x485d3c: 0x0  nop
    ctx->pc = 0x485d3cu;
    // NOP
    ctx->pc = 0x485d40u;
}
