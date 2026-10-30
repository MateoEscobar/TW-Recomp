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

// Function: sub_00217788
// Address: 0x217788 - 0x2179e8
void sub_00217788_0x217788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217788_0x217788");
#endif

    switch (ctx->pc) {
        case 0x217788u: goto label_217788;
        case 0x21778cu: goto label_21778c;
        case 0x217790u: goto label_217790;
        case 0x217794u: goto label_217794;
        case 0x217798u: goto label_217798;
        case 0x21779cu: goto label_21779c;
        case 0x2177a0u: goto label_2177a0;
        case 0x2177a4u: goto label_2177a4;
        case 0x2177a8u: goto label_2177a8;
        case 0x2177acu: goto label_2177ac;
        case 0x2177b0u: goto label_2177b0;
        case 0x2177b4u: goto label_2177b4;
        case 0x2177b8u: goto label_2177b8;
        case 0x2177bcu: goto label_2177bc;
        case 0x2177c0u: goto label_2177c0;
        case 0x2177c4u: goto label_2177c4;
        case 0x2177c8u: goto label_2177c8;
        case 0x2177ccu: goto label_2177cc;
        case 0x2177d0u: goto label_2177d0;
        case 0x2177d4u: goto label_2177d4;
        case 0x2177d8u: goto label_2177d8;
        case 0x2177dcu: goto label_2177dc;
        case 0x2177e0u: goto label_2177e0;
        case 0x2177e4u: goto label_2177e4;
        case 0x2177e8u: goto label_2177e8;
        case 0x2177ecu: goto label_2177ec;
        case 0x2177f0u: goto label_2177f0;
        case 0x2177f4u: goto label_2177f4;
        case 0x2177f8u: goto label_2177f8;
        case 0x2177fcu: goto label_2177fc;
        case 0x217800u: goto label_217800;
        case 0x217804u: goto label_217804;
        case 0x217808u: goto label_217808;
        case 0x21780cu: goto label_21780c;
        case 0x217810u: goto label_217810;
        case 0x217814u: goto label_217814;
        case 0x217818u: goto label_217818;
        case 0x21781cu: goto label_21781c;
        case 0x217820u: goto label_217820;
        case 0x217824u: goto label_217824;
        case 0x217828u: goto label_217828;
        case 0x21782cu: goto label_21782c;
        case 0x217830u: goto label_217830;
        case 0x217834u: goto label_217834;
        case 0x217838u: goto label_217838;
        case 0x21783cu: goto label_21783c;
        case 0x217840u: goto label_217840;
        case 0x217844u: goto label_217844;
        case 0x217848u: goto label_217848;
        case 0x21784cu: goto label_21784c;
        case 0x217850u: goto label_217850;
        case 0x217854u: goto label_217854;
        case 0x217858u: goto label_217858;
        case 0x21785cu: goto label_21785c;
        case 0x217860u: goto label_217860;
        case 0x217864u: goto label_217864;
        case 0x217868u: goto label_217868;
        case 0x21786cu: goto label_21786c;
        case 0x217870u: goto label_217870;
        case 0x217874u: goto label_217874;
        case 0x217878u: goto label_217878;
        case 0x21787cu: goto label_21787c;
        case 0x217880u: goto label_217880;
        case 0x217884u: goto label_217884;
        case 0x217888u: goto label_217888;
        case 0x21788cu: goto label_21788c;
        case 0x217890u: goto label_217890;
        case 0x217894u: goto label_217894;
        case 0x217898u: goto label_217898;
        case 0x21789cu: goto label_21789c;
        case 0x2178a0u: goto label_2178a0;
        case 0x2178a4u: goto label_2178a4;
        case 0x2178a8u: goto label_2178a8;
        case 0x2178acu: goto label_2178ac;
        case 0x2178b0u: goto label_2178b0;
        case 0x2178b4u: goto label_2178b4;
        case 0x2178b8u: goto label_2178b8;
        case 0x2178bcu: goto label_2178bc;
        case 0x2178c0u: goto label_2178c0;
        case 0x2178c4u: goto label_2178c4;
        case 0x2178c8u: goto label_2178c8;
        case 0x2178ccu: goto label_2178cc;
        case 0x2178d0u: goto label_2178d0;
        case 0x2178d4u: goto label_2178d4;
        case 0x2178d8u: goto label_2178d8;
        case 0x2178dcu: goto label_2178dc;
        case 0x2178e0u: goto label_2178e0;
        case 0x2178e4u: goto label_2178e4;
        case 0x2178e8u: goto label_2178e8;
        case 0x2178ecu: goto label_2178ec;
        case 0x2178f0u: goto label_2178f0;
        case 0x2178f4u: goto label_2178f4;
        case 0x2178f8u: goto label_2178f8;
        case 0x2178fcu: goto label_2178fc;
        case 0x217900u: goto label_217900;
        case 0x217904u: goto label_217904;
        case 0x217908u: goto label_217908;
        case 0x21790cu: goto label_21790c;
        case 0x217910u: goto label_217910;
        case 0x217914u: goto label_217914;
        case 0x217918u: goto label_217918;
        case 0x21791cu: goto label_21791c;
        case 0x217920u: goto label_217920;
        case 0x217924u: goto label_217924;
        case 0x217928u: goto label_217928;
        case 0x21792cu: goto label_21792c;
        case 0x217930u: goto label_217930;
        case 0x217934u: goto label_217934;
        case 0x217938u: goto label_217938;
        case 0x21793cu: goto label_21793c;
        case 0x217940u: goto label_217940;
        case 0x217944u: goto label_217944;
        case 0x217948u: goto label_217948;
        case 0x21794cu: goto label_21794c;
        case 0x217950u: goto label_217950;
        case 0x217954u: goto label_217954;
        case 0x217958u: goto label_217958;
        case 0x21795cu: goto label_21795c;
        case 0x217960u: goto label_217960;
        case 0x217964u: goto label_217964;
        case 0x217968u: goto label_217968;
        case 0x21796cu: goto label_21796c;
        case 0x217970u: goto label_217970;
        case 0x217974u: goto label_217974;
        case 0x217978u: goto label_217978;
        case 0x21797cu: goto label_21797c;
        case 0x217980u: goto label_217980;
        case 0x217984u: goto label_217984;
        case 0x217988u: goto label_217988;
        case 0x21798cu: goto label_21798c;
        case 0x217990u: goto label_217990;
        case 0x217994u: goto label_217994;
        case 0x217998u: goto label_217998;
        case 0x21799cu: goto label_21799c;
        case 0x2179a0u: goto label_2179a0;
        case 0x2179a4u: goto label_2179a4;
        case 0x2179a8u: goto label_2179a8;
        case 0x2179acu: goto label_2179ac;
        case 0x2179b0u: goto label_2179b0;
        case 0x2179b4u: goto label_2179b4;
        case 0x2179b8u: goto label_2179b8;
        case 0x2179bcu: goto label_2179bc;
        case 0x2179c0u: goto label_2179c0;
        case 0x2179c4u: goto label_2179c4;
        case 0x2179c8u: goto label_2179c8;
        case 0x2179ccu: goto label_2179cc;
        case 0x2179d0u: goto label_2179d0;
        case 0x2179d4u: goto label_2179d4;
        case 0x2179d8u: goto label_2179d8;
        case 0x2179dcu: goto label_2179dc;
        case 0x2179e0u: goto label_2179e0;
        case 0x2179e4u: goto label_2179e4;
        default: break;
    }

    ctx->pc = 0x217788u;

label_217788:
    // 0x217788: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21778c:
    // 0x21778c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_217790:
    // 0x217790: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x217790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_217794:
    // 0x217794: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x217794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217798:
    // 0x217798: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x217798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_21779c:
    // 0x21779c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2177a0:
    // 0x2177a0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2177a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2177a4:
    // 0x2177a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2177a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2177a8:
    // 0x2177a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2177ac:
    // 0x2177ac: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2177acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2177b0:
    // 0x2177b0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2177b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2177b4:
    // 0x2177b4: 0x40f809  jalr        $v0
label_2177b8:
    if (ctx->pc == 0x2177B8u) {
        ctx->pc = 0x2177B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177B4u;
        // 0x2177b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177BCu;
        goto label_2177bc;
    }
    ctx->pc = 0x2177B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2177BCu);
        ctx->pc = 0x2177B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177B4u;
        // 0x2177b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2177B4u, 0x2177BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2177BCu;
label_2177bc:
    // 0x2177bc: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_2177c0:
    if (ctx->pc == 0x2177C0u) {
        ctx->pc = 0x2177C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177BCu;
        // 0x2177c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177C4u;
        goto label_2177c4;
    }
    ctx->pc = 0x2177BCu;
    {
        const bool branch_taken_0x2177bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177BCu;
        // 0x2177c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177bc) {
            ctx->pc = 0x2179C8u;
            goto label_2179c8;
        }
    }
    ctx->pc = 0x2177C4u;
label_2177c4:
    // 0x2177c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2177c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2177c8:
    // 0x2177c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2177c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2177cc:
    // 0x2177cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2177ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2177d0:
    // 0x2177d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2177d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2177d4:
    // 0x2177d4: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x2177d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_2177d8:
    // 0x2177d8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2177d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2177dc:
    // 0x2177dc: 0x40f809  jalr        $v0
label_2177e0:
    if (ctx->pc == 0x2177E0u) {
        ctx->pc = 0x2177E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177DCu;
        // 0x2177e0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177E4u;
        goto label_2177e4;
    }
    ctx->pc = 0x2177DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2177E4u);
        ctx->pc = 0x2177E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177DCu;
        // 0x2177e0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2177DCu, 0x2177E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2177E4u;
label_2177e4:
    // 0x2177e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2177e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2177e8:
    // 0x2177e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2177e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2177ec:
    // 0x2177ec: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x2177ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2177f0:
    // 0x2177f0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2177f4:
    // 0x2177f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2177f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2177f8:
    // 0x2177f8: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x2177f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_2177fc:
    // 0x2177fc: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x2177fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_217800:
    // 0x217800: 0xc6430060  lwc1        $f3, 0x60($s2)
    ctx->pc = 0x217800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_217804:
    // 0x217804: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217804u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_217808:
    // 0x217808: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x217808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_21780c:
    // 0x21780c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x21780cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_217810:
    // 0x217810: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x217810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_217814:
    // 0x217814: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x217814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_217818:
    // 0x217818: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x217818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21781c:
    // 0x21781c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217820:
    // 0x217820: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x217820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_217824:
    // 0x217824: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x217824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_217828:
    // 0x217828: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x217828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_21782c:
    // 0x21782c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_217830:
    // 0x217830: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_217834:
    // 0x217834: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_217838:
    // 0x217838: 0x60f809  jalr        $v1
label_21783c:
    if (ctx->pc == 0x21783Cu) {
        ctx->pc = 0x21783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217838u;
        // 0x21783c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217840u;
        goto label_217840;
    }
    ctx->pc = 0x217838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217840u);
        ctx->pc = 0x21783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217838u;
        // 0x21783c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217838u, 0x217840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217840u;
label_217840:
    // 0x217840: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x217840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_217844:
    // 0x217844: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217848:
    // 0x217848: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x217848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_21784c:
    // 0x21784c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x21784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_217850:
    // 0x217850: 0x60f809  jalr        $v1
label_217854:
    if (ctx->pc == 0x217854u) {
        ctx->pc = 0x217854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217850u;
        // 0x217854: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217858u;
        goto label_217858;
    }
    ctx->pc = 0x217850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217858u);
        ctx->pc = 0x217854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217850u;
        // 0x217854: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217850u, 0x217858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217858u;
label_217858:
    // 0x217858: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x217858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_21785c:
    // 0x21785c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217860:
    // 0x217860: 0xc64c0060  lwc1        $f12, 0x60($s2)
    ctx->pc = 0x217860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_217864:
    // 0x217864: 0xc068848  jal         func_1A2120
label_217868:
    if (ctx->pc == 0x217868u) {
        ctx->pc = 0x217868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217864u;
        // 0x217868: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21786Cu;
        goto label_21786c;
    }
    ctx->pc = 0x217864u;
    SET_GPR_U32(ctx, 31, 0x21786Cu);
    ctx->pc = 0x217868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217864u;
    // 0x217868: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x217864u, 0x21786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21786Cu;
label_21786c:
    // 0x21786c: 0x8e500068  lw          $s0, 0x68($s2)
    ctx->pc = 0x21786cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_217870:
    // 0x217870: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x217870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_217874:
    // 0x217874: 0x261000a4  addiu       $s0, $s0, 0xA4
    ctx->pc = 0x217874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_217878:
    // 0x217878: 0xc614000c  lwc1        $f20, 0xC($s0)
    ctx->pc = 0x217878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21787c:
    // 0x21787c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217880:
    // 0x217880: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x217880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_217884:
    // 0x217884: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x217884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_217888:
    // 0x217888: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x217888u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21788c:
    // 0x21788c: 0x40f809  jalr        $v0
label_217890:
    if (ctx->pc == 0x217890u) {
        ctx->pc = 0x217890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21788Cu;
        // 0x217890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217894u;
        goto label_217894;
    }
    ctx->pc = 0x21788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217894u);
        ctx->pc = 0x217890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21788Cu;
        // 0x217890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21788Cu, 0x217894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217894u;
label_217894:
    // 0x217894: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x217894u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_217898:
    // 0x217898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21789c:
    // 0x21789c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2178a0:
    // 0x2178a0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2178a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2178a4:
    // 0x2178a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2178a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2178a8:
    // 0x2178a8: 0xc068864  jal         func_1A2190
label_2178ac:
    if (ctx->pc == 0x2178ACu) {
        ctx->pc = 0x2178ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178A8u;
        // 0x2178ac: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178B0u;
        goto label_2178b0;
    }
    ctx->pc = 0x2178A8u;
    SET_GPR_U32(ctx, 31, 0x2178B0u);
    ctx->pc = 0x2178ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178A8u;
    // 0x2178ac: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x2178A8u, 0x2178B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178B0u;
label_2178b0:
    // 0x2178b0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2178b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2178b4:
    // 0x2178b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2178b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2178b8:
    // 0x2178b8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2178b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2178bc:
    // 0x2178bc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2178bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2178c0:
    // 0x2178c0: 0xc6420060  lwc1        $f2, 0x60($s2)
    ctx->pc = 0x2178c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2178c4:
    // 0x2178c4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2178c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_2178c8:
    // 0x2178c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2178c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2178cc:
    // 0x2178cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2178ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2178d0:
    // 0x2178d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2178d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2178d4:
    // 0x2178d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2178d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2178d8:
    // 0x2178d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2178d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2178dc:
    // 0x2178dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2178dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2178e0:
    // 0x2178e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2178e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2178e4:
    // 0x2178e4: 0xc05e602  jal         func_179808
label_2178e8:
    if (ctx->pc == 0x2178E8u) {
        ctx->pc = 0x2178E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178E4u;
        // 0x2178e8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178ECu;
        goto label_2178ec;
    }
    ctx->pc = 0x2178E4u;
    SET_GPR_U32(ctx, 31, 0x2178ECu);
    ctx->pc = 0x2178E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178E4u;
    // 0x2178e8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x2178E4u, 0x2178ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178ECu;
label_2178ec:
    // 0x2178ec: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2178ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2178f0:
    // 0x2178f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2178f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2178f4:
    // 0x2178f4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2178f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2178f8:
    // 0x2178f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2178fc:
    // 0x2178fc: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2178fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_217900:
    // 0x217900: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x217900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217904:
    // 0x217904: 0x8e47006c  lw          $a3, 0x6C($s2)
    ctx->pc = 0x217904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_217908:
    // 0x217908: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x217908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_21790c:
    // 0x21790c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21790cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_217910:
    // 0x217910: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x217910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_217914:
    // 0x217914: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x217914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_217918:
    // 0x217918: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x217918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21791c:
    // 0x21791c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_217920:
    // 0x217920: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x217920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_217924:
    // 0x217924: 0x60f809  jalr        $v1
label_217928:
    if (ctx->pc == 0x217928u) {
        ctx->pc = 0x217928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217924u;
        // 0x217928: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21792Cu;
        goto label_21792c;
    }
    ctx->pc = 0x217924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21792Cu);
        ctx->pc = 0x217928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217924u;
        // 0x217928: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217924u, 0x21792Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21792Cu;
label_21792c:
    // 0x21792c: 0x8e51006c  lw          $s1, 0x6C($s2)
    ctx->pc = 0x21792cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_217930:
    // 0x217930: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x217930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_217934:
    // 0x217934: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x217934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_217938:
    // 0x217938: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x217938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_21793c:
    // 0x21793c: 0x860500a8  lh          $a1, 0xA8($s0)
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_217940:
    // 0x217940: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x217940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_217944:
    // 0x217944: 0x261000a8  addiu       $s0, $s0, 0xA8
    ctx->pc = 0x217944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_217948:
    // 0x217948: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x217948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_21794c:
    // 0x21794c: 0x40f809  jalr        $v0
label_217950:
    if (ctx->pc == 0x217950u) {
        ctx->pc = 0x217950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21794Cu;
        // 0x217950: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217954u;
        goto label_217954;
    }
    ctx->pc = 0x21794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217954u);
        ctx->pc = 0x217950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21794Cu;
        // 0x217950: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21794Cu, 0x217954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217954u;
label_217954:
    // 0x217954: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x217954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217958:
    // 0x217958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21795c:
    // 0x21795c: 0x60f809  jalr        $v1
label_217960:
    if (ctx->pc == 0x217960u) {
        ctx->pc = 0x217960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21795Cu;
        // 0x217960: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217964u;
        goto label_217964;
    }
    ctx->pc = 0x21795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217964u);
        ctx->pc = 0x217960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21795Cu;
        // 0x217960: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21795Cu, 0x217964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217964u;
label_217964:
    // 0x217964: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x217964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_217968:
    // 0x217968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21796c:
    // 0x21796c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21796cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_217970:
    // 0x217970: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x217970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_217974:
    // 0x217974: 0x60f809  jalr        $v1
label_217978:
    if (ctx->pc == 0x217978u) {
        ctx->pc = 0x217978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217974u;
        // 0x217978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21797Cu;
        goto label_21797c;
    }
    ctx->pc = 0x217974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21797Cu);
        ctx->pc = 0x217978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217974u;
        // 0x217978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217974u, 0x21797Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21797Cu;
label_21797c:
    // 0x21797c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_217980:
    // 0x217980: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x217980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_217984:
    // 0x217984: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x217984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_217988:
    // 0x217988: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x217988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_21798c:
    // 0x21798c: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x21798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_217990:
    // 0x217990: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x217990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_217994:
    // 0x217994: 0xa0f809  jalr        $a1
label_217998:
    if (ctx->pc == 0x217998u) {
        ctx->pc = 0x217998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217994u;
        // 0x217998: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21799Cu;
        goto label_21799c;
    }
    ctx->pc = 0x217994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x21799Cu);
        ctx->pc = 0x217998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217994u;
        // 0x217998: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217994u, 0x21799Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21799Cu;
label_21799c:
    // 0x21799c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21799cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2179a0:
    // 0x2179a0: 0x0  nop
    ctx->pc = 0x2179a0u;
    // NOP
label_2179a4:
    // 0x2179a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2179a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2179a8:
    // 0x2179a8: 0x0  nop
    ctx->pc = 0x2179a8u;
    // NOP
label_2179ac:
    // 0x2179ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2179b0:
    if (ctx->pc == 0x2179B0u) {
        ctx->pc = 0x2179B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179ACu;
        // 0x2179b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179B4u;
        goto label_2179b4;
    }
    ctx->pc = 0x2179ACu;
    {
        const bool branch_taken_0x2179ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2179B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179ACu;
        // 0x2179b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179ac) {
            ctx->pc = 0x2179B8u;
            goto label_2179b8;
        }
    }
    ctx->pc = 0x2179B4u;
label_2179b4:
    // 0x2179b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2179b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2179b8:
    // 0x2179b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2179b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2179bc:
    // 0x2179bc: 0x40f809  jalr        $v0
label_2179c0:
    if (ctx->pc == 0x2179C0u) {
        ctx->pc = 0x2179C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179BCu;
        // 0x2179c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179C4u;
        goto label_2179c4;
    }
    ctx->pc = 0x2179BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2179C4u);
        ctx->pc = 0x2179C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179BCu;
        // 0x2179c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179BCu, 0x2179C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2179C4u;
label_2179c4:
    // 0x2179c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2179c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2179c8:
    // 0x2179c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2179c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2179cc:
    // 0x2179cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2179ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2179d0:
    // 0x2179d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2179d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2179d4:
    // 0x2179d4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2179d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2179d8:
    // 0x2179d8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2179d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2179dc:
    // 0x2179dc: 0x3e00008  jr          $ra
label_2179e0:
    if (ctx->pc == 0x2179E0u) {
        ctx->pc = 0x2179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179DCu;
        // 0x2179e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179E4u;
        goto label_2179e4;
    }
    ctx->pc = 0x2179DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179DCu;
        // 0x2179e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179E4u;
label_2179e4:
    // 0x2179e4: 0x0  nop
    ctx->pc = 0x2179e4u;
    // NOP
    ctx->pc = 0x2179e8u;
}
