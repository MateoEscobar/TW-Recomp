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

// Function: sub_00125E50
// Address: 0x125e50 - 0x1260e8
void sub_00125E50_0x125e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125E50_0x125e50");
#endif

    switch (ctx->pc) {
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        case 0x125e90u: goto label_125e90;
        case 0x125e94u: goto label_125e94;
        case 0x125e98u: goto label_125e98;
        case 0x125e9cu: goto label_125e9c;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ea4u: goto label_125ea4;
        case 0x125ea8u: goto label_125ea8;
        case 0x125eacu: goto label_125eac;
        case 0x125eb0u: goto label_125eb0;
        case 0x125eb4u: goto label_125eb4;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ebcu: goto label_125ebc;
        case 0x125ec0u: goto label_125ec0;
        case 0x125ec4u: goto label_125ec4;
        case 0x125ec8u: goto label_125ec8;
        case 0x125eccu: goto label_125ecc;
        case 0x125ed0u: goto label_125ed0;
        case 0x125ed4u: goto label_125ed4;
        case 0x125ed8u: goto label_125ed8;
        case 0x125edcu: goto label_125edc;
        case 0x125ee0u: goto label_125ee0;
        case 0x125ee4u: goto label_125ee4;
        case 0x125ee8u: goto label_125ee8;
        case 0x125eecu: goto label_125eec;
        case 0x125ef0u: goto label_125ef0;
        case 0x125ef4u: goto label_125ef4;
        case 0x125ef8u: goto label_125ef8;
        case 0x125efcu: goto label_125efc;
        case 0x125f00u: goto label_125f00;
        case 0x125f04u: goto label_125f04;
        case 0x125f08u: goto label_125f08;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f10u: goto label_125f10;
        case 0x125f14u: goto label_125f14;
        case 0x125f18u: goto label_125f18;
        case 0x125f1cu: goto label_125f1c;
        case 0x125f20u: goto label_125f20;
        case 0x125f24u: goto label_125f24;
        case 0x125f28u: goto label_125f28;
        case 0x125f2cu: goto label_125f2c;
        case 0x125f30u: goto label_125f30;
        case 0x125f34u: goto label_125f34;
        case 0x125f38u: goto label_125f38;
        case 0x125f3cu: goto label_125f3c;
        case 0x125f40u: goto label_125f40;
        case 0x125f44u: goto label_125f44;
        case 0x125f48u: goto label_125f48;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f50u: goto label_125f50;
        case 0x125f54u: goto label_125f54;
        case 0x125f58u: goto label_125f58;
        case 0x125f5cu: goto label_125f5c;
        case 0x125f60u: goto label_125f60;
        case 0x125f64u: goto label_125f64;
        case 0x125f68u: goto label_125f68;
        case 0x125f6cu: goto label_125f6c;
        case 0x125f70u: goto label_125f70;
        case 0x125f74u: goto label_125f74;
        case 0x125f78u: goto label_125f78;
        case 0x125f7cu: goto label_125f7c;
        case 0x125f80u: goto label_125f80;
        case 0x125f84u: goto label_125f84;
        case 0x125f88u: goto label_125f88;
        case 0x125f8cu: goto label_125f8c;
        case 0x125f90u: goto label_125f90;
        case 0x125f94u: goto label_125f94;
        case 0x125f98u: goto label_125f98;
        case 0x125f9cu: goto label_125f9c;
        case 0x125fa0u: goto label_125fa0;
        case 0x125fa4u: goto label_125fa4;
        case 0x125fa8u: goto label_125fa8;
        case 0x125facu: goto label_125fac;
        case 0x125fb0u: goto label_125fb0;
        case 0x125fb4u: goto label_125fb4;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fbcu: goto label_125fbc;
        case 0x125fc0u: goto label_125fc0;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fc8u: goto label_125fc8;
        case 0x125fccu: goto label_125fcc;
        case 0x125fd0u: goto label_125fd0;
        case 0x125fd4u: goto label_125fd4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fdcu: goto label_125fdc;
        case 0x125fe0u: goto label_125fe0;
        case 0x125fe4u: goto label_125fe4;
        case 0x125fe8u: goto label_125fe8;
        case 0x125fecu: goto label_125fec;
        case 0x125ff0u: goto label_125ff0;
        case 0x125ff4u: goto label_125ff4;
        case 0x125ff8u: goto label_125ff8;
        case 0x125ffcu: goto label_125ffc;
        case 0x126000u: goto label_126000;
        case 0x126004u: goto label_126004;
        case 0x126008u: goto label_126008;
        case 0x12600cu: goto label_12600c;
        case 0x126010u: goto label_126010;
        case 0x126014u: goto label_126014;
        case 0x126018u: goto label_126018;
        case 0x12601cu: goto label_12601c;
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        case 0x126098u: goto label_126098;
        case 0x12609cu: goto label_12609c;
        case 0x1260a0u: goto label_1260a0;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260a8u: goto label_1260a8;
        case 0x1260acu: goto label_1260ac;
        case 0x1260b0u: goto label_1260b0;
        case 0x1260b4u: goto label_1260b4;
        case 0x1260b8u: goto label_1260b8;
        case 0x1260bcu: goto label_1260bc;
        case 0x1260c0u: goto label_1260c0;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260ccu: goto label_1260cc;
        case 0x1260d0u: goto label_1260d0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260d8u: goto label_1260d8;
        case 0x1260dcu: goto label_1260dc;
        case 0x1260e0u: goto label_1260e0;
        case 0x1260e4u: goto label_1260e4;
        default: break;
    }

    ctx->pc = 0x125e50u;

label_125e50:
    // 0x125e50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_125e54:
    // 0x125e54: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x125e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_125e58:
    // 0x125e58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125e5c:
    // 0x125e5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x125e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_125e60:
    // 0x125e60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_125e64:
    // 0x125e64: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x125e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_125e68:
    // 0x125e68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_125e6c:
    // 0x125e6c: 0xc136b50  jal         func_4DAD40
label_125e70:
    if (ctx->pc == 0x125E70u) {
        ctx->pc = 0x125E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E6Cu;
        // 0x125e70: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E74u;
        goto label_125e74;
    }
    ctx->pc = 0x125E6Cu;
    SET_GPR_U32(ctx, 31, 0x125E74u);
    ctx->pc = 0x125E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E6Cu;
    // 0x125e70: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x125E6Cu, 0x125E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E74u;
label_125e74:
    // 0x125e74: 0x26300180  addiu       $s0, $s1, 0x180
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_125e78:
    // 0x125e78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_125e7c:
    // 0x125e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125e80:
    // 0x125e80: 0xac62b194  sw          $v0, -0x4E6C($v1)
    ctx->pc = 0x125e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
label_125e84:
    // 0x125e84: 0xc049f52  jal         func_127D48
label_125e88:
    if (ctx->pc == 0x125E88u) {
        ctx->pc = 0x125E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E84u;
        // 0x125e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E8Cu;
        goto label_125e8c;
    }
    ctx->pc = 0x125E84u;
    SET_GPR_U32(ctx, 31, 0x125E8Cu);
    ctx->pc = 0x125E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E84u;
    // 0x125e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x125E84u, 0x125E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E8Cu;
label_125e8c:
    // 0x125e8c: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x125e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_125e90:
    // 0x125e90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125e94:
    // 0x125e94: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x125e94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_125e98:
    // 0x125e98: 0x7e220270  sq          $v0, 0x270($s1)
    ctx->pc = 0x125e98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 624), GPR_VEC(ctx, 2));
label_125e9c:
    // 0x125e9c: 0xc62c0394  lwc1        $f12, 0x394($s1)
    ctx->pc = 0x125e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125ea0:
    // 0x125ea0: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_125ea4:
    // 0x125ea4: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_125ea8:
    // 0x125ea8: 0x40f809  jalr        $v0
label_125eac:
    if (ctx->pc == 0x125EACu) {
        ctx->pc = 0x125EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EA8u;
        // 0x125eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EB0u;
        goto label_125eb0;
    }
    ctx->pc = 0x125EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125EB0u);
        ctx->pc = 0x125EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EA8u;
        // 0x125eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125EA8u, 0x125EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125EB0u;
label_125eb0:
    // 0x125eb0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x125eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_125eb4:
    // 0x125eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125eb8:
    // 0x125eb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_125ebc:
    // 0x125ebc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x125ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125ec0:
    // 0x125ec0: 0x26250260  addiu       $a1, $s1, 0x260
    ctx->pc = 0x125ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_125ec4:
    // 0x125ec4: 0xc136afa  jal         func_4DABE8
label_125ec8:
    if (ctx->pc == 0x125EC8u) {
        ctx->pc = 0x125EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EC4u;
        // 0x125ec8: 0xe620034c  swc1        $f0, 0x34C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125ECCu;
        goto label_125ecc;
    }
    ctx->pc = 0x125EC4u;
    SET_GPR_U32(ctx, 31, 0x125ECCu);
    ctx->pc = 0x125EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EC4u;
    // 0x125ec8: 0xe620034c  swc1        $f0, 0x34C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x125EC4u, 0x125ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125ECCu;
label_125ecc:
    // 0x125ecc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x125eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125ed0:
    // 0x125ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125ed4:
    // 0x125ed4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125ed8:
    // 0x125ed8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x125ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125edc:
    // 0x125edc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x125edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125ee0:
    // 0x125ee0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x125ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125ee4:
    // 0x125ee4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x125ee4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_125ee8:
    // 0x125ee8: 0x4a0003bf  vwaitq
    ctx->pc = 0x125ee8u;
    // VWAITQ (Q already resolved in this runtime)
label_125eec:
    // 0x125eec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x125eecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125ef0:
    // 0x125ef0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x125ef0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_125ef4:
    // 0x125ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_125ef8:
    // 0x125ef8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125efc:
    // 0x125efc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x125efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_125f00:
    // 0x125f00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125f04:
    // 0x125f04: 0x0  nop
    ctx->pc = 0x125f04u;
    // NOP
label_125f08:
    // 0x125f08: 0x0  nop
    ctx->pc = 0x125f08u;
    // NOP
label_125f0c:
    // 0x125f0c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x125f0cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_125f10:
    // 0x125f10: 0xc136b24  jal         func_4DAC90
label_125f14:
    if (ctx->pc == 0x125F14u) {
        ctx->pc = 0x125F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F10u;
        // 0x125f14: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F18u;
        goto label_125f18;
    }
    ctx->pc = 0x125F10u;
    SET_GPR_U32(ctx, 31, 0x125F18u);
    ctx->pc = 0x125F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F10u;
    // 0x125f14: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x125F10u, 0x125F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F18u;
label_125f18:
    // 0x125f18: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x125f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125f1c:
    // 0x125f1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125f20:
    // 0x125f20: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x125f20u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_125f24:
    // 0x125f24: 0xc62c032c  lwc1        $f12, 0x32C($s1)
    ctx->pc = 0x125f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125f28:
    // 0x125f28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125f2c:
    // 0x125f2c: 0x460ca328  max.s       $f12, $f20, $f12
    ctx->pc = 0x125f2cu;
    ctx->f[12] = std::max(ctx->f[20], ctx->f[12]);
label_125f30:
    // 0x125f30: 0xc136b24  jal         func_4DAC90
label_125f34:
    if (ctx->pc == 0x125F34u) {
        ctx->pc = 0x125F38u;
        goto label_125f38;
    }
    ctx->pc = 0x125F30u;
    SET_GPR_U32(ctx, 31, 0x125F38u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x125F30u, 0x125F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F38u;
label_125f38:
    // 0x125f38: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125f3c:
    // 0x125f3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x125f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125f40:
    // 0x125f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125f44:
    // 0x125f44: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x125f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_125f48:
    // 0x125f48: 0xc136b18  jal         func_4DAC60
label_125f4c:
    if (ctx->pc == 0x125F4Cu) {
        ctx->pc = 0x125F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F48u;
        // 0x125f4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F50u;
        goto label_125f50;
    }
    ctx->pc = 0x125F48u;
    SET_GPR_U32(ctx, 31, 0x125F50u);
    ctx->pc = 0x125F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F48u;
    // 0x125f4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x125F48u, 0x125F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F50u;
label_125f50:
    // 0x125f50: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x125f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125f54:
    // 0x125f54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125f58:
    // 0x125f58: 0x7e2202b0  sq          $v0, 0x2B0($s1)
    ctx->pc = 0x125f58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 688), GPR_VEC(ctx, 2));
label_125f5c:
    // 0x125f5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x125f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_125f60:
    // 0x125f60: 0x7e220260  sq          $v0, 0x260($s1)
    ctx->pc = 0x125f60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), GPR_VEC(ctx, 2));
label_125f64:
    // 0x125f64: 0x7e220250  sq          $v0, 0x250($s1)
    ctx->pc = 0x125f64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 592), GPR_VEC(ctx, 2));
label_125f68:
    // 0x125f68: 0xc047e6c  jal         func_11F9B0
label_125f6c:
    if (ctx->pc == 0x125F6Cu) {
        ctx->pc = 0x125F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F68u;
        // 0x125f6c: 0x7e2201e0  sq          $v0, 0x1E0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F70u;
        goto label_125f70;
    }
    ctx->pc = 0x125F68u;
    SET_GPR_U32(ctx, 31, 0x125F70u);
    ctx->pc = 0x125F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F68u;
    // 0x125f6c: 0x7e2201e0  sq          $v0, 0x1E0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x125F68u, 0x125F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F70u;
label_125f70:
    // 0x125f70: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_125f74:
    if (ctx->pc == 0x125F74u) {
        ctx->pc = 0x125F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F70u;
        // 0x125f74: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F78u;
        goto label_125f78;
    }
    ctx->pc = 0x125F70u;
    {
        const bool branch_taken_0x125f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f70) {
            ctx->pc = 0x125F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125F70u;
            // 0x125f74: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125FB8u;
            goto label_125fb8;
        }
    }
    ctx->pc = 0x125F78u;
label_125f78:
    // 0x125f78: 0xc047e6c  jal         func_11F9B0
label_125f7c:
    if (ctx->pc == 0x125F7Cu) {
        ctx->pc = 0x125F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F78u;
        // 0x125f7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F80u;
        goto label_125f80;
    }
    ctx->pc = 0x125F78u;
    SET_GPR_U32(ctx, 31, 0x125F80u);
    ctx->pc = 0x125F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F78u;
    // 0x125f7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x125F78u, 0x125F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F80u;
label_125f80:
    // 0x125f80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125f84:
    // 0x125f84: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x125f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_125f88:
    // 0x125f88: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x125f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_125f8c:
    // 0x125f8c: 0xa0f809  jalr        $a1
label_125f90:
    if (ctx->pc == 0x125F90u) {
        ctx->pc = 0x125F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F8Cu;
        // 0x125f90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F94u;
        goto label_125f94;
    }
    ctx->pc = 0x125F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x125F94u);
        ctx->pc = 0x125F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F8Cu;
        // 0x125f90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F8Cu, 0x125F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x125f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125f98:
    // 0x125f98: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_125f9c:
    if (ctx->pc == 0x125F9Cu) {
        ctx->pc = 0x125F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F98u;
        // 0x125f9c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FA0u;
        goto label_125fa0;
    }
    ctx->pc = 0x125F98u;
    {
        const bool branch_taken_0x125f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x125f98) {
            ctx->pc = 0x125F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125F98u;
            // 0x125f9c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125FB8u;
            goto label_125fb8;
        }
    }
    ctx->pc = 0x125FA0u;
label_125fa0:
    // 0x125fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125fa4:
    // 0x125fa4: 0xc047e78  jal         func_11F9E0
label_125fa8:
    if (ctx->pc == 0x125FA8u) {
        ctx->pc = 0x125FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FA4u;
        // 0x125fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FACu;
        goto label_125fac;
    }
    ctx->pc = 0x125FA4u;
    SET_GPR_U32(ctx, 31, 0x125FACu);
    ctx->pc = 0x125FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FA4u;
    // 0x125fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x125FA4u, 0x125FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FACu;
label_125fac:
    // 0x125fac: 0xc049a9a  jal         func_126A68
label_125fb0:
    if (ctx->pc == 0x125FB0u) {
        ctx->pc = 0x125FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FACu;
        // 0x125fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FB4u;
        goto label_125fb4;
    }
    ctx->pc = 0x125FACu;
    SET_GPR_U32(ctx, 31, 0x125FB4u);
    ctx->pc = 0x125FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FACu;
    // 0x125fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x125FACu, 0x125FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FB4u;
label_125fb4:
    // 0x125fb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125fb8:
    // 0x125fb8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_125fbc:
    // 0x125fbc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x125fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_125fc0:
    // 0x125fc0: 0x40f809  jalr        $v0
label_125fc4:
    if (ctx->pc == 0x125FC4u) {
        ctx->pc = 0x125FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC0u;
        // 0x125fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FC8u;
        goto label_125fc8;
    }
    ctx->pc = 0x125FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125FC8u);
        ctx->pc = 0x125FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC0u;
        // 0x125fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FC0u, 0x125FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125FC8u;
label_125fc8:
    // 0x125fc8: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
label_125fcc:
    if (ctx->pc == 0x125FCCu) {
        ctx->pc = 0x125FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC8u;
        // 0x125fcc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FD0u;
        goto label_125fd0;
    }
    ctx->pc = 0x125FC8u;
    {
        const bool branch_taken_0x125fc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x125FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC8u;
        // 0x125fcc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fc8) {
            ctx->pc = 0x1260B0u;
            goto label_1260b0;
        }
    }
    ctx->pc = 0x125FD0u;
label_125fd0:
    // 0x125fd0: 0xc049a9a  jal         func_126A68
label_125fd4:
    if (ctx->pc == 0x125FD4u) {
        ctx->pc = 0x125FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FD0u;
        // 0x125fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FD8u;
        goto label_125fd8;
    }
    ctx->pc = 0x125FD0u;
    SET_GPR_U32(ctx, 31, 0x125FD8u);
    ctx->pc = 0x125FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FD0u;
    // 0x125fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x125FD0u, 0x125FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FD8u;
label_125fd8:
    // 0x125fd8: 0xc136df8  jal         func_4DB7E0
label_125fdc:
    if (ctx->pc == 0x125FDCu) {
        ctx->pc = 0x125FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FD8u;
        // 0x125fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FE0u;
        goto label_125fe0;
    }
    ctx->pc = 0x125FD8u;
    SET_GPR_U32(ctx, 31, 0x125FE0u);
    ctx->pc = 0x125FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FD8u;
    // 0x125fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x125FD8u, 0x125FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FE0u;
label_125fe0:
    // 0x125fe0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x125fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_125fe4:
    // 0x125fe4: 0xc136dec  jal         func_4DB7B0
label_125fe8:
    if (ctx->pc == 0x125FE8u) {
        ctx->pc = 0x125FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FE4u;
        // 0x125fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FECu;
        goto label_125fec;
    }
    ctx->pc = 0x125FE4u;
    SET_GPR_U32(ctx, 31, 0x125FECu);
    ctx->pc = 0x125FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FE4u;
    // 0x125fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x125FE4u, 0x125FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FECu;
label_125fec:
    // 0x125fec: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x125fecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_125ff0:
    // 0x125ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125ff4:
    // 0x125ff4: 0xc04b5ea  jal         func_12D7A8
label_125ff8:
    if (ctx->pc == 0x125FF8u) {
        ctx->pc = 0x125FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FF4u;
        // 0x125ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FFCu;
        goto label_125ffc;
    }
    ctx->pc = 0x125FF4u;
    SET_GPR_U32(ctx, 31, 0x125FFCu);
    ctx->pc = 0x125FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FF4u;
    // 0x125ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x125FF4u, 0x125FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FFCu;
label_125ffc:
    // 0x125ffc: 0xc136dfa  jal         func_4DB7E8
label_126000:
    if (ctx->pc == 0x126000u) {
        ctx->pc = 0x126000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FFCu;
        // 0x126000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126004u;
        goto label_126004;
    }
    ctx->pc = 0x125FFCu;
    SET_GPR_U32(ctx, 31, 0x126004u);
    ctx->pc = 0x126000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FFCu;
    // 0x126000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x125FFCu, 0x126004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126004u;
label_126004:
    // 0x126004: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x126004u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_126008:
    // 0x126008: 0xc04953c  jal         func_1254F0
label_12600c:
    if (ctx->pc == 0x12600Cu) {
        ctx->pc = 0x12600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126008u;
        // 0x12600c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126010u;
        goto label_126010;
    }
    ctx->pc = 0x126008u;
    SET_GPR_U32(ctx, 31, 0x126010u);
    ctx->pc = 0x12600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126008u;
    // 0x12600c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x126008u, 0x126010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126010u;
label_126010:
    // 0x126010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126014:
    // 0x126014: 0xc047e78  jal         func_11F9E0
label_126018:
    if (ctx->pc == 0x126018u) {
        ctx->pc = 0x126018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126014u;
        // 0x126018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12601Cu;
        goto label_12601c;
    }
    ctx->pc = 0x126014u;
    SET_GPR_U32(ctx, 31, 0x12601Cu);
    ctx->pc = 0x126018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126014u;
    // 0x126018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x126014u, 0x12601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12601Cu;
label_12601c:
    // 0x12601c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126020:
    // 0x126020: 0xc136df8  jal         func_4DB7E0
label_126024:
    if (ctx->pc == 0x126024u) {
        ctx->pc = 0x126024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126020u;
        // 0x126024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126028u;
        goto label_126028;
    }
    ctx->pc = 0x126020u;
    SET_GPR_U32(ctx, 31, 0x126028u);
    ctx->pc = 0x126024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126020u;
    // 0x126024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x126020u, 0x126028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126028u;
label_126028:
    // 0x126028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12602c:
    // 0x12602c: 0xc136dec  jal         func_4DB7B0
label_126030:
    if (ctx->pc == 0x126030u) {
        ctx->pc = 0x126030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12602Cu;
        // 0x126030: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126034u;
        goto label_126034;
    }
    ctx->pc = 0x12602Cu;
    SET_GPR_U32(ctx, 31, 0x126034u);
    ctx->pc = 0x126030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12602Cu;
    // 0x126030: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x12602Cu, 0x126034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126034u;
label_126034:
    // 0x126034: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x126034u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_126038:
    // 0x126038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12603c:
    // 0x12603c: 0xc04b5ea  jal         func_12D7A8
label_126040:
    if (ctx->pc == 0x126040u) {
        ctx->pc = 0x126040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12603Cu;
        // 0x126040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126044u;
        goto label_126044;
    }
    ctx->pc = 0x12603Cu;
    SET_GPR_U32(ctx, 31, 0x126044u);
    ctx->pc = 0x126040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12603Cu;
    // 0x126040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x12603Cu, 0x126044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126044u;
label_126044:
    // 0x126044: 0xc136dfa  jal         func_4DB7E8
label_126048:
    if (ctx->pc == 0x126048u) {
        ctx->pc = 0x126048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126044u;
        // 0x126048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12604Cu;
        goto label_12604c;
    }
    ctx->pc = 0x126044u;
    SET_GPR_U32(ctx, 31, 0x12604Cu);
    ctx->pc = 0x126048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126044u;
    // 0x126048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x126044u, 0x12604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12604Cu;
label_12604c:
    // 0x12604c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126050:
    // 0x126050: 0xc04953c  jal         func_1254F0
label_126054:
    if (ctx->pc == 0x126054u) {
        ctx->pc = 0x126054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126050u;
        // 0x126054: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126058u;
        goto label_126058;
    }
    ctx->pc = 0x126050u;
    SET_GPR_U32(ctx, 31, 0x126058u);
    ctx->pc = 0x126054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126050u;
    // 0x126054: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x126050u, 0x126058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126058u;
label_126058:
    // 0x126058: 0xc047e6c  jal         func_11F9B0
label_12605c:
    if (ctx->pc == 0x12605Cu) {
        ctx->pc = 0x12605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126058u;
        // 0x12605c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126060u;
        goto label_126060;
    }
    ctx->pc = 0x126058u;
    SET_GPR_U32(ctx, 31, 0x126060u);
    ctx->pc = 0x12605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126058u;
    // 0x12605c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x126058u, 0x126060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126060u;
label_126060:
    // 0x126060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126064:
    // 0x126064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126068:
    // 0x126068: 0xc047e78  jal         func_11F9E0
label_12606c:
    if (ctx->pc == 0x12606Cu) {
        ctx->pc = 0x12606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126068u;
        // 0x12606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126070u;
        goto label_126070;
    }
    ctx->pc = 0x126068u;
    SET_GPR_U32(ctx, 31, 0x126070u);
    ctx->pc = 0x12606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126068u;
    // 0x12606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x126068u, 0x126070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126070u;
label_126070:
    // 0x126070: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_126074:
    if (ctx->pc == 0x126074u) {
        ctx->pc = 0x126074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126070u;
        // 0x126074: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126078u;
        goto label_126078;
    }
    ctx->pc = 0x126070u;
    {
        const bool branch_taken_0x126070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x126074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126070u;
        // 0x126074: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126070) {
            ctx->pc = 0x1260B0u;
            goto label_1260b0;
        }
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12607c:
    // 0x12607c: 0xc047e78  jal         func_11F9E0
label_126080:
    if (ctx->pc == 0x126080u) {
        ctx->pc = 0x126080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12607Cu;
        // 0x126080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126084u;
        goto label_126084;
    }
    ctx->pc = 0x12607Cu;
    SET_GPR_U32(ctx, 31, 0x126084u);
    ctx->pc = 0x126080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12607Cu;
    // 0x126080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12607Cu, 0x126084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126084u;
label_126084:
    // 0x126084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126088:
    // 0x126088: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x126088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12608c:
    // 0x12608c: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_126090:
    // 0x126090: 0xa0f809  jalr        $a1
label_126094:
    if (ctx->pc == 0x126094u) {
        ctx->pc = 0x126094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126090u;
        // 0x126094: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126098u;
        goto label_126098;
    }
    ctx->pc = 0x126090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x126098u);
        ctx->pc = 0x126094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126090u;
        // 0x126094: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126090u, 0x126098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126098u;
label_126098:
    // 0x126098: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x126098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12609c:
    // 0x12609c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1260a0:
    // 0x1260a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1260a4:
    // 0x1260a4: 0xc04957e  jal         func_1255F8
label_1260a8:
    if (ctx->pc == 0x1260A8u) {
        ctx->pc = 0x1260A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260A4u;
        // 0x1260a8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260ACu;
        goto label_1260ac;
    }
    ctx->pc = 0x1260A4u;
    SET_GPR_U32(ctx, 31, 0x1260ACu);
    ctx->pc = 0x1260A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260A4u;
    // 0x1260a8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1255F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1255F8u, 0x1260A4u, 0x1260ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260ACu;
label_1260ac:
    // 0x1260ac: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1260b0:
    // 0x1260b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260b4:
    // 0x1260b4: 0xc4408a9c  lwc1        $f0, -0x7564($v0)
    ctx->pc = 0x1260b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1260b8:
    // 0x1260b8: 0xa223046c  sb          $v1, 0x46C($s1)
    ctx->pc = 0x1260b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1132), (uint8_t)GPR_U32(ctx, 3));
label_1260bc:
    // 0x1260bc: 0xe620043c  swc1        $f0, 0x43C($s1)
    ctx->pc = 0x1260bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1084), bits); }
label_1260c0:
    // 0x1260c0: 0xa2200463  sb          $zero, 0x463($s1)
    ctx->pc = 0x1260c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1123), (uint8_t)GPR_U32(ctx, 0));
label_1260c4:
    // 0x1260c4: 0xa2200462  sb          $zero, 0x462($s1)
    ctx->pc = 0x1260c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1122), (uint8_t)GPR_U32(ctx, 0));
label_1260c8:
    // 0x1260c8: 0xa2200464  sb          $zero, 0x464($s1)
    ctx->pc = 0x1260c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1124), (uint8_t)GPR_U32(ctx, 0));
label_1260cc:
    // 0x1260cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1260ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1260d0:
    // 0x1260d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1260d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1260d4:
    // 0x1260d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1260d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1260d8:
    // 0x1260d8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1260d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1260dc:
    // 0x1260dc: 0x3e00008  jr          $ra
label_1260e0:
    if (ctx->pc == 0x1260E0u) {
        ctx->pc = 0x1260E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260DCu;
        // 0x1260e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260E4u;
        goto label_1260e4;
    }
    ctx->pc = 0x1260DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260DCu;
        // 0x1260e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1260DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1260E4u;
label_1260e4:
    // 0x1260e4: 0x0  nop
    ctx->pc = 0x1260e4u;
    // NOP
    ctx->pc = 0x1260e8u;
}
