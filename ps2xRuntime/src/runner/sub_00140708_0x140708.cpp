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

// Function: sub_00140708
// Address: 0x140708 - 0x140830
void sub_00140708_0x140708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140708_0x140708");
#endif

    switch (ctx->pc) {
        case 0x140708u: goto label_140708;
        case 0x14070cu: goto label_14070c;
        case 0x140710u: goto label_140710;
        case 0x140714u: goto label_140714;
        case 0x140718u: goto label_140718;
        case 0x14071cu: goto label_14071c;
        case 0x140720u: goto label_140720;
        case 0x140724u: goto label_140724;
        case 0x140728u: goto label_140728;
        case 0x14072cu: goto label_14072c;
        case 0x140730u: goto label_140730;
        case 0x140734u: goto label_140734;
        case 0x140738u: goto label_140738;
        case 0x14073cu: goto label_14073c;
        case 0x140740u: goto label_140740;
        case 0x140744u: goto label_140744;
        case 0x140748u: goto label_140748;
        case 0x14074cu: goto label_14074c;
        case 0x140750u: goto label_140750;
        case 0x140754u: goto label_140754;
        case 0x140758u: goto label_140758;
        case 0x14075cu: goto label_14075c;
        case 0x140760u: goto label_140760;
        case 0x140764u: goto label_140764;
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        case 0x140808u: goto label_140808;
        case 0x14080cu: goto label_14080c;
        case 0x140810u: goto label_140810;
        case 0x140814u: goto label_140814;
        case 0x140818u: goto label_140818;
        case 0x14081cu: goto label_14081c;
        case 0x140820u: goto label_140820;
        case 0x140824u: goto label_140824;
        case 0x140828u: goto label_140828;
        case 0x14082cu: goto label_14082c;
        default: break;
    }

    ctx->pc = 0x140708u;

label_140708:
    // 0x140708: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x140708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_14070c:
    // 0x14070c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x14070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_140710:
    // 0x140710: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x140710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_140714:
    // 0x140714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140718:
    // 0x140718: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x140718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_14071c:
    // 0x14071c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_140720:
    // 0x140720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140724:
    // 0x140724: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_140728:
    // 0x140728: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x140728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14072c:
    // 0x14072c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_140730:
    // 0x140730: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x140730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140734:
    // 0x140734: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x140734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_140738:
    // 0x140738: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x140738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14073c:
    // 0x14073c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_140740:
    // 0x140740: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x140740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_140744:
    // 0x140744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_140748:
    // 0x140748: 0xc0502b4  jal         func_140AD0
label_14074c:
    if (ctx->pc == 0x14074Cu) {
        ctx->pc = 0x14074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140748u;
        // 0x14074c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140750u;
        goto label_140750;
    }
    ctx->pc = 0x140748u;
    SET_GPR_U32(ctx, 31, 0x140750u);
    ctx->pc = 0x14074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140748u;
    // 0x14074c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140AD0u, 0x140748u, 0x140750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140750u;
label_140750:
    // 0x140750: 0x38540001  xori        $s4, $v0, 0x1
    ctx->pc = 0x140750u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_140754:
    // 0x140754: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
label_140758:
    if (ctx->pc == 0x140758u) {
        ctx->pc = 0x140758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140754u;
        // 0x140758: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14075Cu;
        goto label_14075c;
    }
    ctx->pc = 0x140754u;
    {
        const bool branch_taken_0x140754 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x140758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140754u;
        // 0x140758: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140754) {
            ctx->pc = 0x14080Cu;
            goto label_14080c;
        }
    }
    ctx->pc = 0x14075Cu;
label_14075c:
    // 0x14075c: 0x920203e4  lbu         $v0, 0x3E4($s0)
    ctx->pc = 0x14075cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 996)));
label_140760:
    // 0x140760: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_140764:
    if (ctx->pc == 0x140764u) {
        ctx->pc = 0x140764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140760u;
        // 0x140764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140768u;
        goto label_140768;
    }
    ctx->pc = 0x140760u;
    {
        const bool branch_taken_0x140760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140760) {
            ctx->pc = 0x140764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140760u;
            // 0x140764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1407F4u;
            goto label_1407f4;
        }
    }
    ctx->pc = 0x140768u;
label_140768:
    // 0x140768: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x140768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_14076c:
    // 0x14076c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140770:
    // 0x140770: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x140770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_140774:
    // 0x140774: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x140774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_140778:
    // 0x140778: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x140778u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_14077c:
    // 0x14077c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14077cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_140780:
    // 0x140780: 0x7e030180  sq          $v1, 0x180($s0)
    ctx->pc = 0x140780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 3));
label_140784:
    // 0x140784: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x140784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_140788:
    // 0x140788: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x140788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
label_14078c:
    // 0x14078c: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_140790:
    // 0x140790: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x140790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_140794:
    // 0x140794: 0x40f809  jalr        $v0
label_140798:
    if (ctx->pc == 0x140798u) {
        ctx->pc = 0x140798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140794u;
        // 0x140798: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14079Cu;
        goto label_14079c;
    }
    ctx->pc = 0x140794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14079Cu);
        ctx->pc = 0x140798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140794u;
        // 0x140798: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140794u, 0x14079Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14079Cu;
label_14079c:
    // 0x14079c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14079cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1407a0:
    // 0x1407a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1407a4:
    // 0x1407a4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1407a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1407a8:
    // 0x1407a8: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x1407a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_1407ac:
    // 0x1407ac: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x1407acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_1407b0:
    // 0x1407b0: 0x40f809  jalr        $v0
label_1407b4:
    if (ctx->pc == 0x1407B4u) {
        ctx->pc = 0x1407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407B0u;
        // 0x1407b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407B8u;
        goto label_1407b8;
    }
    ctx->pc = 0x1407B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1407B8u);
        ctx->pc = 0x1407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407B0u;
        // 0x1407b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407B0u, 0x1407B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1407B8u;
label_1407b8:
    // 0x1407b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1407b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1407bc:
    // 0x1407bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1407bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1407c0:
    // 0x1407c0: 0xc0cdc0a  jal         func_337028
label_1407c4:
    if (ctx->pc == 0x1407C4u) {
        ctx->pc = 0x1407C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407C0u;
        // 0x1407c4: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407C8u;
        goto label_1407c8;
    }
    ctx->pc = 0x1407C0u;
    SET_GPR_U32(ctx, 31, 0x1407C8u);
    ctx->pc = 0x1407C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407C0u;
    // 0x1407c4: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x1407C0u, 0x1407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C8u;
label_1407c8:
    // 0x1407c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1407cc:
    if (ctx->pc == 0x1407CCu) {
        ctx->pc = 0x1407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407C8u;
        // 0x1407cc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407D0u;
        goto label_1407d0;
    }
    ctx->pc = 0x1407C8u;
    {
        const bool branch_taken_0x1407c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407C8u;
        // 0x1407cc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407c8) {
            ctx->pc = 0x1407E0u;
            goto label_1407e0;
        }
    }
    ctx->pc = 0x1407D0u;
label_1407d0:
    // 0x1407d0: 0xc0cd972  jal         func_3365C8
label_1407d4:
    if (ctx->pc == 0x1407D4u) {
        ctx->pc = 0x1407D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407D0u;
        // 0x1407d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407D8u;
        goto label_1407d8;
    }
    ctx->pc = 0x1407D0u;
    SET_GPR_U32(ctx, 31, 0x1407D8u);
    ctx->pc = 0x1407D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407D0u;
    // 0x1407d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x1407D0u, 0x1407D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407D8u;
label_1407d8:
    // 0x1407d8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1407d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1407dc:
    // 0x1407dc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1407dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1407e0:
    // 0x1407e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1407e4:
    // 0x1407e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1407e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1407e8:
    // 0x1407e8: 0xc048314  jal         func_120C50
label_1407ec:
    if (ctx->pc == 0x1407ECu) {
        ctx->pc = 0x1407ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407E8u;
        // 0x1407ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407F0u;
        goto label_1407f0;
    }
    ctx->pc = 0x1407E8u;
    SET_GPR_U32(ctx, 31, 0x1407F0u);
    ctx->pc = 0x1407ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407E8u;
    // 0x1407ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x1407E8u, 0x1407F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407F0u;
label_1407f0:
    // 0x1407f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1407f4:
    // 0x1407f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1407f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1407f8:
    // 0x1407f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1407fc:
    // 0x1407fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140800:
    // 0x140800: 0xc05035a  jal         func_140D68
label_140804:
    if (ctx->pc == 0x140804u) {
        ctx->pc = 0x140804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140800u;
        // 0x140804: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140808u;
        goto label_140808;
    }
    ctx->pc = 0x140800u;
    SET_GPR_U32(ctx, 31, 0x140808u);
    ctx->pc = 0x140804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140800u;
    // 0x140804: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D68u, 0x140800u, 0x140808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140808u;
label_140808:
    // 0x140808: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x140808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14080c:
    // 0x14080c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14080cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_140810:
    // 0x140810: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x140810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_140814:
    // 0x140814: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x140814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_140818:
    // 0x140818: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x140818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14081c:
    // 0x14081c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14081cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_140820:
    // 0x140820: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_140824:
    // 0x140824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x140824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_140828:
    // 0x140828: 0x3e00008  jr          $ra
label_14082c:
    if (ctx->pc == 0x14082Cu) {
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140830u;
        goto label_fallthrough_0x140828;
    }
    ctx->pc = 0x140828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140828:
    ctx->pc = 0x140830u;
}
