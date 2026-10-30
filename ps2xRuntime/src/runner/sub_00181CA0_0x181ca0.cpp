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

// Function: sub_00181CA0
// Address: 0x181ca0 - 0x181e18
void sub_00181CA0_0x181ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181CA0_0x181ca0");
#endif

    switch (ctx->pc) {
        case 0x181ca0u: goto label_181ca0;
        case 0x181ca4u: goto label_181ca4;
        case 0x181ca8u: goto label_181ca8;
        case 0x181cacu: goto label_181cac;
        case 0x181cb0u: goto label_181cb0;
        case 0x181cb4u: goto label_181cb4;
        case 0x181cb8u: goto label_181cb8;
        case 0x181cbcu: goto label_181cbc;
        case 0x181cc0u: goto label_181cc0;
        case 0x181cc4u: goto label_181cc4;
        case 0x181cc8u: goto label_181cc8;
        case 0x181cccu: goto label_181ccc;
        case 0x181cd0u: goto label_181cd0;
        case 0x181cd4u: goto label_181cd4;
        case 0x181cd8u: goto label_181cd8;
        case 0x181cdcu: goto label_181cdc;
        case 0x181ce0u: goto label_181ce0;
        case 0x181ce4u: goto label_181ce4;
        case 0x181ce8u: goto label_181ce8;
        case 0x181cecu: goto label_181cec;
        case 0x181cf0u: goto label_181cf0;
        case 0x181cf4u: goto label_181cf4;
        case 0x181cf8u: goto label_181cf8;
        case 0x181cfcu: goto label_181cfc;
        case 0x181d00u: goto label_181d00;
        case 0x181d04u: goto label_181d04;
        case 0x181d08u: goto label_181d08;
        case 0x181d0cu: goto label_181d0c;
        case 0x181d10u: goto label_181d10;
        case 0x181d14u: goto label_181d14;
        case 0x181d18u: goto label_181d18;
        case 0x181d1cu: goto label_181d1c;
        case 0x181d20u: goto label_181d20;
        case 0x181d24u: goto label_181d24;
        case 0x181d28u: goto label_181d28;
        case 0x181d2cu: goto label_181d2c;
        case 0x181d30u: goto label_181d30;
        case 0x181d34u: goto label_181d34;
        case 0x181d38u: goto label_181d38;
        case 0x181d3cu: goto label_181d3c;
        case 0x181d40u: goto label_181d40;
        case 0x181d44u: goto label_181d44;
        case 0x181d48u: goto label_181d48;
        case 0x181d4cu: goto label_181d4c;
        case 0x181d50u: goto label_181d50;
        case 0x181d54u: goto label_181d54;
        case 0x181d58u: goto label_181d58;
        case 0x181d5cu: goto label_181d5c;
        case 0x181d60u: goto label_181d60;
        case 0x181d64u: goto label_181d64;
        case 0x181d68u: goto label_181d68;
        case 0x181d6cu: goto label_181d6c;
        case 0x181d70u: goto label_181d70;
        case 0x181d74u: goto label_181d74;
        case 0x181d78u: goto label_181d78;
        case 0x181d7cu: goto label_181d7c;
        case 0x181d80u: goto label_181d80;
        case 0x181d84u: goto label_181d84;
        case 0x181d88u: goto label_181d88;
        case 0x181d8cu: goto label_181d8c;
        case 0x181d90u: goto label_181d90;
        case 0x181d94u: goto label_181d94;
        case 0x181d98u: goto label_181d98;
        case 0x181d9cu: goto label_181d9c;
        case 0x181da0u: goto label_181da0;
        case 0x181da4u: goto label_181da4;
        case 0x181da8u: goto label_181da8;
        case 0x181dacu: goto label_181dac;
        case 0x181db0u: goto label_181db0;
        case 0x181db4u: goto label_181db4;
        case 0x181db8u: goto label_181db8;
        case 0x181dbcu: goto label_181dbc;
        case 0x181dc0u: goto label_181dc0;
        case 0x181dc4u: goto label_181dc4;
        case 0x181dc8u: goto label_181dc8;
        case 0x181dccu: goto label_181dcc;
        case 0x181dd0u: goto label_181dd0;
        case 0x181dd4u: goto label_181dd4;
        case 0x181dd8u: goto label_181dd8;
        case 0x181ddcu: goto label_181ddc;
        case 0x181de0u: goto label_181de0;
        case 0x181de4u: goto label_181de4;
        case 0x181de8u: goto label_181de8;
        case 0x181decu: goto label_181dec;
        case 0x181df0u: goto label_181df0;
        case 0x181df4u: goto label_181df4;
        case 0x181df8u: goto label_181df8;
        case 0x181dfcu: goto label_181dfc;
        case 0x181e00u: goto label_181e00;
        case 0x181e04u: goto label_181e04;
        case 0x181e08u: goto label_181e08;
        case 0x181e0cu: goto label_181e0c;
        case 0x181e10u: goto label_181e10;
        case 0x181e14u: goto label_181e14;
        default: break;
    }

    ctx->pc = 0x181ca0u;

label_181ca0:
    // 0x181ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_181ca4:
    // 0x181ca4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_181ca8:
    // 0x181ca8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_181cac:
    // 0x181cac: 0x24428d48  addiu       $v0, $v0, -0x72B8
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937928));
label_181cb0:
    // 0x181cb0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x181cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_181cb4:
    // 0x181cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181cb8:
    // 0x181cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_181cbc:
    // 0x181cbc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x181cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_181cc0:
    // 0x181cc0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x181cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_181cc4:
    // 0x181cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x181cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_181cc8:
    // 0x181cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_181ccc:
    // 0x181ccc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x181cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181cd0:
    // 0x181cd0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x181cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_181cd4:
    // 0x181cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181cd8:
    // 0x181cd8: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x181cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181cdc:
    // 0x181cdc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x181cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_181ce0:
    // 0x181ce0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_181ce4:
    // 0x181ce4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_181ce8:
    // 0x181ce8: 0x60f809  jalr        $v1
label_181cec:
    if (ctx->pc == 0x181CECu) {
        ctx->pc = 0x181CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CE8u;
        // 0x181cec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CF0u;
        goto label_181cf0;
    }
    ctx->pc = 0x181CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181CF0u);
        ctx->pc = 0x181CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CE8u;
        // 0x181cec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CE8u, 0x181CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181CF0u;
label_181cf0:
    // 0x181cf0: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x181cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181cf4:
    // 0x181cf4: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181cf8:
    // 0x181cf8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181cfc:
    // 0x181cfc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_181d00:
    // 0x181d00: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x181d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_181d04:
    // 0x181d04: 0x60f809  jalr        $v1
label_181d08:
    if (ctx->pc == 0x181D08u) {
        ctx->pc = 0x181D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D04u;
        // 0x181d08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D0Cu;
        goto label_181d0c;
    }
    ctx->pc = 0x181D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181D0Cu);
        ctx->pc = 0x181D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D04u;
        // 0x181d08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D04u, 0x181D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181D0Cu;
label_181d0c:
    // 0x181d0c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x181d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_181d10:
    // 0x181d10: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x181d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_181d14:
    // 0x181d14: 0x24a5e7d8  addiu       $a1, $a1, -0x1828
    ctx->pc = 0x181d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961112));
label_181d18:
    // 0x181d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181d1c:
    // 0x181d1c: 0xc1223ec  jal         func_488FB0
label_181d20:
    if (ctx->pc == 0x181D20u) {
        ctx->pc = 0x181D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D1Cu;
        // 0x181d20: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D24u;
        goto label_181d24;
    }
    ctx->pc = 0x181D1Cu;
    SET_GPR_U32(ctx, 31, 0x181D24u);
    ctx->pc = 0x181D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D1Cu;
    // 0x181d20: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x181D1Cu, 0x181D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D24u;
label_181d24:
    // 0x181d24: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_181d28:
    // 0x181d28: 0xc122316  jal         func_488C58
label_181d2c:
    if (ctx->pc == 0x181D2Cu) {
        ctx->pc = 0x181D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D28u;
        // 0x181d2c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D30u;
        goto label_181d30;
    }
    ctx->pc = 0x181D28u;
    SET_GPR_U32(ctx, 31, 0x181D30u);
    ctx->pc = 0x181D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D28u;
    // 0x181d2c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x181D28u, 0x181D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D30u;
label_181d30:
    // 0x181d30: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x181d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181d34:
    // 0x181d34: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x181d34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_181d38:
    // 0x181d38: 0x261026e0  addiu       $s0, $s0, 0x26E0
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9952));
label_181d3c:
    // 0x181d3c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_181d40:
    // 0x181d40: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_181d44:
    // 0x181d44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181d48:
    // 0x181d48: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_181d4c:
    // 0x181d4c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_181d50:
    // 0x181d50: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_181d54:
    // 0x181d54: 0x40f809  jalr        $v0
label_181d58:
    if (ctx->pc == 0x181D58u) {
        ctx->pc = 0x181D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D54u;
        // 0x181d58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D5Cu;
        goto label_181d5c;
    }
    ctx->pc = 0x181D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181D5Cu);
        ctx->pc = 0x181D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D54u;
        // 0x181d58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D54u, 0x181D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181D5Cu;
label_181d5c:
    // 0x181d5c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x181d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181d60:
    // 0x181d60: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x181d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181d64:
    // 0x181d64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181d68:
    // 0x181d68: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x181d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_181d6c:
    // 0x181d6c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x181d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_181d70:
    // 0x181d70: 0x60f809  jalr        $v1
label_181d74:
    if (ctx->pc == 0x181D74u) {
        ctx->pc = 0x181D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D70u;
        // 0x181d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D78u;
        goto label_181d78;
    }
    ctx->pc = 0x181D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181D78u);
        ctx->pc = 0x181D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D70u;
        // 0x181d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D70u, 0x181D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181D78u;
label_181d78:
    // 0x181d78: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181d7c:
    // 0x181d7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_181d80:
    // 0x181d80: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x181d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_181d84:
    // 0x181d84: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x181d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_181d88:
    // 0x181d88: 0x40f809  jalr        $v0
label_181d8c:
    if (ctx->pc == 0x181D8Cu) {
        ctx->pc = 0x181D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D88u;
        // 0x181d8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D90u;
        goto label_181d90;
    }
    ctx->pc = 0x181D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181D90u);
        ctx->pc = 0x181D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D88u;
        // 0x181d8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D88u, 0x181D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181D90u;
label_181d90:
    // 0x181d90: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_181d94:
    // 0x181d94: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181d98:
    // 0x181d98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181d9c:
    // 0x181d9c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x181d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_181da0:
    // 0x181da0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x181da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_181da4:
    // 0x181da4: 0x60f809  jalr        $v1
label_181da8:
    if (ctx->pc == 0x181DA8u) {
        ctx->pc = 0x181DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DA4u;
        // 0x181da8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DACu;
        goto label_181dac;
    }
    ctx->pc = 0x181DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181DACu);
        ctx->pc = 0x181DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DA4u;
        // 0x181da8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181DA4u, 0x181DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181DACu;
label_181dac:
    // 0x181dac: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181db0:
    // 0x181db0: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_181db4:
    // 0x181db4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x181db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181db8:
    // 0x181db8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x181db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_181dbc:
    // 0x181dbc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x181dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_181dc0:
    // 0x181dc0: 0x60f809  jalr        $v1
label_181dc4:
    if (ctx->pc == 0x181DC4u) {
        ctx->pc = 0x181DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DC0u;
        // 0x181dc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DC8u;
        goto label_181dc8;
    }
    ctx->pc = 0x181DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181DC8u);
        ctx->pc = 0x181DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DC0u;
        // 0x181dc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181DC0u, 0x181DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181DC8u;
label_181dc8:
    // 0x181dc8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_181dcc:
    // 0x181dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181dd0:
    // 0x181dd0: 0xc1378f6  jal         func_4DE3D8
label_181dd4:
    if (ctx->pc == 0x181DD4u) {
        ctx->pc = 0x181DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DD0u;
        // 0x181dd4: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DD8u;
        goto label_181dd8;
    }
    ctx->pc = 0x181DD0u;
    SET_GPR_U32(ctx, 31, 0x181DD8u);
    ctx->pc = 0x181DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DD0u;
    // 0x181dd4: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x181DD0u, 0x181DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DD8u;
label_181dd8:
    // 0x181dd8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_181ddc:
    // 0x181ddc: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_181de0:
    // 0x181de0: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x181de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_181de4:
    // 0x181de4: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x181de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_181de8:
    // 0x181de8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_181dec:
    if (ctx->pc == 0x181DECu) {
        ctx->pc = 0x181DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE8u;
        // 0x181dec: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DF0u;
        goto label_181df0;
    }
    ctx->pc = 0x181DE8u;
    {
        const bool branch_taken_0x181de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x181DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE8u;
        // 0x181dec: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181de8) {
            ctx->pc = 0x181DF8u;
            goto label_181df8;
        }
    }
    ctx->pc = 0x181DF0u;
label_181df0:
    // 0x181df0: 0xc10b208  jal         func_42C820
label_181df4:
    if (ctx->pc == 0x181DF4u) {
        ctx->pc = 0x181DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DF0u;
        // 0x181df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DF8u;
        goto label_181df8;
    }
    ctx->pc = 0x181DF0u;
    SET_GPR_U32(ctx, 31, 0x181DF8u);
    ctx->pc = 0x181DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DF0u;
    // 0x181df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x181DF0u, 0x181DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF8u;
label_181df8:
    // 0x181df8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x181df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181dfc:
    // 0x181dfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x181dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181e00:
    // 0x181e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181e04:
    // 0x181e04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x181e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181e08:
    // 0x181e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181e0c:
    // 0x181e0c: 0x3e00008  jr          $ra
label_181e10:
    if (ctx->pc == 0x181E10u) {
        ctx->pc = 0x181E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E0Cu;
        // 0x181e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E14u;
        goto label_181e14;
    }
    ctx->pc = 0x181E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E0Cu;
        // 0x181e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E14u;
label_181e14:
    // 0x181e14: 0x0  nop
    ctx->pc = 0x181e14u;
    // NOP
    ctx->pc = 0x181e18u;
}
