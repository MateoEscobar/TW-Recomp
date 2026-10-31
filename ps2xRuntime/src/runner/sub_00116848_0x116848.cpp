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

// Function: sub_00116848
// Address: 0x116848 - 0x116c98
void sub_00116848_0x116848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116848_0x116848");
#endif

    switch (ctx->pc) {
        case 0x116870u: goto label_116870;
        case 0x11688cu: goto label_11688c;
        case 0x1168a8u: goto label_1168a8;
        case 0x1168c4u: goto label_1168c4;
        case 0x1168e0u: goto label_1168e0;
        case 0x1168fcu: goto label_1168fc;
        case 0x116918u: goto label_116918;
        case 0x116934u: goto label_116934;
        case 0x116950u: goto label_116950;
        case 0x11696cu: goto label_11696c;
        case 0x116988u: goto label_116988;
        case 0x1169a4u: goto label_1169a4;
        case 0x1169c0u: goto label_1169c0;
        case 0x1169dcu: goto label_1169dc;
        case 0x1169f8u: goto label_1169f8;
        case 0x116a14u: goto label_116a14;
        case 0x116a30u: goto label_116a30;
        case 0x116a4cu: goto label_116a4c;
        case 0x116a68u: goto label_116a68;
        case 0x116a80u: goto label_116a80;
        case 0x116a98u: goto label_116a98;
        case 0x116ab0u: goto label_116ab0;
        case 0x116ac8u: goto label_116ac8;
        case 0x116ae0u: goto label_116ae0;
        case 0x116af8u: goto label_116af8;
        case 0x116b10u: goto label_116b10;
        case 0x116b28u: goto label_116b28;
        case 0x116b40u: goto label_116b40;
        case 0x116b58u: goto label_116b58;
        case 0x116b70u: goto label_116b70;
        case 0x116b88u: goto label_116b88;
        case 0x116ba0u: goto label_116ba0;
        case 0x116bb8u: goto label_116bb8;
        case 0x116bd0u: goto label_116bd0;
        case 0x116be8u: goto label_116be8;
        case 0x116c00u: goto label_116c00;
        case 0x116c18u: goto label_116c18;
        case 0x116c30u: goto label_116c30;
        case 0x116c48u: goto label_116c48;
        case 0x116c60u: goto label_116c60;
        case 0x116c74u: goto label_116c74;
        case 0x116c88u: goto label_116c88;
        default: break;
    }

    ctx->pc = 0x116848u;

    // 0x116848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11684c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11684cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x116850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x116854: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x116854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x116858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11685c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116860: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116864: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x116864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116868: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116868u;
    SET_GPR_U32(ctx, 31, 0x116870u);
    ctx->pc = 0x11686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116868u;
    // 0x11686c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116868u, 0x116870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116870u;
label_116870:
    // 0x116870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116878: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x116878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11687c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x11687cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116880: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x116880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116884: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116884u;
    SET_GPR_U32(ctx, 31, 0x11688Cu);
    ctx->pc = 0x116888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116884u;
    // 0x116888: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116884u, 0x11688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11688Cu;
label_11688c:
    // 0x11688c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x116890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116894: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116898: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11689c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11689cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1168a0: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1168A0u;
    SET_GPR_U32(ctx, 31, 0x1168A8u);
    ctx->pc = 0x1168A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168A0u;
    // 0x1168a4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1168A0u, 0x1168A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168A8u;
label_1168a8:
    // 0x1168a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1168a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1168acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1168b0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1168b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1168b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1168b8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1168b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1168bc: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1168BCu;
    SET_GPR_U32(ctx, 31, 0x1168C4u);
    ctx->pc = 0x1168C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168BCu;
    // 0x1168c0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1168BCu, 0x1168C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168C4u;
label_1168c4:
    // 0x1168c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1168c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1168c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1168cc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1168ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1168d0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1168d4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1168d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1168d8: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1168D8u;
    SET_GPR_U32(ctx, 31, 0x1168E0u);
    ctx->pc = 0x1168DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168D8u;
    // 0x1168dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1168D8u, 0x1168E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168E0u;
label_1168e0:
    // 0x1168e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1168e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1168e8: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1168e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1168ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1168f0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1168f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1168f4: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1168F4u;
    SET_GPR_U32(ctx, 31, 0x1168FCu);
    ctx->pc = 0x1168F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168F4u;
    // 0x1168f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1168F4u, 0x1168FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168FCu;
label_1168fc:
    // 0x1168fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1168fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116900: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116904: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x116904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x116908: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11690c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116910: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116910u;
    SET_GPR_U32(ctx, 31, 0x116918u);
    ctx->pc = 0x116914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116910u;
    // 0x116914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116910u, 0x116918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116918u;
label_116918:
    // 0x116918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11691c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x11691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x116920: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x116924: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116928: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11692c: 0xc045b26  jal         func_116C98
    ctx->pc = 0x11692Cu;
    SET_GPR_U32(ctx, 31, 0x116934u);
    ctx->pc = 0x116930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11692Cu;
    // 0x116930: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x11692Cu, 0x116934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116934u;
label_116934:
    // 0x116934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116938: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11693c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x116940: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116944: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116948: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116948u;
    SET_GPR_U32(ctx, 31, 0x116950u);
    ctx->pc = 0x11694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116948u;
    // 0x11694c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116948u, 0x116950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116950u;
label_116950:
    // 0x116950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116954: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x116954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x116958: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x116958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11695c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11695cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116960: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116964: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116964u;
    SET_GPR_U32(ctx, 31, 0x11696Cu);
    ctx->pc = 0x116968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116964u;
    // 0x116968: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116964u, 0x11696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11696Cu;
label_11696c:
    // 0x11696c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116970: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116974: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x116974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x116978: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11697c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x11697cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116980: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116980u;
    SET_GPR_U32(ctx, 31, 0x116988u);
    ctx->pc = 0x116984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116980u;
    // 0x116984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116980u, 0x116988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116988u;
label_116988:
    // 0x116988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11698c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x116990: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x116990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x116994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x116994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116998: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x116998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11699c: 0xc045b26  jal         func_116C98
    ctx->pc = 0x11699Cu;
    SET_GPR_U32(ctx, 31, 0x1169A4u);
    ctx->pc = 0x1169A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11699Cu;
    // 0x1169a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x11699Cu, 0x1169A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169A4u;
label_1169a4:
    // 0x1169a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1169a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1169ac: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1169acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1169b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1169b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1169b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1169b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1169b8: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1169B8u;
    SET_GPR_U32(ctx, 31, 0x1169C0u);
    ctx->pc = 0x1169BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169B8u;
    // 0x1169bc: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1169B8u, 0x1169C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169C0u;
label_1169c0:
    // 0x1169c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1169c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1169c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1169c8: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1169cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1169ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1169d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1169d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1169d4: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1169D4u;
    SET_GPR_U32(ctx, 31, 0x1169DCu);
    ctx->pc = 0x1169D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169D4u;
    // 0x1169d8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1169D4u, 0x1169DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169DCu;
label_1169dc:
    // 0x1169dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1169dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169e0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1169e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1169e4: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1169e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1169e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1169ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1169f0: 0xc045b26  jal         func_116C98
    ctx->pc = 0x1169F0u;
    SET_GPR_U32(ctx, 31, 0x1169F8u);
    ctx->pc = 0x1169F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169F0u;
    // 0x1169f4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x1169F0u, 0x1169F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169F8u;
label_1169f8:
    // 0x1169f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1169f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1169fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x116a00: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x116a04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116a08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x116a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a0c: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116A0Cu;
    SET_GPR_U32(ctx, 31, 0x116A14u);
    ctx->pc = 0x116A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A0Cu;
    // 0x116a10: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116A0Cu, 0x116A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A14u;
label_116a14:
    // 0x116a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x116a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x116a1c: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x116a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x116a20: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x116a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116a24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x116a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a28: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116A28u;
    SET_GPR_U32(ctx, 31, 0x116A30u);
    ctx->pc = 0x116A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A28u;
    // 0x116a2c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116A28u, 0x116A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A30u;
label_116a30:
    // 0x116a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116a38: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x116a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x116a3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x116a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a40: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116a44: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116A44u;
    SET_GPR_U32(ctx, 31, 0x116A4Cu);
    ctx->pc = 0x116A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A44u;
    // 0x116a48: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116A44u, 0x116A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A4Cu;
label_116a4c:
    // 0x116a4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a54: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x116a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x116a58: 0x2406005d  addiu       $a2, $zero, 0x5D
    ctx->pc = 0x116a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x116a5c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x116a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116a60: 0xc045b26  jal         func_116C98
    ctx->pc = 0x116A60u;
    SET_GPR_U32(ctx, 31, 0x116A68u);
    ctx->pc = 0x116A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A60u;
    // 0x116a64: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C98u, 0x116A60u, 0x116A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A68u;
label_116a68:
    // 0x116a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a70: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x116a74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116a78: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116A78u;
    SET_GPR_U32(ctx, 31, 0x116A80u);
    ctx->pc = 0x116A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A78u;
    // 0x116a7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116A78u, 0x116A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A80u;
label_116a80:
    // 0x116a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a88: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x116a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x116a8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116a90: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116A90u;
    SET_GPR_U32(ctx, 31, 0x116A98u);
    ctx->pc = 0x116A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A90u;
    // 0x116a94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116A90u, 0x116A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A98u;
label_116a98:
    // 0x116a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116aa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x116aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116aa4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116aa8: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116AA8u;
    SET_GPR_U32(ctx, 31, 0x116AB0u);
    ctx->pc = 0x116AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AA8u;
    // 0x116aac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116AA8u, 0x116AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AB0u;
label_116ab0:
    // 0x116ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ab4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116ab8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x116ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x116abc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116ac0: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116AC0u;
    SET_GPR_U32(ctx, 31, 0x116AC8u);
    ctx->pc = 0x116AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC0u;
    // 0x116ac4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116AC0u, 0x116AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC8u;
label_116ac8:
    // 0x116ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116acc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x116accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116ad0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x116ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116ad4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116ad8: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116AD8u;
    SET_GPR_U32(ctx, 31, 0x116AE0u);
    ctx->pc = 0x116ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AD8u;
    // 0x116adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116AD8u, 0x116AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AE0u;
label_116ae0:
    // 0x116ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ae4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x116ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116ae8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x116ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x116aec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116af0: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116AF0u;
    SET_GPR_U32(ctx, 31, 0x116AF8u);
    ctx->pc = 0x116AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AF0u;
    // 0x116af4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116AF0u, 0x116AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AF8u;
label_116af8:
    // 0x116af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116afc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116b00: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x116b04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b08: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B08u;
    SET_GPR_U32(ctx, 31, 0x116B10u);
    ctx->pc = 0x116B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B08u;
    // 0x116b0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B08u, 0x116B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B10u;
label_116b10:
    // 0x116b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x116b18: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x116b1c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b20: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B20u;
    SET_GPR_U32(ctx, 31, 0x116B28u);
    ctx->pc = 0x116B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B20u;
    // 0x116b24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B20u, 0x116B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B28u;
label_116b28:
    // 0x116b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b2c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x116b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116b30: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x116b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116b34: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x116b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116b38: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B38u;
    SET_GPR_U32(ctx, 31, 0x116B40u);
    ctx->pc = 0x116B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B38u;
    // 0x116b3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B38u, 0x116B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B40u;
label_116b40:
    // 0x116b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x116b48: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x116b4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b50: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B50u;
    SET_GPR_U32(ctx, 31, 0x116B58u);
    ctx->pc = 0x116B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B50u;
    // 0x116b54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B50u, 0x116B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B58u;
label_116b58:
    // 0x116b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116b60: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x116b64: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b68: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B68u;
    SET_GPR_U32(ctx, 31, 0x116B70u);
    ctx->pc = 0x116B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B68u;
    // 0x116b6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B68u, 0x116B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B70u;
label_116b70:
    // 0x116b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b74: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x116b78: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x116b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x116b7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b80: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B80u;
    SET_GPR_U32(ctx, 31, 0x116B88u);
    ctx->pc = 0x116B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B80u;
    // 0x116b84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B80u, 0x116B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B88u;
label_116b88:
    // 0x116b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b8c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x116b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x116b90: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x116b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x116b94: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116b98: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116B98u;
    SET_GPR_U32(ctx, 31, 0x116BA0u);
    ctx->pc = 0x116B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B98u;
    // 0x116b9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116B98u, 0x116BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BA0u;
label_116ba0:
    // 0x116ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ba4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x116ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x116ba8: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x116bac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116bb0: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116BB0u;
    SET_GPR_U32(ctx, 31, 0x116BB8u);
    ctx->pc = 0x116BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BB0u;
    // 0x116bb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116BB0u, 0x116BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BB8u;
label_116bb8:
    // 0x116bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bbc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x116bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x116bc0: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x116bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x116bc4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116bc8: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116BC8u;
    SET_GPR_U32(ctx, 31, 0x116BD0u);
    ctx->pc = 0x116BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BC8u;
    // 0x116bcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116BC8u, 0x116BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BD0u;
label_116bd0:
    // 0x116bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x116bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x116bd8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x116bdc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116be0: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116BE0u;
    SET_GPR_U32(ctx, 31, 0x116BE8u);
    ctx->pc = 0x116BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BE0u;
    // 0x116be4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116BE0u, 0x116BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BE8u;
label_116be8:
    // 0x116be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x116becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x116bf0: 0x24060057  addiu       $a2, $zero, 0x57
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x116bf4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116bf8: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116BF8u;
    SET_GPR_U32(ctx, 31, 0x116C00u);
    ctx->pc = 0x116BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BF8u;
    // 0x116bfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116BF8u, 0x116C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C00u;
label_116c00:
    // 0x116c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c04: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116c08: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x116c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x116c0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116c10: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116C10u;
    SET_GPR_U32(ctx, 31, 0x116C18u);
    ctx->pc = 0x116C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C10u;
    // 0x116c14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116C10u, 0x116C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C18u;
label_116c18:
    // 0x116c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c1c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x116c20: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x116c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x116c24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116c28: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116C28u;
    SET_GPR_U32(ctx, 31, 0x116C30u);
    ctx->pc = 0x116C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C28u;
    // 0x116c2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116C28u, 0x116C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C30u;
label_116c30:
    // 0x116c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c34: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x116c38: 0x2406005d  addiu       $a2, $zero, 0x5D
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x116c3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116c40: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116C40u;
    SET_GPR_U32(ctx, 31, 0x116C48u);
    ctx->pc = 0x116C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C40u;
    // 0x116c44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116C40u, 0x116C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C48u;
label_116c48:
    // 0x116c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c50: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x116c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x116c54: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x116c58: 0xc045b36  jal         func_116CD8
    ctx->pc = 0x116C58u;
    SET_GPR_U32(ctx, 31, 0x116C60u);
    ctx->pc = 0x116C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C58u;
    // 0x116c5c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CD8u, 0x116C58u, 0x116C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C60u;
label_116c60:
    // 0x116c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c68: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x116c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x116c6c: 0xc045b44  jal         func_116D10
    ctx->pc = 0x116C6Cu;
    SET_GPR_U32(ctx, 31, 0x116C74u);
    ctx->pc = 0x116C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C6Cu;
    // 0x116c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D10u, 0x116C6Cu, 0x116C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C74u;
label_116c74:
    // 0x116c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116c7c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116c80: 0xc045b44  jal         func_116D10
    ctx->pc = 0x116C80u;
    SET_GPR_U32(ctx, 31, 0x116C88u);
    ctx->pc = 0x116C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C80u;
    // 0x116c84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D10u, 0x116C80u, 0x116C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C88u;
label_116c88:
    // 0x116c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x116c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c90: 0x3e00008  jr          $ra
    ctx->pc = 0x116C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C90u;
        // 0x116c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C98u;
}
