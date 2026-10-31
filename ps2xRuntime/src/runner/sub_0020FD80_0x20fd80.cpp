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

// Function: sub_0020FD80
// Address: 0x20fd80 - 0x20ffe8
void sub_0020FD80_0x20fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FD80_0x20fd80");
#endif

    switch (ctx->pc) {
        case 0x20fde0u: goto label_20fde0;
        case 0x20fde8u: goto label_20fde8;
        case 0x20fdfcu: goto label_20fdfc;
        case 0x20fe04u: goto label_20fe04;
        case 0x20fe10u: goto label_20fe10;
        case 0x20fe18u: goto label_20fe18;
        case 0x20fe2cu: goto label_20fe2c;
        case 0x20fe34u: goto label_20fe34;
        case 0x20fe3cu: goto label_20fe3c;
        case 0x20fe50u: goto label_20fe50;
        case 0x20fe5cu: goto label_20fe5c;
        case 0x20fe64u: goto label_20fe64;
        case 0x20fe6cu: goto label_20fe6c;
        case 0x20fe80u: goto label_20fe80;
        case 0x20fe8cu: goto label_20fe8c;
        case 0x20fe94u: goto label_20fe94;
        case 0x20fe9cu: goto label_20fe9c;
        case 0x20feb0u: goto label_20feb0;
        case 0x20febcu: goto label_20febc;
        case 0x20fec4u: goto label_20fec4;
        case 0x20feccu: goto label_20fecc;
        case 0x20fee0u: goto label_20fee0;
        case 0x20fef0u: goto label_20fef0;
        case 0x20ff00u: goto label_20ff00;
        case 0x20ff08u: goto label_20ff08;
        case 0x20ff10u: goto label_20ff10;
        case 0x20ff1cu: goto label_20ff1c;
        case 0x20ff30u: goto label_20ff30;
        case 0x20ff44u: goto label_20ff44;
        case 0x20ff4cu: goto label_20ff4c;
        case 0x20ff54u: goto label_20ff54;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff94u: goto label_20ff94;
        case 0x20ffa8u: goto label_20ffa8;
        case 0x20ffb0u: goto label_20ffb0;
        case 0x20ffb8u: goto label_20ffb8;
        default: break;
    }

    ctx->pc = 0x20fd80u;

    // 0x20fd80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20fd84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x20fd88: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x20fd8c: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x20fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x20fd90: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x20fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x20fd94: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
    // 0x20fd98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x20fd9c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x20fd9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fda0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20fda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fda4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x20fda8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20fdac: 0x263194a0  addiu       $s1, $s1, -0x6B60
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939808));
    // 0x20fdb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20fdb4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x20fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x20fdb8: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x20fdbc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x20fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x20fdc0: 0x26553480  addiu       $s5, $s2, 0x3480
    ctx->pc = 0x20fdc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 13440));
    // 0x20fdc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fdc8: 0x26533780  addiu       $s3, $s2, 0x3780
    ctx->pc = 0x20fdc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 14208));
    // 0x20fdcc: 0xae510068  sw          $s1, 0x68($s2)
    ctx->pc = 0x20fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 17));
    // 0x20fdd0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fdd4: 0xae424120  sw          $v0, 0x4120($s2)
    ctx->pc = 0x20fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 2));
    // 0x20fdd8: 0xc068426  jal         func_1A1098
    ctx->pc = 0x20FDD8u;
    SET_GPR_U32(ctx, 31, 0x20FDE0u);
    ctx->pc = 0x20FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDD8u;
    // 0x20fddc: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x20FDD8u, 0x20FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDE0u;
label_20fde0:
    // 0x20fde0: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20FDE0u;
    SET_GPR_U32(ctx, 31, 0x20FDE8u);
    ctx->pc = 0x20FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDE0u;
    // 0x20fde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20FDE0u, 0x20FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDE8u;
label_20fde8:
    // 0x20fde8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x20fdec: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x20fdf0: 0x2442a930  addiu       $v0, $v0, -0x56D0
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945072));
    // 0x20fdf4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FDF4u;
    SET_GPR_U32(ctx, 31, 0x20FDFCu);
    ctx->pc = 0x20FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDF4u;
    // 0x20fdf8: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FDF4u, 0x20FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDFCu;
label_20fdfc:
    // 0x20fdfc: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x20FDFCu;
    SET_GPR_U32(ctx, 31, 0x20FE04u);
    ctx->pc = 0x20FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDFCu;
    // 0x20fe00: 0x264402a0  addiu       $a0, $s2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20FDFCu, 0x20FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE04u;
label_20fe04:
    // 0x20fe04: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x20fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x20fe08: 0xc06fa5c  jal         func_1BE970
    ctx->pc = 0x20FE08u;
    SET_GPR_U32(ctx, 31, 0x20FE10u);
    ctx->pc = 0x20FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE08u;
    // 0x20fe0c: 0x26440400  addiu       $a0, $s2, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE970u, 0x20FE08u, 0x20FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE10u;
label_20fe10:
    // 0x20fe10: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20FE10u;
    SET_GPR_U32(ctx, 31, 0x20FE18u);
    ctx->pc = 0x20FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE10u;
    // 0x20fe14: 0x26440e30  addiu       $a0, $s2, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20FE10u, 0x20FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE18u;
label_20fe18:
    // 0x20fe18: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x20fe18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
    // 0x20fe1c: 0x26440e70  addiu       $a0, $s2, 0xE70
    ctx->pc = 0x20fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3696));
    // 0x20fe20: 0x26109fd0  addiu       $s0, $s0, -0x6030
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942672));
    // 0x20fe24: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x20FE24u;
    SET_GPR_U32(ctx, 31, 0x20FE2Cu);
    ctx->pc = 0x20FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE24u;
    // 0x20fe28: 0xae500e30  sw          $s0, 0xE30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20FE24u, 0x20FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE2Cu;
label_20fe2c:
    // 0x20fe2c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FE2Cu;
    SET_GPR_U32(ctx, 31, 0x20FE34u);
    ctx->pc = 0x20FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE2Cu;
    // 0x20fe30: 0x26440f40  addiu       $a0, $s2, 0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FE2Cu, 0x20FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE34u;
label_20fe34:
    // 0x20fe34: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FE34u;
    SET_GPR_U32(ctx, 31, 0x20FE3Cu);
    ctx->pc = 0x20FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE34u;
    // 0x20fe38: 0x26441130  addiu       $a0, $s2, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FE34u, 0x20FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE3Cu;
label_20fe3c:
    // 0x20fe3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x20fe40: 0x26441260  addiu       $a0, $s2, 0x1260
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4704));
    // 0x20fe44: 0x2463ec28  addiu       $v1, $v1, -0x13D8
    ctx->pc = 0x20fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962216));
    // 0x20fe48: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20FE48u;
    SET_GPR_U32(ctx, 31, 0x20FE50u);
    ctx->pc = 0x20FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE48u;
    // 0x20fe4c: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20FE48u, 0x20FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE50u;
label_20fe50:
    // 0x20fe50: 0xae501260  sw          $s0, 0x1260($s2)
    ctx->pc = 0x20fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 16));
    // 0x20fe54: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x20FE54u;
    SET_GPR_U32(ctx, 31, 0x20FE5Cu);
    ctx->pc = 0x20FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE54u;
    // 0x20fe58: 0x264412a0  addiu       $a0, $s2, 0x12A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20FE54u, 0x20FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE5Cu;
label_20fe5c:
    // 0x20fe5c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FE5Cu;
    SET_GPR_U32(ctx, 31, 0x20FE64u);
    ctx->pc = 0x20FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE5Cu;
    // 0x20fe60: 0x26441370  addiu       $a0, $s2, 0x1370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FE5Cu, 0x20FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE64u;
label_20fe64:
    // 0x20fe64: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FE64u;
    SET_GPR_U32(ctx, 31, 0x20FE6Cu);
    ctx->pc = 0x20FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE64u;
    // 0x20fe68: 0x26441560  addiu       $a0, $s2, 0x1560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FE64u, 0x20FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE6Cu;
label_20fe6c:
    // 0x20fe6c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x20fe70: 0x26441690  addiu       $a0, $s2, 0x1690
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
    // 0x20fe74: 0x2463eb90  addiu       $v1, $v1, -0x1470
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962064));
    // 0x20fe78: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20FE78u;
    SET_GPR_U32(ctx, 31, 0x20FE80u);
    ctx->pc = 0x20FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE78u;
    // 0x20fe7c: 0xae431260  sw          $v1, 0x1260($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20FE78u, 0x20FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE80u;
label_20fe80:
    // 0x20fe80: 0xae501690  sw          $s0, 0x1690($s2)
    ctx->pc = 0x20fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 16));
    // 0x20fe84: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x20FE84u;
    SET_GPR_U32(ctx, 31, 0x20FE8Cu);
    ctx->pc = 0x20FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE84u;
    // 0x20fe88: 0x264416d0  addiu       $a0, $s2, 0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20FE84u, 0x20FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE8Cu;
label_20fe8c:
    // 0x20fe8c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FE8Cu;
    SET_GPR_U32(ctx, 31, 0x20FE94u);
    ctx->pc = 0x20FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE8Cu;
    // 0x20fe90: 0x264417a0  addiu       $a0, $s2, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FE8Cu, 0x20FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE94u;
label_20fe94:
    // 0x20fe94: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FE94u;
    SET_GPR_U32(ctx, 31, 0x20FE9Cu);
    ctx->pc = 0x20FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE94u;
    // 0x20fe98: 0x26441990  addiu       $a0, $s2, 0x1990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FE94u, 0x20FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE9Cu;
label_20fe9c:
    // 0x20fe9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x20fea0: 0x26441ac0  addiu       $a0, $s2, 0x1AC0
    ctx->pc = 0x20fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6848));
    // 0x20fea4: 0x2463eaf8  addiu       $v1, $v1, -0x1508
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961912));
    // 0x20fea8: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20FEA8u;
    SET_GPR_U32(ctx, 31, 0x20FEB0u);
    ctx->pc = 0x20FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEA8u;
    // 0x20feac: 0xae431690  sw          $v1, 0x1690($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20FEA8u, 0x20FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEB0u;
label_20feb0:
    // 0x20feb0: 0xae501ac0  sw          $s0, 0x1AC0($s2)
    ctx->pc = 0x20feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6848), GPR_U32(ctx, 16));
    // 0x20feb4: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x20FEB4u;
    SET_GPR_U32(ctx, 31, 0x20FEBCu);
    ctx->pc = 0x20FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEB4u;
    // 0x20feb8: 0x26441b00  addiu       $a0, $s2, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20FEB4u, 0x20FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEBCu;
label_20febc:
    // 0x20febc: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FEBCu;
    SET_GPR_U32(ctx, 31, 0x20FEC4u);
    ctx->pc = 0x20FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEBCu;
    // 0x20fec0: 0x26441bd0  addiu       $a0, $s2, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FEBCu, 0x20FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEC4u;
label_20fec4:
    // 0x20fec4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FEC4u;
    SET_GPR_U32(ctx, 31, 0x20FECCu);
    ctx->pc = 0x20FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEC4u;
    // 0x20fec8: 0x26441dc0  addiu       $a0, $s2, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FEC4u, 0x20FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FECCu;
label_20fecc:
    // 0x20fecc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x20fed0: 0x26441ef0  addiu       $a0, $s2, 0x1EF0
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x20fed4: 0x2463ea60  addiu       $v1, $v1, -0x15A0
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x20fed8: 0xc069826  jal         func_1A6098
    ctx->pc = 0x20FED8u;
    SET_GPR_U32(ctx, 31, 0x20FEE0u);
    ctx->pc = 0x20FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FED8u;
    // 0x20fedc: 0xae431ac0  sw          $v1, 0x1AC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 6848), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6098u, 0x20FED8u, 0x20FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEE0u;
label_20fee0:
    // 0x20fee0: 0x26433490  addiu       $v1, $s2, 0x3490
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13456));
    // 0x20fee4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fee8: 0xc068426  jal         func_1A1098
    ctx->pc = 0x20FEE8u;
    SET_GPR_U32(ctx, 31, 0x20FEF0u);
    ctx->pc = 0x20FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEE8u;
    // 0x20feec: 0xac710068  sw          $s1, 0x68($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x20FEE8u, 0x20FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEF0u;
label_20fef0:
    // 0x20fef0: 0x26423500  addiu       $v0, $s2, 0x3500
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
    // 0x20fef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20fef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fef8: 0xc068426  jal         func_1A1098
    ctx->pc = 0x20FEF8u;
    SET_GPR_U32(ctx, 31, 0x20FF00u);
    ctx->pc = 0x20FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEF8u;
    // 0x20fefc: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x20FEF8u, 0x20FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF00u;
label_20ff00:
    // 0x20ff00: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF00u;
    SET_GPR_U32(ctx, 31, 0x20FF08u);
    ctx->pc = 0x20FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF00u;
    // 0x20ff04: 0x26443580  addiu       $a0, $s2, 0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF00u, 0x20FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF08u;
label_20ff08:
    // 0x20ff08: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF08u;
    SET_GPR_U32(ctx, 31, 0x20FF10u);
    ctx->pc = 0x20FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF08u;
    // 0x20ff0c: 0x26443680  addiu       $a0, $s2, 0x3680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF08u, 0x20FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF10u;
label_20ff10:
    // 0x20ff10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff14: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF14u;
    SET_GPR_U32(ctx, 31, 0x20FF1Cu);
    ctx->pc = 0x20FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF14u;
    // 0x20ff18: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF14u, 0x20FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF1Cu;
label_20ff1c:
    // 0x20ff1c: 0x0  nop
    ctx->pc = 0x20ff1cu;
    // NOP
    // 0x20ff20: 0x1696fffb  bne         $s4, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20FF20u;
    {
        const bool branch_taken_0x20ff20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x20FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF20u;
        // 0x20ff24: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff20) {
            ctx->pc = 0x20FF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ff10;
        }
    }
    ctx->pc = 0x20FF28u;
    // 0x20ff28: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FF28u;
    SET_GPR_U32(ctx, 31, 0x20FF30u);
    ctx->pc = 0x20FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF28u;
    // 0x20ff2c: 0x26a40640  addiu       $a0, $s5, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FF28u, 0x20FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF30u;
label_20ff30:
    // 0x20ff30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20ff34: 0x26443ce0  addiu       $a0, $s2, 0x3CE0
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15584));
    // 0x20ff38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20ff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20ff3c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF3Cu;
    SET_GPR_U32(ctx, 31, 0x20FF44u);
    ctx->pc = 0x20FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF3Cu;
    // 0x20ff40: 0xaea300f0  sw          $v1, 0xF0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF3Cu, 0x20FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF44u;
label_20ff44:
    // 0x20ff44: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF44u;
    SET_GPR_U32(ctx, 31, 0x20FF4Cu);
    ctx->pc = 0x20FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF44u;
    // 0x20ff48: 0x26443de0  addiu       $a0, $s2, 0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF44u, 0x20FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF4Cu;
label_20ff4c:
    // 0x20ff4c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF4Cu;
    SET_GPR_U32(ctx, 31, 0x20FF54u);
    ctx->pc = 0x20FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF4Cu;
    // 0x20ff50: 0x26443ee0  addiu       $a0, $s2, 0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF4Cu, 0x20FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF54u;
label_20ff54:
    // 0x20ff54: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF54u;
    SET_GPR_U32(ctx, 31, 0x20FF5Cu);
    ctx->pc = 0x20FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF54u;
    // 0x20ff58: 0x26443fe0  addiu       $a0, $s2, 0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF54u, 0x20FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF5Cu;
label_20ff5c:
    // 0x20ff5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x20ff60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ff64: 0x2463ecc0  addiu       $v1, $v1, -0x1340
    ctx->pc = 0x20ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962368));
    // 0x20ff68: 0xae4040f8  sw          $zero, 0x40F8($s2)
    ctx->pc = 0x20ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16632), GPR_U32(ctx, 0));
    // 0x20ff6c: 0xae404100  sw          $zero, 0x4100($s2)
    ctx->pc = 0x20ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16640), GPR_U32(ctx, 0));
    // 0x20ff70: 0x26444130  addiu       $a0, $s2, 0x4130
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16688));
    // 0x20ff74: 0xae4040fc  sw          $zero, 0x40FC($s2)
    ctx->pc = 0x20ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16636), GPR_U32(ctx, 0));
    // 0x20ff78: 0xae404110  sw          $zero, 0x4110($s2)
    ctx->pc = 0x20ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16656), GPR_U32(ctx, 0));
    // 0x20ff7c: 0xae434120  sw          $v1, 0x4120($s2)
    ctx->pc = 0x20ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 3));
    // 0x20ff80: 0xae4240f4  sw          $v0, 0x40F4($s2)
    ctx->pc = 0x20ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16628), GPR_U32(ctx, 2));
    // 0x20ff84: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF84u;
    SET_GPR_U32(ctx, 31, 0x20FF8Cu);
    ctx->pc = 0x20FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF84u;
    // 0x20ff88: 0xae4240f0  sw          $v0, 0x40F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF84u, 0x20FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF8Cu;
label_20ff8c:
    // 0x20ff8c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x20FF8Cu;
    SET_GPR_U32(ctx, 31, 0x20FF94u);
    ctx->pc = 0x20FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF8Cu;
    // 0x20ff90: 0x26444230  addiu       $a0, $s2, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x20FF8Cu, 0x20FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF94u;
label_20ff94:
    // 0x20ff94: 0x26e394a0  addiu       $v1, $s7, -0x6B60
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939808));
    // 0x20ff98: 0x26424330  addiu       $v0, $s2, 0x4330
    ctx->pc = 0x20ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 17200));
    // 0x20ff9c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x20ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x20ffa0: 0xc068426  jal         func_1A1098
    ctx->pc = 0x20FFA0u;
    SET_GPR_U32(ctx, 31, 0x20FFA8u);
    ctx->pc = 0x20FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFA0u;
    // 0x20ffa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x20FFA0u, 0x20FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFA8u;
label_20ffa8:
    // 0x20ffa8: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x20FFA8u;
    SET_GPR_U32(ctx, 31, 0x20FFB0u);
    ctx->pc = 0x20FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFA8u;
    // 0x20ffac: 0x264443a0  addiu       $a0, $s2, 0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x20FFA8u, 0x20FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFB0u;
label_20ffb0:
    // 0x20ffb0: 0xc08385c  jal         func_20E170
    ctx->pc = 0x20FFB0u;
    SET_GPR_U32(ctx, 31, 0x20FFB8u);
    ctx->pc = 0x20FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFB0u;
    // 0x20ffb4: 0x26444590  addiu       $a0, $s2, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E170u, 0x20FFB0u, 0x20FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFB8u;
label_20ffb8:
    // 0x20ffb8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x20ffb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffbc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20ffbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20ffc0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20ffc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20ffc4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x20ffc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ffc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20ffc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ffcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ffccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ffd0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x20ffd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ffd4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x20ffd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ffd8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x20ffd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ffdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ffe0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFE0u;
        // 0x20ffe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FFE8u;
}
