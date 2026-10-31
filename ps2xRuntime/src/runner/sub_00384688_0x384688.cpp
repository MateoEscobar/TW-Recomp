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

// Function: sub_00384688
// Address: 0x384688 - 0x384840
void sub_00384688_0x384688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384688_0x384688");
#endif

    switch (ctx->pc) {
        case 0x384688u: goto label_384688;
        case 0x38468cu: goto label_38468c;
        case 0x384690u: goto label_384690;
        case 0x384694u: goto label_384694;
        case 0x384698u: goto label_384698;
        case 0x38469cu: goto label_38469c;
        case 0x3846a0u: goto label_3846a0;
        case 0x3846a4u: goto label_3846a4;
        case 0x3846a8u: goto label_3846a8;
        case 0x3846acu: goto label_3846ac;
        case 0x3846b0u: goto label_3846b0;
        case 0x3846b4u: goto label_3846b4;
        case 0x3846b8u: goto label_3846b8;
        case 0x3846bcu: goto label_3846bc;
        case 0x3846c0u: goto label_3846c0;
        case 0x3846c4u: goto label_3846c4;
        case 0x3846c8u: goto label_3846c8;
        case 0x3846ccu: goto label_3846cc;
        case 0x3846d0u: goto label_3846d0;
        case 0x3846d4u: goto label_3846d4;
        case 0x3846d8u: goto label_3846d8;
        case 0x3846dcu: goto label_3846dc;
        case 0x3846e0u: goto label_3846e0;
        case 0x3846e4u: goto label_3846e4;
        case 0x3846e8u: goto label_3846e8;
        case 0x3846ecu: goto label_3846ec;
        case 0x3846f0u: goto label_3846f0;
        case 0x3846f4u: goto label_3846f4;
        case 0x3846f8u: goto label_3846f8;
        case 0x3846fcu: goto label_3846fc;
        case 0x384700u: goto label_384700;
        case 0x384704u: goto label_384704;
        case 0x384708u: goto label_384708;
        case 0x38470cu: goto label_38470c;
        case 0x384710u: goto label_384710;
        case 0x384714u: goto label_384714;
        case 0x384718u: goto label_384718;
        case 0x38471cu: goto label_38471c;
        case 0x384720u: goto label_384720;
        case 0x384724u: goto label_384724;
        case 0x384728u: goto label_384728;
        case 0x38472cu: goto label_38472c;
        case 0x384730u: goto label_384730;
        case 0x384734u: goto label_384734;
        case 0x384738u: goto label_384738;
        case 0x38473cu: goto label_38473c;
        case 0x384740u: goto label_384740;
        case 0x384744u: goto label_384744;
        case 0x384748u: goto label_384748;
        case 0x38474cu: goto label_38474c;
        case 0x384750u: goto label_384750;
        case 0x384754u: goto label_384754;
        case 0x384758u: goto label_384758;
        case 0x38475cu: goto label_38475c;
        case 0x384760u: goto label_384760;
        case 0x384764u: goto label_384764;
        case 0x384768u: goto label_384768;
        case 0x38476cu: goto label_38476c;
        case 0x384770u: goto label_384770;
        case 0x384774u: goto label_384774;
        case 0x384778u: goto label_384778;
        case 0x38477cu: goto label_38477c;
        case 0x384780u: goto label_384780;
        case 0x384784u: goto label_384784;
        case 0x384788u: goto label_384788;
        case 0x38478cu: goto label_38478c;
        case 0x384790u: goto label_384790;
        case 0x384794u: goto label_384794;
        case 0x384798u: goto label_384798;
        case 0x38479cu: goto label_38479c;
        case 0x3847a0u: goto label_3847a0;
        case 0x3847a4u: goto label_3847a4;
        case 0x3847a8u: goto label_3847a8;
        case 0x3847acu: goto label_3847ac;
        case 0x3847b0u: goto label_3847b0;
        case 0x3847b4u: goto label_3847b4;
        case 0x3847b8u: goto label_3847b8;
        case 0x3847bcu: goto label_3847bc;
        case 0x3847c0u: goto label_3847c0;
        case 0x3847c4u: goto label_3847c4;
        case 0x3847c8u: goto label_3847c8;
        case 0x3847ccu: goto label_3847cc;
        case 0x3847d0u: goto label_3847d0;
        case 0x3847d4u: goto label_3847d4;
        case 0x3847d8u: goto label_3847d8;
        case 0x3847dcu: goto label_3847dc;
        case 0x3847e0u: goto label_3847e0;
        case 0x3847e4u: goto label_3847e4;
        case 0x3847e8u: goto label_3847e8;
        case 0x3847ecu: goto label_3847ec;
        case 0x3847f0u: goto label_3847f0;
        case 0x3847f4u: goto label_3847f4;
        case 0x3847f8u: goto label_3847f8;
        case 0x3847fcu: goto label_3847fc;
        case 0x384800u: goto label_384800;
        case 0x384804u: goto label_384804;
        case 0x384808u: goto label_384808;
        case 0x38480cu: goto label_38480c;
        case 0x384810u: goto label_384810;
        case 0x384814u: goto label_384814;
        case 0x384818u: goto label_384818;
        case 0x38481cu: goto label_38481c;
        case 0x384820u: goto label_384820;
        case 0x384824u: goto label_384824;
        case 0x384828u: goto label_384828;
        case 0x38482cu: goto label_38482c;
        case 0x384830u: goto label_384830;
        case 0x384834u: goto label_384834;
        case 0x384838u: goto label_384838;
        case 0x38483cu: goto label_38483c;
        default: break;
    }

    ctx->pc = 0x384688u;

label_384688:
    // 0x384688: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x384688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_38468c:
    // 0x38468c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38468cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384690:
    // 0x384690: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x384690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_384694:
    // 0x384694: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x384694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_384698:
    // 0x384698: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x384698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_38469c:
    // 0x38469c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3846a0:
    // 0x3846a0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3846a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3846a4:
    // 0x3846a4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3846a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3846a8:
    // 0x3846a8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3846a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3846ac:
    // 0x3846ac: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3846acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3846b0:
    // 0x3846b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3846b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3846b4:
    // 0x3846b4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x3846b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3846b8:
    // 0x3846b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3846b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3846bc:
    // 0x3846bc: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x3846bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3846c0:
    // 0x3846c0: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x3846c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_3846c4:
    // 0x3846c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3846c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3846c8:
    // 0x3846c8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x3846c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3846cc:
    // 0x3846cc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3846ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3846d0:
    // 0x3846d0: 0x60f809  jalr        $v1
label_3846d4:
    if (ctx->pc == 0x3846D4u) {
        ctx->pc = 0x3846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846D0u;
        // 0x3846d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3846D8u;
        goto label_3846d8;
    }
    ctx->pc = 0x3846D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3846D8u);
        ctx->pc = 0x3846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846D0u;
        // 0x3846d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3846D0u, 0x3846D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3846D8u;
label_3846d8:
    // 0x3846d8: 0x8e0927e4  lw          $t1, 0x27E4($s0)
    ctx->pc = 0x3846d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3846dc:
    // 0x3846dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3846dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3846e0:
    // 0x3846e0: 0x24552b24  addiu       $s5, $v0, 0x2B24
    ctx->pc = 0x3846e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 11044));
label_3846e4:
    // 0x3846e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3846e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3846e8:
    // 0x3846e8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3846e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3846ec:
    // 0x3846ec: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x3846ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_3846f0:
    // 0x3846f0: 0x24a5dcc0  addiu       $a1, $a1, -0x2340
    ctx->pc = 0x3846f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958272));
label_3846f4:
    // 0x3846f4: 0x2508dcd8  addiu       $t0, $t0, -0x2328
    ctx->pc = 0x3846f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958296));
label_3846f8:
    // 0x3846f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3846f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3846fc:
    // 0x3846fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3846fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_384700:
    // 0x384700: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x384700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_384704:
    // 0x384704: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x384704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_384708:
    // 0x384708: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x384708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_38470c:
    // 0x38470c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38470cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384710:
    // 0x384710: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x384710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_384714:
    // 0x384714: 0x40f809  jalr        $v0
label_384718:
    if (ctx->pc == 0x384718u) {
        ctx->pc = 0x384718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384714u;
        // 0x384718: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38471Cu;
        goto label_38471c;
    }
    ctx->pc = 0x384714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38471Cu);
        ctx->pc = 0x384718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384714u;
        // 0x384718: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384714u, 0x38471Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38471Cu;
label_38471c:
    // 0x38471c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38471cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384720:
    // 0x384720: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_384724:
    if (ctx->pc == 0x384724u) {
        ctx->pc = 0x384724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384720u;
        // 0x384724: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384728u;
        goto label_384728;
    }
    ctx->pc = 0x384720u;
    {
        const bool branch_taken_0x384720 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x384724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384720u;
        // 0x384724: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384720) {
            ctx->pc = 0x3847F8u;
            goto label_3847f8;
        }
    }
    ctx->pc = 0x384728u;
label_384728:
    // 0x384728: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x384728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_38472c:
    // 0x38472c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x38472cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_384730:
    // 0x384730: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x384730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_384734:
    // 0x384734: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x384734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_384738:
    // 0x384738: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x384738u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_38473c:
    // 0x38473c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x38473cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_384740:
    // 0x384740: 0x2610dc90  addiu       $s0, $s0, -0x2370
    ctx->pc = 0x384740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958224));
label_384744:
    // 0x384744: 0x2631dc98  addiu       $s1, $s1, -0x2368
    ctx->pc = 0x384744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958232));
label_384748:
    // 0x384748: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x384748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_38474c:
    // 0x38474c: 0x24063200  addiu       $a2, $zero, 0x3200
    ctx->pc = 0x38474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
label_384750:
    // 0x384750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384754:
    // 0x384754: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x384754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_384758:
    // 0x384758: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x384758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38475c:
    // 0x38475c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x38475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384760:
    // 0x384760: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x384760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_384764:
    // 0x384764: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x384764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_384768:
    // 0x384768: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x384768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_38476c:
    // 0x38476c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38476cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384770:
    // 0x384770: 0x40f809  jalr        $v0
label_384774:
    if (ctx->pc == 0x384774u) {
        ctx->pc = 0x384774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384770u;
        // 0x384774: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384778u;
        goto label_384778;
    }
    ctx->pc = 0x384770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384778u);
        ctx->pc = 0x384774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384770u;
        // 0x384774: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384770u, 0x384778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384778u;
label_384778:
    // 0x384778: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x384778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_38477c:
    // 0x38477c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384780:
    // 0x384780: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x384780u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_384784:
    // 0x384784: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x384784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384788:
    // 0x384788: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x384788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_38478c:
    // 0x38478c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x38478cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_384790:
    // 0x384790: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x384790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_384794:
    // 0x384794: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x384794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_384798:
    // 0x384798: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x384798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38479c:
    // 0x38479c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38479cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847a0:
    // 0x3847a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3847a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3847a4:
    // 0x3847a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3847a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847a8:
    // 0x3847a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3847a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3847ac:
    // 0x3847ac: 0x40f809  jalr        $v0
label_3847b0:
    if (ctx->pc == 0x3847B0u) {
        ctx->pc = 0x3847B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847ACu;
        // 0x3847b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847B4u;
        goto label_3847b4;
    }
    ctx->pc = 0x3847ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3847B4u);
        ctx->pc = 0x3847B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847ACu;
        // 0x3847b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3847ACu, 0x3847B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3847B4u;
label_3847b4:
    // 0x3847b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3847b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3847b8:
    // 0x3847b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3847b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847bc:
    // 0x3847bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3847c0:
    if (ctx->pc == 0x3847C0u) {
        ctx->pc = 0x3847C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847BCu;
        // 0x3847c0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847C4u;
        goto label_3847c4;
    }
    ctx->pc = 0x3847BCu;
    {
        const bool branch_taken_0x3847bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3847C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847BCu;
        // 0x3847c0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3847bc) {
            ctx->pc = 0x3847F4u;
            goto label_3847f4;
        }
    }
    ctx->pc = 0x3847C4u;
label_3847c4:
    // 0x3847c4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3847c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3847c8:
    // 0x3847c8: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x3847c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
label_3847cc:
    // 0x3847cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3847ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3847d0:
    // 0x3847d0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3847d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3847d4:
    // 0x3847d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3847d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3847d8:
    // 0x3847d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3847d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3847dc:
    // 0x3847dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3847dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3847e0:
    // 0x3847e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3847e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3847e4:
    // 0x3847e4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3847e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3847e8:
    // 0x3847e8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3847e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3847ec:
    // 0x3847ec: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_3847f0:
    if (ctx->pc == 0x3847F0u) {
        ctx->pc = 0x3847F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847ECu;
        // 0x3847f0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847F4u;
        goto label_3847f4;
    }
    ctx->pc = 0x3847ECu;
    {
        const bool branch_taken_0x3847ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3847ec) {
            ctx->pc = 0x3847F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3847ECu;
            // 0x3847f0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3847C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3847c8;
        }
    }
    ctx->pc = 0x3847F4u;
label_3847f4:
    // 0x3847f4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3847f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3847f8:
    // 0x3847f8: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x3847f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_3847fc:
    // 0x3847fc: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x3847fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_384800:
    // 0x384800: 0x8ec5b9b8  lw          $a1, -0x4648($s6)
    ctx->pc = 0x384800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949304)));
label_384804:
    // 0x384804: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384808:
    // 0x384808: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x384808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_38480c:
    // 0x38480c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x38480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_384810:
    // 0x384810: 0x60f809  jalr        $v1
label_384814:
    if (ctx->pc == 0x384814u) {
        ctx->pc = 0x384814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384810u;
        // 0x384814: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384818u;
        goto label_384818;
    }
    ctx->pc = 0x384810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x384818u);
        ctx->pc = 0x384814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384810u;
        // 0x384814: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384810u, 0x384818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384818u;
label_384818:
    // 0x384818: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x384818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38481c:
    // 0x38481c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x38481cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_384820:
    // 0x384820: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x384820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_384824:
    // 0x384824: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x384824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_384828:
    // 0x384828: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x384828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38482c:
    // 0x38482c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x38482cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384830:
    // 0x384830: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x384830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384834:
    // 0x384834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384838:
    // 0x384838: 0x3e00008  jr          $ra
label_38483c:
    if (ctx->pc == 0x38483Cu) {
        ctx->pc = 0x38483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384838u;
        // 0x38483c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384840u;
        goto label_fallthrough_0x384838;
    }
    ctx->pc = 0x384838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384838u;
        // 0x38483c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x384838:
    ctx->pc = 0x384840u;
}
