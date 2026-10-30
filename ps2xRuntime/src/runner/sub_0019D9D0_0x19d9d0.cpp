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

// Function: sub_0019D9D0
// Address: 0x19d9d0 - 0x19dbe8
void sub_0019D9D0_0x19d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D9D0_0x19d9d0");
#endif

    switch (ctx->pc) {
        case 0x19d9d0u: goto label_19d9d0;
        case 0x19d9d4u: goto label_19d9d4;
        case 0x19d9d8u: goto label_19d9d8;
        case 0x19d9dcu: goto label_19d9dc;
        case 0x19d9e0u: goto label_19d9e0;
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19d9ecu: goto label_19d9ec;
        case 0x19d9f0u: goto label_19d9f0;
        case 0x19d9f4u: goto label_19d9f4;
        case 0x19d9f8u: goto label_19d9f8;
        case 0x19d9fcu: goto label_19d9fc;
        case 0x19da00u: goto label_19da00;
        case 0x19da04u: goto label_19da04;
        case 0x19da08u: goto label_19da08;
        case 0x19da0cu: goto label_19da0c;
        case 0x19da10u: goto label_19da10;
        case 0x19da14u: goto label_19da14;
        case 0x19da18u: goto label_19da18;
        case 0x19da1cu: goto label_19da1c;
        case 0x19da20u: goto label_19da20;
        case 0x19da24u: goto label_19da24;
        case 0x19da28u: goto label_19da28;
        case 0x19da2cu: goto label_19da2c;
        case 0x19da30u: goto label_19da30;
        case 0x19da34u: goto label_19da34;
        case 0x19da38u: goto label_19da38;
        case 0x19da3cu: goto label_19da3c;
        case 0x19da40u: goto label_19da40;
        case 0x19da44u: goto label_19da44;
        case 0x19da48u: goto label_19da48;
        case 0x19da4cu: goto label_19da4c;
        case 0x19da50u: goto label_19da50;
        case 0x19da54u: goto label_19da54;
        case 0x19da58u: goto label_19da58;
        case 0x19da5cu: goto label_19da5c;
        case 0x19da60u: goto label_19da60;
        case 0x19da64u: goto label_19da64;
        case 0x19da68u: goto label_19da68;
        case 0x19da6cu: goto label_19da6c;
        case 0x19da70u: goto label_19da70;
        case 0x19da74u: goto label_19da74;
        case 0x19da78u: goto label_19da78;
        case 0x19da7cu: goto label_19da7c;
        case 0x19da80u: goto label_19da80;
        case 0x19da84u: goto label_19da84;
        case 0x19da88u: goto label_19da88;
        case 0x19da8cu: goto label_19da8c;
        case 0x19da90u: goto label_19da90;
        case 0x19da94u: goto label_19da94;
        case 0x19da98u: goto label_19da98;
        case 0x19da9cu: goto label_19da9c;
        case 0x19daa0u: goto label_19daa0;
        case 0x19daa4u: goto label_19daa4;
        case 0x19daa8u: goto label_19daa8;
        case 0x19daacu: goto label_19daac;
        case 0x19dab0u: goto label_19dab0;
        case 0x19dab4u: goto label_19dab4;
        case 0x19dab8u: goto label_19dab8;
        case 0x19dabcu: goto label_19dabc;
        case 0x19dac0u: goto label_19dac0;
        case 0x19dac4u: goto label_19dac4;
        case 0x19dac8u: goto label_19dac8;
        case 0x19daccu: goto label_19dacc;
        case 0x19dad0u: goto label_19dad0;
        case 0x19dad4u: goto label_19dad4;
        case 0x19dad8u: goto label_19dad8;
        case 0x19dadcu: goto label_19dadc;
        case 0x19dae0u: goto label_19dae0;
        case 0x19dae4u: goto label_19dae4;
        case 0x19dae8u: goto label_19dae8;
        case 0x19daecu: goto label_19daec;
        case 0x19daf0u: goto label_19daf0;
        case 0x19daf4u: goto label_19daf4;
        case 0x19daf8u: goto label_19daf8;
        case 0x19dafcu: goto label_19dafc;
        case 0x19db00u: goto label_19db00;
        case 0x19db04u: goto label_19db04;
        case 0x19db08u: goto label_19db08;
        case 0x19db0cu: goto label_19db0c;
        case 0x19db10u: goto label_19db10;
        case 0x19db14u: goto label_19db14;
        case 0x19db18u: goto label_19db18;
        case 0x19db1cu: goto label_19db1c;
        case 0x19db20u: goto label_19db20;
        case 0x19db24u: goto label_19db24;
        case 0x19db28u: goto label_19db28;
        case 0x19db2cu: goto label_19db2c;
        case 0x19db30u: goto label_19db30;
        case 0x19db34u: goto label_19db34;
        case 0x19db38u: goto label_19db38;
        case 0x19db3cu: goto label_19db3c;
        case 0x19db40u: goto label_19db40;
        case 0x19db44u: goto label_19db44;
        case 0x19db48u: goto label_19db48;
        case 0x19db4cu: goto label_19db4c;
        case 0x19db50u: goto label_19db50;
        case 0x19db54u: goto label_19db54;
        case 0x19db58u: goto label_19db58;
        case 0x19db5cu: goto label_19db5c;
        case 0x19db60u: goto label_19db60;
        case 0x19db64u: goto label_19db64;
        case 0x19db68u: goto label_19db68;
        case 0x19db6cu: goto label_19db6c;
        case 0x19db70u: goto label_19db70;
        case 0x19db74u: goto label_19db74;
        case 0x19db78u: goto label_19db78;
        case 0x19db7cu: goto label_19db7c;
        case 0x19db80u: goto label_19db80;
        case 0x19db84u: goto label_19db84;
        case 0x19db88u: goto label_19db88;
        case 0x19db8cu: goto label_19db8c;
        case 0x19db90u: goto label_19db90;
        case 0x19db94u: goto label_19db94;
        case 0x19db98u: goto label_19db98;
        case 0x19db9cu: goto label_19db9c;
        case 0x19dba0u: goto label_19dba0;
        case 0x19dba4u: goto label_19dba4;
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbacu: goto label_19dbac;
        case 0x19dbb0u: goto label_19dbb0;
        case 0x19dbb4u: goto label_19dbb4;
        case 0x19dbb8u: goto label_19dbb8;
        case 0x19dbbcu: goto label_19dbbc;
        case 0x19dbc0u: goto label_19dbc0;
        case 0x19dbc4u: goto label_19dbc4;
        case 0x19dbc8u: goto label_19dbc8;
        case 0x19dbccu: goto label_19dbcc;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbd4u: goto label_19dbd4;
        case 0x19dbd8u: goto label_19dbd8;
        case 0x19dbdcu: goto label_19dbdc;
        case 0x19dbe0u: goto label_19dbe0;
        case 0x19dbe4u: goto label_19dbe4;
        default: break;
    }

    ctx->pc = 0x19d9d0u;

label_19d9d0:
    // 0x19d9d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19d9d4:
    // 0x19d9d4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_19d9d8:
    // 0x19d9d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_19d9dc:
    // 0x19d9dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d9e0:
    // 0x19d9e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_19d9e4:
    // 0x19d9e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19d9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d9e8:
    // 0x19d9e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_19d9ec:
    // 0x19d9ec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_19d9f0:
    // 0x19d9f0: 0xc047e6c  jal         func_11F9B0
label_19d9f4:
    if (ctx->pc == 0x19D9F4u) {
        ctx->pc = 0x19D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9F0u;
        // 0x19d9f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9F8u;
        goto label_19d9f8;
    }
    ctx->pc = 0x19D9F0u;
    SET_GPR_U32(ctx, 31, 0x19D9F8u);
    ctx->pc = 0x19D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9F0u;
    // 0x19d9f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19D9F0u, 0x19D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9F8u;
label_19d9f8:
    // 0x19d9f8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x19d9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19d9fc:
    // 0x19d9fc: 0xc047e6c  jal         func_11F9B0
label_19da00:
    if (ctx->pc == 0x19DA00u) {
        ctx->pc = 0x19DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9FCu;
        // 0x19da00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA04u;
        goto label_19da04;
    }
    ctx->pc = 0x19D9FCu;
    SET_GPR_U32(ctx, 31, 0x19DA04u);
    ctx->pc = 0x19DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9FCu;
    // 0x19da00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19D9FCu, 0x19DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA04u;
label_19da04:
    // 0x19da04: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19da08:
    // 0x19da08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19da08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19da0c:
    // 0x19da0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19da0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19da10:
    // 0x19da10: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_19da14:
    // 0x19da14: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_19da18:
    // 0x19da18: 0xc0f809  jalr        $a2
label_19da1c:
    if (ctx->pc == 0x19DA1Cu) {
        ctx->pc = 0x19DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA18u;
        // 0x19da1c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA20u;
        goto label_19da20;
    }
    ctx->pc = 0x19DA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19DA20u);
        ctx->pc = 0x19DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA18u;
        // 0x19da1c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA18u, 0x19DA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DA20u;
label_19da20:
    // 0x19da20: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x19da20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19da24:
    // 0x19da24: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19da28:
    // 0x19da28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19da28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19da2c:
    // 0x19da2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19da2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19da30:
    // 0x19da30: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x19da30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19da34:
    // 0x19da34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19da34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19da38:
    // 0x19da38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19da38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19da3c:
    // 0x19da3c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x19da3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19da40:
    // 0x19da40: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x19da40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_19da44:
    // 0x19da44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19da44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19da48:
    // 0x19da48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19da48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19da4c:
    // 0x19da4c: 0x0  nop
    ctx->pc = 0x19da4cu;
    // NOP
label_19da50:
    // 0x19da50: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x19da50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19da54:
    // 0x19da54: 0x0  nop
    ctx->pc = 0x19da54u;
    // NOP
label_19da58:
    // 0x19da58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19da5c:
    if (ctx->pc == 0x19DA5Cu) {
        ctx->pc = 0x19DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA58u;
        // 0x19da5c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA60u;
        goto label_19da60;
    }
    ctx->pc = 0x19DA58u;
    {
        const bool branch_taken_0x19da58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA58u;
        // 0x19da5c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da58) {
            ctx->pc = 0x19DA80u;
            goto label_19da80;
        }
    }
    ctx->pc = 0x19DA60u;
label_19da60:
    // 0x19da60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19da64:
    // 0x19da64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19da64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19da68:
    // 0x19da68: 0x0  nop
    ctx->pc = 0x19da68u;
    // NOP
label_19da6c:
    // 0x19da6c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x19da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19da70:
    // 0x19da70: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x19da70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19da74:
    // 0x19da74: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x19da74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19da78:
    // 0x19da78: 0x1000000d  b           . + 4 + (0xD << 2)
label_19da7c:
    if (ctx->pc == 0x19DA7Cu) {
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA80u;
        goto label_19da80;
    }
    ctx->pc = 0x19DA78u;
    {
        const bool branch_taken_0x19da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da78) {
            ctx->pc = 0x19DAB0u;
            goto label_19dab0;
        }
    }
    ctx->pc = 0x19DA80u;
label_19da80:
    // 0x19da80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19da80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19da84:
    // 0x19da84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19da84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19da88:
    // 0x19da88: 0x0  nop
    ctx->pc = 0x19da88u;
    // NOP
label_19da8c:
    // 0x19da8c: 0x0  nop
    ctx->pc = 0x19da8cu;
    // NOP
label_19da90:
    // 0x19da90: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x19da90u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_19da94:
    // 0x19da94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19da94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19da98:
    // 0x19da98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19da98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19da9c:
    // 0x19da9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19da9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19daa0:
    // 0x19daa0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x19daa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19daa4:
    // 0x19daa4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19daa4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_19daa8:
    // 0x19daa8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x19daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_19daac:
    // 0x19daac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x19daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_19dab0:
    // 0x19dab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19dab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19dab4:
    // 0x19dab4: 0xc0cd8ec  jal         func_3363B0
label_19dab8:
    if (ctx->pc == 0x19DAB8u) {
        ctx->pc = 0x19DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAB4u;
        // 0x19dab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DABCu;
        goto label_19dabc;
    }
    ctx->pc = 0x19DAB4u;
    SET_GPR_U32(ctx, 31, 0x19DABCu);
    ctx->pc = 0x19DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAB4u;
    // 0x19dab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x19DAB4u, 0x19DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DABCu;
label_19dabc:
    // 0x19dabc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x19dabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19dac0:
    // 0x19dac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19dac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19dac4:
    // 0x19dac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19dac8:
    // 0x19dac8: 0xc0cd916  jal         func_336458
label_19dacc:
    if (ctx->pc == 0x19DACCu) {
        ctx->pc = 0x19DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAC8u;
        // 0x19dacc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAD0u;
        goto label_19dad0;
    }
    ctx->pc = 0x19DAC8u;
    SET_GPR_U32(ctx, 31, 0x19DAD0u);
    ctx->pc = 0x19DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAC8u;
    // 0x19dacc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336458u, 0x19DAC8u, 0x19DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAD0u;
label_19dad0:
    // 0x19dad0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dad4:
    // 0x19dad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19dad8:
    // 0x19dad8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19dadc:
    // 0x19dadc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x19dadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19dae0:
    // 0x19dae0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x19dae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_19dae4:
    // 0x19dae4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x19dae4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_19dae8:
    // 0x19dae8: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x19dae8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19daec:
    // 0x19daec: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x19daecu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_19daf0:
    // 0x19daf0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x19daf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_19daf4:
    // 0x19daf4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19daf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19daf8:
    // 0x19daf8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19daf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19dafc:
    // 0x19dafc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x19dafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19db00:
    // 0x19db00: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x19db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_19db04:
    // 0x19db04: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19db04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19db08:
    // 0x19db08: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x19db08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_19db0c:
    // 0x19db0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19db0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19db10:
    // 0x19db10: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19db10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19db14:
    // 0x19db14: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x19db14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19db18:
    // 0x19db18: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x19db18u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_19db1c:
    // 0x19db1c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19db20:
    // 0x19db20: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x19db20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_19db24:
    // 0x19db24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19db24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19db28:
    // 0x19db28: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x19db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19db2c:
    // 0x19db2c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19db30:
    // 0x19db30: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x19db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19db34:
    // 0x19db34: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x19db34u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_19db38:
    // 0x19db38: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x19db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19db3c:
    // 0x19db3c: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x19db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19db40:
    // 0x19db40: 0xe6250020  swc1        $f5, 0x20($s1)
    ctx->pc = 0x19db40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_19db44:
    // 0x19db44: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x19db44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_19db48:
    // 0x19db48: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x19db48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_19db4c:
    // 0x19db4c: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x19db4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_19db50:
    // 0x19db50: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x19db50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_19db54:
    // 0x19db54: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x19db54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19db58:
    // 0x19db58: 0xe6270004  swc1        $f7, 0x4($s1)
    ctx->pc = 0x19db58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_19db5c:
    // 0x19db5c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x19db5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_19db60:
    // 0x19db60: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x19db60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_19db64:
    // 0x19db64: 0x7a250010  lq          $a1, 0x10($s1)
    ctx->pc = 0x19db64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_19db68:
    // 0x19db68: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x19db68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_19db6c:
    // 0x19db6c: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x19db6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_19db70:
    // 0x19db70: 0x7e2300b0  sq          $v1, 0xB0($s1)
    ctx->pc = 0x19db70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 3));
label_19db74:
    // 0x19db74: 0x7e2500a0  sq          $a1, 0xA0($s1)
    ctx->pc = 0x19db74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 5));
label_19db78:
    // 0x19db78: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x19db78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
label_19db7c:
    // 0x19db7c: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x19db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_19db80:
    // 0x19db80: 0x7e2600c0  sq          $a2, 0xC0($s1)
    ctx->pc = 0x19db80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 6));
label_19db84:
    // 0x19db84: 0xc0671d0  jal         func_19C740
label_19db88:
    if (ctx->pc == 0x19DB88u) {
        ctx->pc = 0x19DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB84u;
        // 0x19db88: 0xae330080  sw          $s3, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB8Cu;
        goto label_19db8c;
    }
    ctx->pc = 0x19DB84u;
    SET_GPR_U32(ctx, 31, 0x19DB8Cu);
    ctx->pc = 0x19DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB84u;
    // 0x19db88: 0xae330080  sw          $s3, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C740u, 0x19DB84u, 0x19DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB8Cu;
label_19db8c:
    // 0x19db8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19db8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19db90:
    // 0x19db90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19db94:
    // 0x19db94: 0xc067382  jal         func_19CE08
label_19db98:
    if (ctx->pc == 0x19DB98u) {
        ctx->pc = 0x19DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB94u;
        // 0x19db98: 0xae2232f8  sw          $v0, 0x32F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 13048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB9Cu;
        goto label_19db9c;
    }
    ctx->pc = 0x19DB94u;
    SET_GPR_U32(ctx, 31, 0x19DB9Cu);
    ctx->pc = 0x19DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB94u;
    // 0x19db98: 0xae2232f8  sw          $v0, 0x32F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 13048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE08u, 0x19DB94u, 0x19DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB9Cu;
label_19db9c:
    // 0x19db9c: 0x8e23330c  lw          $v1, 0x330C($s1)
    ctx->pc = 0x19db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13068)));
label_19dba0:
    // 0x19dba0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19dba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19dba4:
    // 0x19dba4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x19dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19dba8:
    // 0x19dba8: 0xa0f809  jalr        $a1
label_19dbac:
    if (ctx->pc == 0x19DBACu) {
        ctx->pc = 0x19DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBA8u;
        // 0x19dbac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBB0u;
        goto label_19dbb0;
    }
    ctx->pc = 0x19DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19DBB0u);
        ctx->pc = 0x19DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBA8u;
        // 0x19dbac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBA8u, 0x19DBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DBB0u;
label_19dbb0:
    // 0x19dbb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19dbb4:
    // 0x19dbb4: 0x8c43cf4c  lw          $v1, -0x30B4($v0)
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954828)));
label_19dbb8:
    // 0x19dbb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19dbbc:
    if (ctx->pc == 0x19DBBCu) {
        ctx->pc = 0x19DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB8u;
        // 0x19dbbc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBC0u;
        goto label_19dbc0;
    }
    ctx->pc = 0x19DBB8u;
    {
        const bool branch_taken_0x19dbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB8u;
        // 0x19dbbc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbb8) {
            ctx->pc = 0x19DBCCu;
            goto label_19dbcc;
        }
    }
    ctx->pc = 0x19DBC0u;
label_19dbc0:
    // 0x19dbc0: 0xc067714  jal         func_19DC50
label_19dbc4:
    if (ctx->pc == 0x19DBC4u) {
        ctx->pc = 0x19DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBC0u;
        // 0x19dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBC8u;
        goto label_19dbc8;
    }
    ctx->pc = 0x19DBC0u;
    SET_GPR_U32(ctx, 31, 0x19DBC8u);
    ctx->pc = 0x19DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBC0u;
    // 0x19dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC50u, 0x19DBC0u, 0x19DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBC8u;
label_19dbc8:
    // 0x19dbc8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19dbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19dbcc:
    // 0x19dbcc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19dbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19dbd0:
    // 0x19dbd0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19dbd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19dbd4:
    // 0x19dbd4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19dbd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19dbd8:
    // 0x19dbd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19dbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19dbdc:
    // 0x19dbdc: 0x3e00008  jr          $ra
label_19dbe0:
    if (ctx->pc == 0x19DBE0u) {
        ctx->pc = 0x19DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBDCu;
        // 0x19dbe0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBE4u;
        goto label_19dbe4;
    }
    ctx->pc = 0x19DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBDCu;
        // 0x19dbe0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DBE4u;
label_19dbe4:
    // 0x19dbe4: 0x0  nop
    ctx->pc = 0x19dbe4u;
    // NOP
    ctx->pc = 0x19dbe8u;
}
