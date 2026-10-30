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

// Function: sub_00470C18
// Address: 0x470c18 - 0x470e10
void sub_00470C18_0x470c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470C18_0x470c18");
#endif

    switch (ctx->pc) {
        case 0x470c18u: goto label_470c18;
        case 0x470c1cu: goto label_470c1c;
        case 0x470c20u: goto label_470c20;
        case 0x470c24u: goto label_470c24;
        case 0x470c28u: goto label_470c28;
        case 0x470c2cu: goto label_470c2c;
        case 0x470c30u: goto label_470c30;
        case 0x470c34u: goto label_470c34;
        case 0x470c38u: goto label_470c38;
        case 0x470c3cu: goto label_470c3c;
        case 0x470c40u: goto label_470c40;
        case 0x470c44u: goto label_470c44;
        case 0x470c48u: goto label_470c48;
        case 0x470c4cu: goto label_470c4c;
        case 0x470c50u: goto label_470c50;
        case 0x470c54u: goto label_470c54;
        case 0x470c58u: goto label_470c58;
        case 0x470c5cu: goto label_470c5c;
        case 0x470c60u: goto label_470c60;
        case 0x470c64u: goto label_470c64;
        case 0x470c68u: goto label_470c68;
        case 0x470c6cu: goto label_470c6c;
        case 0x470c70u: goto label_470c70;
        case 0x470c74u: goto label_470c74;
        case 0x470c78u: goto label_470c78;
        case 0x470c7cu: goto label_470c7c;
        case 0x470c80u: goto label_470c80;
        case 0x470c84u: goto label_470c84;
        case 0x470c88u: goto label_470c88;
        case 0x470c8cu: goto label_470c8c;
        case 0x470c90u: goto label_470c90;
        case 0x470c94u: goto label_470c94;
        case 0x470c98u: goto label_470c98;
        case 0x470c9cu: goto label_470c9c;
        case 0x470ca0u: goto label_470ca0;
        case 0x470ca4u: goto label_470ca4;
        case 0x470ca8u: goto label_470ca8;
        case 0x470cacu: goto label_470cac;
        case 0x470cb0u: goto label_470cb0;
        case 0x470cb4u: goto label_470cb4;
        case 0x470cb8u: goto label_470cb8;
        case 0x470cbcu: goto label_470cbc;
        case 0x470cc0u: goto label_470cc0;
        case 0x470cc4u: goto label_470cc4;
        case 0x470cc8u: goto label_470cc8;
        case 0x470cccu: goto label_470ccc;
        case 0x470cd0u: goto label_470cd0;
        case 0x470cd4u: goto label_470cd4;
        case 0x470cd8u: goto label_470cd8;
        case 0x470cdcu: goto label_470cdc;
        case 0x470ce0u: goto label_470ce0;
        case 0x470ce4u: goto label_470ce4;
        case 0x470ce8u: goto label_470ce8;
        case 0x470cecu: goto label_470cec;
        case 0x470cf0u: goto label_470cf0;
        case 0x470cf4u: goto label_470cf4;
        case 0x470cf8u: goto label_470cf8;
        case 0x470cfcu: goto label_470cfc;
        case 0x470d00u: goto label_470d00;
        case 0x470d04u: goto label_470d04;
        case 0x470d08u: goto label_470d08;
        case 0x470d0cu: goto label_470d0c;
        case 0x470d10u: goto label_470d10;
        case 0x470d14u: goto label_470d14;
        case 0x470d18u: goto label_470d18;
        case 0x470d1cu: goto label_470d1c;
        case 0x470d20u: goto label_470d20;
        case 0x470d24u: goto label_470d24;
        case 0x470d28u: goto label_470d28;
        case 0x470d2cu: goto label_470d2c;
        case 0x470d30u: goto label_470d30;
        case 0x470d34u: goto label_470d34;
        case 0x470d38u: goto label_470d38;
        case 0x470d3cu: goto label_470d3c;
        case 0x470d40u: goto label_470d40;
        case 0x470d44u: goto label_470d44;
        case 0x470d48u: goto label_470d48;
        case 0x470d4cu: goto label_470d4c;
        case 0x470d50u: goto label_470d50;
        case 0x470d54u: goto label_470d54;
        case 0x470d58u: goto label_470d58;
        case 0x470d5cu: goto label_470d5c;
        case 0x470d60u: goto label_470d60;
        case 0x470d64u: goto label_470d64;
        case 0x470d68u: goto label_470d68;
        case 0x470d6cu: goto label_470d6c;
        case 0x470d70u: goto label_470d70;
        case 0x470d74u: goto label_470d74;
        case 0x470d78u: goto label_470d78;
        case 0x470d7cu: goto label_470d7c;
        case 0x470d80u: goto label_470d80;
        case 0x470d84u: goto label_470d84;
        case 0x470d88u: goto label_470d88;
        case 0x470d8cu: goto label_470d8c;
        case 0x470d90u: goto label_470d90;
        case 0x470d94u: goto label_470d94;
        case 0x470d98u: goto label_470d98;
        case 0x470d9cu: goto label_470d9c;
        case 0x470da0u: goto label_470da0;
        case 0x470da4u: goto label_470da4;
        case 0x470da8u: goto label_470da8;
        case 0x470dacu: goto label_470dac;
        case 0x470db0u: goto label_470db0;
        case 0x470db4u: goto label_470db4;
        case 0x470db8u: goto label_470db8;
        case 0x470dbcu: goto label_470dbc;
        case 0x470dc0u: goto label_470dc0;
        case 0x470dc4u: goto label_470dc4;
        case 0x470dc8u: goto label_470dc8;
        case 0x470dccu: goto label_470dcc;
        case 0x470dd0u: goto label_470dd0;
        case 0x470dd4u: goto label_470dd4;
        case 0x470dd8u: goto label_470dd8;
        case 0x470ddcu: goto label_470ddc;
        case 0x470de0u: goto label_470de0;
        case 0x470de4u: goto label_470de4;
        case 0x470de8u: goto label_470de8;
        case 0x470decu: goto label_470dec;
        case 0x470df0u: goto label_470df0;
        case 0x470df4u: goto label_470df4;
        case 0x470df8u: goto label_470df8;
        case 0x470dfcu: goto label_470dfc;
        case 0x470e00u: goto label_470e00;
        case 0x470e04u: goto label_470e04;
        case 0x470e08u: goto label_470e08;
        case 0x470e0cu: goto label_470e0c;
        default: break;
    }

    ctx->pc = 0x470c18u;

label_470c18:
    // 0x470c18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x470c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_470c1c:
    // 0x470c1c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x470c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_470c20:
    // 0x470c20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x470c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_470c24:
    // 0x470c24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x470c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_470c28:
    // 0x470c28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x470c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_470c2c:
    // 0x470c2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x470c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_470c30:
    // 0x470c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x470c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_470c34:
    // 0x470c34: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x470c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_470c38:
    // 0x470c38: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x470c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_470c3c:
    // 0x470c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470c40:
    // 0x470c40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x470c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_470c44:
    // 0x470c44: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
label_470c48:
    if (ctx->pc == 0x470C48u) {
        ctx->pc = 0x470C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C44u;
        // 0x470c48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C4Cu;
        goto label_470c4c;
    }
    ctx->pc = 0x470C44u;
    {
        const bool branch_taken_0x470c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x470C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C44u;
        // 0x470c48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c44) {
            ctx->pc = 0x470D9Cu;
            goto label_470d9c;
        }
    }
    ctx->pc = 0x470C4Cu;
label_470c4c:
    // 0x470c4c: 0x54620059  bnel        $v1, $v0, . + 4 + (0x59 << 2)
label_470c50:
    if (ctx->pc == 0x470C50u) {
        ctx->pc = 0x470C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C4Cu;
        // 0x470c50: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C54u;
        goto label_470c54;
    }
    ctx->pc = 0x470C4Cu;
    {
        const bool branch_taken_0x470c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x470c4c) {
            ctx->pc = 0x470C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470C4Cu;
            // 0x470c50: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470DB4u;
            goto label_470db4;
        }
    }
    ctx->pc = 0x470C54u;
label_470c54:
    // 0x470c54: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x470c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_470c58:
    // 0x470c58: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_470c5c:
    if (ctx->pc == 0x470C5Cu) {
        ctx->pc = 0x470C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C58u;
        // 0x470c5c: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C60u;
        goto label_470c60;
    }
    ctx->pc = 0x470C58u;
    {
        const bool branch_taken_0x470c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c58) {
            ctx->pc = 0x470C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470C58u;
            // 0x470c5c: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470C6Cu;
            goto label_470c6c;
        }
    }
    ctx->pc = 0x470C60u;
label_470c60:
    // 0x470c60: 0xc11fa54  jal         func_47E950
label_470c64:
    if (ctx->pc == 0x470C64u) {
        ctx->pc = 0x470C68u;
        goto label_470c68;
    }
    ctx->pc = 0x470C60u;
    SET_GPR_U32(ctx, 31, 0x470C68u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x470C60u, 0x470C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470C68u;
label_470c68:
    // 0x470c68: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x470c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_470c6c:
    // 0x470c6c: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x470c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_470c70:
    // 0x470c70: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x470c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_470c74:
    // 0x470c74: 0x3c140071  lui         $s4, 0x71
    ctx->pc = 0x470c74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
label_470c78:
    // 0x470c78: 0x12120007  beq         $s0, $s2, . + 4 + (0x7 << 2)
label_470c7c:
    if (ctx->pc == 0x470C7Cu) {
        ctx->pc = 0x470C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C78u;
        // 0x470c7c: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C80u;
        goto label_470c80;
    }
    ctx->pc = 0x470C78u;
    {
        const bool branch_taken_0x470c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x470C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C78u;
        // 0x470c7c: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c78) {
            ctx->pc = 0x470C98u;
            goto label_470c98;
        }
    }
    ctx->pc = 0x470C80u;
label_470c80:
    // 0x470c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470c84:
    // 0x470c84: 0x0  nop
    ctx->pc = 0x470c84u;
    // NOP
label_470c88:
    // 0x470c88: 0xc11cc70  jal         func_4731C0
label_470c8c:
    if (ctx->pc == 0x470C8Cu) {
        ctx->pc = 0x470C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C88u;
        // 0x470c8c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C90u;
        goto label_470c90;
    }
    ctx->pc = 0x470C88u;
    SET_GPR_U32(ctx, 31, 0x470C90u);
    ctx->pc = 0x470C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470C88u;
    // 0x470c8c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4731C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731C0u, 0x470C88u, 0x470C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470C90u;
label_470c90:
    // 0x470c90: 0x1612fffd  bne         $s0, $s2, . + 4 + (-0x3 << 2)
label_470c94:
    if (ctx->pc == 0x470C94u) {
        ctx->pc = 0x470C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C90u;
        // 0x470c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470C98u;
        goto label_470c98;
    }
    ctx->pc = 0x470C90u;
    {
        const bool branch_taken_0x470c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x470C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C90u;
        // 0x470c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c90) {
            ctx->pc = 0x470C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470c88;
        }
    }
    ctx->pc = 0x470C98u;
label_470c98:
    // 0x470c98: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x470c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_470c9c:
    // 0x470c9c: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
label_470ca0:
    if (ctx->pc == 0x470CA0u) {
        ctx->pc = 0x470CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C9Cu;
        // 0x470ca0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CA4u;
        goto label_470ca4;
    }
    ctx->pc = 0x470C9Cu;
    {
        const bool branch_taken_0x470c9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x470CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470C9Cu;
        // 0x470ca0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c9c) {
            ctx->pc = 0x470CBCu;
            goto label_470cbc;
        }
    }
    ctx->pc = 0x470CA4u;
label_470ca4:
    // 0x470ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470ca8:
    // 0x470ca8: 0xc11cc90  jal         func_473240
label_470cac:
    if (ctx->pc == 0x470CACu) {
        ctx->pc = 0x470CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CA8u;
        // 0x470cac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CB0u;
        goto label_470cb0;
    }
    ctx->pc = 0x470CA8u;
    SET_GPR_U32(ctx, 31, 0x470CB0u);
    ctx->pc = 0x470CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470CA8u;
    // 0x470cac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473240u, 0x470CA8u, 0x470CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470CB0u;
label_470cb0:
    // 0x470cb0: 0x5613fffd  bnel        $s0, $s3, . + 4 + (-0x3 << 2)
label_470cb4:
    if (ctx->pc == 0x470CB4u) {
        ctx->pc = 0x470CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CB0u;
        // 0x470cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CB8u;
        goto label_470cb8;
    }
    ctx->pc = 0x470CB0u;
    {
        const bool branch_taken_0x470cb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x470cb0) {
            ctx->pc = 0x470CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470CB0u;
            // 0x470cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470ca8;
        }
    }
    ctx->pc = 0x470CB8u;
label_470cb8:
    // 0x470cb8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x470cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_470cbc:
    // 0x470cbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x470cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470cc0:
    // 0x470cc0: 0xc11ffb4  jal         func_47FED0
label_470cc4:
    if (ctx->pc == 0x470CC4u) {
        ctx->pc = 0x470CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CC0u;
        // 0x470cc4: 0x2484e750  addiu       $a0, $a0, -0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CC8u;
        goto label_470cc8;
    }
    ctx->pc = 0x470CC0u;
    SET_GPR_U32(ctx, 31, 0x470CC8u);
    ctx->pc = 0x470CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470CC0u;
    // 0x470cc4: 0x2484e750  addiu       $a0, $a0, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x470CC0u, 0x470CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470CC8u;
label_470cc8:
    // 0x470cc8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x470cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_470ccc:
    // 0x470ccc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470cd0:
    if (ctx->pc == 0x470CD0u) {
        ctx->pc = 0x470CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CCCu;
        // 0x470cd0: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CD4u;
        goto label_470cd4;
    }
    ctx->pc = 0x470CCCu;
    {
        const bool branch_taken_0x470ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CCCu;
        // 0x470cd0: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ccc) {
            ctx->pc = 0x470CE4u;
            goto label_470ce4;
        }
    }
    ctx->pc = 0x470CD4u;
label_470cd4:
    // 0x470cd4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x470cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_470cd8:
    // 0x470cd8: 0x40f809  jalr        $v0
label_470cdc:
    if (ctx->pc == 0x470CDCu) {
        ctx->pc = 0x470CE0u;
        goto label_470ce0;
    }
    ctx->pc = 0x470CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470CE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470CD8u, 0x470CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470CE0u;
label_470ce0:
    // 0x470ce0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x470ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_470ce4:
    // 0x470ce4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x470ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_470ce8:
    // 0x470ce8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470cec:
    if (ctx->pc == 0x470CECu) {
        ctx->pc = 0x470CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CE8u;
        // 0x470cec: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470CF0u;
        goto label_470cf0;
    }
    ctx->pc = 0x470CE8u;
    {
        const bool branch_taken_0x470ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470CE8u;
        // 0x470cec: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ce8) {
            ctx->pc = 0x470D00u;
            goto label_470d00;
        }
    }
    ctx->pc = 0x470CF0u;
label_470cf0:
    // 0x470cf0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x470cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_470cf4:
    // 0x470cf4: 0x40f809  jalr        $v0
label_470cf8:
    if (ctx->pc == 0x470CF8u) {
        ctx->pc = 0x470CFCu;
        goto label_470cfc;
    }
    ctx->pc = 0x470CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470CF4u, 0x470CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470CFCu;
label_470cfc:
    // 0x470cfc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x470cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_470d00:
    // 0x470d00: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x470d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_470d04:
    // 0x470d04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470d08:
    if (ctx->pc == 0x470D08u) {
        ctx->pc = 0x470D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D04u;
        // 0x470d08: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D0Cu;
        goto label_470d0c;
    }
    ctx->pc = 0x470D04u;
    {
        const bool branch_taken_0x470d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D04u;
        // 0x470d08: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d04) {
            ctx->pc = 0x470D1Cu;
            goto label_470d1c;
        }
    }
    ctx->pc = 0x470D0Cu;
label_470d0c:
    // 0x470d0c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x470d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_470d10:
    // 0x470d10: 0x40f809  jalr        $v0
label_470d14:
    if (ctx->pc == 0x470D14u) {
        ctx->pc = 0x470D18u;
        goto label_470d18;
    }
    ctx->pc = 0x470D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470D18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470D10u, 0x470D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470D18u;
label_470d18:
    // 0x470d18: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x470d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_470d1c:
    // 0x470d1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x470d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_470d20:
    // 0x470d20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470d24:
    if (ctx->pc == 0x470D24u) {
        ctx->pc = 0x470D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D20u;
        // 0x470d24: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D28u;
        goto label_470d28;
    }
    ctx->pc = 0x470D20u;
    {
        const bool branch_taken_0x470d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D20u;
        // 0x470d24: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d20) {
            ctx->pc = 0x470D38u;
            goto label_470d38;
        }
    }
    ctx->pc = 0x470D28u;
label_470d28:
    // 0x470d28: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x470d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_470d2c:
    // 0x470d2c: 0x40f809  jalr        $v0
label_470d30:
    if (ctx->pc == 0x470D30u) {
        ctx->pc = 0x470D34u;
        goto label_470d34;
    }
    ctx->pc = 0x470D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470D34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470D2Cu, 0x470D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470D34u;
label_470d34:
    // 0x470d34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x470d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_470d38:
    // 0x470d38: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x470d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_470d3c:
    // 0x470d3c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x470d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_470d40:
    // 0x470d40: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x470d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_470d44:
    // 0x470d44: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x470d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_470d48:
    // 0x470d48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x470d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_470d4c:
    // 0x470d4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470d50:
    if (ctx->pc == 0x470D50u) {
        ctx->pc = 0x470D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D4Cu;
        // 0x470d50: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D54u;
        goto label_470d54;
    }
    ctx->pc = 0x470D4Cu;
    {
        const bool branch_taken_0x470d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D4Cu;
        // 0x470d50: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d4c) {
            ctx->pc = 0x470D64u;
            goto label_470d64;
        }
    }
    ctx->pc = 0x470D54u;
label_470d54:
    // 0x470d54: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x470d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_470d58:
    // 0x470d58: 0x40f809  jalr        $v0
label_470d5c:
    if (ctx->pc == 0x470D5Cu) {
        ctx->pc = 0x470D60u;
        goto label_470d60;
    }
    ctx->pc = 0x470D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470D60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470D58u, 0x470D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470D60u;
label_470d60:
    // 0x470d60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x470d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_470d64:
    // 0x470d64: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
label_470d68:
    if (ctx->pc == 0x470D68u) {
        ctx->pc = 0x470D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D64u;
        // 0x470d68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D6Cu;
        goto label_470d6c;
    }
    ctx->pc = 0x470D64u;
    {
        const bool branch_taken_0x470d64 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x470D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D64u;
        // 0x470d68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d64) {
            ctx->pc = 0x470D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470d48;
        }
    }
    ctx->pc = 0x470D6Cu;
label_470d6c:
    // 0x470d6c: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x470d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_470d70:
    // 0x470d70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_470d74:
    if (ctx->pc == 0x470D74u) {
        ctx->pc = 0x470D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D70u;
        // 0x470d74: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D78u;
        goto label_470d78;
    }
    ctx->pc = 0x470D70u;
    {
        const bool branch_taken_0x470d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D70u;
        // 0x470d74: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d70) {
            ctx->pc = 0x470D88u;
            goto label_470d88;
        }
    }
    ctx->pc = 0x470D78u;
label_470d78:
    // 0x470d78: 0xc11b780  jal         func_46DE00
label_470d7c:
    if (ctx->pc == 0x470D7Cu) {
        ctx->pc = 0x470D80u;
        goto label_470d80;
    }
    ctx->pc = 0x470D78u;
    SET_GPR_U32(ctx, 31, 0x470D80u);
    ctx->pc = 0x46DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE00u, 0x470D78u, 0x470D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470D80u;
label_470d80:
    // 0x470d80: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x470d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_470d84:
    // 0x470d84: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x470d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_470d88:
    // 0x470d88: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x470d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_470d8c:
    // 0x470d8c: 0x40f809  jalr        $v0
label_470d90:
    if (ctx->pc == 0x470D90u) {
        ctx->pc = 0x470D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D8Cu;
        // 0x470d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D94u;
        goto label_470d94;
    }
    ctx->pc = 0x470D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470D94u);
        ctx->pc = 0x470D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D8Cu;
        // 0x470d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470D8Cu, 0x470D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470D94u;
label_470d94:
    // 0x470d94: 0x10000016  b           . + 4 + (0x16 << 2)
label_470d98:
    if (ctx->pc == 0x470D98u) {
        ctx->pc = 0x470D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D94u;
        // 0x470d98: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470D9Cu;
        goto label_470d9c;
    }
    ctx->pc = 0x470D94u;
    {
        const bool branch_taken_0x470d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470D94u;
        // 0x470d98: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470d94) {
            ctx->pc = 0x470DF0u;
            goto label_470df0;
        }
    }
    ctx->pc = 0x470D9Cu;
label_470d9c:
    // 0x470d9c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x470d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_470da0:
    // 0x470da0: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x470da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_470da4:
    // 0x470da4: 0x40f809  jalr        $v0
label_470da8:
    if (ctx->pc == 0x470DA8u) {
        ctx->pc = 0x470DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DA4u;
        // 0x470da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470DACu;
        goto label_470dac;
    }
    ctx->pc = 0x470DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470DACu);
        ctx->pc = 0x470DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DA4u;
        // 0x470da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470DA4u, 0x470DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470DACu;
label_470dac:
    // 0x470dac: 0x10000010  b           . + 4 + (0x10 << 2)
label_470db0:
    if (ctx->pc == 0x470DB0u) {
        ctx->pc = 0x470DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DACu;
        // 0x470db0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470DB4u;
        goto label_470db4;
    }
    ctx->pc = 0x470DACu;
    {
        const bool branch_taken_0x470dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DACu;
        // 0x470db0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470dac) {
            ctx->pc = 0x470DF0u;
            goto label_470df0;
        }
    }
    ctx->pc = 0x470DB4u;
label_470db4:
    // 0x470db4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_470db8:
    if (ctx->pc == 0x470DB8u) {
        ctx->pc = 0x470DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DB4u;
        // 0x470db8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470DBCu;
        goto label_470dbc;
    }
    ctx->pc = 0x470DB4u;
    {
        const bool branch_taken_0x470db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470db4) {
            ctx->pc = 0x470DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470DB4u;
            // 0x470db8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470DC8u;
            goto label_470dc8;
        }
    }
    ctx->pc = 0x470DBCu;
label_470dbc:
    // 0x470dbc: 0xc11c306  jal         func_470C18
label_470dc0:
    if (ctx->pc == 0x470DC0u) {
        ctx->pc = 0x470DC4u;
        goto label_470dc4;
    }
    ctx->pc = 0x470DBCu;
    SET_GPR_U32(ctx, 31, 0x470DC4u);
    ctx->pc = 0x470C18u;
    goto label_470c18;
    ctx->pc = 0x470DC4u;
label_470dc4:
    // 0x470dc4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x470dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_470dc8:
    // 0x470dc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_470dcc:
    if (ctx->pc == 0x470DCCu) {
        ctx->pc = 0x470DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DC8u;
        // 0x470dcc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470DD0u;
        goto label_470dd0;
    }
    ctx->pc = 0x470DC8u;
    {
        const bool branch_taken_0x470dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x470DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DC8u;
        // 0x470dcc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470dc8) {
            ctx->pc = 0x470DD8u;
            goto label_470dd8;
        }
    }
    ctx->pc = 0x470DD0u;
label_470dd0:
    // 0x470dd0: 0xc11c306  jal         func_470C18
label_470dd4:
    if (ctx->pc == 0x470DD4u) {
        ctx->pc = 0x470DD8u;
        goto label_470dd8;
    }
    ctx->pc = 0x470DD0u;
    SET_GPR_U32(ctx, 31, 0x470DD8u);
    ctx->pc = 0x470C18u;
    goto label_470c18;
    ctx->pc = 0x470DD8u;
label_470dd8:
    // 0x470dd8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x470dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_470ddc:
    // 0x470ddc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x470ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_470de0:
    // 0x470de0: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x470de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_470de4:
    // 0x470de4: 0x40f809  jalr        $v0
label_470de8:
    if (ctx->pc == 0x470DE8u) {
        ctx->pc = 0x470DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DE4u;
        // 0x470de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470DECu;
        goto label_470dec;
    }
    ctx->pc = 0x470DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470DECu);
        ctx->pc = 0x470DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470DE4u;
        // 0x470de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470DE4u, 0x470DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470DECu;
label_470dec:
    // 0x470dec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x470decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_470df0:
    // 0x470df0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x470df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_470df4:
    // 0x470df4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x470df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_470df8:
    // 0x470df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x470df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470dfc:
    // 0x470dfc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x470dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_470e00:
    // 0x470e00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x470e00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470e04:
    // 0x470e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470e08:
    // 0x470e08: 0x3e00008  jr          $ra
label_470e0c:
    if (ctx->pc == 0x470E0Cu) {
        ctx->pc = 0x470E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E08u;
        // 0x470e0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E10u;
        goto label_fallthrough_0x470e08;
    }
    ctx->pc = 0x470E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E08u;
        // 0x470e0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x470e08:
    ctx->pc = 0x470E10u;
}
