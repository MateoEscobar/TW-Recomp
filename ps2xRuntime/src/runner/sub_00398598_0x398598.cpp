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

// Function: sub_00398598
// Address: 0x398598 - 0x398940
void sub_00398598_0x398598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398598_0x398598");
#endif

    switch (ctx->pc) {
        case 0x398598u: goto label_398598;
        case 0x39859cu: goto label_39859c;
        case 0x3985a0u: goto label_3985a0;
        case 0x3985a4u: goto label_3985a4;
        case 0x3985a8u: goto label_3985a8;
        case 0x3985acu: goto label_3985ac;
        case 0x3985b0u: goto label_3985b0;
        case 0x3985b4u: goto label_3985b4;
        case 0x3985b8u: goto label_3985b8;
        case 0x3985bcu: goto label_3985bc;
        case 0x3985c0u: goto label_3985c0;
        case 0x3985c4u: goto label_3985c4;
        case 0x3985c8u: goto label_3985c8;
        case 0x3985ccu: goto label_3985cc;
        case 0x3985d0u: goto label_3985d0;
        case 0x3985d4u: goto label_3985d4;
        case 0x3985d8u: goto label_3985d8;
        case 0x3985dcu: goto label_3985dc;
        case 0x3985e0u: goto label_3985e0;
        case 0x3985e4u: goto label_3985e4;
        case 0x3985e8u: goto label_3985e8;
        case 0x3985ecu: goto label_3985ec;
        case 0x3985f0u: goto label_3985f0;
        case 0x3985f4u: goto label_3985f4;
        case 0x3985f8u: goto label_3985f8;
        case 0x3985fcu: goto label_3985fc;
        case 0x398600u: goto label_398600;
        case 0x398604u: goto label_398604;
        case 0x398608u: goto label_398608;
        case 0x39860cu: goto label_39860c;
        case 0x398610u: goto label_398610;
        case 0x398614u: goto label_398614;
        case 0x398618u: goto label_398618;
        case 0x39861cu: goto label_39861c;
        case 0x398620u: goto label_398620;
        case 0x398624u: goto label_398624;
        case 0x398628u: goto label_398628;
        case 0x39862cu: goto label_39862c;
        case 0x398630u: goto label_398630;
        case 0x398634u: goto label_398634;
        case 0x398638u: goto label_398638;
        case 0x39863cu: goto label_39863c;
        case 0x398640u: goto label_398640;
        case 0x398644u: goto label_398644;
        case 0x398648u: goto label_398648;
        case 0x39864cu: goto label_39864c;
        case 0x398650u: goto label_398650;
        case 0x398654u: goto label_398654;
        case 0x398658u: goto label_398658;
        case 0x39865cu: goto label_39865c;
        case 0x398660u: goto label_398660;
        case 0x398664u: goto label_398664;
        case 0x398668u: goto label_398668;
        case 0x39866cu: goto label_39866c;
        case 0x398670u: goto label_398670;
        case 0x398674u: goto label_398674;
        case 0x398678u: goto label_398678;
        case 0x39867cu: goto label_39867c;
        case 0x398680u: goto label_398680;
        case 0x398684u: goto label_398684;
        case 0x398688u: goto label_398688;
        case 0x39868cu: goto label_39868c;
        case 0x398690u: goto label_398690;
        case 0x398694u: goto label_398694;
        case 0x398698u: goto label_398698;
        case 0x39869cu: goto label_39869c;
        case 0x3986a0u: goto label_3986a0;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986a8u: goto label_3986a8;
        case 0x3986acu: goto label_3986ac;
        case 0x3986b0u: goto label_3986b0;
        case 0x3986b4u: goto label_3986b4;
        case 0x3986b8u: goto label_3986b8;
        case 0x3986bcu: goto label_3986bc;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986c4u: goto label_3986c4;
        case 0x3986c8u: goto label_3986c8;
        case 0x3986ccu: goto label_3986cc;
        case 0x3986d0u: goto label_3986d0;
        case 0x3986d4u: goto label_3986d4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986dcu: goto label_3986dc;
        case 0x3986e0u: goto label_3986e0;
        case 0x3986e4u: goto label_3986e4;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986ecu: goto label_3986ec;
        case 0x3986f0u: goto label_3986f0;
        case 0x3986f4u: goto label_3986f4;
        case 0x3986f8u: goto label_3986f8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398700u: goto label_398700;
        case 0x398704u: goto label_398704;
        case 0x398708u: goto label_398708;
        case 0x39870cu: goto label_39870c;
        case 0x398710u: goto label_398710;
        case 0x398714u: goto label_398714;
        case 0x398718u: goto label_398718;
        case 0x39871cu: goto label_39871c;
        case 0x398720u: goto label_398720;
        case 0x398724u: goto label_398724;
        case 0x398728u: goto label_398728;
        case 0x39872cu: goto label_39872c;
        case 0x398730u: goto label_398730;
        case 0x398734u: goto label_398734;
        case 0x398738u: goto label_398738;
        case 0x39873cu: goto label_39873c;
        case 0x398740u: goto label_398740;
        case 0x398744u: goto label_398744;
        case 0x398748u: goto label_398748;
        case 0x39874cu: goto label_39874c;
        case 0x398750u: goto label_398750;
        case 0x398754u: goto label_398754;
        case 0x398758u: goto label_398758;
        case 0x39875cu: goto label_39875c;
        case 0x398760u: goto label_398760;
        case 0x398764u: goto label_398764;
        case 0x398768u: goto label_398768;
        case 0x39876cu: goto label_39876c;
        case 0x398770u: goto label_398770;
        case 0x398774u: goto label_398774;
        case 0x398778u: goto label_398778;
        case 0x39877cu: goto label_39877c;
        case 0x398780u: goto label_398780;
        case 0x398784u: goto label_398784;
        case 0x398788u: goto label_398788;
        case 0x39878cu: goto label_39878c;
        case 0x398790u: goto label_398790;
        case 0x398794u: goto label_398794;
        case 0x398798u: goto label_398798;
        case 0x39879cu: goto label_39879c;
        case 0x3987a0u: goto label_3987a0;
        case 0x3987a4u: goto label_3987a4;
        case 0x3987a8u: goto label_3987a8;
        case 0x3987acu: goto label_3987ac;
        case 0x3987b0u: goto label_3987b0;
        case 0x3987b4u: goto label_3987b4;
        case 0x3987b8u: goto label_3987b8;
        case 0x3987bcu: goto label_3987bc;
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        case 0x3987d0u: goto label_3987d0;
        case 0x3987d4u: goto label_3987d4;
        case 0x3987d8u: goto label_3987d8;
        case 0x3987dcu: goto label_3987dc;
        case 0x3987e0u: goto label_3987e0;
        case 0x3987e4u: goto label_3987e4;
        case 0x3987e8u: goto label_3987e8;
        case 0x3987ecu: goto label_3987ec;
        case 0x3987f0u: goto label_3987f0;
        case 0x3987f4u: goto label_3987f4;
        case 0x3987f8u: goto label_3987f8;
        case 0x3987fcu: goto label_3987fc;
        case 0x398800u: goto label_398800;
        case 0x398804u: goto label_398804;
        case 0x398808u: goto label_398808;
        case 0x39880cu: goto label_39880c;
        case 0x398810u: goto label_398810;
        case 0x398814u: goto label_398814;
        case 0x398818u: goto label_398818;
        case 0x39881cu: goto label_39881c;
        case 0x398820u: goto label_398820;
        case 0x398824u: goto label_398824;
        case 0x398828u: goto label_398828;
        case 0x39882cu: goto label_39882c;
        case 0x398830u: goto label_398830;
        case 0x398834u: goto label_398834;
        case 0x398838u: goto label_398838;
        case 0x39883cu: goto label_39883c;
        case 0x398840u: goto label_398840;
        case 0x398844u: goto label_398844;
        case 0x398848u: goto label_398848;
        case 0x39884cu: goto label_39884c;
        case 0x398850u: goto label_398850;
        case 0x398854u: goto label_398854;
        case 0x398858u: goto label_398858;
        case 0x39885cu: goto label_39885c;
        case 0x398860u: goto label_398860;
        case 0x398864u: goto label_398864;
        case 0x398868u: goto label_398868;
        case 0x39886cu: goto label_39886c;
        case 0x398870u: goto label_398870;
        case 0x398874u: goto label_398874;
        case 0x398878u: goto label_398878;
        case 0x39887cu: goto label_39887c;
        case 0x398880u: goto label_398880;
        case 0x398884u: goto label_398884;
        case 0x398888u: goto label_398888;
        case 0x39888cu: goto label_39888c;
        case 0x398890u: goto label_398890;
        case 0x398894u: goto label_398894;
        case 0x398898u: goto label_398898;
        case 0x39889cu: goto label_39889c;
        case 0x3988a0u: goto label_3988a0;
        case 0x3988a4u: goto label_3988a4;
        case 0x3988a8u: goto label_3988a8;
        case 0x3988acu: goto label_3988ac;
        case 0x3988b0u: goto label_3988b0;
        case 0x3988b4u: goto label_3988b4;
        case 0x3988b8u: goto label_3988b8;
        case 0x3988bcu: goto label_3988bc;
        case 0x3988c0u: goto label_3988c0;
        case 0x3988c4u: goto label_3988c4;
        case 0x3988c8u: goto label_3988c8;
        case 0x3988ccu: goto label_3988cc;
        case 0x3988d0u: goto label_3988d0;
        case 0x3988d4u: goto label_3988d4;
        case 0x3988d8u: goto label_3988d8;
        case 0x3988dcu: goto label_3988dc;
        case 0x3988e0u: goto label_3988e0;
        case 0x3988e4u: goto label_3988e4;
        case 0x3988e8u: goto label_3988e8;
        case 0x3988ecu: goto label_3988ec;
        case 0x3988f0u: goto label_3988f0;
        case 0x3988f4u: goto label_3988f4;
        case 0x3988f8u: goto label_3988f8;
        case 0x3988fcu: goto label_3988fc;
        case 0x398900u: goto label_398900;
        case 0x398904u: goto label_398904;
        case 0x398908u: goto label_398908;
        case 0x39890cu: goto label_39890c;
        case 0x398910u: goto label_398910;
        case 0x398914u: goto label_398914;
        case 0x398918u: goto label_398918;
        case 0x39891cu: goto label_39891c;
        case 0x398920u: goto label_398920;
        case 0x398924u: goto label_398924;
        case 0x398928u: goto label_398928;
        case 0x39892cu: goto label_39892c;
        case 0x398930u: goto label_398930;
        case 0x398934u: goto label_398934;
        case 0x398938u: goto label_398938;
        case 0x39893cu: goto label_39893c;
        default: break;
    }

    ctx->pc = 0x398598u;

label_398598:
    // 0x398598: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x398598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_39859c:
    // 0x39859c: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x39859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_3985a0:
    // 0x3985a0: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x3985a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_3985a4:
    // 0x3985a4: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x3985a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_3985a8:
    // 0x3985a8: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x3985a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_3985ac:
    // 0x3985ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3985acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3985b0:
    // 0x3985b0: 0x8ea45340  lw          $a0, 0x5340($s5)
    ctx->pc = 0x3985b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21312)));
label_3985b4:
    // 0x3985b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3985b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3985b8:
    // 0x3985b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3985b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3985bc:
    // 0x3985bc: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x3985bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_3985c0:
    // 0x3985c0: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x3985c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_3985c4:
    // 0x3985c4: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x3985c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_3985c8:
    // 0x3985c8: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x3985c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_3985cc:
    // 0x3985cc: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x3985ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_3985d0:
    // 0x3985d0: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x3985d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_3985d4:
    // 0x3985d4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x3985d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_3985d8:
    // 0x3985d8: 0xc0552b8  jal         func_154AE0
label_3985dc:
    if (ctx->pc == 0x3985DCu) {
        ctx->pc = 0x3985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985D8u;
        // 0x3985dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985E0u;
        goto label_3985e0;
    }
    ctx->pc = 0x3985D8u;
    SET_GPR_U32(ctx, 31, 0x3985E0u);
    ctx->pc = 0x3985DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3985D8u;
    // 0x3985dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x3985D8u, 0x3985E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3985E0u;
label_3985e0:
    // 0x3985e0: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x3985e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_3985e4:
    // 0x3985e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3985e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3985e8:
    // 0x3985e8: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x3985e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_3985ec:
    // 0x3985ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3985ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3985f0:
    // 0x3985f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3985f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3985f4:
    // 0x3985f4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3985f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3985f8:
    // 0x3985f8: 0x40f809  jalr        $v0
label_3985fc:
    if (ctx->pc == 0x3985FCu) {
        ctx->pc = 0x3985FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985F8u;
        // 0x3985fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398600u;
        goto label_398600;
    }
    ctx->pc = 0x3985F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398600u);
        ctx->pc = 0x3985FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985F8u;
        // 0x3985fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3985F8u, 0x398600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398600u;
label_398600:
    // 0x398600: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_398604:
    if (ctx->pc == 0x398604u) {
        ctx->pc = 0x398604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398600u;
        // 0x398604: 0x8e02b788  lw          $v0, -0x4878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398608u;
        goto label_398608;
    }
    ctx->pc = 0x398600u;
    {
        const bool branch_taken_0x398600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398600u;
        // 0x398604: 0x8e02b788  lw          $v0, -0x4878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398600) {
            ctx->pc = 0x398910u;
            goto label_398910;
        }
    }
    ctx->pc = 0x398608u;
label_398608:
    // 0x398608: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x398608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39860c:
    // 0x39860c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39860cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_398610:
    // 0x398610: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x398610u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_398614:
    // 0x398614: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x398614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_398618:
    // 0x398618: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x398618u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_39861c:
    // 0x39861c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_398620:
    // 0x398620: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x398620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_398624:
    // 0x398624: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x398624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_398628:
    // 0x398628: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x398628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_39862c:
    // 0x39862c: 0x40f809  jalr        $v0
label_398630:
    if (ctx->pc == 0x398630u) {
        ctx->pc = 0x398630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39862Cu;
        // 0x398630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398634u;
        goto label_398634;
    }
    ctx->pc = 0x39862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398634u);
        ctx->pc = 0x398630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39862Cu;
        // 0x398630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39862Cu, 0x398634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398634u;
label_398634:
    // 0x398634: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x398634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_398638:
    // 0x398638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x398638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39863c:
    // 0x39863c: 0x8c64b788  lw          $a0, -0x4878($v1)
    ctx->pc = 0x39863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_398640:
    // 0x398640: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x398640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398644:
    // 0x398644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398648:
    // 0x398648: 0x8c870090  lw          $a3, 0x90($a0)
    ctx->pc = 0x398648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39864c:
    // 0x39864c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_398650:
    // 0x398650: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x398650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_398654:
    // 0x398654: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x398654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_398658:
    // 0x398658: 0x40f809  jalr        $v0
label_39865c:
    if (ctx->pc == 0x39865Cu) {
        ctx->pc = 0x39865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398658u;
        // 0x39865c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398660u;
        goto label_398660;
    }
    ctx->pc = 0x398658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398660u);
        ctx->pc = 0x39865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398658u;
        // 0x39865c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398658u, 0x398660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398660u;
label_398660:
    // 0x398660: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x398660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_398664:
    // 0x398664: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x398664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_398668:
    // 0x398668: 0x8ea25340  lw          $v0, 0x5340($s5)
    ctx->pc = 0x398668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21312)));
label_39866c:
    // 0x39866c: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x39866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_398670:
    // 0x398670: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x398670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_398674:
    // 0x398674: 0xc055130  jal         func_1544C0
label_398678:
    if (ctx->pc == 0x398678u) {
        ctx->pc = 0x398678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398674u;
        // 0x398678: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39867Cu;
        goto label_39867c;
    }
    ctx->pc = 0x398674u;
    SET_GPR_U32(ctx, 31, 0x39867Cu);
    ctx->pc = 0x398678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398674u;
    // 0x398678: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x398674u, 0x39867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39867Cu;
label_39867c:
    // 0x39867c: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x39867cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_398680:
    // 0x398680: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x398680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_398684:
    // 0x398684: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x398684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_398688:
    // 0x398688: 0x26481188  addiu       $t0, $s2, 0x1188
    ctx->pc = 0x398688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4488));
label_39868c:
    // 0x39868c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x39868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_398690:
    // 0x398690: 0x2409019b  addiu       $t1, $zero, 0x19B
    ctx->pc = 0x398690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
label_398694:
    // 0x398694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398698:
    // 0x398698: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x398698u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39869c:
    // 0x39869c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39869cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3986a0:
    // 0x3986a0: 0x24a511d8  addiu       $a1, $a1, 0x11D8
    ctx->pc = 0x3986a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4568));
label_3986a4:
    // 0x3986a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3986a8:
    // 0x3986a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3986a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3986ac:
    // 0x3986ac: 0x40f809  jalr        $v0
label_3986b0:
    if (ctx->pc == 0x3986B0u) {
        ctx->pc = 0x3986B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986ACu;
        // 0x3986b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986B4u;
        goto label_3986b4;
    }
    ctx->pc = 0x3986ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3986B4u);
        ctx->pc = 0x3986B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986ACu;
        // 0x3986b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3986ACu, 0x3986B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3986B4u;
label_3986b4:
    // 0x3986b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3986b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3986b8:
    // 0x3986b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3986b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3986bc:
    // 0x3986bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3986bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3986c0:
    // 0x3986c0: 0xc05518c  jal         func_154630
label_3986c4:
    if (ctx->pc == 0x3986C4u) {
        ctx->pc = 0x3986C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986C0u;
        // 0x3986c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986C8u;
        goto label_3986c8;
    }
    ctx->pc = 0x3986C0u;
    SET_GPR_U32(ctx, 31, 0x3986C8u);
    ctx->pc = 0x3986C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986C0u;
    // 0x3986c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154630u, 0x3986C0u, 0x3986C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986C8u;
label_3986c8:
    // 0x3986c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3986c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3986cc:
    // 0x3986cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3986ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3986d0:
    // 0x3986d0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3986d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3986d4:
    // 0x3986d4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3986d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3986d8:
    // 0x3986d8: 0x8c672c20  lw          $a3, 0x2C20($v1)
    ctx->pc = 0x3986d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
label_3986dc:
    // 0x3986dc: 0x24a511e0  addiu       $a1, $a1, 0x11E0
    ctx->pc = 0x3986dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4576));
label_3986e0:
    // 0x3986e0: 0x948256dc  lhu         $v0, 0x56DC($a0)
    ctx->pc = 0x3986e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22236)));
label_3986e4:
    // 0x3986e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3986e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3986e8:
    // 0x3986e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3986e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3986ec:
    // 0x3986ec: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x3986ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_3986f0:
    // 0x3986f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3986f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3986f4:
    // 0x3986f4: 0xc10ca4a  jal         func_432928
label_3986f8:
    if (ctx->pc == 0x3986F8u) {
        ctx->pc = 0x3986F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3986F4u;
        // 0x3986f8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3986FCu;
        goto label_3986fc;
    }
    ctx->pc = 0x3986F4u;
    SET_GPR_U32(ctx, 31, 0x3986FCu);
    ctx->pc = 0x3986F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986F4u;
    // 0x3986f8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x3986F4u, 0x3986FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986FCu;
label_3986fc:
    // 0x3986fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3986fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_398700:
    // 0x398700: 0xc10d74c  jal         func_435D30
label_398704:
    if (ctx->pc == 0x398704u) {
        ctx->pc = 0x398704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398700u;
        // 0x398704: 0x266511e8  addiu       $a1, $s3, 0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398708u;
        goto label_398708;
    }
    ctx->pc = 0x398700u;
    SET_GPR_U32(ctx, 31, 0x398708u);
    ctx->pc = 0x398704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398700u;
    // 0x398704: 0x266511e8  addiu       $a1, $s3, 0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x398700u, 0x398708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398708u;
label_398708:
    // 0x398708: 0x97c30018  lhu         $v1, 0x18($fp)
    ctx->pc = 0x398708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
label_39870c:
    // 0x39870c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x39870cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_398710:
    // 0x398710: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_398714:
    if (ctx->pc == 0x398714u) {
        ctx->pc = 0x398714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398710u;
        // 0x398714: 0xa7c3001c  sh          $v1, 0x1C($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398718u;
        goto label_398718;
    }
    ctx->pc = 0x398710u;
    {
        const bool branch_taken_0x398710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398710u;
        // 0x398714: 0xa7c3001c  sh          $v1, 0x1C($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398710) {
            ctx->pc = 0x3988A4u;
            goto label_3988a4;
        }
    }
    ctx->pc = 0x398718u;
label_398718:
    // 0x398718: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x398718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_39871c:
    // 0x39871c: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
label_398720:
    if (ctx->pc == 0x398720u) {
        ctx->pc = 0x398720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39871Cu;
        // 0x398720: 0x27a200f8  addiu       $v0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398724u;
        goto label_398724;
    }
    ctx->pc = 0x39871Cu;
    {
        const bool branch_taken_0x39871c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x398720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39871Cu;
        // 0x398720: 0x27a200f8  addiu       $v0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39871c) {
            ctx->pc = 0x3988A4u;
            goto label_3988a4;
        }
    }
    ctx->pc = 0x398724u;
label_398724:
    // 0x398724: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x398724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_398728:
    // 0x398728: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x398728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_39872c:
    // 0x39872c: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x39872cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
label_398730:
    // 0x398730: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x398730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_398734:
    // 0x398734: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x398734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_398738:
    // 0x398738: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x398738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_39873c:
    // 0x39873c: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_398740:
    // 0x398740: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x398740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_398744:
    // 0x398744: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x398744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_398748:
    // 0x398748: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x398748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_39874c:
    // 0x39874c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x39874cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_398750:
    // 0x398750: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x398750u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
label_398754:
    // 0x398754: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x398754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_398758:
    // 0x398758: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x398758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_39875c:
    // 0x39875c: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x39875cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_398760:
    // 0x398760: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x398760u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_398764:
    // 0x398764: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x398764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_398768:
    // 0x398768: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x398768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_39876c:
    // 0x39876c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x39876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_398770:
    // 0x398770: 0x246511f0  addiu       $a1, $v1, 0x11F0
    ctx->pc = 0x398770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4592));
label_398774:
    // 0x398774: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x398774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_398778:
    // 0x398778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x398778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39877c:
    // 0x39877c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x39877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_398780:
    // 0x398780: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x398780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398784:
    // 0x398784: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398788:
    // 0x398788: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x398788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39878c:
    // 0x39878c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x39878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_398790:
    // 0x398790: 0x27a800e4  addiu       $t0, $sp, 0xE4
    ctx->pc = 0x398790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_398794:
    // 0x398794: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x398794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_398798:
    // 0x398798: 0x27a900e8  addiu       $t1, $sp, 0xE8
    ctx->pc = 0x398798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_39879c:
    // 0x39879c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x39879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3987a0:
    // 0x3987a0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3987a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3987a4:
    // 0x3987a4: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x3987a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_3987a8:
    // 0x3987a8: 0x27ab00f4  addiu       $t3, $sp, 0xF4
    ctx->pc = 0x3987a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_3987ac:
    // 0x3987ac: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3987acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3987b0:
    // 0x3987b0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3987b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3987b4:
    // 0x3987b4: 0xafb60110  sw          $s6, 0x110($sp)
    ctx->pc = 0x3987b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 22));
label_3987b8:
    // 0x3987b8: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x3987b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_3987bc:
    // 0x3987bc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3987bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3987c0:
    // 0x3987c0: 0xc10ca4a  jal         func_432928
label_3987c4:
    if (ctx->pc == 0x3987C4u) {
        ctx->pc = 0x3987C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987C0u;
        // 0x3987c4: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987C8u;
        goto label_3987c8;
    }
    ctx->pc = 0x3987C0u;
    SET_GPR_U32(ctx, 31, 0x3987C8u);
    ctx->pc = 0x3987C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987C0u;
    // 0x3987c4: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x3987C0u, 0x3987C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987C8u;
label_3987c8:
    // 0x3987c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3987c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3987cc:
    // 0x3987cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3987ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3987d0:
    // 0x3987d0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3987d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3987d4:
    // 0x3987d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3987d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3987d8:
    // 0x3987d8: 0x24651228  addiu       $a1, $v1, 0x1228
    ctx->pc = 0x3987d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
label_3987dc:
    // 0x3987dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3987dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3987e0:
    // 0x3987e0: 0xc10c46c  jal         func_4311B0
label_3987e4:
    if (ctx->pc == 0x3987E4u) {
        ctx->pc = 0x3987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E0u;
        // 0x3987e4: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987E8u;
        goto label_3987e8;
    }
    ctx->pc = 0x3987E0u;
    SET_GPR_U32(ctx, 31, 0x3987E8u);
    ctx->pc = 0x3987E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987E0u;
    // 0x3987e4: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x3987E0u, 0x3987E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987E8u;
label_3987e8:
    // 0x3987e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3987ec:
    if (ctx->pc == 0x3987ECu) {
        ctx->pc = 0x3987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E8u;
        // 0x3987ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987F0u;
        goto label_3987f0;
    }
    ctx->pc = 0x3987E8u;
    {
        const bool branch_taken_0x3987e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E8u;
        // 0x3987ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987e8) {
            ctx->pc = 0x398838u;
            goto label_398838;
        }
    }
    ctx->pc = 0x3987F0u;
label_3987f0:
    // 0x3987f0: 0xc0e8b48  jal         func_3A2D20
label_3987f4:
    if (ctx->pc == 0x3987F4u) {
        ctx->pc = 0x3987F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987F0u;
        // 0x3987f4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987F8u;
        goto label_3987f8;
    }
    ctx->pc = 0x3987F0u;
    SET_GPR_U32(ctx, 31, 0x3987F8u);
    ctx->pc = 0x3987F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987F0u;
    // 0x3987f4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3987F0u, 0x3987F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987F8u;
label_3987f8:
    // 0x3987f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3987f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3987fc:
    // 0x3987fc: 0xc0e8b58  jal         func_3A2D60
label_398800:
    if (ctx->pc == 0x398800u) {
        ctx->pc = 0x398800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987FCu;
        // 0x398800: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398804u;
        goto label_398804;
    }
    ctx->pc = 0x3987FCu;
    SET_GPR_U32(ctx, 31, 0x398804u);
    ctx->pc = 0x398800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987FCu;
    // 0x398800: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3987FCu, 0x398804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398804u;
label_398804:
    // 0x398804: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x398804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_398808:
    // 0x398808: 0xc0e8b58  jal         func_3A2D60
label_39880c:
    if (ctx->pc == 0x39880Cu) {
        ctx->pc = 0x39880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398808u;
        // 0x39880c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398810u;
        goto label_398810;
    }
    ctx->pc = 0x398808u;
    SET_GPR_U32(ctx, 31, 0x398810u);
    ctx->pc = 0x39880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398808u;
    // 0x39880c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x398808u, 0x398810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398810u;
label_398810:
    // 0x398810: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x398810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_398814:
    // 0x398814: 0xc0e8b70  jal         func_3A2DC0
label_398818:
    if (ctx->pc == 0x398818u) {
        ctx->pc = 0x398818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398814u;
        // 0x398818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39881Cu;
        goto label_39881c;
    }
    ctx->pc = 0x398814u;
    SET_GPR_U32(ctx, 31, 0x39881Cu);
    ctx->pc = 0x398818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398814u;
    // 0x398818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x398814u, 0x39881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39881Cu;
label_39881c:
    // 0x39881c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_398820:
    // 0x398820: 0xc0e8b90  jal         func_3A2E40
label_398824:
    if (ctx->pc == 0x398824u) {
        ctx->pc = 0x398824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398820u;
        // 0x398824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398828u;
        goto label_398828;
    }
    ctx->pc = 0x398820u;
    SET_GPR_U32(ctx, 31, 0x398828u);
    ctx->pc = 0x398824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398820u;
    // 0x398824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x398820u, 0x398828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398828u;
label_398828:
    // 0x398828: 0xc0e8b50  jal         func_3A2D40
label_39882c:
    if (ctx->pc == 0x39882Cu) {
        ctx->pc = 0x39882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398828u;
        // 0x39882c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398830u;
        goto label_398830;
    }
    ctx->pc = 0x398828u;
    SET_GPR_U32(ctx, 31, 0x398830u);
    ctx->pc = 0x39882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398828u;
    // 0x39882c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x398828u, 0x398830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398830u;
label_398830:
    // 0x398830: 0x10000010  b           . + 4 + (0x10 << 2)
label_398834:
    if (ctx->pc == 0x398834u) {
        ctx->pc = 0x398834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398830u;
        // 0x398834: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398838u;
        goto label_398838;
    }
    ctx->pc = 0x398830u;
    {
        const bool branch_taken_0x398830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398830u;
        // 0x398834: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398830) {
            ctx->pc = 0x398874u;
            goto label_398874;
        }
    }
    ctx->pc = 0x398838u;
label_398838:
    // 0x398838: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x398838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_39883c:
    // 0x39883c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x39883cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_398840:
    // 0x398840: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x398840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_398844:
    // 0x398844: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x398844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_398848:
    // 0x398848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x398848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39884c:
    // 0x39884c: 0x8faa010c  lw          $t2, 0x10C($sp)
    ctx->pc = 0x39884cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_398850:
    // 0x398850: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x398850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398854:
    // 0x398854: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398858:
    // 0x398858: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x398858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39885c:
    // 0x39885c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x39885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_398860:
    // 0x398860: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x398860u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_398864:
    // 0x398864: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x398864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
label_398868:
    // 0x398868: 0xc0e6250  jal         func_398940
label_39886c:
    if (ctx->pc == 0x39886Cu) {
        ctx->pc = 0x39886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398868u;
        // 0x39886c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398870u;
        goto label_398870;
    }
    ctx->pc = 0x398868u;
    SET_GPR_U32(ctx, 31, 0x398870u);
    ctx->pc = 0x39886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398868u;
    // 0x39886c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x398868u, 0x398870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398870u;
label_398870:
    // 0x398870: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x398870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_398874:
    // 0x398874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x398874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398878:
    // 0x398878: 0xc10d74c  jal         func_435D30
label_39887c:
    if (ctx->pc == 0x39887Cu) {
        ctx->pc = 0x39887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398878u;
        // 0x39887c: 0x246511e8  addiu       $a1, $v1, 0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398880u;
        goto label_398880;
    }
    ctx->pc = 0x398878u;
    SET_GPR_U32(ctx, 31, 0x398880u);
    ctx->pc = 0x39887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398878u;
    // 0x39887c: 0x246511e8  addiu       $a1, $v1, 0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x398878u, 0x398880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398880u;
label_398880:
    // 0x398880: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x398880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_398884:
    // 0x398884: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x398884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_398888:
    // 0x398888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x398888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39888c:
    // 0x39888c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_398890:
    if (ctx->pc == 0x398890u) {
        ctx->pc = 0x398890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39888Cu;
        // 0x398890: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398894u;
        goto label_398894;
    }
    ctx->pc = 0x39888Cu;
    {
        const bool branch_taken_0x39888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39888Cu;
        // 0x398890: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39888c) {
            ctx->pc = 0x3988A4u;
            goto label_3988a4;
        }
    }
    ctx->pc = 0x398894u;
label_398894:
    // 0x398894: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x398894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_398898:
    // 0x398898: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x398898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39889c:
    // 0x39889c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_3988a0:
    if (ctx->pc == 0x3988A0u) {
        ctx->pc = 0x3988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39889Cu;
        // 0x3988a0: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988A4u;
        goto label_3988a4;
    }
    ctx->pc = 0x39889Cu;
    {
        const bool branch_taken_0x39889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39889Cu;
        // 0x3988a0: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39889c) {
            ctx->pc = 0x398768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398768;
        }
    }
    ctx->pc = 0x3988A4u;
label_3988a4:
    // 0x3988a4: 0x97c20018  lhu         $v0, 0x18($fp)
    ctx->pc = 0x3988a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
label_3988a8:
    // 0x3988a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3988a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3988ac:
    // 0x3988ac: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x3988acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_3988b0:
    // 0x3988b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3988b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3988b4:
    // 0x3988b4: 0xa7c2001e  sh          $v0, 0x1E($fp)
    ctx->pc = 0x3988b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 30), (uint16_t)GPR_U32(ctx, 2));
label_3988b8:
    // 0x3988b8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3988b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3988bc:
    // 0x3988bc: 0x24661188  addiu       $a2, $v1, 0x1188
    ctx->pc = 0x3988bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4488));
label_3988c0:
    // 0x3988c0: 0x240701e0  addiu       $a3, $zero, 0x1E0
    ctx->pc = 0x3988c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_3988c4:
    // 0x3988c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3988c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3988c8:
    // 0x3988c8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3988c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3988cc:
    // 0x3988cc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3988ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3988d0:
    // 0x3988d0: 0x60f809  jalr        $v1
label_3988d4:
    if (ctx->pc == 0x3988D4u) {
        ctx->pc = 0x3988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988D0u;
        // 0x3988d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988D8u;
        goto label_3988d8;
    }
    ctx->pc = 0x3988D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3988D8u);
        ctx->pc = 0x3988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988D0u;
        // 0x3988d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3988D0u, 0x3988D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3988D8u;
label_3988d8:
    // 0x3988d8: 0xc0551c6  jal         func_154718
label_3988dc:
    if (ctx->pc == 0x3988DCu) {
        ctx->pc = 0x3988DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988D8u;
        // 0x3988dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3988E0u;
        goto label_3988e0;
    }
    ctx->pc = 0x3988D8u;
    SET_GPR_U32(ctx, 31, 0x3988E0u);
    ctx->pc = 0x3988DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988D8u;
    // 0x3988dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x3988D8u, 0x3988E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988E0u;
label_3988e0:
    // 0x3988e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3988e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3988e4:
    // 0x3988e4: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x3988e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_3988e8:
    // 0x3988e8: 0x8c43b788  lw          $v1, -0x4878($v0)
    ctx->pc = 0x3988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_3988ec:
    // 0x3988ec: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x3988ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3988f0:
    // 0x3988f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3988f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3988f4:
    // 0x3988f4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x3988f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3988f8:
    // 0x3988f8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x3988f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_3988fc:
    // 0x3988fc: 0x60f809  jalr        $v1
label_398900:
    if (ctx->pc == 0x398900u) {
        ctx->pc = 0x398900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988FCu;
        // 0x398900: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398904u;
        goto label_398904;
    }
    ctx->pc = 0x3988FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398904u);
        ctx->pc = 0x398900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988FCu;
        // 0x398900: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3988FCu, 0x398904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398904u;
label_398904:
    // 0x398904: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x398904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_398908:
    // 0x398908: 0xc055168  jal         func_1545A0
label_39890c:
    if (ctx->pc == 0x39890Cu) {
        ctx->pc = 0x39890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398908u;
        // 0x39890c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398910u;
        goto label_398910;
    }
    ctx->pc = 0x398908u;
    SET_GPR_U32(ctx, 31, 0x398910u);
    ctx->pc = 0x39890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398908u;
    // 0x39890c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x398908u, 0x398910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398910u;
label_398910:
    // 0x398910: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x398910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_398914:
    // 0x398914: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x398914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_398918:
    // 0x398918: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x398918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_39891c:
    // 0x39891c: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x39891cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_398920:
    // 0x398920: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x398920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_398924:
    // 0x398924: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x398924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_398928:
    // 0x398928: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x398928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_39892c:
    // 0x39892c: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x39892cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_398930:
    // 0x398930: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x398930u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_398934:
    // 0x398934: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x398934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_398938:
    // 0x398938: 0x3e00008  jr          $ra
label_39893c:
    if (ctx->pc == 0x39893Cu) {
        ctx->pc = 0x39893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398938u;
        // 0x39893c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398940u;
        goto label_fallthrough_0x398938;
    }
    ctx->pc = 0x398938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398938u;
        // 0x39893c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x398938:
    ctx->pc = 0x398940u;
}
