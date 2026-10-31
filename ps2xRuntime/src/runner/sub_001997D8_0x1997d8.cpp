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

// Function: sub_001997D8
// Address: 0x1997d8 - 0x199a50
void sub_001997D8_0x1997d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001997D8_0x1997d8");
#endif

    switch (ctx->pc) {
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        case 0x199880u: goto label_199880;
        case 0x199884u: goto label_199884;
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998b4u: goto label_1998b4;
        case 0x1998b8u: goto label_1998b8;
        case 0x1998bcu: goto label_1998bc;
        case 0x1998c0u: goto label_1998c0;
        case 0x1998c4u: goto label_1998c4;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998ccu: goto label_1998cc;
        case 0x1998d0u: goto label_1998d0;
        case 0x1998d4u: goto label_1998d4;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998e0u: goto label_1998e0;
        case 0x1998e4u: goto label_1998e4;
        case 0x1998e8u: goto label_1998e8;
        case 0x1998ecu: goto label_1998ec;
        case 0x1998f0u: goto label_1998f0;
        case 0x1998f4u: goto label_1998f4;
        case 0x1998f8u: goto label_1998f8;
        case 0x1998fcu: goto label_1998fc;
        case 0x199900u: goto label_199900;
        case 0x199904u: goto label_199904;
        case 0x199908u: goto label_199908;
        case 0x19990cu: goto label_19990c;
        case 0x199910u: goto label_199910;
        case 0x199914u: goto label_199914;
        case 0x199918u: goto label_199918;
        case 0x19991cu: goto label_19991c;
        case 0x199920u: goto label_199920;
        case 0x199924u: goto label_199924;
        case 0x199928u: goto label_199928;
        case 0x19992cu: goto label_19992c;
        case 0x199930u: goto label_199930;
        case 0x199934u: goto label_199934;
        case 0x199938u: goto label_199938;
        case 0x19993cu: goto label_19993c;
        case 0x199940u: goto label_199940;
        case 0x199944u: goto label_199944;
        case 0x199948u: goto label_199948;
        case 0x19994cu: goto label_19994c;
        case 0x199950u: goto label_199950;
        case 0x199954u: goto label_199954;
        case 0x199958u: goto label_199958;
        case 0x19995cu: goto label_19995c;
        case 0x199960u: goto label_199960;
        case 0x199964u: goto label_199964;
        case 0x199968u: goto label_199968;
        case 0x19996cu: goto label_19996c;
        case 0x199970u: goto label_199970;
        case 0x199974u: goto label_199974;
        case 0x199978u: goto label_199978;
        case 0x19997cu: goto label_19997c;
        case 0x199980u: goto label_199980;
        case 0x199984u: goto label_199984;
        case 0x199988u: goto label_199988;
        case 0x19998cu: goto label_19998c;
        case 0x199990u: goto label_199990;
        case 0x199994u: goto label_199994;
        case 0x199998u: goto label_199998;
        case 0x19999cu: goto label_19999c;
        case 0x1999a0u: goto label_1999a0;
        case 0x1999a4u: goto label_1999a4;
        case 0x1999a8u: goto label_1999a8;
        case 0x1999acu: goto label_1999ac;
        case 0x1999b0u: goto label_1999b0;
        case 0x1999b4u: goto label_1999b4;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999c4u: goto label_1999c4;
        case 0x1999c8u: goto label_1999c8;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d4u: goto label_1999d4;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999dcu: goto label_1999dc;
        case 0x1999e0u: goto label_1999e0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999e8u: goto label_1999e8;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999f0u: goto label_1999f0;
        case 0x1999f4u: goto label_1999f4;
        case 0x1999f8u: goto label_1999f8;
        case 0x1999fcu: goto label_1999fc;
        case 0x199a00u: goto label_199a00;
        case 0x199a04u: goto label_199a04;
        case 0x199a08u: goto label_199a08;
        case 0x199a0cu: goto label_199a0c;
        case 0x199a10u: goto label_199a10;
        case 0x199a14u: goto label_199a14;
        case 0x199a18u: goto label_199a18;
        case 0x199a1cu: goto label_199a1c;
        case 0x199a20u: goto label_199a20;
        case 0x199a24u: goto label_199a24;
        case 0x199a28u: goto label_199a28;
        case 0x199a2cu: goto label_199a2c;
        case 0x199a30u: goto label_199a30;
        case 0x199a34u: goto label_199a34;
        case 0x199a38u: goto label_199a38;
        case 0x199a3cu: goto label_199a3c;
        case 0x199a40u: goto label_199a40;
        case 0x199a44u: goto label_199a44;
        case 0x199a48u: goto label_199a48;
        case 0x199a4cu: goto label_199a4c;
        default: break;
    }

    ctx->pc = 0x1997d8u;

label_1997d8:
    // 0x1997d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1997dc:
    // 0x1997dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1997dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1997e0:
    // 0x1997e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1997e4:
    // 0x1997e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1997e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1997e8:
    // 0x1997e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1997e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1997ec:
    // 0x1997ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1997f0:
    // 0x1997f0: 0x8e06b8b8  lw          $a2, -0x4748($s0)
    ctx->pc = 0x1997f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1997f4:
    // 0x1997f4: 0xde250120  ld          $a1, 0x120($s1)
    ctx->pc = 0x1997f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 288)));
label_1997f8:
    // 0x1997f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1997fc:
    // 0x1997fc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_199800:
    // 0x199800: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_199804:
    // 0x199804: 0x40f809  jalr        $v0
label_199808:
    if (ctx->pc == 0x199808u) {
        ctx->pc = 0x199808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199804u;
        // 0x199808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19980Cu;
        goto label_19980c;
    }
    ctx->pc = 0x199804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19980Cu);
        ctx->pc = 0x199808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199804u;
        // 0x199808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199804u, 0x19980Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19980Cu;
label_19980c:
    // 0x19980c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_199810:
    if (ctx->pc == 0x199810u) {
        ctx->pc = 0x199810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19980Cu;
        // 0x199810: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199814u;
        goto label_199814;
    }
    ctx->pc = 0x19980Cu;
    {
        const bool branch_taken_0x19980c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19980Cu;
        // 0x199810: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19980c) {
            ctx->pc = 0x199828u;
            goto label_199828;
        }
    }
    ctx->pc = 0x199814u;
label_199814:
    // 0x199814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199818:
    // 0x199818: 0x0  nop
    ctx->pc = 0x199818u;
    // NOP
label_19981c:
    // 0x19981c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19981cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_199820:
    // 0x199820: 0x10000008  b           . + 4 + (0x8 << 2)
label_199824:
    if (ctx->pc == 0x199824u) {
        ctx->pc = 0x199824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199820u;
        // 0x199824: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199828u;
        goto label_199828;
    }
    ctx->pc = 0x199820u;
    {
        const bool branch_taken_0x199820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199820u;
        // 0x199824: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199820) {
            ctx->pc = 0x199844u;
            goto label_199844;
        }
    }
    ctx->pc = 0x199828u;
label_199828:
    // 0x199828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19982c:
    // 0x19982c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_199830:
    // 0x199830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199834:
    // 0x199834: 0x0  nop
    ctx->pc = 0x199834u;
    // NOP
label_199838:
    // 0x199838: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19983c:
    // 0x19983c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19983cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199840:
    // 0x199840: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_199844:
    // 0x199844: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_199848:
    if (ctx->pc == 0x199848u) {
        ctx->pc = 0x199848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199844u;
        // 0x199848: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19984Cu;
        goto label_19984c;
    }
    ctx->pc = 0x199844u;
    {
        const bool branch_taken_0x199844 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199844u;
        // 0x199848: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199844) {
            ctx->pc = 0x199860u;
            goto label_199860;
        }
    }
    ctx->pc = 0x19984Cu;
label_19984c:
    // 0x19984c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19984cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199850:
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
label_199854:
    // 0x199854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199858:
    // 0x199858: 0x10000007  b           . + 4 + (0x7 << 2)
label_19985c:
    if (ctx->pc == 0x19985Cu) {
        ctx->pc = 0x199860u;
        goto label_199860;
    }
    ctx->pc = 0x199858u;
    {
        const bool branch_taken_0x199858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199858) {
            ctx->pc = 0x199878u;
            goto label_199878;
        }
    }
    ctx->pc = 0x199860u;
label_199860:
    // 0x199860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_199864:
    // 0x199864: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_199868:
    // 0x199868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19986c:
    // 0x19986c: 0x0  nop
    ctx->pc = 0x19986cu;
    // NOP
label_199870:
    // 0x199870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199874:
    // 0x199874: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x199874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_199878:
    // 0x199878: 0x0  nop
    ctx->pc = 0x199878u;
    // NOP
label_19987c:
    // 0x19987c: 0x0  nop
    ctx->pc = 0x19987cu;
    // NOP
label_199880:
    // 0x199880: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x199880u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_199884:
    // 0x199884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_199888:
    // 0x199888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19988c:
    // 0x19988c: 0x0  nop
    ctx->pc = 0x19988cu;
    // NOP
label_199890:
    // 0x199890: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x199890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199894:
    // 0x199894: 0x0  nop
    ctx->pc = 0x199894u;
    // NOP
label_199898:
    // 0x199898: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19989c:
    if (ctx->pc == 0x19989Cu) {
        ctx->pc = 0x19989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199898u;
        // 0x19989c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998A0u;
        goto label_1998a0;
    }
    ctx->pc = 0x199898u;
    {
        const bool branch_taken_0x199898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199898) {
            ctx->pc = 0x19989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199898u;
            // 0x19989c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1998A0u;
            goto label_1998a0;
        }
    }
    ctx->pc = 0x1998A0u;
label_1998a0:
    // 0x1998a0: 0x92230110  lbu         $v1, 0x110($s1)
    ctx->pc = 0x1998a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
label_1998a4:
    // 0x1998a4: 0x460d0101  sub.s       $f4, $f0, $f13
    ctx->pc = 0x1998a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_1998a8:
    // 0x1998a8: 0x922200e0  lbu         $v0, 0xE0($s1)
    ctx->pc = 0x1998a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 224)));
label_1998ac:
    // 0x1998ac: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x1998acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1998b0:
    // 0x1998b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1998b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1998b4:
    // 0x1998b4: 0x0  nop
    ctx->pc = 0x1998b4u;
    // NOP
label_1998b8:
    // 0x1998b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1998b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1998bc:
    // 0x1998bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1998c0:
    // 0x1998c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1998c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1998c4:
    // 0x1998c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1998c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1998c8:
    // 0x1998c8: 0x0  nop
    ctx->pc = 0x1998c8u;
    // NOP
label_1998cc:
    // 0x1998cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1998ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1998d0:
    // 0x1998d0: 0xc62200dc  lwc1        $f2, 0xDC($s1)
    ctx->pc = 0x1998d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1998d4:
    // 0x1998d4: 0xc62800cc  lwc1        $f8, 0xCC($s1)
    ctx->pc = 0x1998d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1998d8:
    // 0x1998d8: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x1998d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_1998dc:
    // 0x1998dc: 0xc62b00fc  lwc1        $f11, 0xFC($s1)
    ctx->pc = 0x1998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1998e0:
    // 0x1998e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1998e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1998e4:
    // 0x1998e4: 0xc62700d0  lwc1        $f7, 0xD0($s1)
    ctx->pc = 0x1998e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1998e8:
    // 0x1998e8: 0xc62a0100  lwc1        $f10, 0x100($s1)
    ctx->pc = 0x1998e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1998ec:
    // 0x1998ec: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1998ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1998f0:
    // 0x1998f0: 0xc62600d4  lwc1        $f6, 0xD4($s1)
    ctx->pc = 0x1998f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1998f4:
    // 0x1998f4: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x1998f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_1998f8:
    // 0x1998f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1998f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1998fc:
    // 0x1998fc: 0xc6290104  lwc1        $f9, 0x104($s1)
    ctx->pc = 0x1998fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_199900:
    // 0x199900: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x199900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199904:
    // 0x199904: 0x460d5ac2  mul.s       $f11, $f11, $f13
    ctx->pc = 0x199904u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
label_199908:
    // 0x199908: 0xc62300d8  lwc1        $f3, 0xD8($s1)
    ctx->pc = 0x199908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19990c:
    // 0x19990c: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x19990cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_199910:
    // 0x199910: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x199910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_199914:
    // 0x199914: 0xc6250108  lwc1        $f5, 0x108($s1)
    ctx->pc = 0x199914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_199918:
    // 0x199918: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x199918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_19991c:
    // 0x19991c: 0x460d5282  mul.s       $f10, $f10, $f13
    ctx->pc = 0x19991cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_199920:
    // 0x199920: 0x46000324  .word       0x46000324                   # cvt.w.s     $f12, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x199920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[12], &tmp, sizeof(tmp)); }
label_199924:
    // 0x199924: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x199924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_199928:
    // 0x199928: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x199928u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_19992c:
    // 0x19992c: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x19992cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
label_199930:
    // 0x199930: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x199930u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_199934:
    // 0x199934: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x199934u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
label_199938:
    // 0x199938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19993c:
    // 0x19993c: 0x0  nop
    ctx->pc = 0x19993cu;
    // NOP
label_199940:
    // 0x199940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199944:
    // 0x199944: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x199944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_199948:
    // 0x199948: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x199948u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
label_19994c:
    // 0x19994c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19994cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_199950:
    // 0x199950: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x199950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_199954:
    // 0x199954: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x199954u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_199958:
    // 0x199958: 0xe62200f4  swc1        $f2, 0xF4($s1)
    ctx->pc = 0x199958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_19995c:
    // 0x19995c: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x19995cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
label_199960:
    // 0x199960: 0xe62800e4  swc1        $f8, 0xE4($s1)
    ctx->pc = 0x199960u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_199964:
    // 0x199964: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x199964u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_199968:
    // 0x199968: 0xa22200a3  sb          $v0, 0xA3($s1)
    ctx->pc = 0x199968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 2));
label_19996c:
    // 0x19996c: 0xe62700e8  swc1        $f7, 0xE8($s1)
    ctx->pc = 0x19996cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_199970:
    // 0x199970: 0xe62600ec  swc1        $f6, 0xEC($s1)
    ctx->pc = 0x199970u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_199974:
    // 0x199974: 0xe62300f0  swc1        $f3, 0xF0($s1)
    ctx->pc = 0x199974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_199978:
    // 0x199978: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_19997c:
    if (ctx->pc == 0x19997Cu) {
        ctx->pc = 0x19997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199978u;
        // 0x19997c: 0xa22200f8  sb          $v0, 0xF8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 248), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199980u;
        goto label_199980;
    }
    ctx->pc = 0x199978u;
    {
        const bool branch_taken_0x199978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199978u;
        // 0x19997c: 0xa22200f8  sb          $v0, 0xF8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 248), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199978) {
            ctx->pc = 0x199A38u;
            goto label_199a38;
        }
    }
    ctx->pc = 0x199980u;
label_199980:
    // 0x199980: 0x6a220103  ldl         $v0, 0x103($s1)
    ctx->pc = 0x199980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199984:
    // 0x199984: 0x6e2200fc  ldr         $v0, 0xFC($s1)
    ctx->pc = 0x199984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199988:
    // 0x199988: 0x6a23010b  ldl         $v1, 0x10B($s1)
    ctx->pc = 0x199988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19998c:
    // 0x19998c: 0x6e230104  ldr         $v1, 0x104($s1)
    ctx->pc = 0x19998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199990:
    // 0x199990: 0x6a240113  ldl         $a0, 0x113($s1)
    ctx->pc = 0x199990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_199994:
    // 0x199994: 0x6e24010c  ldr         $a0, 0x10C($s1)
    ctx->pc = 0x199994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_199998:
    // 0x199998: 0xb22200d3  sdl         $v0, 0xD3($s1)
    ctx->pc = 0x199998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19999c:
    // 0x19999c: 0xb62200cc  sdr         $v0, 0xCC($s1)
    ctx->pc = 0x19999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999a0:
    // 0x1999a0: 0xb22300db  sdl         $v1, 0xDB($s1)
    ctx->pc = 0x1999a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999a4:
    // 0x1999a4: 0xb62300d4  sdr         $v1, 0xD4($s1)
    ctx->pc = 0x1999a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999a8:
    // 0x1999a8: 0xb22400e3  sdl         $a0, 0xE3($s1)
    ctx->pc = 0x1999a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999ac:
    // 0x1999ac: 0xb62400dc  sdr         $a0, 0xDC($s1)
    ctx->pc = 0x1999acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999b0:
    // 0x1999b0: 0x6a220103  ldl         $v0, 0x103($s1)
    ctx->pc = 0x1999b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1999b4:
    // 0x1999b4: 0x6e2200fc  ldr         $v0, 0xFC($s1)
    ctx->pc = 0x1999b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1999b8:
    // 0x1999b8: 0x6a23010b  ldl         $v1, 0x10B($s1)
    ctx->pc = 0x1999b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1999bc:
    // 0x1999bc: 0x6e230104  ldr         $v1, 0x104($s1)
    ctx->pc = 0x1999bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1999c0:
    // 0x1999c0: 0x6a240113  ldl         $a0, 0x113($s1)
    ctx->pc = 0x1999c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1999c4:
    // 0x1999c4: 0x6e24010c  ldr         $a0, 0x10C($s1)
    ctx->pc = 0x1999c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1999c8:
    // 0x1999c8: 0xb22200eb  sdl         $v0, 0xEB($s1)
    ctx->pc = 0x1999c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999cc:
    // 0x1999cc: 0xb62200e4  sdr         $v0, 0xE4($s1)
    ctx->pc = 0x1999ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999d0:
    // 0x1999d0: 0xb22300f3  sdl         $v1, 0xF3($s1)
    ctx->pc = 0x1999d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999d4:
    // 0x1999d4: 0xb62300ec  sdr         $v1, 0xEC($s1)
    ctx->pc = 0x1999d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999d8:
    // 0x1999d8: 0xb22400fb  sdl         $a0, 0xFB($s1)
    ctx->pc = 0x1999d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999dc:
    // 0x1999dc: 0xb62400f4  sdr         $a0, 0xF4($s1)
    ctx->pc = 0x1999dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1999e0:
    // 0x1999e0: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1999e4:
    // 0x1999e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1999e8:
    // 0x1999e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1999e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1999ec:
    // 0x1999ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1999f0:
    // 0x1999f0: 0x40f809  jalr        $v0
label_1999f4:
    if (ctx->pc == 0x1999F4u) {
        ctx->pc = 0x1999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F0u;
        // 0x1999f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999F8u;
        goto label_1999f8;
    }
    ctx->pc = 0x1999F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1999F8u);
        ctx->pc = 0x1999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F0u;
        // 0x1999f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999F0u, 0x1999F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1999F8u;
label_1999f8:
    // 0x1999f8: 0xfe220120  sd          $v0, 0x120($s1)
    ctx->pc = 0x1999f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 288), GPR_U64(ctx, 2));
label_1999fc:
    // 0x1999fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1999fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_199a00:
    // 0x199a00: 0xc0665ac  jal         func_1996B0
label_199a04:
    if (ctx->pc == 0x199A04u) {
        ctx->pc = 0x199A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A00u;
        // 0x199a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A08u;
        goto label_199a08;
    }
    ctx->pc = 0x199A00u;
    SET_GPR_U32(ctx, 31, 0x199A08u);
    ctx->pc = 0x199A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A00u;
    // 0x199a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1996B0u, 0x199A00u, 0x199A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A08u;
label_199a08:
    // 0x199a08: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x199a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199a0c:
    // 0x199a0c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x199a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199a10:
    // 0x199a10: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x199a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199a14:
    // 0x199a14: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x199a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199a18:
    // 0x199a18: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x199a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_199a1c:
    // 0x199a1c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x199a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_199a20:
    // 0x199a20: 0xb2220103  sdl         $v0, 0x103($s1)
    ctx->pc = 0x199a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a24:
    // 0x199a24: 0xb62200fc  sdr         $v0, 0xFC($s1)
    ctx->pc = 0x199a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a28:
    // 0x199a28: 0xb223010b  sdl         $v1, 0x10B($s1)
    ctx->pc = 0x199a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a2c:
    // 0x199a2c: 0xb6230104  sdr         $v1, 0x104($s1)
    ctx->pc = 0x199a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a30:
    // 0x199a30: 0xb2240113  sdl         $a0, 0x113($s1)
    ctx->pc = 0x199a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a34:
    // 0x199a34: 0xb624010c  sdr         $a0, 0x10C($s1)
    ctx->pc = 0x199a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199a38:
    // 0x199a38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x199a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_199a3c:
    // 0x199a3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x199a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_199a40:
    // 0x199a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199a44:
    // 0x199a44: 0x3e00008  jr          $ra
label_199a48:
    if (ctx->pc == 0x199A48u) {
        ctx->pc = 0x199A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A44u;
        // 0x199a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A4Cu;
        goto label_199a4c;
    }
    ctx->pc = 0x199A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A44u;
        // 0x199a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199A4Cu;
label_199a4c:
    // 0x199a4c: 0x0  nop
    ctx->pc = 0x199a4cu;
    // NOP
    ctx->pc = 0x199a50u;
}
