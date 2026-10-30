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

// Function: sub_00318940
// Address: 0x318940 - 0x318a38
void sub_00318940_0x318940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318940_0x318940");
#endif

    switch (ctx->pc) {
        case 0x3189a8u: goto label_3189a8;
        default: break;
    }

    ctx->pc = 0x318940u;

    // 0x318940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x318944: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x318948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31894c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x318950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x318950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318954: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x318954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x318958: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x318958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31895c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318960: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x318960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x318964: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x318964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318968: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x318968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31896c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31896cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318970: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x318970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x318974: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x318974u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x318978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31897c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31897cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x318980: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x318980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x318984: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x318984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x318988: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x318988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31898c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x31898cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x318990: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x318990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x318994: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x318994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x318998: 0xa2400018  sb          $zero, 0x18($s2)
    ctx->pc = 0x318998u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31899c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x31899cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x3189a0: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x3189A0u;
    SET_GPR_U32(ctx, 31, 0x3189A8u);
    ctx->pc = 0x3189A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3189A0u;
    // 0x3189a4: 0xae490008  sw          $t1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x3189A0u, 0x3189A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3189A8u;
label_3189a8:
    // 0x3189a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3189a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3189ac: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x3189acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x3189b0: 0x24423c80  addiu       $v0, $v0, 0x3C80
    ctx->pc = 0x3189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15488));
    // 0x3189b4: 0xe6540024  swc1        $f20, 0x24($s2)
    ctx->pc = 0x3189b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x3189b8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3189b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x3189bc: 0xa2510030  sb          $s1, 0x30($s2)
    ctx->pc = 0x3189bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 17));
    // 0x3189c0: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3189C0u;
    {
        const bool branch_taken_0x3189c0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3189C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189C0u;
        // 0x3189c4: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189c0) {
            ctx->pc = 0x3189DCu;
            goto label_3189dc;
        }
    }
    ctx->pc = 0x3189C8u;
    // 0x3189c8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3189c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189cc: 0x0  nop
    ctx->pc = 0x3189ccu;
    // NOP
    // 0x3189d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3189d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3189d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3189D4u;
    {
        const bool branch_taken_0x3189d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3189d4) {
            ctx->pc = 0x3189F8u;
            goto label_3189f8;
        }
    }
    ctx->pc = 0x3189DCu;
label_3189dc:
    // 0x3189dc: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x3189e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3189e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3189e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3189e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3189e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3189e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189ec: 0x0  nop
    ctx->pc = 0x3189ecu;
    // NOP
    // 0x3189f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3189f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3189f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3189f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3189f8:
    // 0x3189f8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x3189f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x3189fc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3189fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x318a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318a04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x318a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318a08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x318a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318a0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x318a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x318a10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x318a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318a14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x318a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318a1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x318a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x318a20: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x318a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x318a24: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x318a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x318a28: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x318a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x318a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318a30: 0x3e00008  jr          $ra
    ctx->pc = 0x318A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A30u;
        // 0x318a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318A38u;
}
