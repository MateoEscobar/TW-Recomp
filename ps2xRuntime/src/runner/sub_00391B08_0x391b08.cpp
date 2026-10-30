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

// Function: sub_00391B08
// Address: 0x391b08 - 0x391c10
void sub_00391B08_0x391b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391B08_0x391b08");
#endif

    switch (ctx->pc) {
        case 0x391b08u: goto label_391b08;
        case 0x391b0cu: goto label_391b0c;
        case 0x391b10u: goto label_391b10;
        case 0x391b14u: goto label_391b14;
        case 0x391b18u: goto label_391b18;
        case 0x391b1cu: goto label_391b1c;
        case 0x391b20u: goto label_391b20;
        case 0x391b24u: goto label_391b24;
        case 0x391b28u: goto label_391b28;
        case 0x391b2cu: goto label_391b2c;
        case 0x391b30u: goto label_391b30;
        case 0x391b34u: goto label_391b34;
        case 0x391b38u: goto label_391b38;
        case 0x391b3cu: goto label_391b3c;
        case 0x391b40u: goto label_391b40;
        case 0x391b44u: goto label_391b44;
        case 0x391b48u: goto label_391b48;
        case 0x391b4cu: goto label_391b4c;
        case 0x391b50u: goto label_391b50;
        case 0x391b54u: goto label_391b54;
        case 0x391b58u: goto label_391b58;
        case 0x391b5cu: goto label_391b5c;
        case 0x391b60u: goto label_391b60;
        case 0x391b64u: goto label_391b64;
        case 0x391b68u: goto label_391b68;
        case 0x391b6cu: goto label_391b6c;
        case 0x391b70u: goto label_391b70;
        case 0x391b74u: goto label_391b74;
        case 0x391b78u: goto label_391b78;
        case 0x391b7cu: goto label_391b7c;
        case 0x391b80u: goto label_391b80;
        case 0x391b84u: goto label_391b84;
        case 0x391b88u: goto label_391b88;
        case 0x391b8cu: goto label_391b8c;
        case 0x391b90u: goto label_391b90;
        case 0x391b94u: goto label_391b94;
        case 0x391b98u: goto label_391b98;
        case 0x391b9cu: goto label_391b9c;
        case 0x391ba0u: goto label_391ba0;
        case 0x391ba4u: goto label_391ba4;
        case 0x391ba8u: goto label_391ba8;
        case 0x391bacu: goto label_391bac;
        case 0x391bb0u: goto label_391bb0;
        case 0x391bb4u: goto label_391bb4;
        case 0x391bb8u: goto label_391bb8;
        case 0x391bbcu: goto label_391bbc;
        case 0x391bc0u: goto label_391bc0;
        case 0x391bc4u: goto label_391bc4;
        case 0x391bc8u: goto label_391bc8;
        case 0x391bccu: goto label_391bcc;
        case 0x391bd0u: goto label_391bd0;
        case 0x391bd4u: goto label_391bd4;
        case 0x391bd8u: goto label_391bd8;
        case 0x391bdcu: goto label_391bdc;
        case 0x391be0u: goto label_391be0;
        case 0x391be4u: goto label_391be4;
        case 0x391be8u: goto label_391be8;
        case 0x391becu: goto label_391bec;
        case 0x391bf0u: goto label_391bf0;
        case 0x391bf4u: goto label_391bf4;
        case 0x391bf8u: goto label_391bf8;
        case 0x391bfcu: goto label_391bfc;
        case 0x391c00u: goto label_391c00;
        case 0x391c04u: goto label_391c04;
        case 0x391c08u: goto label_391c08;
        case 0x391c0cu: goto label_391c0c;
        default: break;
    }

    ctx->pc = 0x391b08u;

label_391b08:
    // 0x391b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x391b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_391b0c:
    // 0x391b0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x391b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_391b10:
    // 0x391b10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x391b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_391b14:
    // 0x391b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x391b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_391b18:
    // 0x391b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_391b1c:
    // 0x391b1c: 0xc0e125a  jal         func_384968
label_391b20:
    if (ctx->pc == 0x391B20u) {
        ctx->pc = 0x391B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B1Cu;
        // 0x391b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B24u;
        goto label_391b24;
    }
    ctx->pc = 0x391B1Cu;
    SET_GPR_U32(ctx, 31, 0x391B24u);
    ctx->pc = 0x391B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B1Cu;
    // 0x391b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384968u, 0x391B1Cu, 0x391B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B24u;
label_391b24:
    // 0x391b24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x391b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_391b28:
    // 0x391b28: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x391b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_391b2c:
    // 0x391b2c: 0x8c45012c  lw          $a1, 0x12C($v0)
    ctx->pc = 0x391b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_391b30:
    // 0x391b30: 0xa0f809  jalr        $a1
label_391b34:
    if (ctx->pc == 0x391B34u) {
        ctx->pc = 0x391B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B30u;
        // 0x391b34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B38u;
        goto label_391b38;
    }
    ctx->pc = 0x391B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x391B38u);
        ctx->pc = 0x391B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B30u;
        // 0x391b34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391B30u, 0x391B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391B38u;
label_391b38:
    // 0x391b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x391b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_391b3c:
    // 0x391b3c: 0x8c642c7c  lw          $a0, 0x2C7C($v1)
    ctx->pc = 0x391b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_391b40:
    // 0x391b40: 0x8c820828  lw          $v0, 0x828($a0)
    ctx->pc = 0x391b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2088)));
label_391b44:
    // 0x391b44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_391b48:
    if (ctx->pc == 0x391B48u) {
        ctx->pc = 0x391B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B44u;
        // 0x391b48: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B4Cu;
        goto label_391b4c;
    }
    ctx->pc = 0x391B44u;
    {
        const bool branch_taken_0x391b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B44u;
        // 0x391b48: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b44) {
            ctx->pc = 0x391B6Cu;
            goto label_391b6c;
        }
    }
    ctx->pc = 0x391B4Cu;
label_391b4c:
    // 0x391b4c: 0xc0e8b48  jal         func_3A2D20
label_391b50:
    if (ctx->pc == 0x391B50u) {
        ctx->pc = 0x391B54u;
        goto label_391b54;
    }
    ctx->pc = 0x391B4Cu;
    SET_GPR_U32(ctx, 31, 0x391B54u);
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x391B4Cu, 0x391B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B54u;
label_391b54:
    // 0x391b54: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x391b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_391b58:
    // 0x391b58: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x391b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_391b5c:
    // 0x391b5c: 0xc0e8b80  jal         func_3A2E00
label_391b60:
    if (ctx->pc == 0x391B60u) {
        ctx->pc = 0x391B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B5Cu;
        // 0x391b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B64u;
        goto label_391b64;
    }
    ctx->pc = 0x391B5Cu;
    SET_GPR_U32(ctx, 31, 0x391B64u);
    ctx->pc = 0x391B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B5Cu;
    // 0x391b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x391B5Cu, 0x391B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B64u;
label_391b64:
    // 0x391b64: 0xc0e8b50  jal         func_3A2D40
label_391b68:
    if (ctx->pc == 0x391B68u) {
        ctx->pc = 0x391B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B64u;
        // 0x391b68: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B6Cu;
        goto label_391b6c;
    }
    ctx->pc = 0x391B64u;
    SET_GPR_U32(ctx, 31, 0x391B6Cu);
    ctx->pc = 0x391B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B64u;
    // 0x391b68: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x391B64u, 0x391B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B6Cu;
label_391b6c:
    // 0x391b6c: 0xc0e5532  jal         func_3954C8
label_391b70:
    if (ctx->pc == 0x391B70u) {
        ctx->pc = 0x391B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B6Cu;
        // 0x391b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B74u;
        goto label_391b74;
    }
    ctx->pc = 0x391B6Cu;
    SET_GPR_U32(ctx, 31, 0x391B74u);
    ctx->pc = 0x391B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B6Cu;
    // 0x391b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3954C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3954C8u, 0x391B6Cu, 0x391B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B74u;
label_391b74:
    // 0x391b74: 0xc0e4936  jal         func_3924D8
label_391b78:
    if (ctx->pc == 0x391B78u) {
        ctx->pc = 0x391B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B74u;
        // 0x391b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B7Cu;
        goto label_391b7c;
    }
    ctx->pc = 0x391B74u;
    SET_GPR_U32(ctx, 31, 0x391B7Cu);
    ctx->pc = 0x391B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B74u;
    // 0x391b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x391B74u, 0x391B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B7Cu;
label_391b7c:
    // 0x391b7c: 0xc0e5812  jal         func_396048
label_391b80:
    if (ctx->pc == 0x391B80u) {
        ctx->pc = 0x391B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B7Cu;
        // 0x391b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B84u;
        goto label_391b84;
    }
    ctx->pc = 0x391B7Cu;
    SET_GPR_U32(ctx, 31, 0x391B84u);
    ctx->pc = 0x391B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B7Cu;
    // 0x391b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396048u, 0x391B7Cu, 0x391B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B84u;
label_391b84:
    // 0x391b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x391b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391b88:
    // 0x391b88: 0xc047e78  jal         func_11F9E0
label_391b8c:
    if (ctx->pc == 0x391B8Cu) {
        ctx->pc = 0x391B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B88u;
        // 0x391b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B90u;
        goto label_391b90;
    }
    ctx->pc = 0x391B88u;
    SET_GPR_U32(ctx, 31, 0x391B90u);
    ctx->pc = 0x391B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B88u;
    // 0x391b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x391B88u, 0x391B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B90u;
label_391b90:
    // 0x391b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391b94:
    // 0x391b94: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x391b94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_391b98:
    // 0x391b98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x391b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_391b9c:
    // 0x391b9c: 0xc0e44cc  jal         func_391330
label_391ba0:
    if (ctx->pc == 0x391BA0u) {
        ctx->pc = 0x391BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B9Cu;
        // 0x391ba0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BA4u;
        goto label_391ba4;
    }
    ctx->pc = 0x391B9Cu;
    SET_GPR_U32(ctx, 31, 0x391BA4u);
    ctx->pc = 0x391BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B9Cu;
    // 0x391ba0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391B9Cu, 0x391BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BA4u;
label_391ba4:
    // 0x391ba4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x391ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_391ba8:
    // 0x391ba8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x391ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_391bac:
    // 0x391bac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_391bb0:
    if (ctx->pc == 0x391BB0u) {
        ctx->pc = 0x391BB4u;
        goto label_391bb4;
    }
    ctx->pc = 0x391BACu;
    {
        const bool branch_taken_0x391bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x391bac) {
            ctx->pc = 0x391BC4u;
            goto label_391bc4;
        }
    }
    ctx->pc = 0x391BB4u;
label_391bb4:
    // 0x391bb4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_391bb8:
    if (ctx->pc == 0x391BB8u) {
        ctx->pc = 0x391BBCu;
        goto label_391bbc;
    }
    ctx->pc = 0x391BB4u;
    {
        const bool branch_taken_0x391bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x391bb4) {
            ctx->pc = 0x391BC4u;
            goto label_391bc4;
        }
    }
    ctx->pc = 0x391BBCu;
label_391bbc:
    // 0x391bbc: 0xc049922  jal         func_126488
label_391bc0:
    if (ctx->pc == 0x391BC0u) {
        ctx->pc = 0x391BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BBCu;
        // 0x391bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BC4u;
        goto label_391bc4;
    }
    ctx->pc = 0x391BBCu;
    SET_GPR_U32(ctx, 31, 0x391BC4u);
    ctx->pc = 0x391BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BBCu;
    // 0x391bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126488u, 0x391BBCu, 0x391BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BC4u;
label_391bc4:
    // 0x391bc4: 0xc0e400e  jal         func_390038
label_391bc8:
    if (ctx->pc == 0x391BC8u) {
        ctx->pc = 0x391BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BC4u;
        // 0x391bc8: 0x8e0400e4  lw          $a0, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BCCu;
        goto label_391bcc;
    }
    ctx->pc = 0x391BC4u;
    SET_GPR_U32(ctx, 31, 0x391BCCu);
    ctx->pc = 0x391BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BC4u;
    // 0x391bc8: 0x8e0400e4  lw          $a0, 0xE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x391BC4u, 0x391BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BCCu;
label_391bcc:
    // 0x391bcc: 0xc0e8598  jal         func_3A1660
label_391bd0:
    if (ctx->pc == 0x391BD0u) {
        ctx->pc = 0x391BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BCCu;
        // 0x391bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BD4u;
        goto label_391bd4;
    }
    ctx->pc = 0x391BCCu;
    SET_GPR_U32(ctx, 31, 0x391BD4u);
    ctx->pc = 0x391BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BCCu;
    // 0x391bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x391BCCu, 0x391BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BD4u;
label_391bd4:
    // 0x391bd4: 0x8e432c7c  lw          $v1, 0x2C7C($s2)
    ctx->pc = 0x391bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_391bd8:
    // 0x391bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391bdc:
    // 0x391bdc: 0x8c660840  lw          $a2, 0x840($v1)
    ctx->pc = 0x391bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_391be0:
    // 0x391be0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x391be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391be4:
    // 0x391be4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x391be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_391be8:
    // 0x391be8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x391be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_391bec:
    // 0x391bec: 0x60f809  jalr        $v1
label_391bf0:
    if (ctx->pc == 0x391BF0u) {
        ctx->pc = 0x391BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BECu;
        // 0x391bf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BF4u;
        goto label_391bf4;
    }
    ctx->pc = 0x391BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391BF4u);
        ctx->pc = 0x391BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BECu;
        // 0x391bf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391BECu, 0x391BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391BF4u;
label_391bf4:
    // 0x391bf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x391bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_391bf8:
    // 0x391bf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x391bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_391bfc:
    // 0x391bfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x391bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_391c00:
    // 0x391c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_391c04:
    // 0x391c04: 0x3e00008  jr          $ra
label_391c08:
    if (ctx->pc == 0x391C08u) {
        ctx->pc = 0x391C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C04u;
        // 0x391c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C0Cu;
        goto label_391c0c;
    }
    ctx->pc = 0x391C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C04u;
        // 0x391c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391C0Cu;
label_391c0c:
    // 0x391c0c: 0x0  nop
    ctx->pc = 0x391c0cu;
    // NOP
    ctx->pc = 0x391c10u;
}
