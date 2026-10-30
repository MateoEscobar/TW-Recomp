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

// Function: sub_00395B70
// Address: 0x395b70 - 0x395d20
void sub_00395B70_0x395b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395B70_0x395b70");
#endif

    switch (ctx->pc) {
        case 0x395b70u: goto label_395b70;
        case 0x395b74u: goto label_395b74;
        case 0x395b78u: goto label_395b78;
        case 0x395b7cu: goto label_395b7c;
        case 0x395b80u: goto label_395b80;
        case 0x395b84u: goto label_395b84;
        case 0x395b88u: goto label_395b88;
        case 0x395b8cu: goto label_395b8c;
        case 0x395b90u: goto label_395b90;
        case 0x395b94u: goto label_395b94;
        case 0x395b98u: goto label_395b98;
        case 0x395b9cu: goto label_395b9c;
        case 0x395ba0u: goto label_395ba0;
        case 0x395ba4u: goto label_395ba4;
        case 0x395ba8u: goto label_395ba8;
        case 0x395bacu: goto label_395bac;
        case 0x395bb0u: goto label_395bb0;
        case 0x395bb4u: goto label_395bb4;
        case 0x395bb8u: goto label_395bb8;
        case 0x395bbcu: goto label_395bbc;
        case 0x395bc0u: goto label_395bc0;
        case 0x395bc4u: goto label_395bc4;
        case 0x395bc8u: goto label_395bc8;
        case 0x395bccu: goto label_395bcc;
        case 0x395bd0u: goto label_395bd0;
        case 0x395bd4u: goto label_395bd4;
        case 0x395bd8u: goto label_395bd8;
        case 0x395bdcu: goto label_395bdc;
        case 0x395be0u: goto label_395be0;
        case 0x395be4u: goto label_395be4;
        case 0x395be8u: goto label_395be8;
        case 0x395becu: goto label_395bec;
        case 0x395bf0u: goto label_395bf0;
        case 0x395bf4u: goto label_395bf4;
        case 0x395bf8u: goto label_395bf8;
        case 0x395bfcu: goto label_395bfc;
        case 0x395c00u: goto label_395c00;
        case 0x395c04u: goto label_395c04;
        case 0x395c08u: goto label_395c08;
        case 0x395c0cu: goto label_395c0c;
        case 0x395c10u: goto label_395c10;
        case 0x395c14u: goto label_395c14;
        case 0x395c18u: goto label_395c18;
        case 0x395c1cu: goto label_395c1c;
        case 0x395c20u: goto label_395c20;
        case 0x395c24u: goto label_395c24;
        case 0x395c28u: goto label_395c28;
        case 0x395c2cu: goto label_395c2c;
        case 0x395c30u: goto label_395c30;
        case 0x395c34u: goto label_395c34;
        case 0x395c38u: goto label_395c38;
        case 0x395c3cu: goto label_395c3c;
        case 0x395c40u: goto label_395c40;
        case 0x395c44u: goto label_395c44;
        case 0x395c48u: goto label_395c48;
        case 0x395c4cu: goto label_395c4c;
        case 0x395c50u: goto label_395c50;
        case 0x395c54u: goto label_395c54;
        case 0x395c58u: goto label_395c58;
        case 0x395c5cu: goto label_395c5c;
        case 0x395c60u: goto label_395c60;
        case 0x395c64u: goto label_395c64;
        case 0x395c68u: goto label_395c68;
        case 0x395c6cu: goto label_395c6c;
        case 0x395c70u: goto label_395c70;
        case 0x395c74u: goto label_395c74;
        case 0x395c78u: goto label_395c78;
        case 0x395c7cu: goto label_395c7c;
        case 0x395c80u: goto label_395c80;
        case 0x395c84u: goto label_395c84;
        case 0x395c88u: goto label_395c88;
        case 0x395c8cu: goto label_395c8c;
        case 0x395c90u: goto label_395c90;
        case 0x395c94u: goto label_395c94;
        case 0x395c98u: goto label_395c98;
        case 0x395c9cu: goto label_395c9c;
        case 0x395ca0u: goto label_395ca0;
        case 0x395ca4u: goto label_395ca4;
        case 0x395ca8u: goto label_395ca8;
        case 0x395cacu: goto label_395cac;
        case 0x395cb0u: goto label_395cb0;
        case 0x395cb4u: goto label_395cb4;
        case 0x395cb8u: goto label_395cb8;
        case 0x395cbcu: goto label_395cbc;
        case 0x395cc0u: goto label_395cc0;
        case 0x395cc4u: goto label_395cc4;
        case 0x395cc8u: goto label_395cc8;
        case 0x395cccu: goto label_395ccc;
        case 0x395cd0u: goto label_395cd0;
        case 0x395cd4u: goto label_395cd4;
        case 0x395cd8u: goto label_395cd8;
        case 0x395cdcu: goto label_395cdc;
        case 0x395ce0u: goto label_395ce0;
        case 0x395ce4u: goto label_395ce4;
        case 0x395ce8u: goto label_395ce8;
        case 0x395cecu: goto label_395cec;
        case 0x395cf0u: goto label_395cf0;
        case 0x395cf4u: goto label_395cf4;
        case 0x395cf8u: goto label_395cf8;
        case 0x395cfcu: goto label_395cfc;
        case 0x395d00u: goto label_395d00;
        case 0x395d04u: goto label_395d04;
        case 0x395d08u: goto label_395d08;
        case 0x395d0cu: goto label_395d0c;
        case 0x395d10u: goto label_395d10;
        case 0x395d14u: goto label_395d14;
        case 0x395d18u: goto label_395d18;
        case 0x395d1cu: goto label_395d1c;
        default: break;
    }

    ctx->pc = 0x395b70u;

label_395b70:
    // 0x395b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_395b74:
    // 0x395b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x395b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_395b78:
    // 0x395b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_395b7c:
    // 0x395b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395b80:
    // 0x395b80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x395b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395b84:
    // 0x395b84: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x395b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_395b88:
    // 0x395b88: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x395b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_395b8c:
    // 0x395b8c: 0x60f809  jalr        $v1
label_395b90:
    if (ctx->pc == 0x395B90u) {
        ctx->pc = 0x395B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B8Cu;
        // 0x395b90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B94u;
        goto label_395b94;
    }
    ctx->pc = 0x395B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395B94u);
        ctx->pc = 0x395B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B8Cu;
        // 0x395b90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395B8Cu, 0x395B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395B94u;
label_395b94:
    // 0x395b94: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x395b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_395b98:
    // 0x395b98: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
label_395b9c:
    if (ctx->pc == 0x395B9Cu) {
        ctx->pc = 0x395B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B98u;
        // 0x395b9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BA0u;
        goto label_395ba0;
    }
    ctx->pc = 0x395B98u;
    {
        const bool branch_taken_0x395b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B98u;
        // 0x395b9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b98) {
            ctx->pc = 0x395C68u;
            goto label_395c68;
        }
    }
    ctx->pc = 0x395BA0u;
label_395ba0:
    // 0x395ba0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x395ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_395ba4:
    // 0x395ba4: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x395ba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_395ba8:
    // 0x395ba8: 0x54800030  bnel        $a0, $zero, . + 4 + (0x30 << 2)
label_395bac:
    if (ctx->pc == 0x395BACu) {
        ctx->pc = 0x395BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BA8u;
        // 0x395bac: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BB0u;
        goto label_395bb0;
    }
    ctx->pc = 0x395BA8u;
    {
        const bool branch_taken_0x395ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x395ba8) {
            ctx->pc = 0x395BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395BA8u;
            // 0x395bac: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395C6Cu;
            goto label_395c6c;
        }
    }
    ctx->pc = 0x395BB0u;
label_395bb0:
    // 0x395bb0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x395bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_395bb4:
    // 0x395bb4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x395bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_395bb8:
    // 0x395bb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_395bbc:
    if (ctx->pc == 0x395BBCu) {
        ctx->pc = 0x395BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BB8u;
        // 0x395bbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BC0u;
        goto label_395bc0;
    }
    ctx->pc = 0x395BB8u;
    {
        const bool branch_taken_0x395bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BB8u;
        // 0x395bbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bb8) {
            ctx->pc = 0x395BE0u;
            goto label_395be0;
        }
    }
    ctx->pc = 0x395BC0u;
label_395bc0:
    // 0x395bc0: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x395bc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_395bc4:
    // 0x395bc4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x395bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_395bc8:
    // 0x395bc8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x395bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
label_395bcc:
    // 0x395bcc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x395bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_395bd0:
    // 0x395bd0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x395bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
label_395bd4:
    // 0x395bd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x395bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_395bd8:
    // 0x395bd8: 0x10000009  b           . + 4 + (0x9 << 2)
label_395bdc:
    if (ctx->pc == 0x395BDCu) {
        ctx->pc = 0x395BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD8u;
        // 0x395bdc: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BE0u;
        goto label_395be0;
    }
    ctx->pc = 0x395BD8u;
    {
        const bool branch_taken_0x395bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD8u;
        // 0x395bdc: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bd8) {
            ctx->pc = 0x395C00u;
            goto label_395c00;
        }
    }
    ctx->pc = 0x395BE0u;
label_395be0:
    // 0x395be0: 0x92020117  lbu         $v0, 0x117($s0)
    ctx->pc = 0x395be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 279)));
label_395be4:
    // 0x395be4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_395be8:
    if (ctx->pc == 0x395BE8u) {
        ctx->pc = 0x395BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BE4u;
        // 0x395be8: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BECu;
        goto label_395bec;
    }
    ctx->pc = 0x395BE4u;
    {
        const bool branch_taken_0x395be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395be4) {
            ctx->pc = 0x395BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395BE4u;
            // 0x395be8: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395BF4u;
            goto label_395bf4;
        }
    }
    ctx->pc = 0x395BECu;
label_395bec:
    // 0x395bec: 0x10000004  b           . + 4 + (0x4 << 2)
label_395bf0:
    if (ctx->pc == 0x395BF0u) {
        ctx->pc = 0x395BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BECu;
        // 0x395bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BF4u;
        goto label_395bf4;
    }
    ctx->pc = 0x395BECu;
    {
        const bool branch_taken_0x395bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BECu;
        // 0x395bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bec) {
            ctx->pc = 0x395C00u;
            goto label_395c00;
        }
    }
    ctx->pc = 0x395BF4u;
label_395bf4:
    // 0x395bf4: 0x3c030404  lui         $v1, 0x404
    ctx->pc = 0x395bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1028 << 16));
label_395bf8:
    // 0x395bf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x395bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_395bfc:
    // 0x395bfc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x395bfcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395c00:
    // 0x395c00: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_395c04:
    if (ctx->pc == 0x395C04u) {
        ctx->pc = 0x395C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C00u;
        // 0x395c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C08u;
        goto label_395c08;
    }
    ctx->pc = 0x395C00u;
    {
        const bool branch_taken_0x395c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C00u;
        // 0x395c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c00) {
            ctx->pc = 0x395C68u;
            goto label_395c68;
        }
    }
    ctx->pc = 0x395C08u;
label_395c08:
    // 0x395c08: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x395c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_395c0c:
    // 0x395c0c: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x395c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_395c10:
    // 0x395c10: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x395c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_395c14:
    // 0x395c14: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x395c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_395c18:
    // 0x395c18: 0x60f809  jalr        $v1
label_395c1c:
    if (ctx->pc == 0x395C1Cu) {
        ctx->pc = 0x395C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C18u;
        // 0x395c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C20u;
        goto label_395c20;
    }
    ctx->pc = 0x395C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395C20u);
        ctx->pc = 0x395C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C18u;
        // 0x395c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395C18u, 0x395C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395C20u;
label_395c20:
    // 0x395c20: 0x92020117  lbu         $v0, 0x117($s0)
    ctx->pc = 0x395c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 279)));
label_395c24:
    // 0x395c24: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_395c28:
    if (ctx->pc == 0x395C28u) {
        ctx->pc = 0x395C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C24u;
        // 0x395c28: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C2Cu;
        goto label_395c2c;
    }
    ctx->pc = 0x395C24u;
    {
        const bool branch_taken_0x395c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395c24) {
            ctx->pc = 0x395C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395C24u;
            // 0x395c28: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395C6Cu;
            goto label_395c6c;
        }
    }
    ctx->pc = 0x395C2Cu;
label_395c2c:
    // 0x395c2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x395c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395c30:
    // 0x395c30: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x395c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_395c34:
    // 0x395c34: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x395c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_395c38:
    // 0x395c38: 0x40f809  jalr        $v0
label_395c3c:
    if (ctx->pc == 0x395C3Cu) {
        ctx->pc = 0x395C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C38u;
        // 0x395c3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C40u;
        goto label_395c40;
    }
    ctx->pc = 0x395C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395C40u);
        ctx->pc = 0x395C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C38u;
        // 0x395c3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395C38u, 0x395C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395C40u;
label_395c40:
    // 0x395c40: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x395c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_395c44:
    // 0x395c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c48:
    // 0x395c48: 0xc10c313  jal         func_430C4C
label_395c4c:
    if (ctx->pc == 0x395C4Cu) {
        ctx->pc = 0x395C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C48u;
        // 0x395c4c: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C50u;
        goto label_395c50;
    }
    ctx->pc = 0x395C48u;
    SET_GPR_U32(ctx, 31, 0x395C50u);
    ctx->pc = 0x395C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C48u;
    // 0x395c4c: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x395C48u, 0x395C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C50u;
label_395c50:
    // 0x395c50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_395c54:
    if (ctx->pc == 0x395C54u) {
        ctx->pc = 0x395C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C50u;
        // 0x395c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C58u;
        goto label_395c58;
    }
    ctx->pc = 0x395C50u;
    {
        const bool branch_taken_0x395c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C50u;
        // 0x395c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c50) {
            ctx->pc = 0x395C64u;
            goto label_395c64;
        }
    }
    ctx->pc = 0x395C58u;
label_395c58:
    // 0x395c58: 0xc0e5544  jal         func_395510
label_395c5c:
    if (ctx->pc == 0x395C5Cu) {
        ctx->pc = 0x395C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C58u;
        // 0x395c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C60u;
        goto label_395c60;
    }
    ctx->pc = 0x395C58u;
    SET_GPR_U32(ctx, 31, 0x395C60u);
    ctx->pc = 0x395C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C58u;
    // 0x395c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395510u, 0x395C58u, 0x395C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C60u;
label_395c60:
    // 0x395c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395c64:
    // 0x395c64: 0xa2020117  sb          $v0, 0x117($s0)
    ctx->pc = 0x395c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 279), (uint8_t)GPR_U32(ctx, 2));
label_395c68:
    // 0x395c68: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x395c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_395c6c:
    // 0x395c6c: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x395c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_395c70:
    // 0x395c70: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_395c74:
    if (ctx->pc == 0x395C74u) {
        ctx->pc = 0x395C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C70u;
        // 0x395c74: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C78u;
        goto label_395c78;
    }
    ctx->pc = 0x395C70u;
    {
        const bool branch_taken_0x395c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C70u;
        // 0x395c74: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c70) {
            ctx->pc = 0x395CB8u;
            goto label_395cb8;
        }
    }
    ctx->pc = 0x395C78u;
label_395c78:
    // 0x395c78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x395c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_395c7c:
    // 0x395c7c: 0x40f809  jalr        $v0
label_395c80:
    if (ctx->pc == 0x395C80u) {
        ctx->pc = 0x395C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C7Cu;
        // 0x395c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C84u;
        goto label_395c84;
    }
    ctx->pc = 0x395C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395C84u);
        ctx->pc = 0x395C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C7Cu;
        // 0x395c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395C7Cu, 0x395C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395C84u;
label_395c84:
    // 0x395c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395c88:
    // 0x395c88: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_395c8c:
    if (ctx->pc == 0x395C8Cu) {
        ctx->pc = 0x395C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C88u;
        // 0x395c8c: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C90u;
        goto label_395c90;
    }
    ctx->pc = 0x395C88u;
    {
        const bool branch_taken_0x395c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x395c88) {
            ctx->pc = 0x395C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395C88u;
            // 0x395c8c: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395CBCu;
            goto label_395cbc;
        }
    }
    ctx->pc = 0x395C90u;
label_395c90:
    // 0x395c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395c94:
    // 0x395c94: 0xc0e858c  jal         func_3A1630
label_395c98:
    if (ctx->pc == 0x395C98u) {
        ctx->pc = 0x395C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C94u;
        // 0x395c98: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C9Cu;
        goto label_395c9c;
    }
    ctx->pc = 0x395C94u;
    SET_GPR_U32(ctx, 31, 0x395C9Cu);
    ctx->pc = 0x395C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C94u;
    // 0x395c98: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x395C94u, 0x395C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C9Cu;
label_395c9c:
    // 0x395c9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x395c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395ca0:
    // 0x395ca0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x395ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_395ca4:
    // 0x395ca4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x395ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_395ca8:
    // 0x395ca8: 0x60f809  jalr        $v1
label_395cac:
    if (ctx->pc == 0x395CACu) {
        ctx->pc = 0x395CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CA8u;
        // 0x395cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CB0u;
        goto label_395cb0;
    }
    ctx->pc = 0x395CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395CB0u);
        ctx->pc = 0x395CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CA8u;
        // 0x395cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395CA8u, 0x395CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395CB0u;
label_395cb0:
    // 0x395cb0: 0x10000016  b           . + 4 + (0x16 << 2)
label_395cb4:
    if (ctx->pc == 0x395CB4u) {
        ctx->pc = 0x395CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CB0u;
        // 0x395cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CB8u;
        goto label_395cb8;
    }
    ctx->pc = 0x395CB0u;
    {
        const bool branch_taken_0x395cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CB0u;
        // 0x395cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cb0) {
            ctx->pc = 0x395D0Cu;
            goto label_395d0c;
        }
    }
    ctx->pc = 0x395CB8u;
label_395cb8:
    // 0x395cb8: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x395cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_395cbc:
    // 0x395cbc: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x395cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_395cc0:
    // 0x395cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x395cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_395cc4:
    // 0x395cc4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_395cc8:
    if (ctx->pc == 0x395CC8u) {
        ctx->pc = 0x395CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CC4u;
        // 0x395cc8: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CCCu;
        goto label_395ccc;
    }
    ctx->pc = 0x395CC4u;
    {
        const bool branch_taken_0x395cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CC4u;
        // 0x395cc8: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cc4) {
            ctx->pc = 0x395CF8u;
            goto label_395cf8;
        }
    }
    ctx->pc = 0x395CCCu;
label_395ccc:
    // 0x395ccc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x395cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_395cd0:
    // 0x395cd0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x395cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_395cd4:
    // 0x395cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_395cd8:
    if (ctx->pc == 0x395CD8u) {
        ctx->pc = 0x395CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CD4u;
        // 0x395cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CDCu;
        goto label_395cdc;
    }
    ctx->pc = 0x395CD4u;
    {
        const bool branch_taken_0x395cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CD4u;
        // 0x395cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cd4) {
            ctx->pc = 0x395CF0u;
            goto label_395cf0;
        }
    }
    ctx->pc = 0x395CDCu;
label_395cdc:
    // 0x395cdc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x395cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_395ce0:
    // 0x395ce0: 0x3c030404  lui         $v1, 0x404
    ctx->pc = 0x395ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1028 << 16));
label_395ce4:
    // 0x395ce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x395ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_395ce8:
    // 0x395ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_395cec:
    if (ctx->pc == 0x395CECu) {
        ctx->pc = 0x395CF0u;
        goto label_395cf0;
    }
    ctx->pc = 0x395CE8u;
    {
        const bool branch_taken_0x395ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395ce8) {
            ctx->pc = 0x395CF8u;
            goto label_395cf8;
        }
    }
    ctx->pc = 0x395CF0u;
label_395cf0:
    // 0x395cf0: 0xc0e858c  jal         func_3A1630
label_395cf4:
    if (ctx->pc == 0x395CF4u) {
        ctx->pc = 0x395CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CF0u;
        // 0x395cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CF8u;
        goto label_395cf8;
    }
    ctx->pc = 0x395CF0u;
    SET_GPR_U32(ctx, 31, 0x395CF8u);
    ctx->pc = 0x395CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395CF0u;
    // 0x395cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x395CF0u, 0x395CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CF8u;
label_395cf8:
    // 0x395cf8: 0xc0e85e4  jal         func_3A1790
label_395cfc:
    if (ctx->pc == 0x395CFCu) {
        ctx->pc = 0x395CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CF8u;
        // 0x395cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D00u;
        goto label_395d00;
    }
    ctx->pc = 0x395CF8u;
    SET_GPR_U32(ctx, 31, 0x395D00u);
    ctx->pc = 0x395CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395CF8u;
    // 0x395cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1790u, 0x395CF8u, 0x395D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395D00u;
label_395d00:
    // 0x395d00: 0xc0e5802  jal         func_396008
label_395d04:
    if (ctx->pc == 0x395D04u) {
        ctx->pc = 0x395D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D00u;
        // 0x395d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D08u;
        goto label_395d08;
    }
    ctx->pc = 0x395D00u;
    SET_GPR_U32(ctx, 31, 0x395D08u);
    ctx->pc = 0x395D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395D00u;
    // 0x395d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x395D00u, 0x395D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395D08u;
label_395d08:
    // 0x395d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395d0c:
    // 0x395d0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x395d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395d10:
    // 0x395d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395d14:
    // 0x395d14: 0x3e00008  jr          $ra
label_395d18:
    if (ctx->pc == 0x395D18u) {
        ctx->pc = 0x395D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D14u;
        // 0x395d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D1Cu;
        goto label_395d1c;
    }
    ctx->pc = 0x395D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D14u;
        // 0x395d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395D1Cu;
label_395d1c:
    // 0x395d1c: 0x0  nop
    ctx->pc = 0x395d1cu;
    // NOP
    ctx->pc = 0x395d20u;
}
