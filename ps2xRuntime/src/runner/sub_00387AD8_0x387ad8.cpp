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

// Function: sub_00387AD8
// Address: 0x387ad8 - 0x387bc8
void sub_00387AD8_0x387ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387AD8_0x387ad8");
#endif

    switch (ctx->pc) {
        case 0x387ad8u: goto label_387ad8;
        case 0x387adcu: goto label_387adc;
        case 0x387ae0u: goto label_387ae0;
        case 0x387ae4u: goto label_387ae4;
        case 0x387ae8u: goto label_387ae8;
        case 0x387aecu: goto label_387aec;
        case 0x387af0u: goto label_387af0;
        case 0x387af4u: goto label_387af4;
        case 0x387af8u: goto label_387af8;
        case 0x387afcu: goto label_387afc;
        case 0x387b00u: goto label_387b00;
        case 0x387b04u: goto label_387b04;
        case 0x387b08u: goto label_387b08;
        case 0x387b0cu: goto label_387b0c;
        case 0x387b10u: goto label_387b10;
        case 0x387b14u: goto label_387b14;
        case 0x387b18u: goto label_387b18;
        case 0x387b1cu: goto label_387b1c;
        case 0x387b20u: goto label_387b20;
        case 0x387b24u: goto label_387b24;
        case 0x387b28u: goto label_387b28;
        case 0x387b2cu: goto label_387b2c;
        case 0x387b30u: goto label_387b30;
        case 0x387b34u: goto label_387b34;
        case 0x387b38u: goto label_387b38;
        case 0x387b3cu: goto label_387b3c;
        case 0x387b40u: goto label_387b40;
        case 0x387b44u: goto label_387b44;
        case 0x387b48u: goto label_387b48;
        case 0x387b4cu: goto label_387b4c;
        case 0x387b50u: goto label_387b50;
        case 0x387b54u: goto label_387b54;
        case 0x387b58u: goto label_387b58;
        case 0x387b5cu: goto label_387b5c;
        case 0x387b60u: goto label_387b60;
        case 0x387b64u: goto label_387b64;
        case 0x387b68u: goto label_387b68;
        case 0x387b6cu: goto label_387b6c;
        case 0x387b70u: goto label_387b70;
        case 0x387b74u: goto label_387b74;
        case 0x387b78u: goto label_387b78;
        case 0x387b7cu: goto label_387b7c;
        case 0x387b80u: goto label_387b80;
        case 0x387b84u: goto label_387b84;
        case 0x387b88u: goto label_387b88;
        case 0x387b8cu: goto label_387b8c;
        case 0x387b90u: goto label_387b90;
        case 0x387b94u: goto label_387b94;
        case 0x387b98u: goto label_387b98;
        case 0x387b9cu: goto label_387b9c;
        case 0x387ba0u: goto label_387ba0;
        case 0x387ba4u: goto label_387ba4;
        case 0x387ba8u: goto label_387ba8;
        case 0x387bacu: goto label_387bac;
        case 0x387bb0u: goto label_387bb0;
        case 0x387bb4u: goto label_387bb4;
        case 0x387bb8u: goto label_387bb8;
        case 0x387bbcu: goto label_387bbc;
        case 0x387bc0u: goto label_387bc0;
        case 0x387bc4u: goto label_387bc4;
        default: break;
    }

    ctx->pc = 0x387ad8u;

label_387ad8:
    // 0x387ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_387adc:
    // 0x387adc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_387ae0:
    // 0x387ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_387ae4:
    // 0x387ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_387ae8:
    // 0x387ae8: 0xc0e1ea4  jal         func_387A90
label_387aec:
    if (ctx->pc == 0x387AECu) {
        ctx->pc = 0x387AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AE8u;
        // 0x387aec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AF0u;
        goto label_387af0;
    }
    ctx->pc = 0x387AE8u;
    SET_GPR_U32(ctx, 31, 0x387AF0u);
    ctx->pc = 0x387AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387AE8u;
    // 0x387aec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387A90u, 0x387AE8u, 0x387AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AF0u;
label_387af0:
    // 0x387af0: 0xc0e1fb8  jal         func_387EE0
label_387af4:
    if (ctx->pc == 0x387AF4u) {
        ctx->pc = 0x387AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AF0u;
        // 0x387af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AF8u;
        goto label_387af8;
    }
    ctx->pc = 0x387AF0u;
    SET_GPR_U32(ctx, 31, 0x387AF8u);
    ctx->pc = 0x387AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387AF0u;
    // 0x387af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387EE0u, 0x387AF0u, 0x387AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AF8u;
label_387af8:
    // 0x387af8: 0xc0e400e  jal         func_390038
label_387afc:
    if (ctx->pc == 0x387AFCu) {
        ctx->pc = 0x387AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AF8u;
        // 0x387afc: 0x8e0412f4  lw          $a0, 0x12F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B00u;
        goto label_387b00;
    }
    ctx->pc = 0x387AF8u;
    SET_GPR_U32(ctx, 31, 0x387B00u);
    ctx->pc = 0x387AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387AF8u;
    // 0x387afc: 0x8e0412f4  lw          $a0, 0x12F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x387AF8u, 0x387B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B00u;
label_387b00:
    // 0x387b00: 0xc0e8598  jal         func_3A1660
label_387b04:
    if (ctx->pc == 0x387B04u) {
        ctx->pc = 0x387B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B00u;
        // 0x387b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B08u;
        goto label_387b08;
    }
    ctx->pc = 0x387B00u;
    SET_GPR_U32(ctx, 31, 0x387B08u);
    ctx->pc = 0x387B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B00u;
    // 0x387b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x387B00u, 0x387B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B08u;
label_387b08:
    // 0x387b08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x387b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_387b0c:
    // 0x387b0c: 0x8e041210  lw          $a0, 0x1210($s0)
    ctx->pc = 0x387b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4624)));
label_387b10:
    // 0x387b10: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x387b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_387b14:
    // 0x387b14: 0x26051210  addiu       $a1, $s0, 0x1210
    ctx->pc = 0x387b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
label_387b18:
    // 0x387b18: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_387b1c:
    if (ctx->pc == 0x387B1Cu) {
        ctx->pc = 0x387B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B18u;
        // 0x387b1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B20u;
        goto label_387b20;
    }
    ctx->pc = 0x387B18u;
    {
        const bool branch_taken_0x387b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x387B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B18u;
        // 0x387b1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b18) {
            ctx->pc = 0x387B50u;
            goto label_387b50;
        }
    }
    ctx->pc = 0x387B20u;
label_387b20:
    // 0x387b20: 0xc0e4060  jal         func_390180
label_387b24:
    if (ctx->pc == 0x387B24u) {
        ctx->pc = 0x387B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B20u;
        // 0x387b24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B28u;
        goto label_387b28;
    }
    ctx->pc = 0x387B20u;
    SET_GPR_U32(ctx, 31, 0x387B28u);
    ctx->pc = 0x387B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B20u;
    // 0x387b24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387B20u, 0x387B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B28u;
label_387b28:
    // 0x387b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b2c:
    // 0x387b2c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_387b30:
    if (ctx->pc == 0x387B30u) {
        ctx->pc = 0x387B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B2Cu;
        // 0x387b30: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B34u;
        goto label_387b34;
    }
    ctx->pc = 0x387B2Cu;
    {
        const bool branch_taken_0x387b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B2Cu;
        // 0x387b30: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b2c) {
            ctx->pc = 0x387B4Cu;
            goto label_387b4c;
        }
    }
    ctx->pc = 0x387B34u;
label_387b34:
    // 0x387b34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x387b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_387b38:
    // 0x387b38: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x387b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_387b3c:
    // 0x387b3c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x387b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_387b40:
    // 0x387b40: 0x60f809  jalr        $v1
label_387b44:
    if (ctx->pc == 0x387B44u) {
        ctx->pc = 0x387B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B40u;
        // 0x387b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B48u;
        goto label_387b48;
    }
    ctx->pc = 0x387B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x387B48u);
        ctx->pc = 0x387B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B40u;
        // 0x387b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387B40u, 0x387B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387B48u;
label_387b48:
    // 0x387b48: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x387b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_387b4c:
    // 0x387b4c: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x387b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
label_387b50:
    // 0x387b50: 0x8e031204  lw          $v1, 0x1204($s0)
    ctx->pc = 0x387b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4612)));
label_387b54:
    // 0x387b54: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x387b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_387b58:
    // 0x387b58: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_387b5c:
    if (ctx->pc == 0x387B5Cu) {
        ctx->pc = 0x387B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B58u;
        // 0x387b5c: 0x26041204  addiu       $a0, $s0, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B60u;
        goto label_387b60;
    }
    ctx->pc = 0x387B58u;
    {
        const bool branch_taken_0x387b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B58u;
        // 0x387b5c: 0x26041204  addiu       $a0, $s0, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b58) {
            ctx->pc = 0x387B90u;
            goto label_387b90;
        }
    }
    ctx->pc = 0x387B60u;
label_387b60:
    // 0x387b60: 0xc0e4060  jal         func_390180
label_387b64:
    if (ctx->pc == 0x387B64u) {
        ctx->pc = 0x387B68u;
        goto label_387b68;
    }
    ctx->pc = 0x387B60u;
    SET_GPR_U32(ctx, 31, 0x387B68u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387B60u, 0x387B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B68u;
label_387b68:
    // 0x387b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b6c:
    // 0x387b6c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_387b70:
    if (ctx->pc == 0x387B70u) {
        ctx->pc = 0x387B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B6Cu;
        // 0x387b70: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B74u;
        goto label_387b74;
    }
    ctx->pc = 0x387B6Cu;
    {
        const bool branch_taken_0x387b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B6Cu;
        // 0x387b70: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b6c) {
            ctx->pc = 0x387B8Cu;
            goto label_387b8c;
        }
    }
    ctx->pc = 0x387B74u;
label_387b74:
    // 0x387b74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x387b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_387b78:
    // 0x387b78: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x387b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_387b7c:
    // 0x387b7c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x387b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_387b80:
    // 0x387b80: 0x60f809  jalr        $v1
label_387b84:
    if (ctx->pc == 0x387B84u) {
        ctx->pc = 0x387B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B80u;
        // 0x387b84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B88u;
        goto label_387b88;
    }
    ctx->pc = 0x387B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x387B88u);
        ctx->pc = 0x387B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B80u;
        // 0x387b84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387B80u, 0x387B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387B88u;
label_387b88:
    // 0x387b88: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x387b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_387b8c:
    // 0x387b8c: 0xae021204  sw          $v0, 0x1204($s0)
    ctx->pc = 0x387b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 2));
label_387b90:
    // 0x387b90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x387b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_387b94:
    // 0x387b94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x387b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387b98:
    // 0x387b98: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x387b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_387b9c:
    // 0x387b9c: 0x8c460844  lw          $a2, 0x844($v0)
    ctx->pc = 0x387b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
label_387ba0:
    // 0x387ba0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x387ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_387ba4:
    // 0x387ba4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x387ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_387ba8:
    // 0x387ba8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x387ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_387bac:
    // 0x387bac: 0x40f809  jalr        $v0
label_387bb0:
    if (ctx->pc == 0x387BB0u) {
        ctx->pc = 0x387BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BACu;
        // 0x387bb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BB4u;
        goto label_387bb4;
    }
    ctx->pc = 0x387BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387BB4u);
        ctx->pc = 0x387BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BACu;
        // 0x387bb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387BACu, 0x387BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387BB4u;
label_387bb4:
    // 0x387bb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x387bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387bb8:
    // 0x387bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387bbc:
    // 0x387bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_387bc0:
    // 0x387bc0: 0x3e00008  jr          $ra
label_387bc4:
    if (ctx->pc == 0x387BC4u) {
        ctx->pc = 0x387BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BC0u;
        // 0x387bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BC8u;
        goto label_fallthrough_0x387bc0;
    }
    ctx->pc = 0x387BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BC0u;
        // 0x387bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387bc0:
    ctx->pc = 0x387BC8u;
}
