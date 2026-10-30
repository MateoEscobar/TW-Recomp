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

// Function: sub_001C4A40
// Address: 0x1c4a40 - 0x1c4be0
void sub_001C4A40_0x1c4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A40_0x1c4a40");
#endif

    switch (ctx->pc) {
        case 0x1c4a40u: goto label_1c4a40;
        case 0x1c4a44u: goto label_1c4a44;
        case 0x1c4a48u: goto label_1c4a48;
        case 0x1c4a4cu: goto label_1c4a4c;
        case 0x1c4a50u: goto label_1c4a50;
        case 0x1c4a54u: goto label_1c4a54;
        case 0x1c4a58u: goto label_1c4a58;
        case 0x1c4a5cu: goto label_1c4a5c;
        case 0x1c4a60u: goto label_1c4a60;
        case 0x1c4a64u: goto label_1c4a64;
        case 0x1c4a68u: goto label_1c4a68;
        case 0x1c4a6cu: goto label_1c4a6c;
        case 0x1c4a70u: goto label_1c4a70;
        case 0x1c4a74u: goto label_1c4a74;
        case 0x1c4a78u: goto label_1c4a78;
        case 0x1c4a7cu: goto label_1c4a7c;
        case 0x1c4a80u: goto label_1c4a80;
        case 0x1c4a84u: goto label_1c4a84;
        case 0x1c4a88u: goto label_1c4a88;
        case 0x1c4a8cu: goto label_1c4a8c;
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4a94u: goto label_1c4a94;
        case 0x1c4a98u: goto label_1c4a98;
        case 0x1c4a9cu: goto label_1c4a9c;
        case 0x1c4aa0u: goto label_1c4aa0;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4aacu: goto label_1c4aac;
        case 0x1c4ab0u: goto label_1c4ab0;
        case 0x1c4ab4u: goto label_1c4ab4;
        case 0x1c4ab8u: goto label_1c4ab8;
        case 0x1c4abcu: goto label_1c4abc;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ac4u: goto label_1c4ac4;
        case 0x1c4ac8u: goto label_1c4ac8;
        case 0x1c4accu: goto label_1c4acc;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4ad4u: goto label_1c4ad4;
        case 0x1c4ad8u: goto label_1c4ad8;
        case 0x1c4adcu: goto label_1c4adc;
        case 0x1c4ae0u: goto label_1c4ae0;
        case 0x1c4ae4u: goto label_1c4ae4;
        case 0x1c4ae8u: goto label_1c4ae8;
        case 0x1c4aecu: goto label_1c4aec;
        case 0x1c4af0u: goto label_1c4af0;
        case 0x1c4af4u: goto label_1c4af4;
        case 0x1c4af8u: goto label_1c4af8;
        case 0x1c4afcu: goto label_1c4afc;
        case 0x1c4b00u: goto label_1c4b00;
        case 0x1c4b04u: goto label_1c4b04;
        case 0x1c4b08u: goto label_1c4b08;
        case 0x1c4b0cu: goto label_1c4b0c;
        case 0x1c4b10u: goto label_1c4b10;
        case 0x1c4b14u: goto label_1c4b14;
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4b1cu: goto label_1c4b1c;
        case 0x1c4b20u: goto label_1c4b20;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b28u: goto label_1c4b28;
        case 0x1c4b2cu: goto label_1c4b2c;
        case 0x1c4b30u: goto label_1c4b30;
        case 0x1c4b34u: goto label_1c4b34;
        case 0x1c4b38u: goto label_1c4b38;
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b40u: goto label_1c4b40;
        case 0x1c4b44u: goto label_1c4b44;
        case 0x1c4b48u: goto label_1c4b48;
        case 0x1c4b4cu: goto label_1c4b4c;
        case 0x1c4b50u: goto label_1c4b50;
        case 0x1c4b54u: goto label_1c4b54;
        case 0x1c4b58u: goto label_1c4b58;
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b60u: goto label_1c4b60;
        case 0x1c4b64u: goto label_1c4b64;
        case 0x1c4b68u: goto label_1c4b68;
        case 0x1c4b6cu: goto label_1c4b6c;
        case 0x1c4b70u: goto label_1c4b70;
        case 0x1c4b74u: goto label_1c4b74;
        case 0x1c4b78u: goto label_1c4b78;
        case 0x1c4b7cu: goto label_1c4b7c;
        case 0x1c4b80u: goto label_1c4b80;
        case 0x1c4b84u: goto label_1c4b84;
        case 0x1c4b88u: goto label_1c4b88;
        case 0x1c4b8cu: goto label_1c4b8c;
        case 0x1c4b90u: goto label_1c4b90;
        case 0x1c4b94u: goto label_1c4b94;
        case 0x1c4b98u: goto label_1c4b98;
        case 0x1c4b9cu: goto label_1c4b9c;
        case 0x1c4ba0u: goto label_1c4ba0;
        case 0x1c4ba4u: goto label_1c4ba4;
        case 0x1c4ba8u: goto label_1c4ba8;
        case 0x1c4bacu: goto label_1c4bac;
        case 0x1c4bb0u: goto label_1c4bb0;
        case 0x1c4bb4u: goto label_1c4bb4;
        case 0x1c4bb8u: goto label_1c4bb8;
        case 0x1c4bbcu: goto label_1c4bbc;
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4bc4u: goto label_1c4bc4;
        case 0x1c4bc8u: goto label_1c4bc8;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4bd0u: goto label_1c4bd0;
        case 0x1c4bd4u: goto label_1c4bd4;
        case 0x1c4bd8u: goto label_1c4bd8;
        case 0x1c4bdcu: goto label_1c4bdc;
        default: break;
    }

    ctx->pc = 0x1c4a40u;

label_1c4a40:
    // 0x1c4a40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1c4a44:
    // 0x1c4a44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c4a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1c4a48:
    // 0x1c4a48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1c4a4c:
    // 0x1c4a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4a50:
    // 0x1c4a50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1c4a54:
    // 0x1c4a54: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1c4a58:
    // 0x1c4a58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c4a5c:
    // 0x1c4a5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c4a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_1c4a60:
    // 0x1c4a60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4a64:
    // 0x1c4a64: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1c4a68:
    if (ctx->pc == 0x1C4A68u) {
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A6Cu;
        goto label_1c4a6c;
    }
    ctx->pc = 0x1C4A64u;
    {
        const bool branch_taken_0x1c4a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a64) {
            ctx->pc = 0x1C4BC0u;
            goto label_1c4bc0;
        }
    }
    ctx->pc = 0x1C4A6Cu;
label_1c4a6c:
    // 0x1c4a6c: 0xc0e4060  jal         func_390180
label_1c4a70:
    if (ctx->pc == 0x1C4A70u) {
        ctx->pc = 0x1C4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A6Cu;
        // 0x1c4a70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A74u;
        goto label_1c4a74;
    }
    ctx->pc = 0x1C4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A74u);
    ctx->pc = 0x1C4A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A6Cu;
    // 0x1c4a70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4A6Cu, 0x1C4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A74u;
label_1c4a74:
    // 0x1c4a74: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_1c4a78:
    if (ctx->pc == 0x1C4A78u) {
        ctx->pc = 0x1C4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A74u;
        // 0x1c4a78: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A7Cu;
        goto label_1c4a7c;
    }
    ctx->pc = 0x1C4A74u;
    {
        const bool branch_taken_0x1c4a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A74u;
        // 0x1c4a78: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a74) {
            ctx->pc = 0x1C4BC0u;
            goto label_1c4bc0;
        }
    }
    ctx->pc = 0x1C4A7Cu;
label_1c4a7c:
    // 0x1c4a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4a80:
    // 0x1c4a80: 0xc071462  jal         func_1C5188
label_1c4a84:
    if (ctx->pc == 0x1C4A84u) {
        ctx->pc = 0x1C4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A80u;
        // 0x1c4a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A88u;
        goto label_1c4a88;
    }
    ctx->pc = 0x1C4A80u;
    SET_GPR_U32(ctx, 31, 0x1C4A88u);
    ctx->pc = 0x1C4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A80u;
    // 0x1c4a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4A80u, 0x1C4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A88u;
label_1c4a88:
    // 0x1c4a88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4a8c:
    // 0x1c4a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c4a90:
    // 0x1c4a90: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_1c4a94:
    if (ctx->pc == 0x1C4A94u) {
        ctx->pc = 0x1C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A90u;
        // 0x1c4a94: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A98u;
        goto label_1c4a98;
    }
    ctx->pc = 0x1C4A90u;
    {
        const bool branch_taken_0x1c4a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A90u;
        // 0x1c4a94: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a90) {
            ctx->pc = 0x1C4BC0u;
            goto label_1c4bc0;
        }
    }
    ctx->pc = 0x1C4A98u;
label_1c4a98:
    // 0x1c4a98: 0x16620035  bne         $s3, $v0, . + 4 + (0x35 << 2)
label_1c4a9c:
    if (ctx->pc == 0x1C4A9Cu) {
        ctx->pc = 0x1C4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A98u;
        // 0x1c4a9c: 0x39180  sll         $s2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AA0u;
        goto label_1c4aa0;
    }
    ctx->pc = 0x1C4A98u;
    {
        const bool branch_taken_0x1c4a98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A98u;
        // 0x1c4a9c: 0x39180  sll         $s2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a98) {
            ctx->pc = 0x1C4B70u;
            goto label_1c4b70;
        }
    }
    ctx->pc = 0x1C4AA0u;
label_1c4aa0:
    // 0x1c4aa0: 0x2328021  addu        $s0, $s1, $s2
    ctx->pc = 0x1c4aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1c4aa4:
    // 0x1c4aa4: 0x8e020948  lw          $v0, 0x948($s0)
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c4aa8:
    // 0x1c4aa8: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_1c4aac:
    if (ctx->pc == 0x1C4AACu) {
        ctx->pc = 0x1C4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AA8u;
        // 0x1c4aac: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AB0u;
        goto label_1c4ab0;
    }
    ctx->pc = 0x1C4AA8u;
    {
        const bool branch_taken_0x1c4aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4aa8) {
            ctx->pc = 0x1C4AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4AA8u;
            // 0x1c4aac: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B74u;
            goto label_1c4b74;
        }
    }
    ctx->pc = 0x1C4AB0u;
label_1c4ab0:
    // 0x1c4ab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c4ab4:
    // 0x1c4ab4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c4ab8:
    // 0x1c4ab8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1c4abc:
    // 0x1c4abc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c4ac0:
    // 0x1c4ac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c4ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ac4:
    // 0x1c4ac4: 0x24a551d0  addiu       $a1, $a1, 0x51D0
    ctx->pc = 0x1c4ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20944));
label_1c4ac8:
    // 0x1c4ac8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c4acc:
    // 0x1c4acc: 0x250851a8  addiu       $t0, $t0, 0x51A8
    ctx->pc = 0x1c4accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20904));
label_1c4ad0:
    // 0x1c4ad0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4ad4:
    // 0x1c4ad4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c4ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c4ad8:
    // 0x1c4ad8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c4adc:
    // 0x1c4adc: 0x24090208  addiu       $t1, $zero, 0x208
    ctx->pc = 0x1c4adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_1c4ae0:
    // 0x1c4ae0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c4ae4:
    // 0x1c4ae4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c4ae4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ae8:
    // 0x1c4ae8: 0x40f809  jalr        $v0
label_1c4aec:
    if (ctx->pc == 0x1C4AECu) {
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AF0u;
        goto label_1c4af0;
    }
    ctx->pc = 0x1C4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4AF0u);
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AE8u, 0x1C4AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4AF0u;
label_1c4af0:
    // 0x1c4af0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c4af0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4af4:
    // 0x1c4af4: 0x51400005  beql        $t2, $zero, . + 4 + (0x5 << 2)
label_1c4af8:
    if (ctx->pc == 0x1C4AF8u) {
        ctx->pc = 0x1C4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AF4u;
        // 0x1c4af8: 0xae0a0948  sw          $t2, 0x948($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AFCu;
        goto label_1c4afc;
    }
    ctx->pc = 0x1C4AF4u;
    {
        const bool branch_taken_0x1c4af4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4af4) {
            ctx->pc = 0x1C4AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4AF4u;
            // 0x1c4af8: 0xae0a0948  sw          $t2, 0x948($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B0Cu;
            goto label_1c4b0c;
        }
    }
    ctx->pc = 0x1C4AFCu;
label_1c4afc:
    // 0x1c4afc: 0xc0686fe  jal         func_1A1BF8
label_1c4b00:
    if (ctx->pc == 0x1C4B00u) {
        ctx->pc = 0x1C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AFCu;
        // 0x1c4b00: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B04u;
        goto label_1c4b04;
    }
    ctx->pc = 0x1C4AFCu;
    SET_GPR_U32(ctx, 31, 0x1C4B04u);
    ctx->pc = 0x1C4B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AFCu;
    // 0x1c4b00: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C4AFCu, 0x1C4B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B04u;
label_1c4b04:
    // 0x1c4b04: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c4b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b08:
    // 0x1c4b08: 0xae0a0948  sw          $t2, 0x948($s0)
    ctx->pc = 0x1c4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
label_1c4b0c:
    // 0x1c4b0c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x1c4b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c4b10:
    // 0x1c4b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4b14:
    // 0x1c4b14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c4b18:
    // 0x1c4b18: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x1c4b18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1c4b1c:
    // 0x1c4b1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c4b20:
    // 0x1c4b20: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1c4b24:
    // 0x1c4b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4b28:
    // 0x1c4b28: 0x85640068  lh          $a0, 0x68($t3)
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 104)));
label_1c4b2c:
    // 0x1c4b2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4b30:
    // 0x1c4b30: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1c4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
label_1c4b34:
    // 0x1c4b34: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1c4b38:
    // 0x1c4b38: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1c4b3c:
    // 0x1c4b3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c4b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c4b40:
    // 0x1c4b40: 0x2409016a  addiu       $t1, $zero, 0x16A
    ctx->pc = 0x1c4b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_1c4b44:
    // 0x1c4b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c4b48:
    // 0x1c4b48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c4b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c4b4c:
    // 0x1c4b4c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4b50:
    // 0x1c4b50: 0x8d62006c  lw          $v0, 0x6C($t3)
    ctx->pc = 0x1c4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
label_1c4b54:
    // 0x1c4b54: 0x3c01469c  lui         $at, 0x469C
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18076 << 16));
label_1c4b58:
    // 0x1c4b58: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c4b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c4b5c:
    // 0x1c4b5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c4b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c4b60:
    // 0x1c4b60: 0x40f809  jalr        $v0
label_1c4b64:
    if (ctx->pc == 0x1C4B64u) {
        ctx->pc = 0x1C4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B60u;
        // 0x1c4b64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B68u;
        goto label_1c4b68;
    }
    ctx->pc = 0x1C4B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4B68u);
        ctx->pc = 0x1C4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B60u;
        // 0x1c4b64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4B60u, 0x1C4B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4B68u;
label_1c4b68:
    // 0x1c4b68: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c4b6c:
    if (ctx->pc == 0x1C4B6Cu) {
        ctx->pc = 0x1C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B68u;
        // 0x1c4b6c: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B70u;
        goto label_1c4b70;
    }
    ctx->pc = 0x1C4B68u;
    {
        const bool branch_taken_0x1c4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B68u;
        // 0x1c4b6c: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b68) {
            ctx->pc = 0x1C4BBCu;
            goto label_1c4bbc;
        }
    }
    ctx->pc = 0x1C4B70u;
label_1c4b70:
    // 0x1c4b70: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1c4b74:
    // 0x1c4b74: 0x9483094c  lhu         $v1, 0x94C($a0)
    ctx->pc = 0x1c4b74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2380)));
label_1c4b78:
    // 0x1c4b78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c4b7c:
    // 0x1c4b7c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1c4b80:
    if (ctx->pc == 0x1C4B80u) {
        ctx->pc = 0x1C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B7Cu;
        // 0x1c4b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B84u;
        goto label_1c4b84;
    }
    ctx->pc = 0x1C4B7Cu;
    {
        const bool branch_taken_0x1c4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B7Cu;
        // 0x1c4b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b7c) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4B84u;
label_1c4b84:
    // 0x1c4b84: 0x3a620009  xori        $v0, $s3, 0x9
    ctx->pc = 0x1c4b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)9);
label_1c4b88:
    // 0x1c4b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c4b8c:
    if (ctx->pc == 0x1C4B8Cu) {
        ctx->pc = 0x1C4B90u;
        goto label_1c4b90;
    }
    ctx->pc = 0x1C4B88u;
    {
        const bool branch_taken_0x1c4b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b88) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4B90u;
label_1c4b90:
    // 0x1c4b90: 0x8c820948  lw          $v0, 0x948($a0)
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2376)));
label_1c4b94:
    // 0x1c4b94: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x1c4b94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c4b98:
    // 0x1c4b98: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1c4b9c:
    if (ctx->pc == 0x1C4B9Cu) {
        ctx->pc = 0x1C4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B98u;
        // 0x1c4b9c: 0x2328021  addu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BA0u;
        goto label_1c4ba0;
    }
    ctx->pc = 0x1C4B98u;
    {
        const bool branch_taken_0x1c4b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B98u;
        // 0x1c4b9c: 0x2328021  addu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b98) {
            ctx->pc = 0x1C4BB8u;
            goto label_1c4bb8;
        }
    }
    ctx->pc = 0x1C4BA0u;
label_1c4ba0:
    // 0x1c4ba0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c4ba4:
    // 0x1c4ba4: 0x8e040948  lw          $a0, 0x948($s0)
    ctx->pc = 0x1c4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c4ba8:
    // 0x1c4ba8: 0x24a551a8  addiu       $a1, $a1, 0x51A8
    ctx->pc = 0x1c4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20904));
label_1c4bac:
    // 0x1c4bac: 0xc138e72  jal         func_4E39C8
label_1c4bb0:
    if (ctx->pc == 0x1C4BB0u) {
        ctx->pc = 0x1C4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BACu;
        // 0x1c4bb0: 0x2406020f  addiu       $a2, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BB4u;
        goto label_1c4bb4;
    }
    ctx->pc = 0x1C4BACu;
    SET_GPR_U32(ctx, 31, 0x1C4BB4u);
    ctx->pc = 0x1C4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BACu;
    // 0x1c4bb0: 0x2406020f  addiu       $a2, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1C4BACu, 0x1C4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BB4u;
label_1c4bb4:
    // 0x1c4bb4: 0xae000948  sw          $zero, 0x948($s0)
    ctx->pc = 0x1c4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 0));
label_1c4bb8:
    // 0x1c4bb8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1c4bbc:
    // 0x1c4bbc: 0xa453094c  sh          $s3, 0x94C($v0)
    ctx->pc = 0x1c4bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2380), (uint16_t)GPR_U32(ctx, 19));
label_1c4bc0:
    // 0x1c4bc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c4bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c4bc4:
    // 0x1c4bc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c4bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c4bc8:
    // 0x1c4bc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c4bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4bcc:
    // 0x1c4bcc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c4bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4bd0:
    // 0x1c4bd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4bd4:
    // 0x1c4bd4: 0x3e00008  jr          $ra
label_1c4bd8:
    if (ctx->pc == 0x1C4BD8u) {
        ctx->pc = 0x1C4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BD4u;
        // 0x1c4bd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BDCu;
        goto label_1c4bdc;
    }
    ctx->pc = 0x1C4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BD4u;
        // 0x1c4bd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4BDCu;
label_1c4bdc:
    // 0x1c4bdc: 0x0  nop
    ctx->pc = 0x1c4bdcu;
    // NOP
    ctx->pc = 0x1c4be0u;
}
