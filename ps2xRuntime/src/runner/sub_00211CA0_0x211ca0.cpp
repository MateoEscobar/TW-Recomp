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

// Function: sub_00211CA0
// Address: 0x211ca0 - 0x211ef8
void sub_00211CA0_0x211ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CA0_0x211ca0");
#endif

    switch (ctx->pc) {
        case 0x211cf8u: goto label_211cf8;
        case 0x211d00u: goto label_211d00;
        case 0x211d14u: goto label_211d14;
        case 0x211d1cu: goto label_211d1c;
        case 0x211d28u: goto label_211d28;
        case 0x211d30u: goto label_211d30;
        case 0x211d44u: goto label_211d44;
        case 0x211d4cu: goto label_211d4c;
        case 0x211d54u: goto label_211d54;
        case 0x211d68u: goto label_211d68;
        case 0x211d74u: goto label_211d74;
        case 0x211d7cu: goto label_211d7c;
        case 0x211d84u: goto label_211d84;
        case 0x211d98u: goto label_211d98;
        case 0x211da4u: goto label_211da4;
        case 0x211dacu: goto label_211dac;
        case 0x211db4u: goto label_211db4;
        case 0x211dc8u: goto label_211dc8;
        case 0x211dd4u: goto label_211dd4;
        case 0x211ddcu: goto label_211ddc;
        case 0x211de4u: goto label_211de4;
        case 0x211df8u: goto label_211df8;
        case 0x211e08u: goto label_211e08;
        case 0x211e18u: goto label_211e18;
        case 0x211e20u: goto label_211e20;
        case 0x211e28u: goto label_211e28;
        case 0x211e34u: goto label_211e34;
        case 0x211e4cu: goto label_211e4c;
        case 0x211e68u: goto label_211e68;
        case 0x211e70u: goto label_211e70;
        case 0x211e78u: goto label_211e78;
        case 0x211e80u: goto label_211e80;
        case 0x211ea8u: goto label_211ea8;
        case 0x211eb4u: goto label_211eb4;
        default: break;
    }

    ctx->pc = 0x211ca0u;

    // 0x211ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x211ca4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x211ca8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x211ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x211cac: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x211cb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x211cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x211cb4: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x211cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
    // 0x211cb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x211cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x211cc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x211cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x211cc4: 0x263194a0  addiu       $s1, $s1, -0x6B60
    ctx->pc = 0x211cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939808));
    // 0x211cc8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x211cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x211ccc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x211cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x211cd0: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x211cd4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x211cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x211cd8: 0x26553480  addiu       $s5, $s2, 0x3480
    ctx->pc = 0x211cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 13440));
    // 0x211cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211ce0: 0x26533780  addiu       $s3, $s2, 0x3780
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 14208));
    // 0x211ce4: 0xae510068  sw          $s1, 0x68($s2)
    ctx->pc = 0x211ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 17));
    // 0x211ce8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x211ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211cec: 0xae424120  sw          $v0, 0x4120($s2)
    ctx->pc = 0x211cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 2));
    // 0x211cf0: 0xc068426  jal         func_1A1098
    ctx->pc = 0x211CF0u;
    SET_GPR_U32(ctx, 31, 0x211CF8u);
    ctx->pc = 0x211CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211CF0u;
    // 0x211cf4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x211CF0u, 0x211CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211CF8u;
label_211cf8:
    // 0x211cf8: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x211CF8u;
    SET_GPR_U32(ctx, 31, 0x211D00u);
    ctx->pc = 0x211CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211CF8u;
    // 0x211cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x211CF8u, 0x211D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D00u;
label_211d00:
    // 0x211d00: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211d04: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x211d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x211d08: 0x2463a930  addiu       $v1, $v1, -0x56D0
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945072));
    // 0x211d0c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211D0Cu;
    SET_GPR_U32(ctx, 31, 0x211D14u);
    ctx->pc = 0x211D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D0Cu;
    // 0x211d10: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211D0Cu, 0x211D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D14u;
label_211d14:
    // 0x211d14: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x211D14u;
    SET_GPR_U32(ctx, 31, 0x211D1Cu);
    ctx->pc = 0x211D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D14u;
    // 0x211d18: 0x264402a0  addiu       $a0, $s2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x211D14u, 0x211D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D1Cu;
label_211d1c:
    // 0x211d1c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x211d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x211d20: 0xc06fa5c  jal         func_1BE970
    ctx->pc = 0x211D20u;
    SET_GPR_U32(ctx, 31, 0x211D28u);
    ctx->pc = 0x211D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D20u;
    // 0x211d24: 0x26440400  addiu       $a0, $s2, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE970u, 0x211D20u, 0x211D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D28u;
label_211d28:
    // 0x211d28: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x211D28u;
    SET_GPR_U32(ctx, 31, 0x211D30u);
    ctx->pc = 0x211D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D28u;
    // 0x211d2c: 0x26440e30  addiu       $a0, $s2, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x211D28u, 0x211D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D30u;
label_211d30:
    // 0x211d30: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
    // 0x211d34: 0x26440e70  addiu       $a0, $s2, 0xE70
    ctx->pc = 0x211d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3696));
    // 0x211d38: 0x26109fd0  addiu       $s0, $s0, -0x6030
    ctx->pc = 0x211d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942672));
    // 0x211d3c: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x211D3Cu;
    SET_GPR_U32(ctx, 31, 0x211D44u);
    ctx->pc = 0x211D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D3Cu;
    // 0x211d40: 0xae500e30  sw          $s0, 0xE30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x211D3Cu, 0x211D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D44u;
label_211d44:
    // 0x211d44: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211D44u;
    SET_GPR_U32(ctx, 31, 0x211D4Cu);
    ctx->pc = 0x211D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D44u;
    // 0x211d48: 0x26440f40  addiu       $a0, $s2, 0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211D44u, 0x211D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D4Cu;
label_211d4c:
    // 0x211d4c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211D4Cu;
    SET_GPR_U32(ctx, 31, 0x211D54u);
    ctx->pc = 0x211D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D4Cu;
    // 0x211d50: 0x26441130  addiu       $a0, $s2, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211D4Cu, 0x211D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D54u;
label_211d54:
    // 0x211d54: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211d58: 0x26441260  addiu       $a0, $s2, 0x1260
    ctx->pc = 0x211d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4704));
    // 0x211d5c: 0x2463ec28  addiu       $v1, $v1, -0x13D8
    ctx->pc = 0x211d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962216));
    // 0x211d60: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x211D60u;
    SET_GPR_U32(ctx, 31, 0x211D68u);
    ctx->pc = 0x211D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D60u;
    // 0x211d64: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x211D60u, 0x211D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D68u;
label_211d68:
    // 0x211d68: 0xae501260  sw          $s0, 0x1260($s2)
    ctx->pc = 0x211d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 16));
    // 0x211d6c: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x211D6Cu;
    SET_GPR_U32(ctx, 31, 0x211D74u);
    ctx->pc = 0x211D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D6Cu;
    // 0x211d70: 0x264412a0  addiu       $a0, $s2, 0x12A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x211D6Cu, 0x211D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D74u;
label_211d74:
    // 0x211d74: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211D74u;
    SET_GPR_U32(ctx, 31, 0x211D7Cu);
    ctx->pc = 0x211D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D74u;
    // 0x211d78: 0x26441370  addiu       $a0, $s2, 0x1370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211D74u, 0x211D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D7Cu;
label_211d7c:
    // 0x211d7c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211D7Cu;
    SET_GPR_U32(ctx, 31, 0x211D84u);
    ctx->pc = 0x211D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D7Cu;
    // 0x211d80: 0x26441560  addiu       $a0, $s2, 0x1560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211D7Cu, 0x211D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D84u;
label_211d84:
    // 0x211d84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211d88: 0x26441690  addiu       $a0, $s2, 0x1690
    ctx->pc = 0x211d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
    // 0x211d8c: 0x2463eb90  addiu       $v1, $v1, -0x1470
    ctx->pc = 0x211d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962064));
    // 0x211d90: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x211D90u;
    SET_GPR_U32(ctx, 31, 0x211D98u);
    ctx->pc = 0x211D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D90u;
    // 0x211d94: 0xae431260  sw          $v1, 0x1260($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x211D90u, 0x211D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D98u;
label_211d98:
    // 0x211d98: 0xae501690  sw          $s0, 0x1690($s2)
    ctx->pc = 0x211d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 16));
    // 0x211d9c: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x211D9Cu;
    SET_GPR_U32(ctx, 31, 0x211DA4u);
    ctx->pc = 0x211DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D9Cu;
    // 0x211da0: 0x264416d0  addiu       $a0, $s2, 0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x211D9Cu, 0x211DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DA4u;
label_211da4:
    // 0x211da4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211DA4u;
    SET_GPR_U32(ctx, 31, 0x211DACu);
    ctx->pc = 0x211DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DA4u;
    // 0x211da8: 0x264417a0  addiu       $a0, $s2, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211DA4u, 0x211DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DACu;
label_211dac:
    // 0x211dac: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211DACu;
    SET_GPR_U32(ctx, 31, 0x211DB4u);
    ctx->pc = 0x211DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DACu;
    // 0x211db0: 0x26441990  addiu       $a0, $s2, 0x1990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211DACu, 0x211DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DB4u;
label_211db4:
    // 0x211db4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211db8: 0x26441ac0  addiu       $a0, $s2, 0x1AC0
    ctx->pc = 0x211db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6848));
    // 0x211dbc: 0x2463eaf8  addiu       $v1, $v1, -0x1508
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961912));
    // 0x211dc0: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x211DC0u;
    SET_GPR_U32(ctx, 31, 0x211DC8u);
    ctx->pc = 0x211DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DC0u;
    // 0x211dc4: 0xae431690  sw          $v1, 0x1690($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x211DC0u, 0x211DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DC8u;
label_211dc8:
    // 0x211dc8: 0xae501ac0  sw          $s0, 0x1AC0($s2)
    ctx->pc = 0x211dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6848), GPR_U32(ctx, 16));
    // 0x211dcc: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x211DCCu;
    SET_GPR_U32(ctx, 31, 0x211DD4u);
    ctx->pc = 0x211DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DCCu;
    // 0x211dd0: 0x26441b00  addiu       $a0, $s2, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x211DCCu, 0x211DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DD4u;
label_211dd4:
    // 0x211dd4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211DD4u;
    SET_GPR_U32(ctx, 31, 0x211DDCu);
    ctx->pc = 0x211DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DD4u;
    // 0x211dd8: 0x26441bd0  addiu       $a0, $s2, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211DD4u, 0x211DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DDCu;
label_211ddc:
    // 0x211ddc: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211DDCu;
    SET_GPR_U32(ctx, 31, 0x211DE4u);
    ctx->pc = 0x211DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DDCu;
    // 0x211de0: 0x26441dc0  addiu       $a0, $s2, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211DDCu, 0x211DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DE4u;
label_211de4:
    // 0x211de4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211de8: 0x26441ef0  addiu       $a0, $s2, 0x1EF0
    ctx->pc = 0x211de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x211dec: 0x2463ea60  addiu       $v1, $v1, -0x15A0
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x211df0: 0xc069826  jal         func_1A6098
    ctx->pc = 0x211DF0u;
    SET_GPR_U32(ctx, 31, 0x211DF8u);
    ctx->pc = 0x211DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DF0u;
    // 0x211df4: 0xae431ac0  sw          $v1, 0x1AC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 6848), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6098u, 0x211DF0u, 0x211DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DF8u;
label_211df8:
    // 0x211df8: 0x26433490  addiu       $v1, $s2, 0x3490
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13456));
    // 0x211dfc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x211dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e00: 0xc068426  jal         func_1A1098
    ctx->pc = 0x211E00u;
    SET_GPR_U32(ctx, 31, 0x211E08u);
    ctx->pc = 0x211E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E00u;
    // 0x211e04: 0xac710068  sw          $s1, 0x68($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x211E00u, 0x211E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E08u;
label_211e08:
    // 0x211e08: 0x26423500  addiu       $v0, $s2, 0x3500
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
    // 0x211e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e10: 0xc068426  jal         func_1A1098
    ctx->pc = 0x211E10u;
    SET_GPR_U32(ctx, 31, 0x211E18u);
    ctx->pc = 0x211E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E10u;
    // 0x211e14: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x211E10u, 0x211E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E18u;
label_211e18:
    // 0x211e18: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E18u;
    SET_GPR_U32(ctx, 31, 0x211E20u);
    ctx->pc = 0x211E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E18u;
    // 0x211e1c: 0x26443580  addiu       $a0, $s2, 0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E18u, 0x211E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E20u;
label_211e20:
    // 0x211e20: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E20u;
    SET_GPR_U32(ctx, 31, 0x211E28u);
    ctx->pc = 0x211E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E20u;
    // 0x211e24: 0x26443680  addiu       $a0, $s2, 0x3680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E20u, 0x211E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E28u;
label_211e28:
    // 0x211e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x211e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e2c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E2Cu;
    SET_GPR_U32(ctx, 31, 0x211E34u);
    ctx->pc = 0x211E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E2Cu;
    // 0x211e30: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E2Cu, 0x211E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E34u;
label_211e34:
    // 0x211e34: 0x0  nop
    ctx->pc = 0x211e34u;
    // NOP
    // 0x211e38: 0x1696fffb  bne         $s4, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x211E38u;
    {
        const bool branch_taken_0x211e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x211E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E38u;
        // 0x211e3c: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e38) {
            ctx->pc = 0x211E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e28;
        }
    }
    ctx->pc = 0x211E40u;
    // 0x211e40: 0x26a40640  addiu       $a0, $s5, 0x640
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x211e44: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x211E44u;
    SET_GPR_U32(ctx, 31, 0x211E4Cu);
    ctx->pc = 0x211E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E44u;
    // 0x211e48: 0x26504150  addiu       $s0, $s2, 0x4150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x211E44u, 0x211E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E4Cu;
label_211e4c:
    // 0x211e4c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211e50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x211e54: 0x26443ce0  addiu       $a0, $s2, 0x3CE0
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15584));
    // 0x211e58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211e5c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211e60: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E60u;
    SET_GPR_U32(ctx, 31, 0x211E68u);
    ctx->pc = 0x211E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E60u;
    // 0x211e64: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E60u, 0x211E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E68u;
label_211e68:
    // 0x211e68: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E68u;
    SET_GPR_U32(ctx, 31, 0x211E70u);
    ctx->pc = 0x211E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E68u;
    // 0x211e6c: 0x26443de0  addiu       $a0, $s2, 0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E68u, 0x211E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E70u;
label_211e70:
    // 0x211e70: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E70u;
    SET_GPR_U32(ctx, 31, 0x211E78u);
    ctx->pc = 0x211E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E70u;
    // 0x211e74: 0x26443ee0  addiu       $a0, $s2, 0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E70u, 0x211E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E78u;
label_211e78:
    // 0x211e78: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211E78u;
    SET_GPR_U32(ctx, 31, 0x211E80u);
    ctx->pc = 0x211E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E78u;
    // 0x211e7c: 0x26443fe0  addiu       $a0, $s2, 0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211E78u, 0x211E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E80u;
label_211e80:
    // 0x211e80: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x211e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x211e84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211e88: 0x2463edf8  addiu       $v1, $v1, -0x1208
    ctx->pc = 0x211e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962680));
    // 0x211e8c: 0xae4240f4  sw          $v0, 0x40F4($s2)
    ctx->pc = 0x211e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16628), GPR_U32(ctx, 2));
    // 0x211e90: 0xae434120  sw          $v1, 0x4120($s2)
    ctx->pc = 0x211e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 3));
    // 0x211e94: 0xae4240f0  sw          $v0, 0x40F0($s2)
    ctx->pc = 0x211e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16624), GPR_U32(ctx, 2));
    // 0x211e98: 0xae4040f8  sw          $zero, 0x40F8($s2)
    ctx->pc = 0x211e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16632), GPR_U32(ctx, 0));
    // 0x211e9c: 0xae404100  sw          $zero, 0x4100($s2)
    ctx->pc = 0x211e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16640), GPR_U32(ctx, 0));
    // 0x211ea0: 0xae4040fc  sw          $zero, 0x40FC($s2)
    ctx->pc = 0x211ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16636), GPR_U32(ctx, 0));
    // 0x211ea4: 0xae404110  sw          $zero, 0x4110($s2)
    ctx->pc = 0x211ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16656), GPR_U32(ctx, 0));
label_211ea8:
    // 0x211ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211eac: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x211EACu;
    SET_GPR_U32(ctx, 31, 0x211EB4u);
    ctx->pc = 0x211EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211EACu;
    // 0x211eb0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x211EACu, 0x211EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211EB4u;
label_211eb4:
    // 0x211eb4: 0x0  nop
    ctx->pc = 0x211eb4u;
    // NOP
    // 0x211eb8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x211EB8u;
    {
        const bool branch_taken_0x211eb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x211EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EB8u;
        // 0x211ebc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211eb8) {
            ctx->pc = 0x211EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211ea8;
        }
    }
    ctx->pc = 0x211EC0u;
    // 0x211ec0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x211ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ec4: 0xae404130  sw          $zero, 0x4130($s2)
    ctx->pc = 0x211ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16688), GPR_U32(ctx, 0));
    // 0x211ec8: 0xae404134  sw          $zero, 0x4134($s2)
    ctx->pc = 0x211ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16692), GPR_U32(ctx, 0));
    // 0x211ecc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x211eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211ed0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x211ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211ed4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x211ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211ed8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x211ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211edc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x211edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ee0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x211ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211ee4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x211ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211eec: 0x3e00008  jr          $ra
    ctx->pc = 0x211EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EECu;
        // 0x211ef0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211EF4u;
    // 0x211ef4: 0x0  nop
    ctx->pc = 0x211ef4u;
    // NOP
    ctx->pc = 0x211ef8u;
}
