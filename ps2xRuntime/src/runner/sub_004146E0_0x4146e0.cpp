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

// Function: sub_004146E0
// Address: 0x4146e0 - 0x414a28
void sub_004146E0_0x4146e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004146E0_0x4146e0");
#endif

    switch (ctx->pc) {
        case 0x4146e0u: goto label_4146e0;
        case 0x4146e4u: goto label_4146e4;
        case 0x4146e8u: goto label_4146e8;
        case 0x4146ecu: goto label_4146ec;
        case 0x4146f0u: goto label_4146f0;
        case 0x4146f4u: goto label_4146f4;
        case 0x4146f8u: goto label_4146f8;
        case 0x4146fcu: goto label_4146fc;
        case 0x414700u: goto label_414700;
        case 0x414704u: goto label_414704;
        case 0x414708u: goto label_414708;
        case 0x41470cu: goto label_41470c;
        case 0x414710u: goto label_414710;
        case 0x414714u: goto label_414714;
        case 0x414718u: goto label_414718;
        case 0x41471cu: goto label_41471c;
        case 0x414720u: goto label_414720;
        case 0x414724u: goto label_414724;
        case 0x414728u: goto label_414728;
        case 0x41472cu: goto label_41472c;
        case 0x414730u: goto label_414730;
        case 0x414734u: goto label_414734;
        case 0x414738u: goto label_414738;
        case 0x41473cu: goto label_41473c;
        case 0x414740u: goto label_414740;
        case 0x414744u: goto label_414744;
        case 0x414748u: goto label_414748;
        case 0x41474cu: goto label_41474c;
        case 0x414750u: goto label_414750;
        case 0x414754u: goto label_414754;
        case 0x414758u: goto label_414758;
        case 0x41475cu: goto label_41475c;
        case 0x414760u: goto label_414760;
        case 0x414764u: goto label_414764;
        case 0x414768u: goto label_414768;
        case 0x41476cu: goto label_41476c;
        case 0x414770u: goto label_414770;
        case 0x414774u: goto label_414774;
        case 0x414778u: goto label_414778;
        case 0x41477cu: goto label_41477c;
        case 0x414780u: goto label_414780;
        case 0x414784u: goto label_414784;
        case 0x414788u: goto label_414788;
        case 0x41478cu: goto label_41478c;
        case 0x414790u: goto label_414790;
        case 0x414794u: goto label_414794;
        case 0x414798u: goto label_414798;
        case 0x41479cu: goto label_41479c;
        case 0x4147a0u: goto label_4147a0;
        case 0x4147a4u: goto label_4147a4;
        case 0x4147a8u: goto label_4147a8;
        case 0x4147acu: goto label_4147ac;
        case 0x4147b0u: goto label_4147b0;
        case 0x4147b4u: goto label_4147b4;
        case 0x4147b8u: goto label_4147b8;
        case 0x4147bcu: goto label_4147bc;
        case 0x4147c0u: goto label_4147c0;
        case 0x4147c4u: goto label_4147c4;
        case 0x4147c8u: goto label_4147c8;
        case 0x4147ccu: goto label_4147cc;
        case 0x4147d0u: goto label_4147d0;
        case 0x4147d4u: goto label_4147d4;
        case 0x4147d8u: goto label_4147d8;
        case 0x4147dcu: goto label_4147dc;
        case 0x4147e0u: goto label_4147e0;
        case 0x4147e4u: goto label_4147e4;
        case 0x4147e8u: goto label_4147e8;
        case 0x4147ecu: goto label_4147ec;
        case 0x4147f0u: goto label_4147f0;
        case 0x4147f4u: goto label_4147f4;
        case 0x4147f8u: goto label_4147f8;
        case 0x4147fcu: goto label_4147fc;
        case 0x414800u: goto label_414800;
        case 0x414804u: goto label_414804;
        case 0x414808u: goto label_414808;
        case 0x41480cu: goto label_41480c;
        case 0x414810u: goto label_414810;
        case 0x414814u: goto label_414814;
        case 0x414818u: goto label_414818;
        case 0x41481cu: goto label_41481c;
        case 0x414820u: goto label_414820;
        case 0x414824u: goto label_414824;
        case 0x414828u: goto label_414828;
        case 0x41482cu: goto label_41482c;
        case 0x414830u: goto label_414830;
        case 0x414834u: goto label_414834;
        case 0x414838u: goto label_414838;
        case 0x41483cu: goto label_41483c;
        case 0x414840u: goto label_414840;
        case 0x414844u: goto label_414844;
        case 0x414848u: goto label_414848;
        case 0x41484cu: goto label_41484c;
        case 0x414850u: goto label_414850;
        case 0x414854u: goto label_414854;
        case 0x414858u: goto label_414858;
        case 0x41485cu: goto label_41485c;
        case 0x414860u: goto label_414860;
        case 0x414864u: goto label_414864;
        case 0x414868u: goto label_414868;
        case 0x41486cu: goto label_41486c;
        case 0x414870u: goto label_414870;
        case 0x414874u: goto label_414874;
        case 0x414878u: goto label_414878;
        case 0x41487cu: goto label_41487c;
        case 0x414880u: goto label_414880;
        case 0x414884u: goto label_414884;
        case 0x414888u: goto label_414888;
        case 0x41488cu: goto label_41488c;
        case 0x414890u: goto label_414890;
        case 0x414894u: goto label_414894;
        case 0x414898u: goto label_414898;
        case 0x41489cu: goto label_41489c;
        case 0x4148a0u: goto label_4148a0;
        case 0x4148a4u: goto label_4148a4;
        case 0x4148a8u: goto label_4148a8;
        case 0x4148acu: goto label_4148ac;
        case 0x4148b0u: goto label_4148b0;
        case 0x4148b4u: goto label_4148b4;
        case 0x4148b8u: goto label_4148b8;
        case 0x4148bcu: goto label_4148bc;
        case 0x4148c0u: goto label_4148c0;
        case 0x4148c4u: goto label_4148c4;
        case 0x4148c8u: goto label_4148c8;
        case 0x4148ccu: goto label_4148cc;
        case 0x4148d0u: goto label_4148d0;
        case 0x4148d4u: goto label_4148d4;
        case 0x4148d8u: goto label_4148d8;
        case 0x4148dcu: goto label_4148dc;
        case 0x4148e0u: goto label_4148e0;
        case 0x4148e4u: goto label_4148e4;
        case 0x4148e8u: goto label_4148e8;
        case 0x4148ecu: goto label_4148ec;
        case 0x4148f0u: goto label_4148f0;
        case 0x4148f4u: goto label_4148f4;
        case 0x4148f8u: goto label_4148f8;
        case 0x4148fcu: goto label_4148fc;
        case 0x414900u: goto label_414900;
        case 0x414904u: goto label_414904;
        case 0x414908u: goto label_414908;
        case 0x41490cu: goto label_41490c;
        case 0x414910u: goto label_414910;
        case 0x414914u: goto label_414914;
        case 0x414918u: goto label_414918;
        case 0x41491cu: goto label_41491c;
        case 0x414920u: goto label_414920;
        case 0x414924u: goto label_414924;
        case 0x414928u: goto label_414928;
        case 0x41492cu: goto label_41492c;
        case 0x414930u: goto label_414930;
        case 0x414934u: goto label_414934;
        case 0x414938u: goto label_414938;
        case 0x41493cu: goto label_41493c;
        case 0x414940u: goto label_414940;
        case 0x414944u: goto label_414944;
        case 0x414948u: goto label_414948;
        case 0x41494cu: goto label_41494c;
        case 0x414950u: goto label_414950;
        case 0x414954u: goto label_414954;
        case 0x414958u: goto label_414958;
        case 0x41495cu: goto label_41495c;
        case 0x414960u: goto label_414960;
        case 0x414964u: goto label_414964;
        case 0x414968u: goto label_414968;
        case 0x41496cu: goto label_41496c;
        case 0x414970u: goto label_414970;
        case 0x414974u: goto label_414974;
        case 0x414978u: goto label_414978;
        case 0x41497cu: goto label_41497c;
        case 0x414980u: goto label_414980;
        case 0x414984u: goto label_414984;
        case 0x414988u: goto label_414988;
        case 0x41498cu: goto label_41498c;
        case 0x414990u: goto label_414990;
        case 0x414994u: goto label_414994;
        case 0x414998u: goto label_414998;
        case 0x41499cu: goto label_41499c;
        case 0x4149a0u: goto label_4149a0;
        case 0x4149a4u: goto label_4149a4;
        case 0x4149a8u: goto label_4149a8;
        case 0x4149acu: goto label_4149ac;
        case 0x4149b0u: goto label_4149b0;
        case 0x4149b4u: goto label_4149b4;
        case 0x4149b8u: goto label_4149b8;
        case 0x4149bcu: goto label_4149bc;
        case 0x4149c0u: goto label_4149c0;
        case 0x4149c4u: goto label_4149c4;
        case 0x4149c8u: goto label_4149c8;
        case 0x4149ccu: goto label_4149cc;
        case 0x4149d0u: goto label_4149d0;
        case 0x4149d4u: goto label_4149d4;
        case 0x4149d8u: goto label_4149d8;
        case 0x4149dcu: goto label_4149dc;
        case 0x4149e0u: goto label_4149e0;
        case 0x4149e4u: goto label_4149e4;
        case 0x4149e8u: goto label_4149e8;
        case 0x4149ecu: goto label_4149ec;
        case 0x4149f0u: goto label_4149f0;
        case 0x4149f4u: goto label_4149f4;
        case 0x4149f8u: goto label_4149f8;
        case 0x4149fcu: goto label_4149fc;
        case 0x414a00u: goto label_414a00;
        case 0x414a04u: goto label_414a04;
        case 0x414a08u: goto label_414a08;
        case 0x414a0cu: goto label_414a0c;
        case 0x414a10u: goto label_414a10;
        case 0x414a14u: goto label_414a14;
        case 0x414a18u: goto label_414a18;
        case 0x414a1cu: goto label_414a1c;
        case 0x414a20u: goto label_414a20;
        case 0x414a24u: goto label_414a24;
        default: break;
    }

    ctx->pc = 0x4146e0u;

label_4146e0:
    // 0x4146e0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x4146e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_4146e4:
    // 0x4146e4: 0x7fb202d0  sq          $s2, 0x2D0($sp)
    ctx->pc = 0x4146e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 18));
label_4146e8:
    // 0x4146e8: 0x7fb002f0  sq          $s0, 0x2F0($sp)
    ctx->pc = 0x4146e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 16));
label_4146ec:
    // 0x4146ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4146ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4146f0:
    // 0x4146f0: 0x7fb102e0  sq          $s1, 0x2E0($sp)
    ctx->pc = 0x4146f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 17));
label_4146f4:
    // 0x4146f4: 0x7fb302c0  sq          $s3, 0x2C0($sp)
    ctx->pc = 0x4146f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 19));
label_4146f8:
    // 0x4146f8: 0x7fb402b0  sq          $s4, 0x2B0($sp)
    ctx->pc = 0x4146f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 20));
label_4146fc:
    // 0x4146fc: 0x7fb502a0  sq          $s5, 0x2A0($sp)
    ctx->pc = 0x4146fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 21));
label_414700:
    // 0x414700: 0x7fb60290  sq          $s6, 0x290($sp)
    ctx->pc = 0x414700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 22));
label_414704:
    // 0x414704: 0x7fb70280  sq          $s7, 0x280($sp)
    ctx->pc = 0x414704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 23));
label_414708:
    // 0x414708: 0x7fbe0270  sq          $fp, 0x270($sp)
    ctx->pc = 0x414708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 30));
label_41470c:
    // 0x41470c: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x41470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
label_414710:
    // 0x414710: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x414710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_414714:
    // 0x414714: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_414718:
    if (ctx->pc == 0x414718u) {
        ctx->pc = 0x414718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414714u;
        // 0x414718: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41471Cu;
        goto label_41471c;
    }
    ctx->pc = 0x414714u;
    {
        const bool branch_taken_0x414714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414714u;
        // 0x414718: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414714) {
            ctx->pc = 0x4149F4u;
            goto label_4149f4;
        }
    }
    ctx->pc = 0x41471Cu;
label_41471c:
    // 0x41471c: 0x8e430178  lw          $v1, 0x178($s2)
    ctx->pc = 0x41471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_414720:
    // 0x414720: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x414720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_414724:
    // 0x414724: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x414724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_414728:
    // 0x414728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x414728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41472c:
    // 0x41472c: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x41472cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_414730:
    // 0x414730: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x414730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414734:
    // 0x414734: 0xac924824  sw          $s2, 0x4824($a0)
    ctx->pc = 0x414734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18468), GPR_U32(ctx, 18));
label_414738:
    // 0x414738: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x414738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_41473c:
    // 0x41473c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_414740:
    if (ctx->pc == 0x414740u) {
        ctx->pc = 0x414740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41473Cu;
        // 0x414740: 0xac404828  sw          $zero, 0x4828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414744u;
        goto label_414744;
    }
    ctx->pc = 0x41473Cu;
    {
        const bool branch_taken_0x41473c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x414740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41473Cu;
        // 0x414740: 0xac404828  sw          $zero, 0x4828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41473c) {
            ctx->pc = 0x41475Cu;
            goto label_41475c;
        }
    }
    ctx->pc = 0x414744u;
label_414744:
    // 0x414744: 0x8e420164  lw          $v0, 0x164($s2)
    ctx->pc = 0x414744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_414748:
    // 0x414748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x414748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41474c:
    // 0x41474c: 0xafa30250  sw          $v1, 0x250($sp)
    ctx->pc = 0x41474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
label_414750:
    // 0x414750: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x414750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_414754:
    // 0x414754: 0x10000002  b           . + 4 + (0x2 << 2)
label_414758:
    if (ctx->pc == 0x414758u) {
        ctx->pc = 0x414758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414754u;
        // 0x414758: 0xae420178  sw          $v0, 0x178($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41475Cu;
        goto label_41475c;
    }
    ctx->pc = 0x414754u;
    {
        const bool branch_taken_0x414754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414754u;
        // 0x414758: 0xae420178  sw          $v0, 0x178($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414754) {
            ctx->pc = 0x414760u;
            goto label_414760;
        }
    }
    ctx->pc = 0x41475Cu;
label_41475c:
    // 0x41475c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x41475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_414760:
    // 0x414760: 0xc08a61a  jal         func_229868
label_414764:
    if (ctx->pc == 0x414764u) {
        ctx->pc = 0x414764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414760u;
        // 0x414764: 0x8e440170  lw          $a0, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414768u;
        goto label_414768;
    }
    ctx->pc = 0x414760u;
    SET_GPR_U32(ctx, 31, 0x414768u);
    ctx->pc = 0x414764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414760u;
    // 0x414764: 0x8e440170  lw          $a0, 0x170($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x414760u, 0x414768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414768u;
label_414768:
    // 0x414768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41476c:
    // 0x41476c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_414770:
    if (ctx->pc == 0x414770u) {
        ctx->pc = 0x414770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41476Cu;
        // 0x414770: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414774u;
        goto label_414774;
    }
    ctx->pc = 0x41476Cu;
    {
        const bool branch_taken_0x41476c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41476Cu;
        // 0x414770: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41476c) {
            ctx->pc = 0x41478Cu;
            goto label_41478c;
        }
    }
    ctx->pc = 0x414774u;
label_414774:
    // 0x414774: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x414774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_414778:
    // 0x414778: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x414778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_41477c:
    // 0x41477c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x41477cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_414780:
    // 0x414780: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x414780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_414784:
    // 0x414784: 0x10000009  b           . + 4 + (0x9 << 2)
label_414788:
    if (ctx->pc == 0x414788u) {
        ctx->pc = 0x414788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414784u;
        // 0x414788: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41478Cu;
        goto label_41478c;
    }
    ctx->pc = 0x414784u;
    {
        const bool branch_taken_0x414784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414784u;
        // 0x414788: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414784) {
            ctx->pc = 0x4147ACu;
            goto label_4147ac;
        }
    }
    ctx->pc = 0x41478Cu;
label_41478c:
    // 0x41478c: 0x8e460170  lw          $a2, 0x170($s2)
    ctx->pc = 0x41478cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_414790:
    // 0x414790: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x414790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_414794:
    // 0x414794: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x414794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_414798:
    // 0x414798: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x414798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_41479c:
    // 0x41479c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x41479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4147a0:
    // 0x4147a0: 0x60f809  jalr        $v1
label_4147a4:
    if (ctx->pc == 0x4147A4u) {
        ctx->pc = 0x4147A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147A0u;
        // 0x4147a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4147A8u;
        goto label_4147a8;
    }
    ctx->pc = 0x4147A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4147A8u);
        ctx->pc = 0x4147A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147A0u;
        // 0x4147a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4147A0u, 0x4147A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4147A8u;
label_4147a8:
    // 0x4147a8: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x4147a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_4147ac:
    // 0x4147ac: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x4147acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_4147b0:
    // 0x4147b0: 0xc64c0174  lwc1        $f12, 0x174($s2)
    ctx->pc = 0x4147b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4147b4:
    // 0x4147b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4147b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4147b8:
    // 0x4147b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4147b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4147bc:
    // 0x4147bc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x4147bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4147c0:
    // 0x4147c0: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x4147c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4147c4:
    // 0x4147c4: 0xc089d2a  jal         func_2274A8
label_4147c8:
    if (ctx->pc == 0x4147C8u) {
        ctx->pc = 0x4147C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147C4u;
        // 0x4147c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4147CCu;
        goto label_4147cc;
    }
    ctx->pc = 0x4147C4u;
    SET_GPR_U32(ctx, 31, 0x4147CCu);
    ctx->pc = 0x4147C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4147C4u;
    // 0x4147c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x4147C4u, 0x4147CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4147CCu;
label_4147cc:
    // 0x4147cc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4147ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4147d0:
    // 0x4147d0: 0x12e0004d  beqz        $s7, . + 4 + (0x4D << 2)
label_4147d4:
    if (ctx->pc == 0x4147D4u) {
        ctx->pc = 0x4147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147D0u;
        // 0x4147d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4147D8u;
        goto label_4147d8;
    }
    ctx->pc = 0x4147D0u;
    {
        const bool branch_taken_0x4147d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147D0u;
        // 0x4147d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4147d0) {
            ctx->pc = 0x414908u;
            goto label_414908;
        }
    }
    ctx->pc = 0x4147D8u;
label_4147d8:
    // 0x4147d8: 0x27b60210  addiu       $s6, $sp, 0x210
    ctx->pc = 0x4147d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4147dc:
    // 0x4147dc: 0x27b301f0  addiu       $s3, $sp, 0x1F0
    ctx->pc = 0x4147dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_4147e0:
    // 0x4147e0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x4147e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4147e4:
    // 0x4147e4: 0x0  nop
    ctx->pc = 0x4147e4u;
    // NOP
label_4147e8:
    // 0x4147e8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4147e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4147ec:
    // 0x4147ec: 0x52000043  beql        $s0, $zero, . + 4 + (0x43 << 2)
label_4147f0:
    if (ctx->pc == 0x4147F0u) {
        ctx->pc = 0x4147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147ECu;
        // 0x4147f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4147F4u;
        goto label_4147f4;
    }
    ctx->pc = 0x4147ECu;
    {
        const bool branch_taken_0x4147ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4147ec) {
            ctx->pc = 0x4147F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4147ECu;
            // 0x4147f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4148FCu;
            goto label_4148fc;
        }
    }
    ctx->pc = 0x4147F4u;
label_4147f4:
    // 0x4147f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4147f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4147f8:
    // 0x4147f8: 0xc1051a2  jal         func_414688
label_4147fc:
    if (ctx->pc == 0x4147FCu) {
        ctx->pc = 0x4147FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4147F8u;
        // 0x4147fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414800u;
        goto label_414800;
    }
    ctx->pc = 0x4147F8u;
    SET_GPR_U32(ctx, 31, 0x414800u);
    ctx->pc = 0x4147FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4147F8u;
    // 0x4147fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414688u, 0x4147F8u, 0x414800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414800u;
label_414800:
    // 0x414800: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x414800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414804:
    // 0x414804: 0x14510021  bne         $v0, $s1, . + 4 + (0x21 << 2)
label_414808:
    if (ctx->pc == 0x414808u) {
        ctx->pc = 0x414808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414804u;
        // 0x414808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41480Cu;
        goto label_41480c;
    }
    ctx->pc = 0x414804u;
    {
        const bool branch_taken_0x414804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x414808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414804u;
        // 0x414808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414804) {
            ctx->pc = 0x41488Cu;
            goto label_41488c;
        }
    }
    ctx->pc = 0x41480Cu;
label_41480c:
    // 0x41480c: 0xc10513e  jal         func_4144F8
label_414810:
    if (ctx->pc == 0x414810u) {
        ctx->pc = 0x414810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41480Cu;
        // 0x414810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414814u;
        goto label_414814;
    }
    ctx->pc = 0x41480Cu;
    SET_GPR_U32(ctx, 31, 0x414814u);
    ctx->pc = 0x414810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41480Cu;
    // 0x414810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4144F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4144F8u, 0x41480Cu, 0x414814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414814u;
label_414814:
    // 0x414814: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_414818:
    if (ctx->pc == 0x414818u) {
        ctx->pc = 0x414818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414814u;
        // 0x414818: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41481Cu;
        goto label_41481c;
    }
    ctx->pc = 0x414814u;
    {
        const bool branch_taken_0x414814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414814u;
        // 0x414818: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414814) {
            ctx->pc = 0x414854u;
            goto label_414854;
        }
    }
    ctx->pc = 0x41481Cu;
label_41481c:
    // 0x41481c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414820:
    // 0x414820: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x414820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_414824:
    // 0x414824: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x414824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_414828:
    // 0x414828: 0x40f809  jalr        $v0
label_41482c:
    if (ctx->pc == 0x41482Cu) {
        ctx->pc = 0x41482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414828u;
        // 0x41482c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414830u;
        goto label_414830;
    }
    ctx->pc = 0x414828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414830u);
        ctx->pc = 0x41482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414828u;
        // 0x41482c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414828u, 0x414830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414830u;
label_414830:
    // 0x414830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x414830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414834:
    // 0x414834: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x414834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_414838:
    // 0x414838: 0xc13d732  jal         func_4F5CC8
label_41483c:
    if (ctx->pc == 0x41483Cu) {
        ctx->pc = 0x41483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414838u;
        // 0x41483c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414840u;
        goto label_414840;
    }
    ctx->pc = 0x414838u;
    SET_GPR_U32(ctx, 31, 0x414840u);
    ctx->pc = 0x41483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414838u;
    // 0x41483c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5CC8u, 0x414838u, 0x414840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414840u;
label_414840:
    // 0x414840: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x414840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_414844:
    // 0x414844: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x414844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_414848:
    // 0x414848: 0xaec20020  sw          $v0, 0x20($s6)
    ctx->pc = 0x414848u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 2));
label_41484c:
    // 0x41484c: 0x10000007  b           . + 4 + (0x7 << 2)
label_414850:
    if (ctx->pc == 0x414850u) {
        ctx->pc = 0x414850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41484Cu;
        // 0x414850: 0xafb00234  sw          $s0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414854u;
        goto label_414854;
    }
    ctx->pc = 0x41484Cu;
    {
        const bool branch_taken_0x41484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41484Cu;
        // 0x414850: 0xafb00234  sw          $s0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41484c) {
            ctx->pc = 0x41486Cu;
            goto label_41486c;
        }
    }
    ctx->pc = 0x414854u;
label_414854:
    // 0x414854: 0x54710025  bnel        $v1, $s1, . + 4 + (0x25 << 2)
label_414858:
    if (ctx->pc == 0x414858u) {
        ctx->pc = 0x414858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414854u;
        // 0x414858: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41485Cu;
        goto label_41485c;
    }
    ctx->pc = 0x414854u;
    {
        const bool branch_taken_0x414854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x414854) {
            ctx->pc = 0x414858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414854u;
            // 0x414858: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4148ECu;
            goto label_4148ec;
        }
    }
    ctx->pc = 0x41485Cu;
label_41485c:
    // 0x41485c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x41485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_414860:
    // 0x414860: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x414860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_414864:
    // 0x414864: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x414864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_414868:
    // 0x414868: 0xafb00214  sw          $s0, 0x214($sp)
    ctx->pc = 0x414868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
label_41486c:
    // 0x41486c: 0x8e460170  lw          $a2, 0x170($s2)
    ctx->pc = 0x41486cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_414870:
    // 0x414870: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x414870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_414874:
    // 0x414874: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x414874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_414878:
    // 0x414878: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x414878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_41487c:
    // 0x41487c: 0x40f809  jalr        $v0
label_414880:
    if (ctx->pc == 0x414880u) {
        ctx->pc = 0x414880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41487Cu;
        // 0x414880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414884u;
        goto label_414884;
    }
    ctx->pc = 0x41487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414884u);
        ctx->pc = 0x414880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41487Cu;
        // 0x414880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41487Cu, 0x414884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414884u;
label_414884:
    // 0x414884: 0x10000019  b           . + 4 + (0x19 << 2)
label_414888:
    if (ctx->pc == 0x414888u) {
        ctx->pc = 0x414888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414884u;
        // 0x414888: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41488Cu;
        goto label_41488c;
    }
    ctx->pc = 0x414884u;
    {
        const bool branch_taken_0x414884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414884u;
        // 0x414888: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414884) {
            ctx->pc = 0x4148ECu;
            goto label_4148ec;
        }
    }
    ctx->pc = 0x41488Cu;
label_41488c:
    // 0x41488c: 0xc10513e  jal         func_4144F8
label_414890:
    if (ctx->pc == 0x414890u) {
        ctx->pc = 0x414890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41488Cu;
        // 0x414890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414894u;
        goto label_414894;
    }
    ctx->pc = 0x41488Cu;
    SET_GPR_U32(ctx, 31, 0x414894u);
    ctx->pc = 0x414890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41488Cu;
    // 0x414890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4144F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4144F8u, 0x41488Cu, 0x414894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414894u;
label_414894:
    // 0x414894: 0x54510015  bnel        $v0, $s1, . + 4 + (0x15 << 2)
label_414898:
    if (ctx->pc == 0x414898u) {
        ctx->pc = 0x414898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414894u;
        // 0x414898: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41489Cu;
        goto label_41489c;
    }
    ctx->pc = 0x414894u;
    {
        const bool branch_taken_0x414894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x414894) {
            ctx->pc = 0x414898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414894u;
            // 0x414898: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4148ECu;
            goto label_4148ec;
        }
    }
    ctx->pc = 0x41489Cu;
label_41489c:
    // 0x41489c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4148a0:
    // 0x4148a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x4148a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4148a4:
    // 0x4148a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4148a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4148a8:
    // 0x4148a8: 0x40f809  jalr        $v0
label_4148ac:
    if (ctx->pc == 0x4148ACu) {
        ctx->pc = 0x4148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148A8u;
        // 0x4148ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148B0u;
        goto label_4148b0;
    }
    ctx->pc = 0x4148A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4148B0u);
        ctx->pc = 0x4148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148A8u;
        // 0x4148ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4148A8u, 0x4148B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4148B0u;
label_4148b0:
    // 0x4148b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4148b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4148b4:
    // 0x4148b4: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x4148b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_4148b8:
    // 0x4148b8: 0xc13d74a  jal         func_4F5D28
label_4148bc:
    if (ctx->pc == 0x4148BCu) {
        ctx->pc = 0x4148BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148B8u;
        // 0x4148bc: 0x27a50244  addiu       $a1, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148C0u;
        goto label_4148c0;
    }
    ctx->pc = 0x4148B8u;
    SET_GPR_U32(ctx, 31, 0x4148C0u);
    ctx->pc = 0x4148BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4148B8u;
    // 0x4148bc: 0x27a50244  addiu       $a1, $sp, 0x244 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D28u, 0x4148B8u, 0x4148C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4148C0u;
label_4148c0:
    // 0x4148c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4148c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4148c4:
    // 0x4148c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4148c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4148c8:
    // 0x4148c8: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x4148c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_4148cc:
    // 0x4148cc: 0xafb00214  sw          $s0, 0x214($sp)
    ctx->pc = 0x4148ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
label_4148d0:
    // 0x4148d0: 0x8e460170  lw          $a2, 0x170($s2)
    ctx->pc = 0x4148d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_4148d4:
    // 0x4148d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4148d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4148d8:
    // 0x4148d8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4148d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4148dc:
    // 0x4148dc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4148dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4148e0:
    // 0x4148e0: 0x40f809  jalr        $v0
label_4148e4:
    if (ctx->pc == 0x4148E4u) {
        ctx->pc = 0x4148E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148E0u;
        // 0x4148e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148E8u;
        goto label_4148e8;
    }
    ctx->pc = 0x4148E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4148E8u);
        ctx->pc = 0x4148E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148E0u;
        // 0x4148e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4148E0u, 0x4148E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4148E8u;
label_4148e8:
    // 0x4148e8: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x4148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_4148ec:
    // 0x4148ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4148f0:
    if (ctx->pc == 0x4148F0u) {
        ctx->pc = 0x4148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148ECu;
        // 0x4148f0: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148F4u;
        goto label_4148f4;
    }
    ctx->pc = 0x4148ECu;
    {
        const bool branch_taken_0x4148ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148ECu;
        // 0x4148f0: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4148ec) {
            ctx->pc = 0x414908u;
            goto label_414908;
        }
    }
    ctx->pc = 0x4148F4u;
label_4148f4:
    // 0x4148f4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_4148f8:
    if (ctx->pc == 0x4148F8u) {
        ctx->pc = 0x4148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148F4u;
        // 0x4148f8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148FCu;
        goto label_4148fc;
    }
    ctx->pc = 0x4148F4u;
    {
        const bool branch_taken_0x4148f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148F4u;
        // 0x4148f8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4148f4) {
            ctx->pc = 0x4149E4u;
            goto label_4149e4;
        }
    }
    ctx->pc = 0x4148FCu;
label_4148fc:
    // 0x4148fc: 0x2b7102b  sltu        $v0, $s5, $s7
    ctx->pc = 0x4148fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_414900:
    // 0x414900: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_414904:
    if (ctx->pc == 0x414904u) {
        ctx->pc = 0x414904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414900u;
        // 0x414904: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414908u;
        goto label_414908;
    }
    ctx->pc = 0x414900u;
    {
        const bool branch_taken_0x414900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414900u;
        // 0x414904: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414900) {
            ctx->pc = 0x4147E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4147e8;
        }
    }
    ctx->pc = 0x414908u;
label_414908:
    // 0x414908: 0x8fc24828  lw          $v0, 0x4828($fp)
    ctx->pc = 0x414908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
label_41490c:
    // 0x41490c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_414910:
    if (ctx->pc == 0x414910u) {
        ctx->pc = 0x414910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41490Cu;
        // 0x414910: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414914u;
        goto label_414914;
    }
    ctx->pc = 0x41490Cu;
    {
        const bool branch_taken_0x41490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41490Cu;
        // 0x414910: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41490c) {
            ctx->pc = 0x4149E8u;
            goto label_4149e8;
        }
    }
    ctx->pc = 0x414914u;
label_414914:
    // 0x414914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x414914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414918:
    // 0x414918: 0x27b40248  addiu       $s4, $sp, 0x248
    ctx->pc = 0x414918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_41491c:
    // 0x41491c: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x41491cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_414920:
    // 0x414920: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x414920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414924:
    // 0x414924: 0x27b301f0  addiu       $s3, $sp, 0x1F0
    ctx->pc = 0x414924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_414928:
    // 0x414928: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x414928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41492c:
    // 0x41492c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414930:
    // 0x414930: 0xc13d75c  jal         func_4F5D70
label_414934:
    if (ctx->pc == 0x414934u) {
        ctx->pc = 0x414934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414930u;
        // 0x414934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414938u;
        goto label_414938;
    }
    ctx->pc = 0x414930u;
    SET_GPR_U32(ctx, 31, 0x414938u);
    ctx->pc = 0x414934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414930u;
    // 0x414934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D70u, 0x414930u, 0x414938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414938u;
label_414938:
    // 0x414938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x414938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41493c:
    // 0x41493c: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x41493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_414940:
    // 0x414940: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_414944:
    if (ctx->pc == 0x414944u) {
        ctx->pc = 0x414944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414940u;
        // 0x414944: 0xafa30248  sw          $v1, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414948u;
        goto label_414948;
    }
    ctx->pc = 0x414940u;
    {
        const bool branch_taken_0x414940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x414944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414940u;
        // 0x414944: 0xafa30248  sw          $v1, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414940) {
            ctx->pc = 0x4149D4u;
            goto label_4149d4;
        }
    }
    ctx->pc = 0x414948u;
label_414948:
    // 0x414948: 0xc0e409a  jal         func_390268
label_41494c:
    if (ctx->pc == 0x41494Cu) {
        ctx->pc = 0x41494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414948u;
        // 0x41494c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414950u;
        goto label_414950;
    }
    ctx->pc = 0x414948u;
    SET_GPR_U32(ctx, 31, 0x414950u);
    ctx->pc = 0x41494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414948u;
    // 0x41494c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x414948u, 0x414950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414950u;
label_414950:
    // 0x414950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414954:
    // 0x414954: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_414958:
    if (ctx->pc == 0x414958u) {
        ctx->pc = 0x414958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414954u;
        // 0x414958: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41495Cu;
        goto label_41495c;
    }
    ctx->pc = 0x414954u;
    {
        const bool branch_taken_0x414954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414954u;
        // 0x414958: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414954) {
            ctx->pc = 0x4149CCu;
            goto label_4149cc;
        }
    }
    ctx->pc = 0x41495Cu;
label_41495c:
    // 0x41495c: 0xc089fac  jal         func_227EB0
label_414960:
    if (ctx->pc == 0x414960u) {
        ctx->pc = 0x414960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41495Cu;
        // 0x414960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414964u;
        goto label_414964;
    }
    ctx->pc = 0x41495Cu;
    SET_GPR_U32(ctx, 31, 0x414964u);
    ctx->pc = 0x414960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41495Cu;
    // 0x414960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x41495Cu, 0x414964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414964u;
label_414964:
    // 0x414964: 0x50560007  beql        $v0, $s6, . + 4 + (0x7 << 2)
label_414968:
    if (ctx->pc == 0x414968u) {
        ctx->pc = 0x414968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414964u;
        // 0x414968: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41496Cu;
        goto label_41496c;
    }
    ctx->pc = 0x414964u;
    {
        const bool branch_taken_0x414964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x414964) {
            ctx->pc = 0x414968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414964u;
            // 0x414968: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414984u;
            goto label_414984;
        }
    }
    ctx->pc = 0x41496Cu;
label_41496c:
    // 0x41496c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414970:
    // 0x414970: 0xc1051a2  jal         func_414688
label_414974:
    if (ctx->pc == 0x414974u) {
        ctx->pc = 0x414974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414970u;
        // 0x414974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414978u;
        goto label_414978;
    }
    ctx->pc = 0x414970u;
    SET_GPR_U32(ctx, 31, 0x414978u);
    ctx->pc = 0x414974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414970u;
    // 0x414974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414688u, 0x414970u, 0x414978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414978u;
label_414978:
    // 0x414978: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_41497c:
    if (ctx->pc == 0x41497Cu) {
        ctx->pc = 0x41497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414978u;
        // 0x41497c: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414980u;
        goto label_414980;
    }
    ctx->pc = 0x414978u;
    {
        const bool branch_taken_0x414978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414978u;
        // 0x41497c: 0x8fc24828  lw          $v0, 0x4828($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414978) {
            ctx->pc = 0x4149CCu;
            goto label_4149cc;
        }
    }
    ctx->pc = 0x414980u;
label_414980:
    // 0x414980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x414980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414984:
    // 0x414984: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x414984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_414988:
    // 0x414988: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x414988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41498c:
    // 0x41498c: 0x40f809  jalr        $v0
label_414990:
    if (ctx->pc == 0x414990u) {
        ctx->pc = 0x414990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41498Cu;
        // 0x414990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414994u;
        goto label_414994;
    }
    ctx->pc = 0x41498Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414994u);
        ctx->pc = 0x414990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41498Cu;
        // 0x414990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41498Cu, 0x414994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414994u;
label_414994:
    // 0x414994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x414994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414998:
    // 0x414998: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x414998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_41499c:
    // 0x41499c: 0xc13d74a  jal         func_4F5D28
label_4149a0:
    if (ctx->pc == 0x4149A0u) {
        ctx->pc = 0x4149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41499Cu;
        // 0x4149a0: 0x27a5024c  addiu       $a1, $sp, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149A4u;
        goto label_4149a4;
    }
    ctx->pc = 0x41499Cu;
    SET_GPR_U32(ctx, 31, 0x4149A4u);
    ctx->pc = 0x4149A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41499Cu;
    // 0x4149a0: 0x27a5024c  addiu       $a1, $sp, 0x24C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D28u, 0x41499Cu, 0x4149A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4149A4u;
label_4149a4:
    // 0x4149a4: 0xae750020  sw          $s5, 0x20($s3)
    ctx->pc = 0x4149a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 21));
label_4149a8:
    // 0x4149a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4149a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4149ac:
    // 0x4149ac: 0xafb00214  sw          $s0, 0x214($sp)
    ctx->pc = 0x4149acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
label_4149b0:
    // 0x4149b0: 0x8e460170  lw          $a2, 0x170($s2)
    ctx->pc = 0x4149b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_4149b4:
    // 0x4149b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4149b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4149b8:
    // 0x4149b8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4149b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4149bc:
    // 0x4149bc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4149bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4149c0:
    // 0x4149c0: 0x40f809  jalr        $v0
label_4149c4:
    if (ctx->pc == 0x4149C4u) {
        ctx->pc = 0x4149C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149C0u;
        // 0x4149c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149C8u;
        goto label_4149c8;
    }
    ctx->pc = 0x4149C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4149C8u);
        ctx->pc = 0x4149C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149C0u;
        // 0x4149c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4149C0u, 0x4149C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4149C8u;
label_4149c8:
    // 0x4149c8: 0x8fc24828  lw          $v0, 0x4828($fp)
    ctx->pc = 0x4149c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
label_4149cc:
    // 0x4149cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4149d0:
    if (ctx->pc == 0x4149D0u) {
        ctx->pc = 0x4149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149CCu;
        // 0x4149d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149D4u;
        goto label_4149d4;
    }
    ctx->pc = 0x4149CCu;
    {
        const bool branch_taken_0x4149cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149CCu;
        // 0x4149d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4149cc) {
            ctx->pc = 0x4149E8u;
            goto label_4149e8;
        }
    }
    ctx->pc = 0x4149D4u;
label_4149d4:
    // 0x4149d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4149d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4149d8:
    // 0x4149d8: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x4149d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_4149dc:
    // 0x4149dc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_4149e0:
    if (ctx->pc == 0x4149E0u) {
        ctx->pc = 0x4149E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149DCu;
        // 0x4149e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149E4u;
        goto label_4149e4;
    }
    ctx->pc = 0x4149DCu;
    {
        const bool branch_taken_0x4149dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4149E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149DCu;
        // 0x4149e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4149dc) {
            ctx->pc = 0x414930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414930;
        }
    }
    ctx->pc = 0x4149E4u;
label_4149e4:
    // 0x4149e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4149e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4149e8:
    // 0x4149e8: 0x8fc44828  lw          $a0, 0x4828($fp)
    ctx->pc = 0x4149e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18472)));
label_4149ec:
    // 0x4149ec: 0xc1050ce  jal         func_414338
label_4149f0:
    if (ctx->pc == 0x4149F0u) {
        ctx->pc = 0x4149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149ECu;
        // 0x4149f0: 0xac404824  sw          $zero, 0x4824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149F4u;
        goto label_4149f4;
    }
    ctx->pc = 0x4149ECu;
    SET_GPR_U32(ctx, 31, 0x4149F4u);
    ctx->pc = 0x4149F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4149ECu;
    // 0x4149f0: 0xac404824  sw          $zero, 0x4824($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414338u, 0x4149ECu, 0x4149F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4149F4u;
label_4149f4:
    // 0x4149f4: 0x7bb002f0  lq          $s0, 0x2F0($sp)
    ctx->pc = 0x4149f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_4149f8:
    // 0x4149f8: 0x7bb102e0  lq          $s1, 0x2E0($sp)
    ctx->pc = 0x4149f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_4149fc:
    // 0x4149fc: 0x7bb202d0  lq          $s2, 0x2D0($sp)
    ctx->pc = 0x4149fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_414a00:
    // 0x414a00: 0x7bb302c0  lq          $s3, 0x2C0($sp)
    ctx->pc = 0x414a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_414a04:
    // 0x414a04: 0x7bb402b0  lq          $s4, 0x2B0($sp)
    ctx->pc = 0x414a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_414a08:
    // 0x414a08: 0x7bb502a0  lq          $s5, 0x2A0($sp)
    ctx->pc = 0x414a08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_414a0c:
    // 0x414a0c: 0x7bb60290  lq          $s6, 0x290($sp)
    ctx->pc = 0x414a0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_414a10:
    // 0x414a10: 0x7bb70280  lq          $s7, 0x280($sp)
    ctx->pc = 0x414a10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_414a14:
    // 0x414a14: 0x7bbe0270  lq          $fp, 0x270($sp)
    ctx->pc = 0x414a14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_414a18:
    // 0x414a18: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x414a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_414a1c:
    // 0x414a1c: 0x3e00008  jr          $ra
label_414a20:
    if (ctx->pc == 0x414A20u) {
        ctx->pc = 0x414A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A1Cu;
        // 0x414a20: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A24u;
        goto label_414a24;
    }
    ctx->pc = 0x414A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A1Cu;
        // 0x414a20: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414A24u;
label_414a24:
    // 0x414a24: 0x0  nop
    ctx->pc = 0x414a24u;
    // NOP
    ctx->pc = 0x414a28u;
}
