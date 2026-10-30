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

// Function: sub_0024FBF8
// Address: 0x24fbf8 - 0x250100
void sub_0024FBF8_0x24fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBF8_0x24fbf8");
#endif

    switch (ctx->pc) {
        case 0x24fc8cu: goto label_24fc8c;
        case 0x24fcc0u: goto label_24fcc0;
        case 0x24fcd0u: goto label_24fcd0;
        case 0x24fd08u: goto label_24fd08;
        case 0x24fe60u: goto label_24fe60;
        case 0x24fe68u: goto label_24fe68;
        case 0x24febcu: goto label_24febc;
        case 0x24ff70u: goto label_24ff70;
        case 0x24ffb4u: goto label_24ffb4;
        default: break;
    }

    ctx->pc = 0x24fbf8u;

    // 0x24fbf8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x24fbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x24fbfc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x24fbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x24fc00: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x24fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x24fc04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24fc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc08: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x24fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x24fc0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24fc0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc10: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x24fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x24fc14: 0x30feffff  andi        $fp, $a3, 0xFFFF
    ctx->pc = 0x24fc14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x24fc18: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x24fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x24fc1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24fc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc20: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x24fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x24fc24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x24fc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fc28: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x24fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x24fc2c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x24fc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24fc30: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x24fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x24fc34: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x24fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x24fc38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24fc3c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x24fc3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24fc40: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x24fc40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24fc44: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x24fc44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24fc48: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x24fc48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24fc4c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24fc50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc54: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x24fc54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24fc58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24fc58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24fc5c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x24fc5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24fc60: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x24fc60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24fc64: 0x4bc3112f  vmini.xyz   $vf4, $vf2, $vf3
    ctx->pc = 0x24fc64u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24fc68: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x24fc68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24fc6c: 0x4bc3116b  vmax.xyz    $vf5, $vf2, $vf3
    ctx->pc = 0x24fc6cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24fc70: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x24fc70u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24fc74: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x24fc74u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x24fc78: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x24fc7c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x24fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x24fc80: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x24fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x24fc84: 0xc0887e0  jal         func_221F80
    ctx->pc = 0x24FC84u;
    SET_GPR_U32(ctx, 31, 0x24FC8Cu);
    ctx->pc = 0x24FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC84u;
    // 0x24fc88: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221F80u, 0x24FC84u, 0x24FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC8Cu;
label_24fc8c:
    // 0x24fc8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fc90: 0x1043010b  beq         $v0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x24FC90u;
    {
        const bool branch_taken_0x24fc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC90u;
        // 0x24fc94: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc90) {
            ctx->pc = 0x2500C0u;
            goto label_2500c0;
        }
    }
    ctx->pc = 0x24FC98u;
    // 0x24fc98: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x24fc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x24fc9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fca0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24fca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fca8: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x24fca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24fcac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24fcb0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24fcb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24fcb4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24fcb8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24fcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24fcbc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x24fcbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_24fcc0:
    // 0x24fcc0: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x24FCC0u;
    {
        const bool branch_taken_0x24fcc0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fcc0) {
            ctx->pc = 0x24FCECu;
            goto label_24fcec;
        }
    }
    ctx->pc = 0x24FCC8u;
    // 0x24fcc8: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24FCC8u;
    SET_GPR_U32(ctx, 31, 0x24FCD0u);
    ctx->pc = 0x24FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FCC8u;
    // 0x24fccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24FCC8u, 0x24FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCD0u;
label_24fcd0:
    // 0x24fcd0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fcd4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x24fcd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fcd8: 0x0  nop
    ctx->pc = 0x24fcd8u;
    // NOP
    // 0x24fcdc: 0x450100f4  bc1t        . + 4 + (0xF4 << 2)
    ctx->pc = 0x24FCDCu;
    {
        const bool branch_taken_0x24fcdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCDCu;
        // 0x24fce0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcdc) {
            ctx->pc = 0x2500B0u;
            goto label_2500b0;
        }
    }
    ctx->pc = 0x24FCE4u;
    // 0x24fce4: 0x120000f7  beqz        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x24FCE4u;
    {
        const bool branch_taken_0x24fce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCE4u;
        // 0x24fce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fce4) {
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x24FCECu;
label_24fcec:
    // 0x24fcec: 0x120000cc  beqz        $s0, . + 4 + (0xCC << 2)
    ctx->pc = 0x24FCECu;
    {
        const bool branch_taken_0x24fcec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCECu;
        // 0x24fcf0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcec) {
            ctx->pc = 0x250020u;
            goto label_250020;
        }
    }
    ctx->pc = 0x24FCF4u;
    // 0x24fcf4: 0x3c01417f  lui         $at, 0x417F
    ctx->pc = 0x24fcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16767 << 16));
    // 0x24fcf8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x24fcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x24fcfc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24fcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24fd00: 0x96030048  lhu         $v1, 0x48($s0)
    ctx->pc = 0x24fd00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24fd04: 0x0  nop
    ctx->pc = 0x24fd04u;
    // NOP
label_24fd08:
    // 0x24fd08: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x24fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x24fd0c: 0x544000c2  bnel        $v0, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x24FD0Cu;
    {
        const bool branch_taken_0x24fd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fd0c) {
            ctx->pc = 0x24FD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD0Cu;
            // 0x24fd10: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD14u;
    // 0x24fd14: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24fd18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24fd18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24fd1c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x24fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x24fd20: 0x544000bd  bnel        $v0, $zero, . + 4 + (0xBD << 2)
    ctx->pc = 0x24FD20u;
    {
        const bool branch_taken_0x24fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fd20) {
            ctx->pc = 0x24FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD20u;
            // 0x24fd24: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD28u;
    // 0x24fd28: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x24fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fd2c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fd30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd34: 0x0  nop
    ctx->pc = 0x24fd34u;
    // NOP
    // 0x24fd38: 0x450300b7  bc1tl       . + 4 + (0xB7 << 2)
    ctx->pc = 0x24FD38u;
    {
        const bool branch_taken_0x24fd38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd38) {
            ctx->pc = 0x24FD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD38u;
            // 0x24fd3c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD40u;
    // 0x24fd40: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fd44: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x24fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fd48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd4c: 0x0  nop
    ctx->pc = 0x24fd4cu;
    // NOP
    // 0x24fd50: 0x450300b1  bc1tl       . + 4 + (0xB1 << 2)
    ctx->pc = 0x24FD50u;
    {
        const bool branch_taken_0x24fd50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd50) {
            ctx->pc = 0x24FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD50u;
            // 0x24fd54: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD58u;
    // 0x24fd58: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x24fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fd5c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fd60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24fd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd64: 0x0  nop
    ctx->pc = 0x24fd64u;
    // NOP
    // 0x24fd68: 0x450300ab  bc1tl       . + 4 + (0xAB << 2)
    ctx->pc = 0x24FD68u;
    {
        const bool branch_taken_0x24fd68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd68) {
            ctx->pc = 0x24FD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD68u;
            // 0x24fd6c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD70u;
    // 0x24fd70: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x24fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fd74: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x24fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fd78: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x24fd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd7c: 0x0  nop
    ctx->pc = 0x24fd7cu;
    // NOP
    // 0x24fd80: 0x450300a5  bc1tl       . + 4 + (0xA5 << 2)
    ctx->pc = 0x24FD80u;
    {
        const bool branch_taken_0x24fd80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd80) {
            ctx->pc = 0x24FD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD80u;
            // 0x24fd84: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FD88u;
    // 0x24fd88: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24fd8c: 0x4400070  bltz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x24FD8Cu;
    {
        const bool branch_taken_0x24fd8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD8Cu;
        // 0x24fd90: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd8c) {
            ctx->pc = 0x24FF50u;
            goto label_24ff50;
        }
    }
    ctx->pc = 0x24FD94u;
    // 0x24fd94: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x24fd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fd98: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24fd98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24fd9c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x24fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fda0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24fda0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24fda4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x24fda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24fda8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x24fda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x24fdac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24fdacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24fdb0: 0x0  nop
    ctx->pc = 0x24fdb0u;
    // NOP
    // 0x24fdb4: 0x0  nop
    ctx->pc = 0x24fdb4u;
    // NOP
    // 0x24fdb8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x24fdb8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x24fdbc: 0x0  nop
    ctx->pc = 0x24fdbcu;
    // NOP
    // 0x24fdc0: 0x0  nop
    ctx->pc = 0x24fdc0u;
    // NOP
    // 0x24fdc4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24fdc4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x24fdc8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fdc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24fdcc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24fdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24fdd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fdd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24fdd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24fdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24fdd8: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x24fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24fddc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FDDCu;
    {
        const bool branch_taken_0x24fddc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDDCu;
        // 0x24fde0: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fddc) {
            ctx->pc = 0x24FDF0u;
            goto label_24fdf0;
        }
    }
    ctx->pc = 0x24FDE4u;
    // 0x24fde4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24fde8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x24fdec: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24fdecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_24fdf0:
    // 0x24fdf0: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x24FDF0u;
    {
        const bool branch_taken_0x24fdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDF0u;
        // 0x24fdf4: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdf0) {
            ctx->pc = 0x250014u;
            goto label_250014;
        }
    }
    ctx->pc = 0x24FDF8u;
    // 0x24fdf8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x24fdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24fdfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FDFCu;
    {
        const bool branch_taken_0x24fdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDFCu;
        // 0x24fe00: 0x2482000f  addiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdfc) {
            ctx->pc = 0x24FE08u;
            goto label_24fe08;
        }
    }
    ctx->pc = 0x24FE04u;
    // 0x24fe04: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x24fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24fe08:
    // 0x24fe08: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE08u;
    {
        const bool branch_taken_0x24fe08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE08u;
        // 0x24fe0c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe08) {
            ctx->pc = 0x24FE20u;
            goto label_24fe20;
        }
    }
    ctx->pc = 0x24FE10u;
    // 0x24fe10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24fe14: 0x480007f  bltz        $a0, . + 4 + (0x7F << 2)
    ctx->pc = 0x24FE14u;
    {
        const bool branch_taken_0x24fe14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE14u;
        // 0x24fe18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe14) {
            ctx->pc = 0x250014u;
            goto label_250014;
        }
    }
    ctx->pc = 0x24FE1Cu;
    // 0x24fe1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24fe20:
    // 0x24fe20: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x24fe20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24fe24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24fe28: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x24fe2c: 0x84510028  lh          $s1, 0x28($v0)
    ctx->pc = 0x24fe2cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24fe30: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x24fe30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe34: 0x8c64a220  lw          $a0, -0x5DE0($v1)
    ctx->pc = 0x24fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CA220u));
    // 0x24fe38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x24fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24fe3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24fe40: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fe44: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FE44u;
    {
        const bool branch_taken_0x24fe44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE44u;
        // 0x24fe48: 0x8e84a220  lw          $a0, -0x5DE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe44) {
            ctx->pc = 0x24FE68u;
            goto label_24fe68;
        }
    }
    ctx->pc = 0x24FE4Cu;
    // 0x24fe4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe50: 0x4820071  bltzl       $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x24FE50u;
    {
        const bool branch_taken_0x24fe50 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x24fe50) {
            ctx->pc = 0x24FE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE50u;
            // 0x24fe54: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FE58u;
    // 0x24fe58: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x24fe58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24fe5c: 0x0  nop
    ctx->pc = 0x24fe5cu;
    // NOP
label_24fe60:
    // 0x24fe60: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24FE60u;
    {
        const bool branch_taken_0x24fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE60u;
        // 0x24fe64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe60) {
            ctx->pc = 0x24FF24u;
            goto label_24ff24;
        }
    }
    ctx->pc = 0x24FE68u;
label_24fe68:
    // 0x24fe68: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24fe6c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x24fe6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fe70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24fe70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24fe74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24fe78: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fe7c: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x24fe7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fe80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FE80u;
    {
        const bool branch_taken_0x24fe80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fe80) {
            ctx->pc = 0x24FE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE80u;
            // 0x24fe84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FE88u;
            goto label_24fe88;
        }
    }
    ctx->pc = 0x24FE88u;
label_24fe88:
    // 0x24fe88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24fe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe90: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x24fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24fe94: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24fe94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe98: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24fe98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24fe9c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x24fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x24fea0: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x24fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x24fea4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x24fea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24fea8: 0x27aa0084  addiu       $t2, $sp, 0x84
    ctx->pc = 0x24fea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x24feac: 0x3810  mfhi        $a3
    ctx->pc = 0x24feacu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24feb0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x24feb4: 0xc093a4e  jal         func_24E938
    ctx->pc = 0x24FEB4u;
    SET_GPR_U32(ctx, 31, 0x24FEBCu);
    ctx->pc = 0x24FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEB4u;
    // 0x24feb8: 0x1673821  addu        $a3, $t3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E938u, 0x24FEB4u, 0x24FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEBCu;
label_24febc:
    // 0x24febc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24FEBCu;
    {
        const bool branch_taken_0x24febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEBCu;
        // 0x24fec0: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24febc) {
            ctx->pc = 0x24FF24u;
            goto label_24ff24;
        }
    }
    ctx->pc = 0x24FEC4u;
    // 0x24fec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24fec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fecc: 0x0  nop
    ctx->pc = 0x24feccu;
    // NOP
    // 0x24fed0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24fed0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fed4: 0x0  nop
    ctx->pc = 0x24fed4u;
    // NOP
    // 0x24fed8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x24FED8u;
    {
        const bool branch_taken_0x24fed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FED8u;
        // 0x24fedc: 0x8e82a220  lw          $v0, -0x5DE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fed8) {
            ctx->pc = 0x24FF28u;
            goto label_24ff28;
        }
    }
    ctx->pc = 0x24FEE0u;
    // 0x24fee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fee4: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FEE4u;
    {
        const bool branch_taken_0x24fee4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x24FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEE4u;
        // 0x24fee8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fee4) {
            ctx->pc = 0x24FF0Cu;
            goto label_24ff0c;
        }
    }
    ctx->pc = 0x24FEECu;
    // 0x24feec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fef4: 0x0  nop
    ctx->pc = 0x24fef4u;
    // NOP
    // 0x24fef8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24FEF8u;
    {
        const bool branch_taken_0x24fef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEF8u;
        // 0x24fefc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fef8) {
            ctx->pc = 0x24FF24u;
            goto label_24ff24;
        }
    }
    ctx->pc = 0x24FF00u;
    // 0x24ff00: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24ff00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ff04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24FF04u;
    {
        const bool branch_taken_0x24ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF04u;
        // 0x24ff08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff04) {
            ctx->pc = 0x24FF24u;
            goto label_24ff24;
        }
    }
    ctx->pc = 0x24FF0Cu;
label_24ff0c:
    // 0x24ff0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ff0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ff10: 0x0  nop
    ctx->pc = 0x24ff10u;
    // NOP
    // 0x24ff14: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FF14u;
    {
        const bool branch_taken_0x24ff14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF14u;
        // 0x24ff18: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff14) {
            ctx->pc = 0x24FF24u;
            goto label_24ff24;
        }
    }
    ctx->pc = 0x24FF1Cu;
    // 0x24ff1c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x24ff1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ff20: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_24ff24:
    // 0x24ff24: 0x8e82a220  lw          $v0, -0x5DE0($s4)
    ctx->pc = 0x24ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943264)));
label_24ff28:
    // 0x24ff28: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x24ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24ff2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ff30: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ff34: 0x481ffcc  bgez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x24FF34u;
    {
        const bool branch_taken_0x24ff34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF34u;
        // 0x24ff38: 0x8e84a220  lw          $a0, -0x5DE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff34) {
            ctx->pc = 0x24FE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fe68;
        }
    }
    ctx->pc = 0x24FF3Cu;
    // 0x24ff3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff40: 0x481ffc7  bgez        $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x24FF40u;
    {
        const bool branch_taken_0x24ff40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF40u;
        // 0x24ff44: 0x2492ffff  addiu       $s2, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff40) {
            ctx->pc = 0x24FE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fe60;
        }
    }
    ctx->pc = 0x24FF48u;
    // 0x24ff48: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x24FF48u;
    {
        const bool branch_taken_0x24ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF48u;
        // 0x24ff4c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff48) {
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FF50u;
label_24ff50:
    // 0x24ff50: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x24ff50u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ff54: 0x5a200030  blezl       $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x24FF54u;
    {
        const bool branch_taken_0x24ff54 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x24ff54) {
            ctx->pc = 0x24FF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF54u;
            // 0x24ff58: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250018u;
            goto label_250018;
        }
    }
    ctx->pc = 0x24FF5Cu;
    // 0x24ff5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ff60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ff60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ff64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ff68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24ff68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x24ff6c: 0x0  nop
    ctx->pc = 0x24ff6cu;
    // NOP
label_24ff70:
    // 0x24ff70: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x24ff70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ff74: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x24ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24ff78: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x24ff78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24ff7c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24ff7cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24ff80: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x24ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x24ff84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FF84u;
    {
        const bool branch_taken_0x24ff84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ff84) {
            ctx->pc = 0x24FF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF84u;
            // 0x24ff88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF8Cu;
            goto label_24ff8c;
        }
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x24ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x24ff90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff98: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24ff98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff9c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x24ff9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24ffa0: 0x27aa0084  addiu       $t2, $sp, 0x84
    ctx->pc = 0x24ffa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x24ffa4: 0x3810  mfhi        $a3
    ctx->pc = 0x24ffa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24ffa8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x24ffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x24ffac: 0xc093a4e  jal         func_24E938
    ctx->pc = 0x24FFACu;
    SET_GPR_U32(ctx, 31, 0x24FFB4u);
    ctx->pc = 0x24FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFACu;
    // 0x24ffb0: 0x1673821  addu        $a3, $t3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E938u, 0x24FFACu, 0x24FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFB4u;
label_24ffb4:
    // 0x24ffb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24FFB4u;
    {
        const bool branch_taken_0x24ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFB4u;
        // 0x24ffb8: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffb4) {
            ctx->pc = 0x25000Cu;
            goto label_25000c;
        }
    }
    ctx->pc = 0x24FFBCu;
    // 0x24ffbc: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x24ffbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ffc0: 0x0  nop
    ctx->pc = 0x24ffc0u;
    // NOP
    // 0x24ffc4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x24FFC4u;
    {
        const bool branch_taken_0x24ffc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ffc4) {
            ctx->pc = 0x25000Cu;
            goto label_25000c;
        }
    }
    ctx->pc = 0x24FFCCu;
    // 0x24ffcc: 0x16d20009  bne         $s6, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FFCCu;
    {
        const bool branch_taken_0x24ffcc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x24FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFCCu;
        // 0x24ffd0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffcc) {
            ctx->pc = 0x24FFF4u;
            goto label_24fff4;
        }
    }
    ctx->pc = 0x24FFD4u;
    // 0x24ffd4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ffd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ffd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ffdc: 0x0  nop
    ctx->pc = 0x24ffdcu;
    // NOP
    // 0x24ffe0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24FFE0u;
    {
        const bool branch_taken_0x24ffe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFE0u;
        // 0x24ffe4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffe0) {
            ctx->pc = 0x25000Cu;
            goto label_25000c;
        }
    }
    ctx->pc = 0x24FFE8u;
    // 0x24ffe8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24ffe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ffec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24FFECu;
    {
        const bool branch_taken_0x24ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFECu;
        // 0x24fff0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffec) {
            ctx->pc = 0x25000Cu;
            goto label_25000c;
        }
    }
    ctx->pc = 0x24FFF4u;
label_24fff4:
    // 0x24fff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fff8: 0x0  nop
    ctx->pc = 0x24fff8u;
    // NOP
    // 0x24fffc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FFFCu;
    {
        const bool branch_taken_0x24fffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFFCu;
        // 0x250000: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fffc) {
            ctx->pc = 0x25000Cu;
            goto label_25000c;
        }
    }
    ctx->pc = 0x250004u;
    // 0x250004: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x250004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x250008: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x250008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_25000c:
    // 0x25000c: 0x5e20ffd8  bgtzl       $s1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x25000Cu;
    {
        const bool branch_taken_0x25000c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x25000c) {
            ctx->pc = 0x250010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25000Cu;
            // 0x250010: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ff70;
        }
    }
    ctx->pc = 0x250014u;
label_250014:
    // 0x250014: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x250014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_250018:
    // 0x250018: 0x5600ff3b  bnel        $s0, $zero, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x250018u;
    {
        const bool branch_taken_0x250018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x250018) {
            ctx->pc = 0x25001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250018u;
            // 0x25001c: 0x96030048  lhu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fd08;
        }
    }
    ctx->pc = 0x250020u;
label_250020:
    // 0x250020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250024: 0x52e20027  beql        $s7, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x250024u;
    {
        const bool branch_taken_0x250024 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x250024) {
            ctx->pc = 0x250028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250024u;
            // 0x250028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x25002Cu;
    // 0x25002c: 0x5ec0ff24  bgtzl       $s6, . + 4 + (-0xDC << 2)
    ctx->pc = 0x25002Cu;
    {
        const bool branch_taken_0x25002c = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x25002c) {
            ctx->pc = 0x250030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25002Cu;
            // 0x250030: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fcc0;
        }
    }
    ctx->pc = 0x250034u;
    // 0x250034: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x250034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25003c: 0x0  nop
    ctx->pc = 0x25003cu;
    // NOP
    // 0x250040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250044: 0x0  nop
    ctx->pc = 0x250044u;
    // NOP
    // 0x250048: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x250048u;
    {
        const bool branch_taken_0x250048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250048) {
            ctx->pc = 0x25004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250048u;
            // 0x25004c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x250050u;
    // 0x250050: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x250050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250054: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x250054u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250058: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x250058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25005c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x25005cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250060: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x250060u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250064: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250064u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250068: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x250068u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25006c: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x25006cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
    // 0x250070: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x250070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x250074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250078: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x250078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25007c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x25007cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250080: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x250080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250084: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x250084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250088: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x250088u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x25008c: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x25008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x250090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x250090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250094: 0x0  nop
    ctx->pc = 0x250094u;
    // NOP
    // 0x250098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x250098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25009c: 0x0  nop
    ctx->pc = 0x25009cu;
    // NOP
    // 0x2500a0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2500A0u;
    {
        const bool branch_taken_0x2500a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2500A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500A0u;
        // 0x2500a4: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500a0) {
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x2500A8u;
    // 0x2500a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2500A8u;
    {
        const bool branch_taken_0x2500a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500A8u;
        // 0x2500ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500a8) {
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x2500B0u;
label_2500b0:
    // 0x2500b0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2500b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2500b4: 0x2041026  xor         $v0, $s0, $a0
    ctx->pc = 0x2500b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    // 0x2500b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2500B8u;
    {
        const bool branch_taken_0x2500b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500B8u;
        // 0x2500bc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500b8) {
            ctx->pc = 0x2500C4u;
            goto label_2500c4;
        }
    }
    ctx->pc = 0x2500C0u;
label_2500c0:
    // 0x2500c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2500c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2500c4:
    // 0x2500c4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2500c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2500c8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2500c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2500cc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2500ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2500d0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2500d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2500d4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2500d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2500d8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2500d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2500dc: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2500dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2500e0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2500e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2500e4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2500e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2500e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2500e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2500ec: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2500ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2500f0: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2500f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2500f4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2500f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2500f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2500F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2500FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500F8u;
        // 0x2500fc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2500F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250100u;
}
