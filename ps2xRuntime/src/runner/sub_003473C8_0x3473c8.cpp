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

// Function: sub_003473C8
// Address: 0x3473c8 - 0x3477c0
void sub_003473C8_0x3473c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003473C8_0x3473c8");
#endif

    switch (ctx->pc) {
        case 0x347430u: goto label_347430;
        case 0x347478u: goto label_347478;
        case 0x347490u: goto label_347490;
        case 0x3474b0u: goto label_3474b0;
        case 0x347508u: goto label_347508;
        case 0x3475dcu: goto label_3475dc;
        case 0x347648u: goto label_347648;
        case 0x347680u: goto label_347680;
        case 0x347718u: goto label_347718;
        case 0x347740u: goto label_347740;
        default: break;
    }

    ctx->pc = 0x3473c8u;

    // 0x3473c8: 0x27bdb7d0  addiu       $sp, $sp, -0x4830
    ctx->pc = 0x3473c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948816));
    // 0x3473cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3473ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473d0: 0xafa84730  sw          $t0, 0x4730($sp)
    ctx->pc = 0x3473d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18224), GPR_U32(ctx, 8));
    // 0x3473d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3473d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3473d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3473d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473dc: 0xe7b54828  swc1        $f21, 0x4828($sp)
    ctx->pc = 0x3473dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18472), bits); }
    // 0x3473e0: 0xe7b44820  swc1        $f20, 0x4820($sp)
    ctx->pc = 0x3473e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18464), bits); }
    // 0x3473e4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3473e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3473e8: 0xafa44728  sw          $a0, 0x4728($sp)
    ctx->pc = 0x3473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18216), GPR_U32(ctx, 4));
    // 0x3473ec: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3473ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3473f0: 0xafa5472c  sw          $a1, 0x472C($sp)
    ctx->pc = 0x3473f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18220), GPR_U32(ctx, 5));
    // 0x3473f4: 0x27a44720  addiu       $a0, $sp, 0x4720
    ctx->pc = 0x3473f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 18208));
    // 0x3473f8: 0xafa94734  sw          $t1, 0x4734($sp)
    ctx->pc = 0x3473f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18228), GPR_U32(ctx, 9));
    // 0x3473fc: 0x7fa84750  sq          $t0, 0x4750($sp)
    ctx->pc = 0x3473fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18256), GPR_VEC(ctx, 8));
    // 0x347400: 0x7fb04810  sq          $s0, 0x4810($sp)
    ctx->pc = 0x347400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18448), GPR_VEC(ctx, 16));
    // 0x347404: 0x7fb14800  sq          $s1, 0x4800($sp)
    ctx->pc = 0x347404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18432), GPR_VEC(ctx, 17));
    // 0x347408: 0x7fb247f0  sq          $s2, 0x47F0($sp)
    ctx->pc = 0x347408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18416), GPR_VEC(ctx, 18));
    // 0x34740c: 0x7fb347e0  sq          $s3, 0x47E0($sp)
    ctx->pc = 0x34740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18400), GPR_VEC(ctx, 19));
    // 0x347410: 0x7fb447d0  sq          $s4, 0x47D0($sp)
    ctx->pc = 0x347410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18384), GPR_VEC(ctx, 20));
    // 0x347414: 0x7fb547c0  sq          $s5, 0x47C0($sp)
    ctx->pc = 0x347414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18368), GPR_VEC(ctx, 21));
    // 0x347418: 0x7fb647b0  sq          $s6, 0x47B0($sp)
    ctx->pc = 0x347418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18352), GPR_VEC(ctx, 22));
    // 0x34741c: 0x7fb747a0  sq          $s7, 0x47A0($sp)
    ctx->pc = 0x34741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18336), GPR_VEC(ctx, 23));
    // 0x347420: 0x7fbe4790  sq          $fp, 0x4790($sp)
    ctx->pc = 0x347420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18320), GPR_VEC(ctx, 30));
    // 0x347424: 0xffbf4780  sd          $ra, 0x4780($sp)
    ctx->pc = 0x347424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 18304), GPR_U64(ctx, 31));
    // 0x347428: 0xc0d1c5c  jal         func_347170
    ctx->pc = 0x347428u;
    SET_GPR_U32(ctx, 31, 0x347430u);
    ctx->pc = 0x34742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347428u;
    // 0x34742c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347170u, 0x347428u, 0x347430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347430u;
label_347430:
    // 0x347430: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x347430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x347434: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x347434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347438: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x347438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34743c: 0xafa3473c  sw          $v1, 0x473C($sp)
    ctx->pc = 0x34743cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18236), GPR_U32(ctx, 3));
    // 0x347440: 0xafa54740  sw          $a1, 0x4740($sp)
    ctx->pc = 0x347440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18240), GPR_U32(ctx, 5));
    // 0x347444: 0x8fa64730  lw          $a2, 0x4730($sp)
    ctx->pc = 0x347444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
    // 0x347448: 0xafa24738  sw          $v0, 0x4738($sp)
    ctx->pc = 0x347448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18232), GPR_U32(ctx, 2));
    // 0x34744c: 0x78c20050  lq          $v0, 0x50($a2)
    ctx->pc = 0x34744cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x347450: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x347450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347454: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x347454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347458: 0x8fa74738  lw          $a3, 0x4738($sp)
    ctx->pc = 0x347458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18232)));
    // 0x34745c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x347460: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x347460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x347464: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x347464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x347468: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x347468u;
    {
        const bool branch_taken_0x347468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347468u;
        // 0x34746c: 0x7ba84750  lq          $t0, 0x4750($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347468) {
            ctx->pc = 0x3476FCu;
            goto label_3476fc;
        }
    }
    ctx->pc = 0x347470u;
    // 0x347470: 0x8fb60004  lw          $s6, 0x4($sp)
    ctx->pc = 0x347470u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x347474: 0x0  nop
    ctx->pc = 0x347474u;
    // NOP
label_347478:
    // 0x347478: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x347478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x34747c: 0x8fac473c  lw          $t4, 0x473C($sp)
    ctx->pc = 0x34747cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18236)));
    // 0x347480: 0x196102b  sltu        $v0, $t4, $s6
    ctx->pc = 0x347480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x347484: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x347484u;
    {
        const bool branch_taken_0x347484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347484u;
        // 0x347488: 0xafab4744  sw          $t3, 0x4744($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18244), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347484) {
            ctx->pc = 0x3476E8u;
            goto label_3476e8;
        }
    }
    ctx->pc = 0x34748Cu;
    // 0x34748c: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x34748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_347490:
    // 0x347490: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x347490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347494: 0x8fa34740  lw          $v1, 0x4740($sp)
    ctx->pc = 0x347494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18240)));
    // 0x347498: 0xafa24748  sw          $v0, 0x4748($sp)
    ctx->pc = 0x347498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18248), GPR_U32(ctx, 2));
    // 0x34749c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x34749cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3474a0: 0x5440008d  bnel        $v0, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x3474A0u;
    {
        const bool branch_taken_0x3474a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3474a0) {
            ctx->pc = 0x3474A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3474A0u;
            // 0x3474a4: 0x8fb64748  lw          $s6, 0x4748($sp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3476D8u;
            goto label_3476d8;
        }
    }
    ctx->pc = 0x3474A8u;
    // 0x3474a8: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3474a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3474ac: 0x0  nop
    ctx->pc = 0x3474acu;
    // NOP
label_3474b0:
    // 0x3474b0: 0x8fa54720  lw          $a1, 0x4720($sp)
    ctx->pc = 0x3474b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18208)));
    // 0x3474b4: 0xafa6474c  sw          $a2, 0x474C($sp)
    ctx->pc = 0x3474b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18252), GPR_U32(ctx, 6));
    // 0x3474b8: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x3474b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
    // 0x3474bc: 0x94a30070  lhu         $v1, 0x70($a1)
    ctx->pc = 0x3474bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x3474c0: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x3474c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3474c4: 0x8ca40078  lw          $a0, 0x78($a1)
    ctx->pc = 0x3474c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x3474c8: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x3474c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x3474cc: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x3474ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3474d0: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x3474d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x3474d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3474d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3474d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3474dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3474dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3474e0: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3474E0u;
    {
        const bool branch_taken_0x3474e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474E0u;
        // 0x3474e4: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474e0) {
            ctx->pc = 0x3476C0u;
            goto label_3476c0;
        }
    }
    ctx->pc = 0x3474E8u;
    // 0x3474e8: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x3474e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3474ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3474ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474f0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3474f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3474f4: 0x96170000  lhu         $s7, 0x0($s0)
    ctx->pc = 0x3474f4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3474f8: 0x12e00071  beqz        $s7, . + 4 + (0x71 << 2)
    ctx->pc = 0x3474F8u;
    {
        const bool branch_taken_0x3474f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474F8u;
        // 0x3474fc: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474f8) {
            ctx->pc = 0x3476C0u;
            goto label_3476c0;
        }
    }
    ctx->pc = 0x347500u;
    // 0x347500: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x347500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347504: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_347508:
    // 0x347508: 0x8fa34720  lw          $v1, 0x4720($sp)
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18208)));
    // 0x34750c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x34750cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347510: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x347510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x347514: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x347514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x347518: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x347518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x34751c: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x34751cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x347520: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x347520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x347524: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x347524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x347528: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x347528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34752c: 0xc31007  srav        $v0, $v1, $a2
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x347530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x347534: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x347534u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x347538: 0x14a0005d  bnez        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x347538u;
    {
        const bool branch_taken_0x347538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347538u;
        // 0x34753c: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347538) {
            ctx->pc = 0x3476B0u;
            goto label_3476b0;
        }
    }
    ctx->pc = 0x347540u;
    // 0x347540: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x347540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x347544: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x347544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347548: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x347548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34754c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x34754cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347550: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x347550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x347554: 0x8fa74720  lw          $a3, 0x4720($sp)
    ctx->pc = 0x347554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18208)));
    // 0x347558: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x347558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34755c: 0x8ce40088  lw          $a0, 0x88($a3)
    ctx->pc = 0x34755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x347560: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x347560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347564: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x347564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x347568: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x347568u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x34756c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x347570: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x347570u;
    {
        const bool branch_taken_0x347570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347570) {
            ctx->pc = 0x347574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347570u;
            // 0x347574: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3476B4u;
            goto label_3476b4;
        }
    }
    ctx->pc = 0x347578u;
    // 0x347578: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x347578u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34757c: 0x27b24500  addiu       $s2, $sp, 0x4500
    ctx->pc = 0x34757cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 17664));
    // 0x347580: 0x8ce3008c  lw          $v1, 0x8C($a3)
    ctx->pc = 0x347580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x347584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347588: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x347588u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x34758c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347590: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x347594: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x347594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347598: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x347598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
    // 0x34759c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x34759cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3475a0: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x3475a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3475a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3475a8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3475a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3475ac: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3475acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3475b0: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x3475b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
    // 0x3475b4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x3475b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3475b8: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x3475b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x3475bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3475bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3475c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3475c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3475c4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3475c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3475c8: 0x7fa84750  sq          $t0, 0x4750($sp)
    ctx->pc = 0x3475c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18256), GPR_VEC(ctx, 8));
    // 0x3475cc: 0x7fa24520  sq          $v0, 0x4520($sp)
    ctx->pc = 0x3475ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
    // 0x3475d0: 0x7fa94760  sq          $t1, 0x4760($sp)
    ctx->pc = 0x3475d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18272), GPR_VEC(ctx, 9));
    // 0x3475d4: 0xc0d0f0c  jal         func_343C30
    ctx->pc = 0x3475D4u;
    SET_GPR_U32(ctx, 31, 0x3475DCu);
    ctx->pc = 0x3475D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475D4u;
    // 0x3475d8: 0x7faa4770  sq          $t2, 0x4770($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 18288), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C30u, 0x3475D4u, 0x3475DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475DCu;
label_3475dc:
    // 0x3475dc: 0x8fa74734  lw          $a3, 0x4734($sp)
    ctx->pc = 0x3475dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18228)));
    // 0x3475e0: 0x7ba84750  lq          $t0, 0x4750($sp)
    ctx->pc = 0x3475e0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x3475e4: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x3475e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x3475e8: 0x7ba94760  lq          $t1, 0x4760($sp)
    ctx->pc = 0x3475e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x3475ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3475ECu;
    {
        const bool branch_taken_0x3475ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3475F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475ECu;
        // 0x3475f0: 0x7baa4770  lq          $t2, 0x4770($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 18288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475ec) {
            ctx->pc = 0x347608u;
            goto label_347608;
        }
    }
    ctx->pc = 0x3475F4u;
    // 0x3475f4: 0xc7a04578  lwc1        $f0, 0x4578($sp)
    ctx->pc = 0x3475f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3475f8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3475f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3475fc: 0x0  nop
    ctx->pc = 0x3475fcu;
    // NOP
    // 0x347600: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x347600u;
    {
        const bool branch_taken_0x347600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347600) {
            ctx->pc = 0x347604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347600u;
            // 0x347604: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3476B4u;
            goto label_3476b4;
        }
    }
    ctx->pc = 0x347608u;
label_347608:
    // 0x347608: 0x8fab4734  lw          $t3, 0x4734($sp)
    ctx->pc = 0x347608u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18228)));
    // 0x34760c: 0x31620008  andi        $v0, $t3, 0x8
    ctx->pc = 0x34760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
    // 0x347610: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347610u;
    {
        const bool branch_taken_0x347610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347610u;
        // 0x347614: 0xc7a04578  lwc1        $f0, 0x4578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347610) {
            ctx->pc = 0x34762Cu;
            goto label_34762c;
        }
    }
    ctx->pc = 0x347618u;
    // 0x347618: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x347618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x34761c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x34761cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347620: 0x0  nop
    ctx->pc = 0x347620u;
    // NOP
    // 0x347624: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x347624u;
    {
        const bool branch_taken_0x347624 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x347628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347624u;
        // 0x347628: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347624) {
            ctx->pc = 0x3476B0u;
            goto label_3476b0;
        }
    }
    ctx->pc = 0x34762Cu;
label_34762c:
    // 0x34762c: 0x7fa84750  sq          $t0, 0x4750($sp)
    ctx->pc = 0x34762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18256), GPR_VEC(ctx, 8));
    // 0x347630: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x347630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347634: 0x7fa94760  sq          $t1, 0x4760($sp)
    ctx->pc = 0x347634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18272), GPR_VEC(ctx, 9));
    // 0x347638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34763c: 0x7faa4770  sq          $t2, 0x4770($sp)
    ctx->pc = 0x34763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18288), GPR_VEC(ctx, 10));
    // 0x347640: 0xc0d3b74  jal         func_34EDD0
    ctx->pc = 0x347640u;
    SET_GPR_U32(ctx, 31, 0x347648u);
    ctx->pc = 0x347644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347640u;
    // 0x347644: 0x27a64724  addiu       $a2, $sp, 0x4724 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 18212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EDD0u, 0x347640u, 0x347648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347648u;
label_347648:
    // 0x347648: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x347648u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x34764c: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x34764cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x347650: 0x7ba84750  lq          $t0, 0x4750($sp)
    ctx->pc = 0x347650u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x347654: 0x7ba94760  lq          $t1, 0x4760($sp)
    ctx->pc = 0x347654u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x347658: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x347658u;
    {
        const bool branch_taken_0x347658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347658u;
        // 0x34765c: 0x7baa4770  lq          $t2, 0x4770($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 18288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347658) {
            ctx->pc = 0x3476B0u;
            goto label_3476b0;
        }
    }
    ctx->pc = 0x347660u;
    // 0x347660: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x347660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347668: 0x1022818  mult        $a1, $t0, $v0
    ctx->pc = 0x347668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34766c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34766cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x347670: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x347670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x347674: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x347674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x347678: 0x27a54580  addiu       $a1, $sp, 0x4580
    ctx->pc = 0x347678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17792));
    // 0x34767c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x34767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_347680:
    // 0x347680: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x347680u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347684: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x347684u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x347688: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x347688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x34768c: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x34768cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x347690: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x347690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x347694: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x347694u;
    {
        const bool branch_taken_0x347694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x347698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347694u;
        // 0x347698: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347694) {
            ctx->pc = 0x347680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347680;
        }
    }
    ctx->pc = 0x34769Cu;
    // 0x34769c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x34769cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3476a0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3476a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3476a4: 0xc7a04724  lwc1        $f0, 0x4724($sp)
    ctx->pc = 0x3476a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476a8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3476ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3476acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3476b0:
    // 0x3476b0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3476b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3476b4:
    // 0x3476b4: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x3476b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3476b8: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x3476B8u;
    {
        const bool branch_taken_0x3476b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3476BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476B8u;
        // 0x3476bc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476b8) {
            ctx->pc = 0x347508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347508;
        }
    }
    ctx->pc = 0x3476C0u;
label_3476c0:
    // 0x3476c0: 0x8fa4474c  lw          $a0, 0x474C($sp)
    ctx->pc = 0x3476c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18252)));
    // 0x3476c4: 0x8fac4740  lw          $t4, 0x4740($sp)
    ctx->pc = 0x3476c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18240)));
    // 0x3476c8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3476c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3476cc: 0x1040ff78  beqz        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x3476CCu;
    {
        const bool branch_taken_0x3476cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3476D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476CCu;
        // 0x3476d0: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476cc) {
            ctx->pc = 0x3474B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3474b0;
        }
    }
    ctx->pc = 0x3476D4u;
    // 0x3476d4: 0x8fb64748  lw          $s6, 0x4748($sp)
    ctx->pc = 0x3476d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18248)));
label_3476d8:
    // 0x3476d8: 0x8fa3473c  lw          $v1, 0x473C($sp)
    ctx->pc = 0x3476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18236)));
    // 0x3476dc: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x3476dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3476e0: 0x1040ff6b  beqz        $v0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x3476E0u;
    {
        const bool branch_taken_0x3476e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3476E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476E0u;
        // 0x3476e4: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476e0) {
            ctx->pc = 0x347490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347490;
        }
    }
    ctx->pc = 0x3476E8u;
label_3476e8:
    // 0x3476e8: 0x8fa94744  lw          $t1, 0x4744($sp)
    ctx->pc = 0x3476e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18244)));
    // 0x3476ec: 0x8fa54738  lw          $a1, 0x4738($sp)
    ctx->pc = 0x3476ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18232)));
    // 0x3476f0: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3476f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3476f4: 0x5040ff60  beql        $v0, $zero, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x3476F4u;
    {
        const bool branch_taken_0x3476f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3476f4) {
            ctx->pc = 0x3476F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3476F4u;
            // 0x3476f8: 0x8fb60004  lw          $s6, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347478;
        }
    }
    ctx->pc = 0x3476FCu;
label_3476fc:
    // 0x3476fc: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3476FCu;
    {
        const bool branch_taken_0x3476fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x347700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476FCu;
        // 0x347700: 0x27b04590  addiu       $s0, $sp, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 17808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476fc) {
            ctx->pc = 0x347784u;
            goto label_347784;
        }
    }
    ctx->pc = 0x347704u;
    // 0x347704: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x347704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347708: 0x7fa84750  sq          $t0, 0x4750($sp)
    ctx->pc = 0x347708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18256), GPR_VEC(ctx, 8));
    // 0x34770c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347710: 0xc0d1cc0  jal         func_347300
    ctx->pc = 0x347710u;
    SET_GPR_U32(ctx, 31, 0x347718u);
    ctx->pc = 0x347714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347710u;
    // 0x347714: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347300u, 0x347710u, 0x347718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347718u;
label_347718:
    // 0x347718: 0x8fa6472c  lw          $a2, 0x472C($sp)
    ctx->pc = 0x347718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18220)));
    // 0x34771c: 0x7ba84750  lq          $t0, 0x4750($sp)
    ctx->pc = 0x34771cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x347720: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x347720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x347724: 0xc2400a  movz        $t0, $a2, $v0
    ctx->pc = 0x347724u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x347728: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x347728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34772c: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x34772Cu;
    {
        const bool branch_taken_0x34772c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x347730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34772Cu;
        // 0x347730: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34772c) {
            ctx->pc = 0x34777Cu;
            goto label_34777c;
        }
    }
    ctx->pc = 0x347734u;
    // 0x347734: 0x8fa44728  lw          $a0, 0x4728($sp)
    ctx->pc = 0x347734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18216)));
    // 0x347738: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x347738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34773c: 0x0  nop
    ctx->pc = 0x34773cu;
    // NOP
label_347740:
    // 0x347740: 0x8fa74730  lw          $a3, 0x4730($sp)
    ctx->pc = 0x347740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
    // 0x347744: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x347744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x347748: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x347748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34774c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x34774cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x347750: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x347754: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x347754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x347758: 0x78620090  lq          $v0, 0x90($v1)
    ctx->pc = 0x347758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x34775c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x34775cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x347760: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x347760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347764: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x347764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x347768: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x347768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x34776c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x347770: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x347770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x347774: 0x4c1fff2  bgez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x347774u;
    {
        const bool branch_taken_0x347774 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x347778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347774u;
        // 0x347778: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347774) {
            ctx->pc = 0x347740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347740;
        }
    }
    ctx->pc = 0x34777Cu;
label_34777c:
    // 0x34777c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34777Cu;
    {
        const bool branch_taken_0x34777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34777Cu;
        // 0x347780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34777c) {
            ctx->pc = 0x347788u;
            goto label_347788;
        }
    }
    ctx->pc = 0x347784u;
label_347784:
    // 0x347784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x347784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347788:
    // 0x347788: 0x7bb04810  lq          $s0, 0x4810($sp)
    ctx->pc = 0x347788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18448)));
    // 0x34778c: 0x7bb14800  lq          $s1, 0x4800($sp)
    ctx->pc = 0x34778cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18432)));
    // 0x347790: 0x7bb247f0  lq          $s2, 0x47F0($sp)
    ctx->pc = 0x347790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18416)));
    // 0x347794: 0x7bb347e0  lq          $s3, 0x47E0($sp)
    ctx->pc = 0x347794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18400)));
    // 0x347798: 0x7bb447d0  lq          $s4, 0x47D0($sp)
    ctx->pc = 0x347798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18384)));
    // 0x34779c: 0x7bb547c0  lq          $s5, 0x47C0($sp)
    ctx->pc = 0x34779cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18368)));
    // 0x3477a0: 0x7bb647b0  lq          $s6, 0x47B0($sp)
    ctx->pc = 0x3477a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 18352)));
    // 0x3477a4: 0x7bb747a0  lq          $s7, 0x47A0($sp)
    ctx->pc = 0x3477a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 18336)));
    // 0x3477a8: 0x7bbe4790  lq          $fp, 0x4790($sp)
    ctx->pc = 0x3477a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 18320)));
    // 0x3477ac: 0xdfbf4780  ld          $ra, 0x4780($sp)
    ctx->pc = 0x3477acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 18304)));
    // 0x3477b0: 0xc7b54828  lwc1        $f21, 0x4828($sp)
    ctx->pc = 0x3477b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3477b4: 0xc7b44820  lwc1        $f20, 0x4820($sp)
    ctx->pc = 0x3477b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3477b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3477B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3477BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3477B8u;
        // 0x3477bc: 0x27bd4830  addiu       $sp, $sp, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3477B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3477C0u;
}
