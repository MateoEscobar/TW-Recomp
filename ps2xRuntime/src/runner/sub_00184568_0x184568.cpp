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

// Function: sub_00184568
// Address: 0x184568 - 0x184850
void sub_00184568_0x184568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184568_0x184568");
#endif

    switch (ctx->pc) {
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        case 0x1846d8u: goto label_1846d8;
        case 0x1846dcu: goto label_1846dc;
        case 0x1846e0u: goto label_1846e0;
        case 0x1846e4u: goto label_1846e4;
        case 0x1846e8u: goto label_1846e8;
        case 0x1846ecu: goto label_1846ec;
        case 0x1846f0u: goto label_1846f0;
        case 0x1846f4u: goto label_1846f4;
        case 0x1846f8u: goto label_1846f8;
        case 0x1846fcu: goto label_1846fc;
        case 0x184700u: goto label_184700;
        case 0x184704u: goto label_184704;
        case 0x184708u: goto label_184708;
        case 0x18470cu: goto label_18470c;
        case 0x184710u: goto label_184710;
        case 0x184714u: goto label_184714;
        case 0x184718u: goto label_184718;
        case 0x18471cu: goto label_18471c;
        case 0x184720u: goto label_184720;
        case 0x184724u: goto label_184724;
        case 0x184728u: goto label_184728;
        case 0x18472cu: goto label_18472c;
        case 0x184730u: goto label_184730;
        case 0x184734u: goto label_184734;
        case 0x184738u: goto label_184738;
        case 0x18473cu: goto label_18473c;
        case 0x184740u: goto label_184740;
        case 0x184744u: goto label_184744;
        case 0x184748u: goto label_184748;
        case 0x18474cu: goto label_18474c;
        case 0x184750u: goto label_184750;
        case 0x184754u: goto label_184754;
        case 0x184758u: goto label_184758;
        case 0x18475cu: goto label_18475c;
        case 0x184760u: goto label_184760;
        case 0x184764u: goto label_184764;
        case 0x184768u: goto label_184768;
        case 0x18476cu: goto label_18476c;
        case 0x184770u: goto label_184770;
        case 0x184774u: goto label_184774;
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        case 0x184830u: goto label_184830;
        case 0x184834u: goto label_184834;
        case 0x184838u: goto label_184838;
        case 0x18483cu: goto label_18483c;
        case 0x184840u: goto label_184840;
        case 0x184844u: goto label_184844;
        case 0x184848u: goto label_184848;
        case 0x18484cu: goto label_18484c;
        default: break;
    }

    ctx->pc = 0x184568u;

label_184568:
    // 0x184568: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_18456c:
    // 0x18456c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x18456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_184570:
    // 0x184570: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x184570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_184574:
    // 0x184574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184578:
    // 0x184578: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x184578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_18457c:
    // 0x18457c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x18457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_184580:
    // 0x184580: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x184580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_184584:
    // 0x184584: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x184584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_184588:
    // 0x184588: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18458c:
    // 0x18458c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x18458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_184590:
    // 0x184590: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x184590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_184594:
    // 0x184594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_184598:
    // 0x184598: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x184598u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_18459c:
    // 0x18459c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x18459cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1845a0:
    // 0x1845a0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1845a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1845a4:
    // 0x1845a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1845a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1845a8:
    // 0x1845a8: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_1845ac:
    if (ctx->pc == 0x1845ACu) {
        ctx->pc = 0x1845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A8u;
        // 0x1845ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845B0u;
        goto label_1845b0;
    }
    ctx->pc = 0x1845A8u;
    {
        const bool branch_taken_0x1845a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A8u;
        // 0x1845ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845a8) {
            ctx->pc = 0x184814u;
            goto label_184814;
        }
    }
    ctx->pc = 0x1845B0u;
label_1845b0:
    // 0x1845b0: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1845b4:
    // 0x1845b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1845b8:
    // 0x1845b8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1845b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1845bc:
    // 0x1845bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1845bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1845c0:
    // 0x1845c0: 0x40f809  jalr        $v0
label_1845c4:
    if (ctx->pc == 0x1845C4u) {
        ctx->pc = 0x1845C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845C0u;
        // 0x1845c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845C8u;
        goto label_1845c8;
    }
    ctx->pc = 0x1845C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1845C8u);
        ctx->pc = 0x1845C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845C0u;
        // 0x1845c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1845C0u, 0x1845C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1845C8u;
label_1845c8:
    // 0x1845c8: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
label_1845cc:
    if (ctx->pc == 0x1845CCu) {
        ctx->pc = 0x1845CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845C8u;
        // 0x1845cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845D0u;
        goto label_1845d0;
    }
    ctx->pc = 0x1845C8u;
    {
        const bool branch_taken_0x1845c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1845CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845C8u;
        // 0x1845cc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845c8) {
            ctx->pc = 0x184818u;
            goto label_184818;
        }
    }
    ctx->pc = 0x1845D0u;
label_1845d0:
    // 0x1845d0: 0xc047ab8  jal         func_11EAE0
label_1845d4:
    if (ctx->pc == 0x1845D4u) {
        ctx->pc = 0x1845D8u;
        goto label_1845d8;
    }
    ctx->pc = 0x1845D0u;
    SET_GPR_U32(ctx, 31, 0x1845D8u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1845D0u, 0x1845D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845D8u;
label_1845d8:
    // 0x1845d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1845d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1845dc:
    // 0x1845dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1845dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1845e0:
    // 0x1845e0: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x1845e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1845e4:
    // 0x1845e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1845e8:
    if (ctx->pc == 0x1845E8u) {
        ctx->pc = 0x1845E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845E4u;
        // 0x1845e8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845ECu;
        goto label_1845ec;
    }
    ctx->pc = 0x1845E4u;
    {
        const bool branch_taken_0x1845e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845e4) {
            ctx->pc = 0x1845E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1845E4u;
            // 0x1845e8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1845ECu;
            goto label_1845ec;
        }
    }
    ctx->pc = 0x1845ECu;
label_1845ec:
    // 0x1845ec: 0xc047e6c  jal         func_11F9B0
label_1845f0:
    if (ctx->pc == 0x1845F0u) {
        ctx->pc = 0x1845F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845ECu;
        // 0x1845f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845F4u;
        goto label_1845f4;
    }
    ctx->pc = 0x1845ECu;
    SET_GPR_U32(ctx, 31, 0x1845F4u);
    ctx->pc = 0x1845F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1845ECu;
    // 0x1845f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1845ECu, 0x1845F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845F4u;
label_1845f4:
    // 0x1845f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1845f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1845f8:
    // 0x1845f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1845f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1845fc:
    // 0x1845fc: 0xc060fd2  jal         func_183F48
label_184600:
    if (ctx->pc == 0x184600u) {
        ctx->pc = 0x184600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845FCu;
        // 0x184600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184604u;
        goto label_184604;
    }
    ctx->pc = 0x1845FCu;
    SET_GPR_U32(ctx, 31, 0x184604u);
    ctx->pc = 0x184600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1845FCu;
    // 0x184600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F48u, 0x1845FCu, 0x184604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184604u;
label_184604:
    // 0x184604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x184604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184608:
    // 0x184608: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x184608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_18460c:
    // 0x18460c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_184610:
    // 0x184610: 0x40f809  jalr        $v0
label_184614:
    if (ctx->pc == 0x184614u) {
        ctx->pc = 0x184614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184610u;
        // 0x184614: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184618u;
        goto label_184618;
    }
    ctx->pc = 0x184610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184618u);
        ctx->pc = 0x184614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184610u;
        // 0x184614: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184610u, 0x184618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184618u;
label_184618:
    // 0x184618: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x184618u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18461c:
    // 0x18461c: 0x12c0007a  beqz        $s6, . + 4 + (0x7A << 2)
label_184620:
    if (ctx->pc == 0x184620u) {
        ctx->pc = 0x184620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18461Cu;
        // 0x184620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184624u;
        goto label_184624;
    }
    ctx->pc = 0x18461Cu;
    {
        const bool branch_taken_0x18461c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x184620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18461Cu;
        // 0x184620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18461c) {
            ctx->pc = 0x184808u;
            goto label_184808;
        }
    }
    ctx->pc = 0x184624u;
label_184624:
    // 0x184624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x184624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_184628:
    // 0x184628: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_18462c:
    // 0x18462c: 0x2454b8a8  addiu       $s4, $v0, -0x4758
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
label_184630:
    // 0x184630: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x184630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184634:
    // 0x184634: 0x0  nop
    ctx->pc = 0x184634u;
    // NOP
label_184638:
    // 0x184638: 0x10000067  b           . + 4 + (0x67 << 2)
label_18463c:
    if (ctx->pc == 0x18463Cu) {
        ctx->pc = 0x18463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184638u;
        // 0x18463c: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184640u;
        goto label_184640;
    }
    ctx->pc = 0x184638u;
    {
        const bool branch_taken_0x184638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184638u;
        // 0x18463c: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184638) {
            ctx->pc = 0x1847D8u;
            goto label_1847d8;
        }
    }
    ctx->pc = 0x184640u;
label_184640:
    // 0x184640: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184644:
    // 0x184644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_184648:
    // 0x184648: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x184648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_18464c:
    // 0x18464c: 0xc0cd526  jal         func_335498
label_184650:
    if (ctx->pc == 0x184650u) {
        ctx->pc = 0x184650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18464Cu;
        // 0x184650: 0x8c456428  lw          $a1, 0x6428($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184654u;
        goto label_184654;
    }
    ctx->pc = 0x18464Cu;
    SET_GPR_U32(ctx, 31, 0x184654u);
    ctx->pc = 0x184650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18464Cu;
    // 0x184650: 0x8c456428  lw          $a1, 0x6428($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x18464Cu, 0x184654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184654u;
label_184654:
    // 0x184654: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x184654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_184658:
    // 0x184658: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x184658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_18465c:
    // 0x18465c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184660:
    // 0x184660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184664:
    // 0x184664: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x184664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_184668:
    // 0x184668: 0x8c656420  lw          $a1, 0x6420($v1)
    ctx->pc = 0x184668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25632)));
label_18466c:
    // 0x18466c: 0xc0cd538  jal         func_3354E0
label_184670:
    if (ctx->pc == 0x184670u) {
        ctx->pc = 0x184670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18466Cu;
        // 0x184670: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184674u;
        goto label_184674;
    }
    ctx->pc = 0x18466Cu;
    SET_GPR_U32(ctx, 31, 0x184674u);
    ctx->pc = 0x184670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18466Cu;
    // 0x184670: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x18466Cu, 0x184674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184674u;
label_184674:
    // 0x184674: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184674u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_184678:
    // 0x184678: 0xc0cd538  jal         func_3354E0
label_18467c:
    if (ctx->pc == 0x18467Cu) {
        ctx->pc = 0x18467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184678u;
        // 0x18467c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184680u;
        goto label_184680;
    }
    ctx->pc = 0x184678u;
    SET_GPR_U32(ctx, 31, 0x184680u);
    ctx->pc = 0x18467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184678u;
    // 0x18467c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x184678u, 0x184680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184680u;
label_184680:
    // 0x184680: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x184680u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_184684:
    // 0x184684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_184688:
    // 0x184688: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x184688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18468c:
    // 0x18468c: 0x4616a800  add.s       $f0, $f21, $f22
    ctx->pc = 0x18468cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_184690:
    // 0x184690: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x184690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184694:
    // 0x184694: 0x0  nop
    ctx->pc = 0x184694u;
    // NOP
label_184698:
    // 0x184698: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_18469c:
    if (ctx->pc == 0x18469Cu) {
        ctx->pc = 0x18469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184698u;
        // 0x18469c: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846A0u;
        goto label_1846a0;
    }
    ctx->pc = 0x184698u;
    {
        const bool branch_taken_0x184698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184698) {
            ctx->pc = 0x18469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184698u;
            // 0x18469c: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1846ACu;
            goto label_1846ac;
        }
    }
    ctx->pc = 0x1846A0u;
label_1846a0:
    // 0x1846a0: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x1846a0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1846a4:
    // 0x1846a4: 0x4616a581  sub.s       $f22, $f20, $f22
    ctx->pc = 0x1846a4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_1846a8:
    // 0x1846a8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1846a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1846ac:
    // 0x1846ac: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x1846acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1846b0:
    // 0x1846b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1846b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1846b4:
    // 0x1846b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1846b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1846b8:
    // 0x1846b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1846b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1846bc:
    // 0x1846bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1846bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1846c0:
    // 0x1846c0: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x1846c0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_1846c4:
    // 0x1846c4: 0xc136b24  jal         func_4DAC90
label_1846c8:
    if (ctx->pc == 0x1846C8u) {
        ctx->pc = 0x1846C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846C4u;
        // 0x1846c8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846CCu;
        goto label_1846cc;
    }
    ctx->pc = 0x1846C4u;
    SET_GPR_U32(ctx, 31, 0x1846CCu);
    ctx->pc = 0x1846C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846C4u;
    // 0x1846c8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1846C4u, 0x1846CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846CCu;
label_1846cc:
    // 0x1846cc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x1846ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_1846d0:
    // 0x1846d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1846d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1846d4:
    // 0x1846d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1846d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1846d8:
    // 0x1846d8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1846d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1846dc:
    // 0x1846dc: 0xc136b24  jal         func_4DAC90
label_1846e0:
    if (ctx->pc == 0x1846E0u) {
        ctx->pc = 0x1846E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846DCu;
        // 0x1846e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846E4u;
        goto label_1846e4;
    }
    ctx->pc = 0x1846DCu;
    SET_GPR_U32(ctx, 31, 0x1846E4u);
    ctx->pc = 0x1846E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846DCu;
    // 0x1846e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1846DCu, 0x1846E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846E4u;
label_1846e4:
    // 0x1846e4: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x1846e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_1846e8:
    // 0x1846e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1846ec:
    // 0x1846ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1846ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1846f0:
    // 0x1846f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1846f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1846f4:
    // 0x1846f4: 0xc136b24  jal         func_4DAC90
label_1846f8:
    if (ctx->pc == 0x1846F8u) {
        ctx->pc = 0x1846F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846F4u;
        // 0x1846f8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846FCu;
        goto label_1846fc;
    }
    ctx->pc = 0x1846F4u;
    SET_GPR_U32(ctx, 31, 0x1846FCu);
    ctx->pc = 0x1846F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846F4u;
    // 0x1846f8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1846F4u, 0x1846FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846FCu;
label_1846fc:
    // 0x1846fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1846fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184700:
    // 0x184700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x184700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184704:
    // 0x184704: 0xc136b18  jal         func_4DAC60
label_184708:
    if (ctx->pc == 0x184708u) {
        ctx->pc = 0x184708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184704u;
        // 0x184708: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18470Cu;
        goto label_18470c;
    }
    ctx->pc = 0x184704u;
    SET_GPR_U32(ctx, 31, 0x18470Cu);
    ctx->pc = 0x184708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184704u;
    // 0x184708: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x184704u, 0x18470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18470Cu;
label_18470c:
    // 0x18470c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184710:
    // 0x184710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x184710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184714:
    // 0x184714: 0xc136b18  jal         func_4DAC60
label_184718:
    if (ctx->pc == 0x184718u) {
        ctx->pc = 0x184718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184714u;
        // 0x184718: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18471Cu;
        goto label_18471c;
    }
    ctx->pc = 0x184714u;
    SET_GPR_U32(ctx, 31, 0x18471Cu);
    ctx->pc = 0x184718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184714u;
    // 0x184718: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x184714u, 0x18471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18471Cu;
label_18471c:
    // 0x18471c: 0xc0e8b48  jal         func_3A2D20
label_184720:
    if (ctx->pc == 0x184720u) {
        ctx->pc = 0x184720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18471Cu;
        // 0x184720: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184724u;
        goto label_184724;
    }
    ctx->pc = 0x18471Cu;
    SET_GPR_U32(ctx, 31, 0x184724u);
    ctx->pc = 0x184720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18471Cu;
    // 0x184720: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x18471Cu, 0x184724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184724u;
label_184724:
    // 0x184724: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x184724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_184728:
    // 0x184728: 0xc0e8b58  jal         func_3A2D60
label_18472c:
    if (ctx->pc == 0x18472Cu) {
        ctx->pc = 0x18472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184728u;
        // 0x18472c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184730u;
        goto label_184730;
    }
    ctx->pc = 0x184728u;
    SET_GPR_U32(ctx, 31, 0x184730u);
    ctx->pc = 0x18472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184728u;
    // 0x18472c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x184728u, 0x184730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184730u;
label_184730:
    // 0x184730: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_184734:
    // 0x184734: 0xc0e8b68  jal         func_3A2DA0
label_184738:
    if (ctx->pc == 0x184738u) {
        ctx->pc = 0x184738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184734u;
        // 0x184738: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18473Cu;
        goto label_18473c;
    }
    ctx->pc = 0x184734u;
    SET_GPR_U32(ctx, 31, 0x18473Cu);
    ctx->pc = 0x184738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184734u;
    // 0x184738: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x184734u, 0x18473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18473Cu;
label_18473c:
    // 0x18473c: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x18473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184740:
    // 0x184740: 0xc0e8b78  jal         func_3A2DE0
label_184744:
    if (ctx->pc == 0x184744u) {
        ctx->pc = 0x184744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184740u;
        // 0x184744: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184748u;
        goto label_184748;
    }
    ctx->pc = 0x184740u;
    SET_GPR_U32(ctx, 31, 0x184748u);
    ctx->pc = 0x184744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184740u;
    // 0x184744: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x184740u, 0x184748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184748u;
label_184748:
    // 0x184748: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x184748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_18474c:
    // 0x18474c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18474cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_184750:
    // 0x184750: 0xc0e8b90  jal         func_3A2E40
label_184754:
    if (ctx->pc == 0x184754u) {
        ctx->pc = 0x184754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184750u;
        // 0x184754: 0x24452968  addiu       $a1, $v0, 0x2968 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184758u;
        goto label_184758;
    }
    ctx->pc = 0x184750u;
    SET_GPR_U32(ctx, 31, 0x184758u);
    ctx->pc = 0x184754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184750u;
    // 0x184754: 0x24452968  addiu       $a1, $v0, 0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x184750u, 0x184758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184758u;
label_184758:
    // 0x184758: 0xc0e8b50  jal         func_3A2D40
label_18475c:
    if (ctx->pc == 0x18475Cu) {
        ctx->pc = 0x18475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184758u;
        // 0x18475c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184760u;
        goto label_184760;
    }
    ctx->pc = 0x184758u;
    SET_GPR_U32(ctx, 31, 0x184760u);
    ctx->pc = 0x18475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184758u;
    // 0x18475c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x184758u, 0x184760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x184760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_184764:
    // 0x184764: 0xc0cdb26  jal         func_336C98
label_184768:
    if (ctx->pc == 0x184768u) {
        ctx->pc = 0x184768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184764u;
        // 0x184768: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18476Cu;
        goto label_18476c;
    }
    ctx->pc = 0x184764u;
    SET_GPR_U32(ctx, 31, 0x18476Cu);
    ctx->pc = 0x184768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184764u;
    // 0x184768: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x184764u, 0x18476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18476Cu;
label_18476c:
    // 0x18476c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x18476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_184770:
    // 0x184770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_184774:
    // 0x184774: 0x0  nop
    ctx->pc = 0x184774u;
    // NOP
label_184778:
    // 0x184778: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x184778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18477c:
    // 0x18477c: 0x0  nop
    ctx->pc = 0x18477cu;
    // NOP
label_184780:
    // 0x184780: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_184784:
    if (ctx->pc == 0x184784u) {
        ctx->pc = 0x184784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184780u;
        // 0x184784: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184788u;
        goto label_184788;
    }
    ctx->pc = 0x184780u;
    {
        const bool branch_taken_0x184780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184780) {
            ctx->pc = 0x184784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184780u;
            // 0x184784: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1847D8u;
            goto label_1847d8;
        }
    }
    ctx->pc = 0x184788u;
label_184788:
    // 0x184788: 0xc0e8b48  jal         func_3A2D20
label_18478c:
    if (ctx->pc == 0x18478Cu) {
        ctx->pc = 0x18478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184788u;
        // 0x18478c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184790u;
        goto label_184790;
    }
    ctx->pc = 0x184788u;
    SET_GPR_U32(ctx, 31, 0x184790u);
    ctx->pc = 0x18478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184788u;
    // 0x18478c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x184788u, 0x184790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184790u;
label_184790:
    // 0x184790: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x184790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_184794:
    // 0x184794: 0xc0e8b58  jal         func_3A2D60
label_184798:
    if (ctx->pc == 0x184798u) {
        ctx->pc = 0x184798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184794u;
        // 0x184798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18479Cu;
        goto label_18479c;
    }
    ctx->pc = 0x184794u;
    SET_GPR_U32(ctx, 31, 0x18479Cu);
    ctx->pc = 0x184798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184794u;
    // 0x184798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x184794u, 0x18479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18479Cu;
label_18479c:
    // 0x18479c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1847a0:
    // 0x1847a0: 0xc0e8b58  jal         func_3A2D60
label_1847a4:
    if (ctx->pc == 0x1847A4u) {
        ctx->pc = 0x1847A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847A0u;
        // 0x1847a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847A8u;
        goto label_1847a8;
    }
    ctx->pc = 0x1847A0u;
    SET_GPR_U32(ctx, 31, 0x1847A8u);
    ctx->pc = 0x1847A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847A0u;
    // 0x1847a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1847A0u, 0x1847A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847A8u;
label_1847a8:
    // 0x1847a8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1847ac:
    // 0x1847ac: 0xc0e8b68  jal         func_3A2DA0
label_1847b0:
    if (ctx->pc == 0x1847B0u) {
        ctx->pc = 0x1847B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847ACu;
        // 0x1847b0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847B4u;
        goto label_1847b4;
    }
    ctx->pc = 0x1847ACu;
    SET_GPR_U32(ctx, 31, 0x1847B4u);
    ctx->pc = 0x1847B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847ACu;
    // 0x1847b0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1847ACu, 0x1847B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847B4u;
label_1847b4:
    // 0x1847b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1847b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1847b8:
    // 0x1847b8: 0xc0e8b78  jal         func_3A2DE0
label_1847bc:
    if (ctx->pc == 0x1847BCu) {
        ctx->pc = 0x1847BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847B8u;
        // 0x1847bc: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847C0u;
        goto label_1847c0;
    }
    ctx->pc = 0x1847B8u;
    SET_GPR_U32(ctx, 31, 0x1847C0u);
    ctx->pc = 0x1847BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847B8u;
    // 0x1847bc: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x1847B8u, 0x1847C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847C0u;
label_1847c0:
    // 0x1847c0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1847c4:
    // 0x1847c4: 0xc0e8b90  jal         func_3A2E40
label_1847c8:
    if (ctx->pc == 0x1847C8u) {
        ctx->pc = 0x1847C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847C4u;
        // 0x1847c8: 0x27c52978  addiu       $a1, $fp, 0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 10616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847CCu;
        goto label_1847cc;
    }
    ctx->pc = 0x1847C4u;
    SET_GPR_U32(ctx, 31, 0x1847CCu);
    ctx->pc = 0x1847C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847C4u;
    // 0x1847c8: 0x27c52978  addiu       $a1, $fp, 0x2978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 10616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x1847C4u, 0x1847CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847CCu;
label_1847cc:
    // 0x1847cc: 0xc0e8b50  jal         func_3A2D40
label_1847d0:
    if (ctx->pc == 0x1847D0u) {
        ctx->pc = 0x1847D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847CCu;
        // 0x1847d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847D4u;
        goto label_1847d4;
    }
    ctx->pc = 0x1847CCu;
    SET_GPR_U32(ctx, 31, 0x1847D4u);
    ctx->pc = 0x1847D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847CCu;
    // 0x1847d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1847CCu, 0x1847D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847D4u;
label_1847d4:
    // 0x1847d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1847d8:
    // 0x1847d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1847dc:
    // 0x1847dc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1847dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1847e0:
    // 0x1847e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1847e4:
    if (ctx->pc == 0x1847E4u) {
        ctx->pc = 0x1847E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847E0u;
        // 0x1847e4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847E8u;
        goto label_1847e8;
    }
    ctx->pc = 0x1847E0u;
    {
        const bool branch_taken_0x1847e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847E0u;
        // 0x1847e4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847e0) {
            ctx->pc = 0x1847FCu;
            goto label_1847fc;
        }
    }
    ctx->pc = 0x1847E8u;
label_1847e8:
    // 0x1847e8: 0xc0e9694  jal         func_3A5A50
label_1847ec:
    if (ctx->pc == 0x1847ECu) {
        ctx->pc = 0x1847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847E8u;
        // 0x1847ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847F0u;
        goto label_1847f0;
    }
    ctx->pc = 0x1847E8u;
    SET_GPR_U32(ctx, 31, 0x1847F0u);
    ctx->pc = 0x1847ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847E8u;
    // 0x1847ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x1847E8u, 0x1847F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847F0u;
label_1847f0:
    // 0x1847f0: 0x5440ff93  bnel        $v0, $zero, . + 4 + (-0x6D << 2)
label_1847f4:
    if (ctx->pc == 0x1847F4u) {
        ctx->pc = 0x1847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847F0u;
        // 0x1847f4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847F8u;
        goto label_1847f8;
    }
    ctx->pc = 0x1847F0u;
    {
        const bool branch_taken_0x1847f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1847f0) {
            ctx->pc = 0x1847F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1847F0u;
            // 0x1847f4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184640;
        }
    }
    ctx->pc = 0x1847F8u;
label_1847f8:
    // 0x1847f8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1847fc:
    // 0x1847fc: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x1847fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_184800:
    // 0x184800: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
label_184804:
    if (ctx->pc == 0x184804u) {
        ctx->pc = 0x184804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184800u;
        // 0x184804: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184808u;
        goto label_184808;
    }
    ctx->pc = 0x184800u;
    {
        const bool branch_taken_0x184800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184800u;
        // 0x184804: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184800) {
            ctx->pc = 0x184638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184638;
        }
    }
    ctx->pc = 0x184808u;
label_184808:
    // 0x184808: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x184808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18480c:
    // 0x18480c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_184810:
    // 0x184810: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x184810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_184814:
    // 0x184814: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x184814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_184818:
    // 0x184818: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x184818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18481c:
    // 0x18481c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x18481cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_184820:
    // 0x184820: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x184820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_184824:
    // 0x184824: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x184824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_184828:
    // 0x184828: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x184828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18482c:
    // 0x18482c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18482cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184830:
    // 0x184830: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x184830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184834:
    // 0x184834: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x184834u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_184838:
    // 0x184838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18483c:
    // 0x18483c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x18483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_184840:
    // 0x184840: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x184840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_184844:
    // 0x184844: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x184844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184848:
    // 0x184848: 0x3e00008  jr          $ra
label_18484c:
    if (ctx->pc == 0x18484Cu) {
        ctx->pc = 0x18484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184848u;
        // 0x18484c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184850u;
        goto label_fallthrough_0x184848;
    }
    ctx->pc = 0x184848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184848u;
        // 0x18484c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184848:
    ctx->pc = 0x184850u;
}
