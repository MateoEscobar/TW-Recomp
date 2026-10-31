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

// Function: sub_00269670
// Address: 0x269670 - 0x2697a8
void sub_00269670_0x269670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269670_0x269670");
#endif

    switch (ctx->pc) {
        case 0x269670u: goto label_269670;
        case 0x269674u: goto label_269674;
        case 0x269678u: goto label_269678;
        case 0x26967cu: goto label_26967c;
        case 0x269680u: goto label_269680;
        case 0x269684u: goto label_269684;
        case 0x269688u: goto label_269688;
        case 0x26968cu: goto label_26968c;
        case 0x269690u: goto label_269690;
        case 0x269694u: goto label_269694;
        case 0x269698u: goto label_269698;
        case 0x26969cu: goto label_26969c;
        case 0x2696a0u: goto label_2696a0;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696a8u: goto label_2696a8;
        case 0x2696acu: goto label_2696ac;
        case 0x2696b0u: goto label_2696b0;
        case 0x2696b4u: goto label_2696b4;
        case 0x2696b8u: goto label_2696b8;
        case 0x2696bcu: goto label_2696bc;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696c4u: goto label_2696c4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        default: break;
    }

    ctx->pc = 0x269670u;

label_269670:
    // 0x269670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x269670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_269674:
    // 0x269674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x269674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_269678:
    // 0x269678: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x269678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_26967c:
    // 0x26967c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26967cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269680:
    // 0x269680: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x269680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_269684:
    // 0x269684: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x269684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_269688:
    // 0x269688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x269688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_26968c:
    // 0x26968c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_269690:
    // 0x269690: 0xc0e409a  jal         func_390268
label_269694:
    if (ctx->pc == 0x269694u) {
        ctx->pc = 0x269694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269690u;
        // 0x269694: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269698u;
        goto label_269698;
    }
    ctx->pc = 0x269690u;
    SET_GPR_U32(ctx, 31, 0x269698u);
    ctx->pc = 0x269694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269690u;
    // 0x269694: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x269690u, 0x269698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269698u;
label_269698:
    // 0x269698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26969c:
    // 0x26969c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2696a0:
    // 0x2696a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2696a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2696a4:
    // 0x2696a4: 0xc099cb4  jal         func_2672D0
label_2696a8:
    if (ctx->pc == 0x2696A8u) {
        ctx->pc = 0x2696A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696A4u;
        // 0x2696a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696ACu;
        goto label_2696ac;
    }
    ctx->pc = 0x2696A4u;
    SET_GPR_U32(ctx, 31, 0x2696ACu);
    ctx->pc = 0x2696A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696A4u;
    // 0x2696a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2696A4u, 0x2696ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696ACu;
label_2696ac:
    // 0x2696ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2696acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2696b0:
    // 0x2696b0: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2696b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2696b4:
    // 0x2696b4: 0x12710034  beq         $s3, $s1, . + 4 + (0x34 << 2)
label_2696b8:
    if (ctx->pc == 0x2696B8u) {
        ctx->pc = 0x2696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696B4u;
        // 0x2696b8: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696BCu;
        goto label_2696bc;
    }
    ctx->pc = 0x2696B4u;
    {
        const bool branch_taken_0x2696b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x2696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696B4u;
        // 0x2696b8: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696b4) {
            ctx->pc = 0x269788u;
            goto label_269788;
        }
    }
    ctx->pc = 0x2696BCu;
label_2696bc:
    // 0x2696bc: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_2696c0:
    if (ctx->pc == 0x2696C0u) {
        ctx->pc = 0x2696C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696BCu;
        // 0x2696c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696C4u;
        goto label_2696c4;
    }
    ctx->pc = 0x2696BCu;
    {
        const bool branch_taken_0x2696bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696BCu;
        // 0x2696c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696bc) {
            ctx->pc = 0x26978Cu;
            goto label_26978c;
        }
    }
    ctx->pc = 0x2696C4u;
label_2696c4:
    // 0x2696c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2696c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2696c8:
    // 0x2696c8: 0xc089974  jal         func_2265D0
label_2696cc:
    if (ctx->pc == 0x2696CCu) {
        ctx->pc = 0x2696CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696C8u;
        // 0x2696cc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696D0u;
        goto label_2696d0;
    }
    ctx->pc = 0x2696C8u;
    SET_GPR_U32(ctx, 31, 0x2696D0u);
    ctx->pc = 0x2696CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696C8u;
    // 0x2696cc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2696C8u, 0x2696D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696D0u;
label_2696d0:
    // 0x2696d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2696d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2696d4:
    // 0x2696d4: 0xc08b0e2  jal         func_22C388
label_2696d8:
    if (ctx->pc == 0x2696D8u) {
        ctx->pc = 0x2696D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696D4u;
        // 0x2696d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696DCu;
        goto label_2696dc;
    }
    ctx->pc = 0x2696D4u;
    SET_GPR_U32(ctx, 31, 0x2696DCu);
    ctx->pc = 0x2696D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696D4u;
    // 0x2696d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x2696D4u, 0x2696DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696DCu;
label_2696dc:
    // 0x2696dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2696e0:
    if (ctx->pc == 0x2696E0u) {
        ctx->pc = 0x2696E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696DCu;
        // 0x2696e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696E4u;
        goto label_2696e4;
    }
    ctx->pc = 0x2696DCu;
    {
        const bool branch_taken_0x2696dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2696E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696DCu;
        // 0x2696e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696dc) {
            ctx->pc = 0x2696ECu;
            goto label_2696ec;
        }
    }
    ctx->pc = 0x2696E4u;
label_2696e4:
    // 0x2696e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2696e8:
    if (ctx->pc == 0x2696E8u) {
        ctx->pc = 0x2696E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E4u;
        // 0x2696e8: 0x240600da  addiu       $a2, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696ECu;
        goto label_2696ec;
    }
    ctx->pc = 0x2696E4u;
    {
        const bool branch_taken_0x2696e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E4u;
        // 0x2696e8: 0x240600da  addiu       $a2, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e4) {
            ctx->pc = 0x269700u;
            goto label_269700;
        }
    }
    ctx->pc = 0x2696ECu;
label_2696ec:
    // 0x2696ec: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_2696f0:
    if (ctx->pc == 0x2696F0u) {
        ctx->pc = 0x2696F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696ECu;
        // 0x2696f0: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696F4u;
        goto label_2696f4;
    }
    ctx->pc = 0x2696ECu;
    {
        const bool branch_taken_0x2696ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696ECu;
        // 0x2696f0: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696ec) {
            ctx->pc = 0x269700u;
            goto label_269700;
        }
    }
    ctx->pc = 0x2696F4u;
label_2696f4:
    // 0x2696f4: 0x3a030003  xori        $v1, $s0, 0x3
    ctx->pc = 0x2696f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
label_2696f8:
    // 0x2696f8: 0x240200da  addiu       $v0, $zero, 0xDA
    ctx->pc = 0x2696f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
label_2696fc:
    // 0x2696fc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x2696fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_269700:
    // 0x269700: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x269700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_269704:
    // 0x269704: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x269704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_269708:
    // 0x269708: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26970c:
    // 0x26970c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269710:
    // 0x269710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269714:
    // 0x269714: 0xc09a9b4  jal         func_26A6D0
label_269718:
    if (ctx->pc == 0x269718u) {
        ctx->pc = 0x269718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269714u;
        // 0x269718: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26971Cu;
        goto label_26971c;
    }
    ctx->pc = 0x269714u;
    SET_GPR_U32(ctx, 31, 0x26971Cu);
    ctx->pc = 0x269718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269714u;
    // 0x269718: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x269714u, 0x26971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26971Cu;
label_26971c:
    // 0x26971c: 0xc09a642  jal         func_269908
label_269720:
    if (ctx->pc == 0x269720u) {
        ctx->pc = 0x269720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26971Cu;
        // 0x269720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269724u;
        goto label_269724;
    }
    ctx->pc = 0x26971Cu;
    SET_GPR_U32(ctx, 31, 0x269724u);
    ctx->pc = 0x269720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26971Cu;
    // 0x269720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269908u, 0x26971Cu, 0x269724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269724u;
label_269724:
    // 0x269724: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x269724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_269728:
    // 0x269728: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x269728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_26972c:
    // 0x26972c: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x26972cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_269730:
    // 0x269730: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x269730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_269734:
    // 0x269734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269738:
    // 0x269738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26973c:
    // 0x26973c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x26973cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_269740:
    // 0x269740: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_269744:
    if (ctx->pc == 0x269744u) {
        ctx->pc = 0x269744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269740u;
        // 0x269744: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269748u;
        goto label_269748;
    }
    ctx->pc = 0x269740u;
    {
        const bool branch_taken_0x269740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269740u;
        // 0x269744: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269740) {
            ctx->pc = 0x269750u;
            goto label_269750;
        }
    }
    ctx->pc = 0x269748u;
label_269748:
    // 0x269748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26974c:
    // 0x26974c: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x26974cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_269750:
    // 0x269750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_269754:
    // 0x269754: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x269754u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_269758:
    // 0x269758: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x269758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26975c:
    // 0x26975c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_269760:
    // 0x269760: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x269760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_269764:
    // 0x269764: 0x40f809  jalr        $v0
label_269768:
    if (ctx->pc == 0x269768u) {
        ctx->pc = 0x269768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269764u;
        // 0x269768: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26976Cu;
        goto label_26976c;
    }
    ctx->pc = 0x269764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26976Cu);
        ctx->pc = 0x269768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269764u;
        // 0x269768: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269764u, 0x26976Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26976Cu;
label_26976c:
    // 0x26976c: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x26976cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_269770:
    // 0x269770: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x269770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_269774:
    // 0x269774: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x269774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_269778:
    // 0x269778: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x269778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26977c:
    // 0x26977c: 0x40f809  jalr        $v0
label_269780:
    if (ctx->pc == 0x269780u) {
        ctx->pc = 0x269780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26977Cu;
        // 0x269780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269784u;
        goto label_269784;
    }
    ctx->pc = 0x26977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269784u);
        ctx->pc = 0x269780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26977Cu;
        // 0x269780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26977Cu, 0x269784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269784u;
label_269784:
    // 0x269784: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x269784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_269788:
    // 0x269788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26978c:
    // 0x26978c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269790:
    // 0x269790: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x269790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269794:
    // 0x269794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x269794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269798:
    // 0x269798: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x269798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26979c:
    // 0x26979c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2697a0:
    // 0x2697a0: 0x3e00008  jr          $ra
label_2697a4:
    if (ctx->pc == 0x2697A4u) {
        ctx->pc = 0x2697A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697A0u;
        // 0x2697a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697A8u;
        goto label_fallthrough_0x2697a0;
    }
    ctx->pc = 0x2697A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2697A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697A0u;
        // 0x2697a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2697A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2697a0:
    ctx->pc = 0x2697A8u;
}
