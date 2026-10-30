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

// Function: sub_00404B38
// Address: 0x404b38 - 0x404c48
void sub_00404B38_0x404b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00404B38_0x404b38");
#endif

    switch (ctx->pc) {
        case 0x404b38u: goto label_404b38;
        case 0x404b3cu: goto label_404b3c;
        case 0x404b40u: goto label_404b40;
        case 0x404b44u: goto label_404b44;
        case 0x404b48u: goto label_404b48;
        case 0x404b4cu: goto label_404b4c;
        case 0x404b50u: goto label_404b50;
        case 0x404b54u: goto label_404b54;
        case 0x404b58u: goto label_404b58;
        case 0x404b5cu: goto label_404b5c;
        case 0x404b60u: goto label_404b60;
        case 0x404b64u: goto label_404b64;
        case 0x404b68u: goto label_404b68;
        case 0x404b6cu: goto label_404b6c;
        case 0x404b70u: goto label_404b70;
        case 0x404b74u: goto label_404b74;
        case 0x404b78u: goto label_404b78;
        case 0x404b7cu: goto label_404b7c;
        case 0x404b80u: goto label_404b80;
        case 0x404b84u: goto label_404b84;
        case 0x404b88u: goto label_404b88;
        case 0x404b8cu: goto label_404b8c;
        case 0x404b90u: goto label_404b90;
        case 0x404b94u: goto label_404b94;
        case 0x404b98u: goto label_404b98;
        case 0x404b9cu: goto label_404b9c;
        case 0x404ba0u: goto label_404ba0;
        case 0x404ba4u: goto label_404ba4;
        case 0x404ba8u: goto label_404ba8;
        case 0x404bacu: goto label_404bac;
        case 0x404bb0u: goto label_404bb0;
        case 0x404bb4u: goto label_404bb4;
        case 0x404bb8u: goto label_404bb8;
        case 0x404bbcu: goto label_404bbc;
        case 0x404bc0u: goto label_404bc0;
        case 0x404bc4u: goto label_404bc4;
        case 0x404bc8u: goto label_404bc8;
        case 0x404bccu: goto label_404bcc;
        case 0x404bd0u: goto label_404bd0;
        case 0x404bd4u: goto label_404bd4;
        case 0x404bd8u: goto label_404bd8;
        case 0x404bdcu: goto label_404bdc;
        case 0x404be0u: goto label_404be0;
        case 0x404be4u: goto label_404be4;
        case 0x404be8u: goto label_404be8;
        case 0x404becu: goto label_404bec;
        case 0x404bf0u: goto label_404bf0;
        case 0x404bf4u: goto label_404bf4;
        case 0x404bf8u: goto label_404bf8;
        case 0x404bfcu: goto label_404bfc;
        case 0x404c00u: goto label_404c00;
        case 0x404c04u: goto label_404c04;
        case 0x404c08u: goto label_404c08;
        case 0x404c0cu: goto label_404c0c;
        case 0x404c10u: goto label_404c10;
        case 0x404c14u: goto label_404c14;
        case 0x404c18u: goto label_404c18;
        case 0x404c1cu: goto label_404c1c;
        case 0x404c20u: goto label_404c20;
        case 0x404c24u: goto label_404c24;
        case 0x404c28u: goto label_404c28;
        case 0x404c2cu: goto label_404c2c;
        case 0x404c30u: goto label_404c30;
        case 0x404c34u: goto label_404c34;
        case 0x404c38u: goto label_404c38;
        case 0x404c3cu: goto label_404c3c;
        case 0x404c40u: goto label_404c40;
        case 0x404c44u: goto label_404c44;
        default: break;
    }

    ctx->pc = 0x404b38u;

label_404b38:
    // 0x404b38: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x404b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_404b3c:
    // 0x404b3c: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x404b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_404b40:
    // 0x404b40: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x404b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_404b44:
    // 0x404b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x404b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_404b48:
    // 0x404b48: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x404b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_404b4c:
    // 0x404b4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x404b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_404b50:
    // 0x404b50: 0x7fb30450  sq          $s3, 0x450($sp)
    ctx->pc = 0x404b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 19));
label_404b54:
    // 0x404b54: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x404b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_404b58:
    // 0x404b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x404b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_404b5c:
    // 0x404b5c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x404b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_404b60:
    // 0x404b60: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x404b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_404b64:
    // 0x404b64: 0x40f809  jalr        $v0
label_404b68:
    if (ctx->pc == 0x404B68u) {
        ctx->pc = 0x404B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B64u;
        // 0x404b68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B6Cu;
        goto label_404b6c;
    }
    ctx->pc = 0x404B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404B6Cu);
        ctx->pc = 0x404B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B64u;
        // 0x404b68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404B64u, 0x404B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404B6Cu;
label_404b6c:
    // 0x404b6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x404b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404b70:
    // 0x404b70: 0xc0ea14c  jal         func_3A8530
label_404b74:
    if (ctx->pc == 0x404B74u) {
        ctx->pc = 0x404B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B70u;
        // 0x404b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B78u;
        goto label_404b78;
    }
    ctx->pc = 0x404B70u;
    SET_GPR_U32(ctx, 31, 0x404B78u);
    ctx->pc = 0x404B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B70u;
    // 0x404b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x404B70u, 0x404B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B78u;
label_404b78:
    // 0x404b78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404b7c:
    // 0x404b7c: 0xc0ea12a  jal         func_3A84A8
label_404b80:
    if (ctx->pc == 0x404B80u) {
        ctx->pc = 0x404B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B7Cu;
        // 0x404b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B84u;
        goto label_404b84;
    }
    ctx->pc = 0x404B7Cu;
    SET_GPR_U32(ctx, 31, 0x404B84u);
    ctx->pc = 0x404B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B7Cu;
    // 0x404b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404B7Cu, 0x404B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B84u;
label_404b84:
    // 0x404b84: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x404b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404b88:
    // 0x404b88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404b8c:
    // 0x404b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x404b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404b90:
    // 0x404b90: 0xc0ea12a  jal         func_3A84A8
label_404b94:
    if (ctx->pc == 0x404B94u) {
        ctx->pc = 0x404B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B90u;
        // 0x404b94: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B98u;
        goto label_404b98;
    }
    ctx->pc = 0x404B90u;
    SET_GPR_U32(ctx, 31, 0x404B98u);
    ctx->pc = 0x404B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B90u;
    // 0x404b94: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404B90u, 0x404B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B98u;
label_404b98:
    // 0x404b98: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x404b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404b9c:
    // 0x404b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404ba0:
    // 0x404ba0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x404ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_404ba4:
    // 0x404ba4: 0xc0e858c  jal         func_3A1630
label_404ba8:
    if (ctx->pc == 0x404BA8u) {
        ctx->pc = 0x404BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404BA4u;
        // 0x404ba8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404BACu;
        goto label_404bac;
    }
    ctx->pc = 0x404BA4u;
    SET_GPR_U32(ctx, 31, 0x404BACu);
    ctx->pc = 0x404BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404BA4u;
    // 0x404ba8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x404BA4u, 0x404BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404BACu;
label_404bac:
    // 0x404bac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x404bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_404bb0:
    // 0x404bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404bb4:
    // 0x404bb4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x404bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_404bb8:
    // 0x404bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x404bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404bbc:
    // 0x404bbc: 0xc0e9132  jal         func_3A44C8
label_404bc0:
    if (ctx->pc == 0x404BC0u) {
        ctx->pc = 0x404BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404BBCu;
        // 0x404bc0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404BC4u;
        goto label_404bc4;
    }
    ctx->pc = 0x404BBCu;
    SET_GPR_U32(ctx, 31, 0x404BC4u);
    ctx->pc = 0x404BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404BBCu;
    // 0x404bc0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x404BBCu, 0x404BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404BC4u;
label_404bc4:
    // 0x404bc4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x404bc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_404bc8:
    // 0x404bc8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x404bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_404bcc:
    // 0x404bcc: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x404bccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_404bd0:
    // 0x404bd0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x404bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_404bd4:
    // 0x404bd4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x404bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_404bd8:
    // 0x404bd8: 0x700334a9  por         $a2, $zero, $v1
    ctx->pc = 0x404bd8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_404bdc:
    // 0x404bdc: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x404bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
label_404be0:
    // 0x404be0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x404be0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_404be4:
    // 0x404be4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x404be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_404be8:
    // 0x404be8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x404be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404bec:
    // 0x404bec: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x404becu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
label_404bf0:
    // 0x404bf0: 0x26317a18  addiu       $s1, $s1, 0x7A18
    ctx->pc = 0x404bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31256));
label_404bf4:
    // 0x404bf4: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x404bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_404bf8:
    // 0x404bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x404bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_404bfc:
    // 0x404bfc: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x404bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_404c00:
    // 0x404c00: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x404c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_404c04:
    // 0x404c04: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x404c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_404c08:
    // 0x404c08: 0xc0e9f6a  jal         func_3A7DA8
label_404c0c:
    if (ctx->pc == 0x404C0Cu) {
        ctx->pc = 0x404C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C08u;
        // 0x404c0c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404C10u;
        goto label_404c10;
    }
    ctx->pc = 0x404C08u;
    SET_GPR_U32(ctx, 31, 0x404C10u);
    ctx->pc = 0x404C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404C08u;
    // 0x404c0c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x404C08u, 0x404C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404C10u;
label_404c10:
    // 0x404c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404c14:
    // 0x404c14: 0xc0f15bc  jal         func_3C56F0
label_404c18:
    if (ctx->pc == 0x404C18u) {
        ctx->pc = 0x404C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C14u;
        // 0x404c18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404C1Cu;
        goto label_404c1c;
    }
    ctx->pc = 0x404C14u;
    SET_GPR_U32(ctx, 31, 0x404C1Cu);
    ctx->pc = 0x404C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404C14u;
    // 0x404c18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x404C14u, 0x404C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404C1Cu;
label_404c1c:
    // 0x404c1c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x404c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_404c20:
    // 0x404c20: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x404c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_404c24:
    // 0x404c24: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x404c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_404c28:
    // 0x404c28: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x404c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_404c2c:
    // 0x404c2c: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x404c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_404c30:
    // 0x404c30: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x404c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_404c34:
    // 0x404c34: 0x7bb30450  lq          $s3, 0x450($sp)
    ctx->pc = 0x404c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_404c38:
    // 0x404c38: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x404c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_404c3c:
    // 0x404c3c: 0x3e00008  jr          $ra
label_404c40:
    if (ctx->pc == 0x404C40u) {
        ctx->pc = 0x404C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C3Cu;
        // 0x404c40: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404C44u;
        goto label_404c44;
    }
    ctx->pc = 0x404C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x404C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C3Cu;
        // 0x404c40: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x404C44u;
label_404c44:
    // 0x404c44: 0x0  nop
    ctx->pc = 0x404c44u;
    // NOP
    ctx->pc = 0x404c48u;
}
