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

// Function: sub_004A8A60
// Address: 0x4a8a60 - 0x4a8cf0
void sub_004A8A60_0x4a8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8A60_0x4a8a60");
#endif

    switch (ctx->pc) {
        case 0x4a8a60u: goto label_4a8a60;
        case 0x4a8a64u: goto label_4a8a64;
        case 0x4a8a68u: goto label_4a8a68;
        case 0x4a8a6cu: goto label_4a8a6c;
        case 0x4a8a70u: goto label_4a8a70;
        case 0x4a8a74u: goto label_4a8a74;
        case 0x4a8a78u: goto label_4a8a78;
        case 0x4a8a7cu: goto label_4a8a7c;
        case 0x4a8a80u: goto label_4a8a80;
        case 0x4a8a84u: goto label_4a8a84;
        case 0x4a8a88u: goto label_4a8a88;
        case 0x4a8a8cu: goto label_4a8a8c;
        case 0x4a8a90u: goto label_4a8a90;
        case 0x4a8a94u: goto label_4a8a94;
        case 0x4a8a98u: goto label_4a8a98;
        case 0x4a8a9cu: goto label_4a8a9c;
        case 0x4a8aa0u: goto label_4a8aa0;
        case 0x4a8aa4u: goto label_4a8aa4;
        case 0x4a8aa8u: goto label_4a8aa8;
        case 0x4a8aacu: goto label_4a8aac;
        case 0x4a8ab0u: goto label_4a8ab0;
        case 0x4a8ab4u: goto label_4a8ab4;
        case 0x4a8ab8u: goto label_4a8ab8;
        case 0x4a8abcu: goto label_4a8abc;
        case 0x4a8ac0u: goto label_4a8ac0;
        case 0x4a8ac4u: goto label_4a8ac4;
        case 0x4a8ac8u: goto label_4a8ac8;
        case 0x4a8accu: goto label_4a8acc;
        case 0x4a8ad0u: goto label_4a8ad0;
        case 0x4a8ad4u: goto label_4a8ad4;
        case 0x4a8ad8u: goto label_4a8ad8;
        case 0x4a8adcu: goto label_4a8adc;
        case 0x4a8ae0u: goto label_4a8ae0;
        case 0x4a8ae4u: goto label_4a8ae4;
        case 0x4a8ae8u: goto label_4a8ae8;
        case 0x4a8aecu: goto label_4a8aec;
        case 0x4a8af0u: goto label_4a8af0;
        case 0x4a8af4u: goto label_4a8af4;
        case 0x4a8af8u: goto label_4a8af8;
        case 0x4a8afcu: goto label_4a8afc;
        case 0x4a8b00u: goto label_4a8b00;
        case 0x4a8b04u: goto label_4a8b04;
        case 0x4a8b08u: goto label_4a8b08;
        case 0x4a8b0cu: goto label_4a8b0c;
        case 0x4a8b10u: goto label_4a8b10;
        case 0x4a8b14u: goto label_4a8b14;
        case 0x4a8b18u: goto label_4a8b18;
        case 0x4a8b1cu: goto label_4a8b1c;
        case 0x4a8b20u: goto label_4a8b20;
        case 0x4a8b24u: goto label_4a8b24;
        case 0x4a8b28u: goto label_4a8b28;
        case 0x4a8b2cu: goto label_4a8b2c;
        case 0x4a8b30u: goto label_4a8b30;
        case 0x4a8b34u: goto label_4a8b34;
        case 0x4a8b38u: goto label_4a8b38;
        case 0x4a8b3cu: goto label_4a8b3c;
        case 0x4a8b40u: goto label_4a8b40;
        case 0x4a8b44u: goto label_4a8b44;
        case 0x4a8b48u: goto label_4a8b48;
        case 0x4a8b4cu: goto label_4a8b4c;
        case 0x4a8b50u: goto label_4a8b50;
        case 0x4a8b54u: goto label_4a8b54;
        case 0x4a8b58u: goto label_4a8b58;
        case 0x4a8b5cu: goto label_4a8b5c;
        case 0x4a8b60u: goto label_4a8b60;
        case 0x4a8b64u: goto label_4a8b64;
        case 0x4a8b68u: goto label_4a8b68;
        case 0x4a8b6cu: goto label_4a8b6c;
        case 0x4a8b70u: goto label_4a8b70;
        case 0x4a8b74u: goto label_4a8b74;
        case 0x4a8b78u: goto label_4a8b78;
        case 0x4a8b7cu: goto label_4a8b7c;
        case 0x4a8b80u: goto label_4a8b80;
        case 0x4a8b84u: goto label_4a8b84;
        case 0x4a8b88u: goto label_4a8b88;
        case 0x4a8b8cu: goto label_4a8b8c;
        case 0x4a8b90u: goto label_4a8b90;
        case 0x4a8b94u: goto label_4a8b94;
        case 0x4a8b98u: goto label_4a8b98;
        case 0x4a8b9cu: goto label_4a8b9c;
        case 0x4a8ba0u: goto label_4a8ba0;
        case 0x4a8ba4u: goto label_4a8ba4;
        case 0x4a8ba8u: goto label_4a8ba8;
        case 0x4a8bacu: goto label_4a8bac;
        case 0x4a8bb0u: goto label_4a8bb0;
        case 0x4a8bb4u: goto label_4a8bb4;
        case 0x4a8bb8u: goto label_4a8bb8;
        case 0x4a8bbcu: goto label_4a8bbc;
        case 0x4a8bc0u: goto label_4a8bc0;
        case 0x4a8bc4u: goto label_4a8bc4;
        case 0x4a8bc8u: goto label_4a8bc8;
        case 0x4a8bccu: goto label_4a8bcc;
        case 0x4a8bd0u: goto label_4a8bd0;
        case 0x4a8bd4u: goto label_4a8bd4;
        case 0x4a8bd8u: goto label_4a8bd8;
        case 0x4a8bdcu: goto label_4a8bdc;
        case 0x4a8be0u: goto label_4a8be0;
        case 0x4a8be4u: goto label_4a8be4;
        case 0x4a8be8u: goto label_4a8be8;
        case 0x4a8becu: goto label_4a8bec;
        case 0x4a8bf0u: goto label_4a8bf0;
        case 0x4a8bf4u: goto label_4a8bf4;
        case 0x4a8bf8u: goto label_4a8bf8;
        case 0x4a8bfcu: goto label_4a8bfc;
        case 0x4a8c00u: goto label_4a8c00;
        case 0x4a8c04u: goto label_4a8c04;
        case 0x4a8c08u: goto label_4a8c08;
        case 0x4a8c0cu: goto label_4a8c0c;
        case 0x4a8c10u: goto label_4a8c10;
        case 0x4a8c14u: goto label_4a8c14;
        case 0x4a8c18u: goto label_4a8c18;
        case 0x4a8c1cu: goto label_4a8c1c;
        case 0x4a8c20u: goto label_4a8c20;
        case 0x4a8c24u: goto label_4a8c24;
        case 0x4a8c28u: goto label_4a8c28;
        case 0x4a8c2cu: goto label_4a8c2c;
        case 0x4a8c30u: goto label_4a8c30;
        case 0x4a8c34u: goto label_4a8c34;
        case 0x4a8c38u: goto label_4a8c38;
        case 0x4a8c3cu: goto label_4a8c3c;
        case 0x4a8c40u: goto label_4a8c40;
        case 0x4a8c44u: goto label_4a8c44;
        case 0x4a8c48u: goto label_4a8c48;
        case 0x4a8c4cu: goto label_4a8c4c;
        case 0x4a8c50u: goto label_4a8c50;
        case 0x4a8c54u: goto label_4a8c54;
        case 0x4a8c58u: goto label_4a8c58;
        case 0x4a8c5cu: goto label_4a8c5c;
        case 0x4a8c60u: goto label_4a8c60;
        case 0x4a8c64u: goto label_4a8c64;
        case 0x4a8c68u: goto label_4a8c68;
        case 0x4a8c6cu: goto label_4a8c6c;
        case 0x4a8c70u: goto label_4a8c70;
        case 0x4a8c74u: goto label_4a8c74;
        case 0x4a8c78u: goto label_4a8c78;
        case 0x4a8c7cu: goto label_4a8c7c;
        case 0x4a8c80u: goto label_4a8c80;
        case 0x4a8c84u: goto label_4a8c84;
        case 0x4a8c88u: goto label_4a8c88;
        case 0x4a8c8cu: goto label_4a8c8c;
        case 0x4a8c90u: goto label_4a8c90;
        case 0x4a8c94u: goto label_4a8c94;
        case 0x4a8c98u: goto label_4a8c98;
        case 0x4a8c9cu: goto label_4a8c9c;
        case 0x4a8ca0u: goto label_4a8ca0;
        case 0x4a8ca4u: goto label_4a8ca4;
        case 0x4a8ca8u: goto label_4a8ca8;
        case 0x4a8cacu: goto label_4a8cac;
        case 0x4a8cb0u: goto label_4a8cb0;
        case 0x4a8cb4u: goto label_4a8cb4;
        case 0x4a8cb8u: goto label_4a8cb8;
        case 0x4a8cbcu: goto label_4a8cbc;
        case 0x4a8cc0u: goto label_4a8cc0;
        case 0x4a8cc4u: goto label_4a8cc4;
        case 0x4a8cc8u: goto label_4a8cc8;
        case 0x4a8cccu: goto label_4a8ccc;
        case 0x4a8cd0u: goto label_4a8cd0;
        case 0x4a8cd4u: goto label_4a8cd4;
        case 0x4a8cd8u: goto label_4a8cd8;
        case 0x4a8cdcu: goto label_4a8cdc;
        case 0x4a8ce0u: goto label_4a8ce0;
        case 0x4a8ce4u: goto label_4a8ce4;
        case 0x4a8ce8u: goto label_4a8ce8;
        case 0x4a8cecu: goto label_4a8cec;
        default: break;
    }

    ctx->pc = 0x4a8a60u;

label_4a8a60:
    // 0x4a8a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a8a64:
    // 0x4a8a64: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4a8a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a8a68:
    // 0x4a8a68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a8a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a8a6c:
    // 0x4a8a6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a8a6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8a70:
    // 0x4a8a70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a8a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4a8a74:
    // 0x4a8a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8a78:
    // 0x4a8a78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a8a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a8a7c:
    // 0x4a8a7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a8a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a8a80:
    // 0x4a8a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a8a84:
    // 0x4a8a84: 0x8ce5ffe0  lw          $a1, -0x20($a3)
    ctx->pc = 0x4a8a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8a88:
    // 0x4a8a88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4a8a8c:
    if (ctx->pc == 0x4A8A8Cu) {
        ctx->pc = 0x4A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A88u;
        // 0x4a8a8c: 0x24f3ffe0  addiu       $s3, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A90u;
        goto label_4a8a90;
    }
    ctx->pc = 0x4A8A88u;
    {
        const bool branch_taken_0x4a8a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A88u;
        // 0x4a8a8c: 0x24f3ffe0  addiu       $s3, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a88) {
            ctx->pc = 0x4A8A98u;
            goto label_4a8a98;
        }
    }
    ctx->pc = 0x4A8A90u;
label_4a8a90:
    // 0x4a8a90: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4a8a94:
    // 0x4a8a94: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4a8a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a8a98:
    // 0x4a8a98: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8a9c:
    // 0x4a8a9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4a8aa0:
    if (ctx->pc == 0x4A8AA0u) {
        ctx->pc = 0x4A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A9Cu;
        // 0x4a8aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AA4u;
        goto label_4a8aa4;
    }
    ctx->pc = 0x4A8A9Cu;
    {
        const bool branch_taken_0x4a8a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A9Cu;
        // 0x4a8aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a9c) {
            ctx->pc = 0x4A8AACu;
            goto label_4a8aac;
        }
    }
    ctx->pc = 0x4A8AA4u;
label_4a8aa4:
    // 0x4a8aa4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8aa8:
    // 0x4a8aa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4a8aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a8aac:
    // 0x4a8aac: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_4a8ab0:
    if (ctx->pc == 0x4A8AB0u) {
        ctx->pc = 0x4A8AB4u;
        goto label_4a8ab4;
    }
    ctx->pc = 0x4A8AACu;
    {
        const bool branch_taken_0x4a8aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8aac) {
            ctx->pc = 0x4A8B94u;
            goto label_4a8b94;
        }
    }
    ctx->pc = 0x4A8AB4u;
label_4a8ab4:
    // 0x4a8ab4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_4a8ab8:
    if (ctx->pc == 0x4A8AB8u) {
        ctx->pc = 0x4A8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AB4u;
        // 0x4a8ab8: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8ABCu;
        goto label_4a8abc;
    }
    ctx->pc = 0x4A8AB4u;
    {
        const bool branch_taken_0x4a8ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8ab4) {
            ctx->pc = 0x4A8AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8AB4u;
            // 0x4a8ab8: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8B50u;
            goto label_4a8b50;
        }
    }
    ctx->pc = 0x4A8ABCu;
label_4a8abc:
    // 0x4a8abc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4a8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a8ac0:
    // 0x4a8ac0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4a8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a8ac4:
    // 0x4a8ac4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4a8ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a8ac8:
    // 0x4a8ac8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4a8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8acc:
    // 0x4a8acc: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x4a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_4a8ad0:
    // 0x4a8ad0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a8ad4:
    // 0x4a8ad4: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_4a8ad8:
    if (ctx->pc == 0x4A8AD8u) {
        ctx->pc = 0x4A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AD4u;
        // 0x4a8ad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8ADCu;
        goto label_4a8adc;
    }
    ctx->pc = 0x4A8AD4u;
    {
        const bool branch_taken_0x4a8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AD4u;
        // 0x4a8ad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ad4) {
            ctx->pc = 0x4A8AF4u;
            goto label_4a8af4;
        }
    }
    ctx->pc = 0x4A8ADCu;
label_4a8adc:
    // 0x4a8adc: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x4a8adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a8ae0:
    // 0x4a8ae0: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x4a8ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a8ae4:
    // 0x4a8ae4: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x4a8ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8ae8:
    // 0x4a8ae8: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x4a8ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8aec:
    // 0x4a8aec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4a8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a8af0:
    // 0x4a8af0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4a8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4a8af4:
    // 0x4a8af4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4a8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a8af8:
    // 0x4a8af8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a8afc:
    // 0x4a8afc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x4a8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_4a8b00:
    // 0x4a8b00: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a8b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8b04:
    // 0x4a8b04: 0x8ce6ffe0  lw          $a2, -0x20($a3)
    ctx->pc = 0x4a8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b08:
    // 0x4a8b08: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x4a8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a8b0c:
    // 0x4a8b0c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4a8b10:
    // 0x4a8b10: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a8b14:
    // 0x4a8b14: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x4a8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_4a8b18:
    // 0x4a8b18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4a8b1c:
    // 0x4a8b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a8b20:
    // 0x4a8b20: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x4a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_4a8b24:
    // 0x4a8b24: 0x8ce4ffe0  lw          $a0, -0x20($a3)
    ctx->pc = 0x4a8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b28:
    // 0x4a8b28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a8b2c:
    // 0x4a8b2c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8b30:
    // 0x4a8b30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a8b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4a8b34:
    // 0x4a8b34: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8b38:
    // 0x4a8b38: 0x8ce5ffe0  lw          $a1, -0x20($a3)
    ctx->pc = 0x4a8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b3c:
    // 0x4a8b3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a8b40:
    // 0x4a8b40: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4a8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4a8b44:
    // 0x4a8b44: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4a8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8b48:
    // 0x4a8b48: 0x1000000d  b           . + 4 + (0xD << 2)
label_4a8b4c:
    if (ctx->pc == 0x4A8B4Cu) {
        ctx->pc = 0x4A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B48u;
        // 0x4a8b4c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B50u;
        goto label_4a8b50;
    }
    ctx->pc = 0x4A8B48u;
    {
        const bool branch_taken_0x4a8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B48u;
        // 0x4a8b4c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b48) {
            ctx->pc = 0x4A8B80u;
            goto label_4a8b80;
        }
    }
    ctx->pc = 0x4A8B50u;
label_4a8b50:
    // 0x4a8b50: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4a8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a8b54:
    // 0x4a8b54: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4a8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_4a8b58:
    // 0x4a8b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a8b5c:
    // 0x4a8b5c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4a8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4a8b60:
    // 0x4a8b60: 0x8ce3ffe0  lw          $v1, -0x20($a3)
    ctx->pc = 0x4a8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b64:
    // 0x4a8b64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4a8b68:
    // 0x4a8b68: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4a8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a8b6c:
    // 0x4a8b6c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4a8b70:
    // 0x4a8b70: 0x8ce3ffe0  lw          $v1, -0x20($a3)
    ctx->pc = 0x4a8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b74:
    // 0x4a8b74: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8b78:
    // 0x4a8b78: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4a8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4a8b7c:
    // 0x4a8b7c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4a8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8b80:
    // 0x4a8b80: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_4a8b84:
    if (ctx->pc == 0x4A8B84u) {
        ctx->pc = 0x4A8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B80u;
        // 0x4a8b84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B88u;
        goto label_4a8b88;
    }
    ctx->pc = 0x4A8B80u;
    {
        const bool branch_taken_0x4a8b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B80u;
        // 0x4a8b84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b80) {
            ctx->pc = 0x4A8CCCu;
            goto label_4a8ccc;
        }
    }
    ctx->pc = 0x4A8B88u;
label_4a8b88:
    // 0x4a8b88: 0x8ce2ffe0  lw          $v0, -0x20($a3)
    ctx->pc = 0x4a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
label_4a8b8c:
    // 0x4a8b8c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4a8b90:
    if (ctx->pc == 0x4A8B90u) {
        ctx->pc = 0x4A8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B8Cu;
        // 0x4a8b90: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B94u;
        goto label_4a8b94;
    }
    ctx->pc = 0x4A8B8Cu;
    {
        const bool branch_taken_0x4a8b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B8Cu;
        // 0x4a8b90: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b8c) {
            ctx->pc = 0x4A8CCCu;
            goto label_4a8ccc;
        }
    }
    ctx->pc = 0x4A8B94u;
label_4a8b94:
    // 0x4a8b94: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_4a8b98:
    if (ctx->pc == 0x4A8B98u) {
        ctx->pc = 0x4A8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B94u;
        // 0x4a8b98: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B9Cu;
        goto label_4a8b9c;
    }
    ctx->pc = 0x4A8B94u;
    {
        const bool branch_taken_0x4a8b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8b94) {
            ctx->pc = 0x4A8B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8B94u;
            // 0x4a8b98: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8BE8u;
            goto label_4a8be8;
        }
    }
    ctx->pc = 0x4A8B9Cu;
label_4a8b9c:
    // 0x4a8b9c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a8ba0:
    // 0x4a8ba0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a8ba4:
    // 0x4a8ba4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4a8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_4a8ba8:
    // 0x4a8ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a8bac:
    // 0x4a8bac: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x4a8bacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_4a8bb0:
    // 0x4a8bb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4a8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8bb4:
    // 0x4a8bb4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4a8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_4a8bb8:
    // 0x4a8bb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a8bbc:
    // 0x4a8bbc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x4a8bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_4a8bc0:
    // 0x4a8bc0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4a8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8bc4:
    // 0x4a8bc4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4a8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a8bc8:
    // 0x4a8bc8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4a8bcc:
    // 0x4a8bcc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a8bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4a8bd0:
    // 0x4a8bd0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4a8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8bd4:
    // 0x4a8bd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a8bd8:
    // 0x4a8bd8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_4a8bdc:
    if (ctx->pc == 0x4A8BDCu) {
        ctx->pc = 0x4A8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BD8u;
        // 0x4a8bdc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BE0u;
        goto label_4a8be0;
    }
    ctx->pc = 0x4A8BD8u;
    {
        const bool branch_taken_0x4a8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BD8u;
        // 0x4a8bdc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8bd8) {
            ctx->pc = 0x4A8CC8u;
            goto label_4a8cc8;
        }
    }
    ctx->pc = 0x4A8BE0u;
label_4a8be0:
    // 0x4a8be0: 0x10000039  b           . + 4 + (0x39 << 2)
label_4a8be4:
    if (ctx->pc == 0x4A8BE4u) {
        ctx->pc = 0x4A8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BE0u;
        // 0x4a8be4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BE8u;
        goto label_4a8be8;
    }
    ctx->pc = 0x4A8BE0u;
    {
        const bool branch_taken_0x4a8be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BE0u;
        // 0x4a8be4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8be0) {
            ctx->pc = 0x4A8CC8u;
            goto label_4a8cc8;
        }
    }
    ctx->pc = 0x4A8BE8u;
label_4a8be8:
    // 0x4a8be8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x4a8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a8bec:
    // 0x4a8bec: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4a8becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4a8bf0:
    // 0x4a8bf0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_4a8bf4:
    if (ctx->pc == 0x4A8BF4u) {
        ctx->pc = 0x4A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BF0u;
        // 0x4a8bf4: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BF8u;
        goto label_4a8bf8;
    }
    ctx->pc = 0x4A8BF0u;
    {
        const bool branch_taken_0x4a8bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BF0u;
        // 0x4a8bf4: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8bf0) {
            ctx->pc = 0x4A8C98u;
            goto label_4a8c98;
        }
    }
    ctx->pc = 0x4A8BF8u;
label_4a8bf8:
    // 0x4a8bf8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4a8bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4a8bfc:
    // 0x4a8bfc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a8c00:
    // 0x4a8c00: 0xae450010  sw          $a1, 0x10($s2)
    ctx->pc = 0x4a8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
label_4a8c04:
    // 0x4a8c04: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x4a8c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_4a8c08:
    // 0x4a8c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a8c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c0c:
    // 0x4a8c0c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a8c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a8c10:
    // 0x4a8c10: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x4a8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_4a8c14:
    // 0x4a8c14: 0x40f809  jalr        $v0
label_4a8c18:
    if (ctx->pc == 0x4A8C18u) {
        ctx->pc = 0x4A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C14u;
        // 0x4a8c18: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C1Cu;
        goto label_4a8c1c;
    }
    ctx->pc = 0x4A8C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8C1Cu);
        ctx->pc = 0x4A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C14u;
        // 0x4a8c18: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8C14u, 0x4A8C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8C1Cu;
label_4a8c1c:
    // 0x4a8c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c20:
    // 0x4a8c20: 0x5620000f  bnel        $s1, $zero, . + 4 + (0xF << 2)
label_4a8c24:
    if (ctx->pc == 0x4A8C24u) {
        ctx->pc = 0x4A8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C20u;
        // 0x4a8c24: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C28u;
        goto label_4a8c28;
    }
    ctx->pc = 0x4A8C20u;
    {
        const bool branch_taken_0x4a8c20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8c20) {
            ctx->pc = 0x4A8C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8C20u;
            // 0x4a8c24: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8C60u;
            goto label_4a8c60;
        }
    }
    ctx->pc = 0x4A8C28u;
label_4a8c28:
    // 0x4a8c28: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x4a8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a8c2c:
    // 0x4a8c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8c30:
    // 0x4a8c30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a8c34:
    // 0x4a8c34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a8c38:
    // 0x4a8c38: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a8c3c:
    // 0x4a8c3c: 0xc11eff2  jal         func_47BFC8
label_4a8c40:
    if (ctx->pc == 0x4A8C40u) {
        ctx->pc = 0x4A8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C3Cu;
        // 0x4a8c40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C44u;
        goto label_4a8c44;
    }
    ctx->pc = 0x4A8C3Cu;
    SET_GPR_U32(ctx, 31, 0x4A8C44u);
    ctx->pc = 0x4A8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C3Cu;
    // 0x4a8c40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A8C3Cu, 0x4A8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C44u;
label_4a8c44:
    // 0x4a8c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c48:
    // 0x4a8c48: 0xc11f024  jal         func_47C090
label_4a8c4c:
    if (ctx->pc == 0x4A8C4Cu) {
        ctx->pc = 0x4A8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C48u;
        // 0x4a8c4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C50u;
        goto label_4a8c50;
    }
    ctx->pc = 0x4A8C48u;
    SET_GPR_U32(ctx, 31, 0x4A8C50u);
    ctx->pc = 0x4A8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C48u;
    // 0x4a8c4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A8C48u, 0x4A8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C50u;
label_4a8c50:
    // 0x4a8c50: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4a8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a8c54:
    // 0x4a8c54: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x4a8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_4a8c58:
    // 0x4a8c58: 0x1000000f  b           . + 4 + (0xF << 2)
label_4a8c5c:
    if (ctx->pc == 0x4A8C5Cu) {
        ctx->pc = 0x4A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C58u;
        // 0x4a8c5c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C60u;
        goto label_4a8c60;
    }
    ctx->pc = 0x4A8C58u;
    {
        const bool branch_taken_0x4a8c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C58u;
        // 0x4a8c5c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8c58) {
            ctx->pc = 0x4A8C98u;
            goto label_4a8c98;
        }
    }
    ctx->pc = 0x4A8C60u;
label_4a8c60:
    // 0x4a8c60: 0x5222000d  beql        $s1, $v0, . + 4 + (0xD << 2)
label_4a8c64:
    if (ctx->pc == 0x4A8C64u) {
        ctx->pc = 0x4A8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C60u;
        // 0x4a8c64: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C68u;
        goto label_4a8c68;
    }
    ctx->pc = 0x4A8C60u;
    {
        const bool branch_taken_0x4a8c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a8c60) {
            ctx->pc = 0x4A8C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8C60u;
            // 0x4a8c64: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8C98u;
            goto label_4a8c98;
        }
    }
    ctx->pc = 0x4A8C68u;
label_4a8c68:
    // 0x4a8c68: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4a8c6c:
    if (ctx->pc == 0x4A8C6Cu) {
        ctx->pc = 0x4A8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C68u;
        // 0x4a8c6c: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C70u;
        goto label_4a8c70;
    }
    ctx->pc = 0x4A8C68u;
    {
        const bool branch_taken_0x4a8c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8c68) {
            ctx->pc = 0x4A8C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8C68u;
            // 0x4a8c6c: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8C98u;
            goto label_4a8c98;
        }
    }
    ctx->pc = 0x4A8C70u;
label_4a8c70:
    // 0x4a8c70: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4a8c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c74:
    // 0x4a8c74: 0x0  nop
    ctx->pc = 0x4a8c74u;
    // NOP
label_4a8c78:
    // 0x4a8c78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a8c7c:
    // 0x4a8c7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4a8c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4a8c80:
    // 0x4a8c80: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4a8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4a8c84:
    // 0x4a8c84: 0x0  nop
    ctx->pc = 0x4a8c84u;
    // NOP
label_4a8c88:
    // 0x4a8c88: 0x0  nop
    ctx->pc = 0x4a8c88u;
    // NOP
label_4a8c8c:
    // 0x4a8c8c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_4a8c90:
    if (ctx->pc == 0x4A8C90u) {
        ctx->pc = 0x4A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C8Cu;
        // 0x4a8c90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C94u;
        goto label_4a8c94;
    }
    ctx->pc = 0x4A8C8Cu;
    {
        const bool branch_taken_0x4a8c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C8Cu;
        // 0x4a8c90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8c8c) {
            ctx->pc = 0x4A8C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8c78;
        }
    }
    ctx->pc = 0x4A8C94u;
label_4a8c94:
    // 0x4a8c94: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x4a8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_4a8c98:
    // 0x4a8c98: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4a8c9c:
    if (ctx->pc == 0x4A8C9Cu) {
        ctx->pc = 0x4A8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C98u;
        // 0x4a8c9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CA0u;
        goto label_4a8ca0;
    }
    ctx->pc = 0x4A8C98u;
    {
        const bool branch_taken_0x4a8c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C98u;
        // 0x4a8c9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8c98) {
            ctx->pc = 0x4A8CCCu;
            goto label_4a8ccc;
        }
    }
    ctx->pc = 0x4A8CA0u;
label_4a8ca0:
    // 0x4a8ca0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4a8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a8ca4:
    // 0x4a8ca4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4a8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a8ca8:
    // 0x4a8ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a8cac:
    // 0x4a8cac: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x4a8cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4a8cb0:
    // 0x4a8cb0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4a8cb4:
    if (ctx->pc == 0x4A8CB4u) {
        ctx->pc = 0x4A8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CB0u;
        // 0x4a8cb4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CB8u;
        goto label_4a8cb8;
    }
    ctx->pc = 0x4A8CB0u;
    {
        const bool branch_taken_0x4a8cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CB0u;
        // 0x4a8cb4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8cb0) {
            ctx->pc = 0x4A8CCCu;
            goto label_4a8ccc;
        }
    }
    ctx->pc = 0x4A8CB8u;
label_4a8cb8:
    // 0x4a8cb8: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x4a8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_4a8cbc:
    // 0x4a8cbc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a8cc0:
    // 0x4a8cc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4a8cc4:
    // 0x4a8cc4: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x4a8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
label_4a8cc8:
    // 0x4a8cc8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a8cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8ccc:
    // 0x4a8ccc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a8cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8cd0:
    // 0x4a8cd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a8cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8cd4:
    // 0x4a8cd4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a8cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8cd8:
    // 0x4a8cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8cdc:
    // 0x4a8cdc: 0x3e00008  jr          $ra
label_4a8ce0:
    if (ctx->pc == 0x4A8CE0u) {
        ctx->pc = 0x4A8CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CDCu;
        // 0x4a8ce0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CE4u;
        goto label_4a8ce4;
    }
    ctx->pc = 0x4A8CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CDCu;
        // 0x4a8ce0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8CE4u;
label_4a8ce4:
    // 0x4a8ce4: 0x0  nop
    ctx->pc = 0x4a8ce4u;
    // NOP
label_4a8ce8:
    // 0x4a8ce8: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4a8ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4a8cec:
    // 0x4a8cec: 0x0  nop
    ctx->pc = 0x4a8cecu;
    // NOP
    ctx->pc = 0x4a8cf0u;
}
