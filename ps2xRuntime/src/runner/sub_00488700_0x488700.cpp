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

// Function: sub_00488700
// Address: 0x488700 - 0x488918
void sub_00488700_0x488700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488700_0x488700");
#endif

    switch (ctx->pc) {
        case 0x488700u: goto label_488700;
        case 0x488704u: goto label_488704;
        case 0x488708u: goto label_488708;
        case 0x48870cu: goto label_48870c;
        case 0x488710u: goto label_488710;
        case 0x488714u: goto label_488714;
        case 0x488718u: goto label_488718;
        case 0x48871cu: goto label_48871c;
        case 0x488720u: goto label_488720;
        case 0x488724u: goto label_488724;
        case 0x488728u: goto label_488728;
        case 0x48872cu: goto label_48872c;
        case 0x488730u: goto label_488730;
        case 0x488734u: goto label_488734;
        case 0x488738u: goto label_488738;
        case 0x48873cu: goto label_48873c;
        case 0x488740u: goto label_488740;
        case 0x488744u: goto label_488744;
        case 0x488748u: goto label_488748;
        case 0x48874cu: goto label_48874c;
        case 0x488750u: goto label_488750;
        case 0x488754u: goto label_488754;
        case 0x488758u: goto label_488758;
        case 0x48875cu: goto label_48875c;
        case 0x488760u: goto label_488760;
        case 0x488764u: goto label_488764;
        case 0x488768u: goto label_488768;
        case 0x48876cu: goto label_48876c;
        case 0x488770u: goto label_488770;
        case 0x488774u: goto label_488774;
        case 0x488778u: goto label_488778;
        case 0x48877cu: goto label_48877c;
        case 0x488780u: goto label_488780;
        case 0x488784u: goto label_488784;
        case 0x488788u: goto label_488788;
        case 0x48878cu: goto label_48878c;
        case 0x488790u: goto label_488790;
        case 0x488794u: goto label_488794;
        case 0x488798u: goto label_488798;
        case 0x48879cu: goto label_48879c;
        case 0x4887a0u: goto label_4887a0;
        case 0x4887a4u: goto label_4887a4;
        case 0x4887a8u: goto label_4887a8;
        case 0x4887acu: goto label_4887ac;
        case 0x4887b0u: goto label_4887b0;
        case 0x4887b4u: goto label_4887b4;
        case 0x4887b8u: goto label_4887b8;
        case 0x4887bcu: goto label_4887bc;
        case 0x4887c0u: goto label_4887c0;
        case 0x4887c4u: goto label_4887c4;
        case 0x4887c8u: goto label_4887c8;
        case 0x4887ccu: goto label_4887cc;
        case 0x4887d0u: goto label_4887d0;
        case 0x4887d4u: goto label_4887d4;
        case 0x4887d8u: goto label_4887d8;
        case 0x4887dcu: goto label_4887dc;
        case 0x4887e0u: goto label_4887e0;
        case 0x4887e4u: goto label_4887e4;
        case 0x4887e8u: goto label_4887e8;
        case 0x4887ecu: goto label_4887ec;
        case 0x4887f0u: goto label_4887f0;
        case 0x4887f4u: goto label_4887f4;
        case 0x4887f8u: goto label_4887f8;
        case 0x4887fcu: goto label_4887fc;
        case 0x488800u: goto label_488800;
        case 0x488804u: goto label_488804;
        case 0x488808u: goto label_488808;
        case 0x48880cu: goto label_48880c;
        case 0x488810u: goto label_488810;
        case 0x488814u: goto label_488814;
        case 0x488818u: goto label_488818;
        case 0x48881cu: goto label_48881c;
        case 0x488820u: goto label_488820;
        case 0x488824u: goto label_488824;
        case 0x488828u: goto label_488828;
        case 0x48882cu: goto label_48882c;
        case 0x488830u: goto label_488830;
        case 0x488834u: goto label_488834;
        case 0x488838u: goto label_488838;
        case 0x48883cu: goto label_48883c;
        case 0x488840u: goto label_488840;
        case 0x488844u: goto label_488844;
        case 0x488848u: goto label_488848;
        case 0x48884cu: goto label_48884c;
        case 0x488850u: goto label_488850;
        case 0x488854u: goto label_488854;
        case 0x488858u: goto label_488858;
        case 0x48885cu: goto label_48885c;
        case 0x488860u: goto label_488860;
        case 0x488864u: goto label_488864;
        case 0x488868u: goto label_488868;
        case 0x48886cu: goto label_48886c;
        case 0x488870u: goto label_488870;
        case 0x488874u: goto label_488874;
        case 0x488878u: goto label_488878;
        case 0x48887cu: goto label_48887c;
        case 0x488880u: goto label_488880;
        case 0x488884u: goto label_488884;
        case 0x488888u: goto label_488888;
        case 0x48888cu: goto label_48888c;
        case 0x488890u: goto label_488890;
        case 0x488894u: goto label_488894;
        case 0x488898u: goto label_488898;
        case 0x48889cu: goto label_48889c;
        case 0x4888a0u: goto label_4888a0;
        case 0x4888a4u: goto label_4888a4;
        case 0x4888a8u: goto label_4888a8;
        case 0x4888acu: goto label_4888ac;
        case 0x4888b0u: goto label_4888b0;
        case 0x4888b4u: goto label_4888b4;
        case 0x4888b8u: goto label_4888b8;
        case 0x4888bcu: goto label_4888bc;
        case 0x4888c0u: goto label_4888c0;
        case 0x4888c4u: goto label_4888c4;
        case 0x4888c8u: goto label_4888c8;
        case 0x4888ccu: goto label_4888cc;
        case 0x4888d0u: goto label_4888d0;
        case 0x4888d4u: goto label_4888d4;
        case 0x4888d8u: goto label_4888d8;
        case 0x4888dcu: goto label_4888dc;
        case 0x4888e0u: goto label_4888e0;
        case 0x4888e4u: goto label_4888e4;
        case 0x4888e8u: goto label_4888e8;
        case 0x4888ecu: goto label_4888ec;
        case 0x4888f0u: goto label_4888f0;
        case 0x4888f4u: goto label_4888f4;
        case 0x4888f8u: goto label_4888f8;
        case 0x4888fcu: goto label_4888fc;
        case 0x488900u: goto label_488900;
        case 0x488904u: goto label_488904;
        case 0x488908u: goto label_488908;
        case 0x48890cu: goto label_48890c;
        case 0x488910u: goto label_488910;
        case 0x488914u: goto label_488914;
        default: break;
    }

    ctx->pc = 0x488700u;

label_488700:
    // 0x488700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_488704:
    // 0x488704: 0xaf858978  sw          $a1, -0x7688($gp)
    ctx->pc = 0x488704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), GPR_U32(ctx, 5));
label_488708:
    // 0x488708: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x488708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_48870c:
    // 0x48870c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x48870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_488710:
    // 0x488710: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x488710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488714:
    // 0x488714: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x488714u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_488718:
    // 0x488718: 0x8c44ec08  lw          $a0, -0x13F8($v0)
    ctx->pc = 0x488718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962184)));
label_48871c:
    // 0x48871c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x48871cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_488720:
    // 0x488720: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x488720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
label_488724:
    // 0x488724: 0x2508edb8  addiu       $t0, $t0, -0x1248
    ctx->pc = 0x488724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962616));
label_488728:
    // 0x488728: 0x8f87865c  lw          $a3, -0x79A4($gp)
    ctx->pc = 0x488728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
label_48872c:
    // 0x48872c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48872cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_488730:
    // 0x488730: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x488730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_488734:
    // 0x488734: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x488734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_488738:
    // 0x488738: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x488738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_48873c:
    // 0x48873c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_488740:
    // 0x488740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488744:
    // 0x488744: 0xc11f66e  jal         func_47D9B8
label_488748:
    if (ctx->pc == 0x488748u) {
        ctx->pc = 0x488748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488744u;
        // 0x488748: 0x35290006  ori         $t1, $t1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48874Cu;
        goto label_48874c;
    }
    ctx->pc = 0x488744u;
    SET_GPR_U32(ctx, 31, 0x48874Cu);
    ctx->pc = 0x488748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488744u;
    // 0x488748: 0x35290006  ori         $t1, $t1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x488744u, 0x48874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48874Cu;
label_48874c:
    // 0x48874c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x48874cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_488750:
    // 0x488750: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488754:
    // 0x488754: 0x2491ad18  addiu       $s1, $a0, -0x52E8
    ctx->pc = 0x488754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_488758:
    // 0x488758: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x488758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48875c:
    // 0x48875c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x48875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488760:
    // 0x488760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_488764:
    if (ctx->pc == 0x488764u) {
        ctx->pc = 0x488764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488760u;
        // 0x488764: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488768u;
        goto label_488768;
    }
    ctx->pc = 0x488760u;
    {
        const bool branch_taken_0x488760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488760u;
        // 0x488764: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488760) {
            ctx->pc = 0x488770u;
            goto label_488770;
        }
    }
    ctx->pc = 0x488768u;
label_488768:
    // 0x488768: 0x10000062  b           . + 4 + (0x62 << 2)
label_48876c:
    if (ctx->pc == 0x48876Cu) {
        ctx->pc = 0x48876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488768u;
        // 0x48876c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488770u;
        goto label_488770;
    }
    ctx->pc = 0x488768u;
    {
        const bool branch_taken_0x488768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488768u;
        // 0x48876c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488768) {
            ctx->pc = 0x4888F4u;
            goto label_4888f4;
        }
    }
    ctx->pc = 0x488770u;
label_488770:
    // 0x488770: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x488770u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
label_488774:
    // 0x488774: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x488774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_488778:
    // 0x488778: 0x8e44ec20  lw          $a0, -0x13E0($s2)
    ctx->pc = 0x488778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962208)));
label_48877c:
    // 0x48877c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x48877cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_488780:
    // 0x488780: 0x8f858660  lw          $a1, -0x79A0($gp)
    ctx->pc = 0x488780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
label_488784:
    // 0x488784: 0x2508ede0  addiu       $t0, $t0, -0x1220
    ctx->pc = 0x488784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962656));
label_488788:
    // 0x488788: 0x8f878664  lw          $a3, -0x799C($gp)
    ctx->pc = 0x488788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
label_48878c:
    // 0x48878c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48878cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_488790:
    // 0x488790: 0xc11f66e  jal         func_47D9B8
label_488794:
    if (ctx->pc == 0x488794u) {
        ctx->pc = 0x488794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488790u;
        // 0x488794: 0x35290408  ori         $t1, $t1, 0x408 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488798u;
        goto label_488798;
    }
    ctx->pc = 0x488790u;
    SET_GPR_U32(ctx, 31, 0x488798u);
    ctx->pc = 0x488794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488790u;
    // 0x488794: 0x35290408  ori         $t1, $t1, 0x408 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x488790u, 0x488798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488798u;
label_488798:
    // 0x488798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x488798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48879c:
    // 0x48879c: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x48879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4887a0:
    // 0x4887a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4887a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4887a4:
    // 0x4887a4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4887a8:
    if (ctx->pc == 0x4887A8u) {
        ctx->pc = 0x4887A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887A4u;
        // 0x4887a8: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887ACu;
        goto label_4887ac;
    }
    ctx->pc = 0x4887A4u;
    {
        const bool branch_taken_0x4887a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4887A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887A4u;
        // 0x4887a8: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4887a4) {
            ctx->pc = 0x4887C4u;
            goto label_4887c4;
        }
    }
    ctx->pc = 0x4887ACu;
label_4887ac:
    // 0x4887ac: 0xc11f74a  jal         func_47DD28
label_4887b0:
    if (ctx->pc == 0x4887B0u) {
        ctx->pc = 0x4887B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887ACu;
        // 0x4887b0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887B4u;
        goto label_4887b4;
    }
    ctx->pc = 0x4887ACu;
    SET_GPR_U32(ctx, 31, 0x4887B4u);
    ctx->pc = 0x4887B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4887ACu;
    // 0x4887b0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4887ACu, 0x4887B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4887B4u;
label_4887b4:
    // 0x4887b4: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x4887b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4887b8:
    // 0x4887b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4887b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4887bc:
    // 0x4887bc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_4887c0:
    if (ctx->pc == 0x4887C0u) {
        ctx->pc = 0x4887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887BCu;
        // 0x4887c0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887C4u;
        goto label_4887c4;
    }
    ctx->pc = 0x4887BCu;
    {
        const bool branch_taken_0x4887bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887BCu;
        // 0x4887c0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4887bc) {
            ctx->pc = 0x4888F0u;
            goto label_4888f0;
        }
    }
    ctx->pc = 0x4887C4u;
label_4887c4:
    // 0x4887c4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x4887c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_4887c8:
    // 0x4887c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4887c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4887cc:
    // 0x4887cc: 0x8f83897c  lw          $v1, -0x7684($gp)
    ctx->pc = 0x4887ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936956)));
label_4887d0:
    // 0x4887d0: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4887d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_4887d4:
    // 0x4887d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4887d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4887d8:
    // 0x4887d8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x4887d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_4887dc:
    // 0x4887dc: 0xaf83897c  sw          $v1, -0x7684($gp)
    ctx->pc = 0x4887dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936956), GPR_U32(ctx, 3));
label_4887e0:
    // 0x4887e0: 0x40f809  jalr        $v0
label_4887e4:
    if (ctx->pc == 0x4887E4u) {
        ctx->pc = 0x4887E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887E0u;
        // 0x4887e4: 0x34a50016  ori         $a1, $a1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887E8u;
        goto label_4887e8;
    }
    ctx->pc = 0x4887E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4887E8u);
        ctx->pc = 0x4887E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887E0u;
        // 0x4887e4: 0x34a50016  ori         $a1, $a1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4887E0u, 0x4887E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4887E8u;
label_4887e8:
    // 0x4887e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4887e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4887ec:
    // 0x4887ec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_4887f0:
    if (ctx->pc == 0x4887F0u) {
        ctx->pc = 0x4887F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887ECu;
        // 0x4887f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887F4u;
        goto label_4887f4;
    }
    ctx->pc = 0x4887ECu;
    {
        const bool branch_taken_0x4887ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4887F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887ECu;
        // 0x4887f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4887ec) {
            ctx->pc = 0x4887FCu;
            goto label_4887fc;
        }
    }
    ctx->pc = 0x4887F4u;
label_4887f4:
    // 0x4887f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4887f8:
    if (ctx->pc == 0x4887F8u) {
        ctx->pc = 0x4887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887F4u;
        // 0x4887f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4887FCu;
        goto label_4887fc;
    }
    ctx->pc = 0x4887F4u;
    {
        const bool branch_taken_0x4887f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4887F4u;
        // 0x4887f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4887f4) {
            ctx->pc = 0x488868u;
            goto label_488868;
        }
    }
    ctx->pc = 0x4887FCu;
label_4887fc:
    // 0x4887fc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x4887fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_488800:
    // 0x488800: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x488800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_488804:
    // 0x488804: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x488804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_488808:
    // 0x488808: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x488808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_48880c:
    // 0x48880c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x48880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_488810:
    // 0x488810: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488814:
    // 0x488814: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488818:
    // 0x488818: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x488818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_48881c:
    // 0x48881c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_488820:
    // 0x488820: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x488820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_488824:
    // 0x488824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488828:
    // 0x488828: 0x2644ec20  addiu       $a0, $s2, -0x13E0
    ctx->pc = 0x488828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
label_48882c:
    // 0x48882c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x48882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_488830:
    // 0x488830: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488834:
    // 0x488834: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488838:
    // 0x488838: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x488838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_48883c:
    // 0x48883c: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x48883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488840:
    // 0x488840: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x488840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488844:
    // 0x488844: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_488848:
    // 0x488848: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x488848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_48884c:
    // 0x48884c: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x48884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488850:
    // 0x488850: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488854:
    // 0x488854: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x488854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_488858:
    // 0x488858: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x488858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_48885c:
    // 0x48885c: 0xc11ff8e  jal         func_47FE38
label_488860:
    if (ctx->pc == 0x488860u) {
        ctx->pc = 0x488860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48885Cu;
        // 0x488860: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488864u;
        goto label_488864;
    }
    ctx->pc = 0x48885Cu;
    SET_GPR_U32(ctx, 31, 0x488864u);
    ctx->pc = 0x488860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48885Cu;
    // 0x488860: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x48885Cu, 0x488864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488864u;
label_488864:
    // 0x488864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488868:
    // 0x488868: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_48886c:
    // 0x48886c: 0x2690ad18  addiu       $s0, $s4, -0x52E8
    ctx->pc = 0x48886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_488870:
    // 0x488870: 0xaf858640  sw          $a1, -0x79C0($gp)
    ctx->pc = 0x488870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 5));
label_488874:
    // 0x488874: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x488874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_488878:
    // 0x488878: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_48887c:
    if (ctx->pc == 0x48887Cu) {
        ctx->pc = 0x48887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488878u;
        // 0x48887c: 0xacc50010  sw          $a1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488880u;
        goto label_488880;
    }
    ctx->pc = 0x488878u;
    {
        const bool branch_taken_0x488878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488878u;
        // 0x48887c: 0xacc50010  sw          $a1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488878) {
            ctx->pc = 0x4888C8u;
            goto label_4888c8;
        }
    }
    ctx->pc = 0x488880u;
label_488880:
    // 0x488880: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x488880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_488884:
    // 0x488884: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x488884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_488888:
    // 0x488888: 0x24429170  addiu       $v0, $v0, -0x6E90
    ctx->pc = 0x488888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938992));
label_48888c:
    // 0x48888c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x48888cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_488890:
    // 0x488890: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x488890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_488894:
    // 0x488894: 0x24639128  addiu       $v1, $v1, -0x6ED8
    ctx->pc = 0x488894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938920));
label_488898:
    // 0x488898: 0x24848150  addiu       $a0, $a0, -0x7EB0
    ctx->pc = 0x488898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
label_48889c:
    // 0x48889c: 0x24a59088  addiu       $a1, $a1, -0x6F78
    ctx->pc = 0x48889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938760));
label_4888a0:
    // 0x4888a0: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x4888a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_4888a4:
    // 0x4888a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4888a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4888a8:
    // 0x4888a8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x4888a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_4888ac:
    // 0x4888ac: 0xacc4002c  sw          $a0, 0x2C($a2)
    ctx->pc = 0x4888acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
label_4888b0:
    // 0x4888b0: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x4888b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
label_4888b4:
    // 0x4888b4: 0xa4c00028  sh          $zero, 0x28($a2)
    ctx->pc = 0x4888b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 0));
label_4888b8:
    // 0x4888b8: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x4888b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_4888bc:
    // 0x4888bc: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x4888bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
label_4888c0:
    // 0x4888c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_4888c4:
    if (ctx->pc == 0x4888C4u) {
        ctx->pc = 0x4888C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888C0u;
        // 0x4888c4: 0xacc00024  sw          $zero, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4888C8u;
        goto label_4888c8;
    }
    ctx->pc = 0x4888C0u;
    {
        const bool branch_taken_0x4888c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4888C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888C0u;
        // 0x4888c4: 0xacc00024  sw          $zero, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4888c0) {
            ctx->pc = 0x4888F4u;
            goto label_4888f4;
        }
    }
    ctx->pc = 0x4888C8u;
label_4888c8:
    // 0x4888c8: 0xc11f74a  jal         func_47DD28
label_4888cc:
    if (ctx->pc == 0x4888CCu) {
        ctx->pc = 0x4888CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888C8u;
        // 0x4888cc: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4888D0u;
        goto label_4888d0;
    }
    ctx->pc = 0x4888C8u;
    SET_GPR_U32(ctx, 31, 0x4888D0u);
    ctx->pc = 0x4888CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4888C8u;
    // 0x4888cc: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4888C8u, 0x4888D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888D0u;
label_4888d0:
    // 0x4888d0: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x4888d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4888d4:
    // 0x4888d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4888d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4888d8:
    // 0x4888d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4888d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4888dc:
    // 0x4888dc: 0xc11f74a  jal         func_47DD28
label_4888e0:
    if (ctx->pc == 0x4888E0u) {
        ctx->pc = 0x4888E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888DCu;
        // 0x4888e0: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4888E4u;
        goto label_4888e4;
    }
    ctx->pc = 0x4888DCu;
    SET_GPR_U32(ctx, 31, 0x4888E4u);
    ctx->pc = 0x4888E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4888DCu;
    // 0x4888e0: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4888DCu, 0x4888E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888E4u;
label_4888e4:
    // 0x4888e4: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x4888e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4888e8:
    // 0x4888e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4888e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4888ec:
    // 0x4888ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4888ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4888f0:
    // 0x4888f0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4888f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_4888f4:
    // 0x4888f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4888f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4888f8:
    // 0x4888f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4888f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4888fc:
    // 0x4888fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4888fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488900:
    // 0x488900: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x488900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488904:
    // 0x488904: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x488904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488908:
    // 0x488908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48890c:
    // 0x48890c: 0x3e00008  jr          $ra
label_488910:
    if (ctx->pc == 0x488910u) {
        ctx->pc = 0x488910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48890Cu;
        // 0x488910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488914u;
        goto label_488914;
    }
    ctx->pc = 0x48890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48890Cu;
        // 0x488910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488914u;
label_488914:
    // 0x488914: 0x0  nop
    ctx->pc = 0x488914u;
    // NOP
    ctx->pc = 0x488918u;
}
