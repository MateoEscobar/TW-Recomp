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

// Function: sub_00173718
// Address: 0x173718 - 0x173878
void sub_00173718_0x173718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173718_0x173718");
#endif

    switch (ctx->pc) {
        case 0x173718u: goto label_173718;
        case 0x17371cu: goto label_17371c;
        case 0x173720u: goto label_173720;
        case 0x173724u: goto label_173724;
        case 0x173728u: goto label_173728;
        case 0x17372cu: goto label_17372c;
        case 0x173730u: goto label_173730;
        case 0x173734u: goto label_173734;
        case 0x173738u: goto label_173738;
        case 0x17373cu: goto label_17373c;
        case 0x173740u: goto label_173740;
        case 0x173744u: goto label_173744;
        case 0x173748u: goto label_173748;
        case 0x17374cu: goto label_17374c;
        case 0x173750u: goto label_173750;
        case 0x173754u: goto label_173754;
        case 0x173758u: goto label_173758;
        case 0x17375cu: goto label_17375c;
        case 0x173760u: goto label_173760;
        case 0x173764u: goto label_173764;
        case 0x173768u: goto label_173768;
        case 0x17376cu: goto label_17376c;
        case 0x173770u: goto label_173770;
        case 0x173774u: goto label_173774;
        case 0x173778u: goto label_173778;
        case 0x17377cu: goto label_17377c;
        case 0x173780u: goto label_173780;
        case 0x173784u: goto label_173784;
        case 0x173788u: goto label_173788;
        case 0x17378cu: goto label_17378c;
        case 0x173790u: goto label_173790;
        case 0x173794u: goto label_173794;
        case 0x173798u: goto label_173798;
        case 0x17379cu: goto label_17379c;
        case 0x1737a0u: goto label_1737a0;
        case 0x1737a4u: goto label_1737a4;
        case 0x1737a8u: goto label_1737a8;
        case 0x1737acu: goto label_1737ac;
        case 0x1737b0u: goto label_1737b0;
        case 0x1737b4u: goto label_1737b4;
        case 0x1737b8u: goto label_1737b8;
        case 0x1737bcu: goto label_1737bc;
        case 0x1737c0u: goto label_1737c0;
        case 0x1737c4u: goto label_1737c4;
        case 0x1737c8u: goto label_1737c8;
        case 0x1737ccu: goto label_1737cc;
        case 0x1737d0u: goto label_1737d0;
        case 0x1737d4u: goto label_1737d4;
        case 0x1737d8u: goto label_1737d8;
        case 0x1737dcu: goto label_1737dc;
        case 0x1737e0u: goto label_1737e0;
        case 0x1737e4u: goto label_1737e4;
        case 0x1737e8u: goto label_1737e8;
        case 0x1737ecu: goto label_1737ec;
        case 0x1737f0u: goto label_1737f0;
        case 0x1737f4u: goto label_1737f4;
        case 0x1737f8u: goto label_1737f8;
        case 0x1737fcu: goto label_1737fc;
        case 0x173800u: goto label_173800;
        case 0x173804u: goto label_173804;
        case 0x173808u: goto label_173808;
        case 0x17380cu: goto label_17380c;
        case 0x173810u: goto label_173810;
        case 0x173814u: goto label_173814;
        case 0x173818u: goto label_173818;
        case 0x17381cu: goto label_17381c;
        case 0x173820u: goto label_173820;
        case 0x173824u: goto label_173824;
        case 0x173828u: goto label_173828;
        case 0x17382cu: goto label_17382c;
        case 0x173830u: goto label_173830;
        case 0x173834u: goto label_173834;
        case 0x173838u: goto label_173838;
        case 0x17383cu: goto label_17383c;
        case 0x173840u: goto label_173840;
        case 0x173844u: goto label_173844;
        case 0x173848u: goto label_173848;
        case 0x17384cu: goto label_17384c;
        case 0x173850u: goto label_173850;
        case 0x173854u: goto label_173854;
        case 0x173858u: goto label_173858;
        case 0x17385cu: goto label_17385c;
        case 0x173860u: goto label_173860;
        case 0x173864u: goto label_173864;
        case 0x173868u: goto label_173868;
        case 0x17386cu: goto label_17386c;
        case 0x173870u: goto label_173870;
        case 0x173874u: goto label_173874;
        default: break;
    }

    ctx->pc = 0x173718u;

label_173718:
    // 0x173718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17371c:
    // 0x17371c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173720:
    // 0x173720: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x173720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_173724:
    // 0x173724: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x173724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_173728:
    // 0x173728: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17372c:
    // 0x17372c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_173730:
    // 0x173730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173734:
    // 0x173734: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x173734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_173738:
    // 0x173738: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x173738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_17373c:
    // 0x17373c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_173740:
    // 0x173740: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x173740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173744:
    // 0x173744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173748:
    // 0x173748: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17374c:
    // 0x17374c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_173750:
    // 0x173750: 0xc05cea8  jal         func_173AA0
label_173754:
    if (ctx->pc == 0x173754u) {
        ctx->pc = 0x173754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173750u;
        // 0x173754: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173758u;
        goto label_173758;
    }
    ctx->pc = 0x173750u;
    SET_GPR_U32(ctx, 31, 0x173758u);
    ctx->pc = 0x173754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173750u;
    // 0x173754: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AA0u, 0x173750u, 0x173758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173758u;
label_173758:
    // 0x173758: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x173758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17375c:
    // 0x17375c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17375cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173760:
    // 0x173760: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_173764:
    // 0x173764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173768:
    // 0x173768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17376c:
    // 0x17376c: 0xc063a78  jal         func_18E9E0
label_173770:
    if (ctx->pc == 0x173770u) {
        ctx->pc = 0x173770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17376Cu;
        // 0x173770: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173774u;
        goto label_173774;
    }
    ctx->pc = 0x17376Cu;
    SET_GPR_U32(ctx, 31, 0x173774u);
    ctx->pc = 0x173770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17376Cu;
    // 0x173770: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x17376Cu, 0x173774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173774u;
label_173774:
    // 0x173774: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_173778:
    // 0x173778: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_17377c:
    if (ctx->pc == 0x17377Cu) {
        ctx->pc = 0x17377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173778u;
        // 0x17377c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173780u;
        goto label_173780;
    }
    ctx->pc = 0x173778u;
    {
        const bool branch_taken_0x173778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173778u;
        // 0x17377c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173778) {
            ctx->pc = 0x173798u;
            goto label_173798;
        }
    }
    ctx->pc = 0x173780u;
label_173780:
    // 0x173780: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x173780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_173784:
    // 0x173784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173788:
    // 0x173788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17378c:
    // 0x17378c: 0xc063a78  jal         func_18E9E0
label_173790:
    if (ctx->pc == 0x173790u) {
        ctx->pc = 0x173790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17378Cu;
        // 0x173790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173794u;
        goto label_173794;
    }
    ctx->pc = 0x17378Cu;
    SET_GPR_U32(ctx, 31, 0x173794u);
    ctx->pc = 0x173790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17378Cu;
    // 0x173790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x17378Cu, 0x173794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173794u;
label_173794:
    // 0x173794: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x173794u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173798:
    // 0x173798: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x173798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_17379c:
    // 0x17379c: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x17379cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_1737a0:
    // 0x1737a0: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1737a4:
    // 0x1737a4: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x1737a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_1737a8:
    // 0x1737a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1737a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1737ac:
    // 0x1737ac: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1737acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1737b0:
    // 0x1737b0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1737b4:
    // 0x1737b4: 0x60f809  jalr        $v1
label_1737b8:
    if (ctx->pc == 0x1737B8u) {
        ctx->pc = 0x1737B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737B4u;
        // 0x1737b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737BCu;
        goto label_1737bc;
    }
    ctx->pc = 0x1737B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1737BCu);
        ctx->pc = 0x1737B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737B4u;
        // 0x1737b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737B4u, 0x1737BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1737BCu;
label_1737bc:
    // 0x1737bc: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x1737bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1737c0:
    // 0x1737c0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1737c4:
    // 0x1737c4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1737c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1737c8:
    // 0x1737c8: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
label_1737cc:
    // 0x1737cc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1737d0:
    // 0x1737d0: 0x25081b30  addiu       $t0, $t0, 0x1B30
    ctx->pc = 0x1737d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6960));
label_1737d4:
    // 0x1737d4: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1737d8:
    // 0x1737d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1737dc:
    // 0x1737dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1737dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1737e0:
    // 0x1737e0: 0x240903ee  addiu       $t1, $zero, 0x3EE
    ctx->pc = 0x1737e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1006));
label_1737e4:
    // 0x1737e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1737e8:
    // 0x1737e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1737e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1737ec:
    // 0x1737ec: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1737ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1737f0:
    // 0x1737f0: 0x40f809  jalr        $v0
label_1737f4:
    if (ctx->pc == 0x1737F4u) {
        ctx->pc = 0x1737F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F0u;
        // 0x1737f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737F8u;
        goto label_1737f8;
    }
    ctx->pc = 0x1737F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1737F8u);
        ctx->pc = 0x1737F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F0u;
        // 0x1737f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737F0u, 0x1737F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1737F8u;
label_1737f8:
    // 0x1737f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1737f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1737fc:
    // 0x1737fc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_173800:
    if (ctx->pc == 0x173800u) {
        ctx->pc = 0x173800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737FCu;
        // 0x173800: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173804u;
        goto label_173804;
    }
    ctx->pc = 0x1737FCu;
    {
        const bool branch_taken_0x1737fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x173800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737FCu;
        // 0x173800: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737fc) {
            ctx->pc = 0x173818u;
            goto label_173818;
        }
    }
    ctx->pc = 0x173804u;
label_173804:
    // 0x173804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173808:
    // 0x173808: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x173808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17380c:
    // 0x17380c: 0xc05c872  jal         func_1721C8
label_173810:
    if (ctx->pc == 0x173810u) {
        ctx->pc = 0x173810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17380Cu;
        // 0x173810: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173814u;
        goto label_173814;
    }
    ctx->pc = 0x17380Cu;
    SET_GPR_U32(ctx, 31, 0x173814u);
    ctx->pc = 0x173810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17380Cu;
    // 0x173810: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721C8u, 0x17380Cu, 0x173814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173814u;
label_173814:
    // 0x173814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173818:
    // 0x173818: 0x8e2327e4  lw          $v1, 0x27E4($s1)
    ctx->pc = 0x173818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_17381c:
    // 0x17381c: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x17381cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_173820:
    // 0x173820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173824:
    // 0x173824: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x173824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_173828:
    // 0x173828: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17382c:
    // 0x17382c: 0xc0f809  jalr        $a2
label_173830:
    if (ctx->pc == 0x173830u) {
        ctx->pc = 0x173830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17382Cu;
        // 0x173830: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173834u;
        goto label_173834;
    }
    ctx->pc = 0x17382Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x173834u);
        ctx->pc = 0x173830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17382Cu;
        // 0x173830: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17382Cu, 0x173834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173834u;
label_173834:
    // 0x173834: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173838:
    // 0x173838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17383c:
    // 0x17383c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17383cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_173840:
    // 0x173840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_173844:
    // 0x173844: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x173844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173848:
    // 0x173848: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x173848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_17384c:
    // 0x17384c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17384cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_173850:
    // 0x173850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173854:
    // 0x173854: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x173854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173858:
    // 0x173858: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x173858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17385c:
    // 0x17385c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173860:
    // 0x173860: 0x3e00008  jr          $ra
label_173864:
    if (ctx->pc == 0x173864u) {
        ctx->pc = 0x173864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173860u;
        // 0x173864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173868u;
        goto label_173868;
    }
    ctx->pc = 0x173860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173860u;
        // 0x173864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173868u;
label_173868:
    // 0x173868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17386c:
    // 0x17386c: 0x0  nop
    ctx->pc = 0x17386cu;
    // NOP
label_173870:
    // 0x173870: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_173874:
    // 0x173874: 0x0  nop
    ctx->pc = 0x173874u;
    // NOP
    ctx->pc = 0x173878u;
}
