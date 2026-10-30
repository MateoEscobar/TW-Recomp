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

// Function: sub_003E1A08
// Address: 0x3e1a08 - 0x3e1c28
void sub_003E1A08_0x3e1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1A08_0x3e1a08");
#endif

    switch (ctx->pc) {
        case 0x3e1a08u: goto label_3e1a08;
        case 0x3e1a0cu: goto label_3e1a0c;
        case 0x3e1a10u: goto label_3e1a10;
        case 0x3e1a14u: goto label_3e1a14;
        case 0x3e1a18u: goto label_3e1a18;
        case 0x3e1a1cu: goto label_3e1a1c;
        case 0x3e1a20u: goto label_3e1a20;
        case 0x3e1a24u: goto label_3e1a24;
        case 0x3e1a28u: goto label_3e1a28;
        case 0x3e1a2cu: goto label_3e1a2c;
        case 0x3e1a30u: goto label_3e1a30;
        case 0x3e1a34u: goto label_3e1a34;
        case 0x3e1a38u: goto label_3e1a38;
        case 0x3e1a3cu: goto label_3e1a3c;
        case 0x3e1a40u: goto label_3e1a40;
        case 0x3e1a44u: goto label_3e1a44;
        case 0x3e1a48u: goto label_3e1a48;
        case 0x3e1a4cu: goto label_3e1a4c;
        case 0x3e1a50u: goto label_3e1a50;
        case 0x3e1a54u: goto label_3e1a54;
        case 0x3e1a58u: goto label_3e1a58;
        case 0x3e1a5cu: goto label_3e1a5c;
        case 0x3e1a60u: goto label_3e1a60;
        case 0x3e1a64u: goto label_3e1a64;
        case 0x3e1a68u: goto label_3e1a68;
        case 0x3e1a6cu: goto label_3e1a6c;
        case 0x3e1a70u: goto label_3e1a70;
        case 0x3e1a74u: goto label_3e1a74;
        case 0x3e1a78u: goto label_3e1a78;
        case 0x3e1a7cu: goto label_3e1a7c;
        case 0x3e1a80u: goto label_3e1a80;
        case 0x3e1a84u: goto label_3e1a84;
        case 0x3e1a88u: goto label_3e1a88;
        case 0x3e1a8cu: goto label_3e1a8c;
        case 0x3e1a90u: goto label_3e1a90;
        case 0x3e1a94u: goto label_3e1a94;
        case 0x3e1a98u: goto label_3e1a98;
        case 0x3e1a9cu: goto label_3e1a9c;
        case 0x3e1aa0u: goto label_3e1aa0;
        case 0x3e1aa4u: goto label_3e1aa4;
        case 0x3e1aa8u: goto label_3e1aa8;
        case 0x3e1aacu: goto label_3e1aac;
        case 0x3e1ab0u: goto label_3e1ab0;
        case 0x3e1ab4u: goto label_3e1ab4;
        case 0x3e1ab8u: goto label_3e1ab8;
        case 0x3e1abcu: goto label_3e1abc;
        case 0x3e1ac0u: goto label_3e1ac0;
        case 0x3e1ac4u: goto label_3e1ac4;
        case 0x3e1ac8u: goto label_3e1ac8;
        case 0x3e1accu: goto label_3e1acc;
        case 0x3e1ad0u: goto label_3e1ad0;
        case 0x3e1ad4u: goto label_3e1ad4;
        case 0x3e1ad8u: goto label_3e1ad8;
        case 0x3e1adcu: goto label_3e1adc;
        case 0x3e1ae0u: goto label_3e1ae0;
        case 0x3e1ae4u: goto label_3e1ae4;
        case 0x3e1ae8u: goto label_3e1ae8;
        case 0x3e1aecu: goto label_3e1aec;
        case 0x3e1af0u: goto label_3e1af0;
        case 0x3e1af4u: goto label_3e1af4;
        case 0x3e1af8u: goto label_3e1af8;
        case 0x3e1afcu: goto label_3e1afc;
        case 0x3e1b00u: goto label_3e1b00;
        case 0x3e1b04u: goto label_3e1b04;
        case 0x3e1b08u: goto label_3e1b08;
        case 0x3e1b0cu: goto label_3e1b0c;
        case 0x3e1b10u: goto label_3e1b10;
        case 0x3e1b14u: goto label_3e1b14;
        case 0x3e1b18u: goto label_3e1b18;
        case 0x3e1b1cu: goto label_3e1b1c;
        case 0x3e1b20u: goto label_3e1b20;
        case 0x3e1b24u: goto label_3e1b24;
        case 0x3e1b28u: goto label_3e1b28;
        case 0x3e1b2cu: goto label_3e1b2c;
        case 0x3e1b30u: goto label_3e1b30;
        case 0x3e1b34u: goto label_3e1b34;
        case 0x3e1b38u: goto label_3e1b38;
        case 0x3e1b3cu: goto label_3e1b3c;
        case 0x3e1b40u: goto label_3e1b40;
        case 0x3e1b44u: goto label_3e1b44;
        case 0x3e1b48u: goto label_3e1b48;
        case 0x3e1b4cu: goto label_3e1b4c;
        case 0x3e1b50u: goto label_3e1b50;
        case 0x3e1b54u: goto label_3e1b54;
        case 0x3e1b58u: goto label_3e1b58;
        case 0x3e1b5cu: goto label_3e1b5c;
        case 0x3e1b60u: goto label_3e1b60;
        case 0x3e1b64u: goto label_3e1b64;
        case 0x3e1b68u: goto label_3e1b68;
        case 0x3e1b6cu: goto label_3e1b6c;
        case 0x3e1b70u: goto label_3e1b70;
        case 0x3e1b74u: goto label_3e1b74;
        case 0x3e1b78u: goto label_3e1b78;
        case 0x3e1b7cu: goto label_3e1b7c;
        case 0x3e1b80u: goto label_3e1b80;
        case 0x3e1b84u: goto label_3e1b84;
        case 0x3e1b88u: goto label_3e1b88;
        case 0x3e1b8cu: goto label_3e1b8c;
        case 0x3e1b90u: goto label_3e1b90;
        case 0x3e1b94u: goto label_3e1b94;
        case 0x3e1b98u: goto label_3e1b98;
        case 0x3e1b9cu: goto label_3e1b9c;
        case 0x3e1ba0u: goto label_3e1ba0;
        case 0x3e1ba4u: goto label_3e1ba4;
        case 0x3e1ba8u: goto label_3e1ba8;
        case 0x3e1bacu: goto label_3e1bac;
        case 0x3e1bb0u: goto label_3e1bb0;
        case 0x3e1bb4u: goto label_3e1bb4;
        case 0x3e1bb8u: goto label_3e1bb8;
        case 0x3e1bbcu: goto label_3e1bbc;
        case 0x3e1bc0u: goto label_3e1bc0;
        case 0x3e1bc4u: goto label_3e1bc4;
        case 0x3e1bc8u: goto label_3e1bc8;
        case 0x3e1bccu: goto label_3e1bcc;
        case 0x3e1bd0u: goto label_3e1bd0;
        case 0x3e1bd4u: goto label_3e1bd4;
        case 0x3e1bd8u: goto label_3e1bd8;
        case 0x3e1bdcu: goto label_3e1bdc;
        case 0x3e1be0u: goto label_3e1be0;
        case 0x3e1be4u: goto label_3e1be4;
        case 0x3e1be8u: goto label_3e1be8;
        case 0x3e1becu: goto label_3e1bec;
        case 0x3e1bf0u: goto label_3e1bf0;
        case 0x3e1bf4u: goto label_3e1bf4;
        case 0x3e1bf8u: goto label_3e1bf8;
        case 0x3e1bfcu: goto label_3e1bfc;
        case 0x3e1c00u: goto label_3e1c00;
        case 0x3e1c04u: goto label_3e1c04;
        case 0x3e1c08u: goto label_3e1c08;
        case 0x3e1c0cu: goto label_3e1c0c;
        case 0x3e1c10u: goto label_3e1c10;
        case 0x3e1c14u: goto label_3e1c14;
        case 0x3e1c18u: goto label_3e1c18;
        case 0x3e1c1cu: goto label_3e1c1c;
        case 0x3e1c20u: goto label_3e1c20;
        case 0x3e1c24u: goto label_3e1c24;
        default: break;
    }

    ctx->pc = 0x3e1a08u;

label_3e1a08:
    // 0x3e1a08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e1a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3e1a0c:
    // 0x3e1a0c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3e1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3e1a10:
    // 0x3e1a10: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3e1a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3e1a14:
    // 0x3e1a14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1a18:
    // 0x3e1a18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3e1a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3e1a1c:
    // 0x3e1a1c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3e1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3e1a20:
    // 0x3e1a20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e1a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1a24:
    // 0x3e1a24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3e1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3e1a28:
    // 0x3e1a28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e1a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e1a2c:
    // 0x3e1a2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e1a30:
    // 0x3e1a30: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1a34:
    // 0x3e1a34: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1a38:
    // 0x3e1a38: 0x40f809  jalr        $v0
label_3e1a3c:
    if (ctx->pc == 0x3E1A3Cu) {
        ctx->pc = 0x3E1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A38u;
        // 0x3e1a3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A40u;
        goto label_3e1a40;
    }
    ctx->pc = 0x3E1A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1A40u);
        ctx->pc = 0x3E1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A38u;
        // 0x3e1a3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1A38u, 0x3E1A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1A40u;
label_3e1a40:
    // 0x3e1a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e1a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1a44:
    // 0x3e1a44: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1a48:
    // 0x3e1a48: 0x1202006f  beq         $s0, $v0, . + 4 + (0x6F << 2)
label_3e1a4c:
    if (ctx->pc == 0x3E1A4Cu) {
        ctx->pc = 0x3E1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A48u;
        // 0x3e1a4c: 0x2e020021  sltiu       $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A50u;
        goto label_3e1a50;
    }
    ctx->pc = 0x3E1A48u;
    {
        const bool branch_taken_0x3e1a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A48u;
        // 0x3e1a4c: 0x2e020021  sltiu       $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a48) {
            ctx->pc = 0x3E1C08u;
            goto label_3e1c08;
        }
    }
    ctx->pc = 0x3E1A50u;
label_3e1a50:
    // 0x3e1a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e1a54:
    if (ctx->pc == 0x3E1A54u) {
        ctx->pc = 0x3E1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A50u;
        // 0x3e1a54: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A58u;
        goto label_3e1a58;
    }
    ctx->pc = 0x3E1A50u;
    {
        const bool branch_taken_0x3e1a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A50u;
        // 0x3e1a54: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a50) {
            ctx->pc = 0x3E1A68u;
            goto label_3e1a68;
        }
    }
    ctx->pc = 0x3E1A58u;
label_3e1a58:
    // 0x3e1a58: 0x12020056  beq         $s0, $v0, . + 4 + (0x56 << 2)
label_3e1a5c:
    if (ctx->pc == 0x3E1A5Cu) {
        ctx->pc = 0x3E1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A58u;
        // 0x3e1a5c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A60u;
        goto label_3e1a60;
    }
    ctx->pc = 0x3E1A58u;
    {
        const bool branch_taken_0x3e1a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A58u;
        // 0x3e1a5c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a58) {
            ctx->pc = 0x3E1BB4u;
            goto label_3e1bb4;
        }
    }
    ctx->pc = 0x3E1A60u;
label_3e1a60:
    // 0x3e1a60: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3e1a64:
    if (ctx->pc == 0x3E1A64u) {
        ctx->pc = 0x3E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A60u;
        // 0x3e1a64: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A68u;
        goto label_3e1a68;
    }
    ctx->pc = 0x3E1A60u;
    {
        const bool branch_taken_0x3e1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A60u;
        // 0x3e1a64: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a60) {
            ctx->pc = 0x3E1C10u;
            goto label_3e1c10;
        }
    }
    ctx->pc = 0x3E1A68u;
label_3e1a68:
    // 0x3e1a68: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x3e1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3e1a6c:
    // 0x3e1a6c: 0x16020067  bne         $s0, $v0, . + 4 + (0x67 << 2)
label_3e1a70:
    if (ctx->pc == 0x3E1A70u) {
        ctx->pc = 0x3E1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A6Cu;
        // 0x3e1a70: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A74u;
        goto label_3e1a74;
    }
    ctx->pc = 0x3E1A6Cu;
    {
        const bool branch_taken_0x3e1a6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A6Cu;
        // 0x3e1a70: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a6c) {
            ctx->pc = 0x3E1C0Cu;
            goto label_3e1c0c;
        }
    }
    ctx->pc = 0x3E1A74u;
label_3e1a74:
    // 0x3e1a74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e1a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e1a78:
    // 0x3e1a78: 0xc0ea12a  jal         func_3A84A8
label_3e1a7c:
    if (ctx->pc == 0x3E1A7Cu) {
        ctx->pc = 0x3E1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A78u;
        // 0x3e1a7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A80u;
        goto label_3e1a80;
    }
    ctx->pc = 0x3E1A78u;
    SET_GPR_U32(ctx, 31, 0x3E1A80u);
    ctx->pc = 0x3E1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A78u;
    // 0x3e1a7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E1A78u, 0x3E1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A80u;
label_3e1a80:
    // 0x3e1a80: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3e1a80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e1a84:
    // 0x3e1a84: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e1a88:
    // 0x3e1a88: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3e1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3e1a8c:
    // 0x3e1a8c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x3e1a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3e1a90:
    // 0x3e1a90: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
label_3e1a94:
    if (ctx->pc == 0x3E1A94u) {
        ctx->pc = 0x3E1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A90u;
        // 0x3e1a94: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A98u;
        goto label_3e1a98;
    }
    ctx->pc = 0x3E1A90u;
    {
        const bool branch_taken_0x3e1a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A90u;
        // 0x3e1a94: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a90) {
            ctx->pc = 0x3E1B1Cu;
            goto label_3e1b1c;
        }
    }
    ctx->pc = 0x3E1A98u;
label_3e1a98:
    // 0x3e1a98: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3e1a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3e1a9c:
    // 0x3e1a9c: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3e1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3e1aa0:
    // 0x3e1aa0: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3e1aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_3e1aa4:
    // 0x3e1aa4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e1aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e1aa8:
    // 0x3e1aa8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3e1aa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3e1aac:
    // 0x3e1aac: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3e1aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1ab0:
    // 0x3e1ab0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e1ab0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1ab4:
    // 0x3e1ab4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e1ab4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e1ab8:
    // 0x3e1ab8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e1ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1abc:
    // 0x3e1abc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3e1abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1ac0:
    // 0x3e1ac0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3e1ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1ac4:
    // 0x3e1ac4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e1ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1ac8:
    // 0x3e1ac8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3e1ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1acc:
    // 0x3e1acc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3e1accu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1ad0:
    // 0x3e1ad0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e1ad0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e1ad4:
    // 0x3e1ad4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3e1ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3e1ad8:
    // 0x3e1ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1adc:
    // 0x3e1adc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3e1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3e1ae0:
    // 0x3e1ae0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e1ae4:
    // 0x3e1ae4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3e1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3e1ae8:
    // 0x3e1ae8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e1ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e1aec:
    // 0x3e1aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1af0:
    // 0x3e1af0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3e1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3e1af4:
    // 0x3e1af4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e1af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e1af8:
    // 0x3e1af8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3e1afc:
    // 0x3e1afc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3e1b00:
    // 0x3e1b00: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3e1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_3e1b04:
    // 0x3e1b04: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e1b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1b08:
    // 0x3e1b08: 0xc0f3222  jal         func_3CC888
label_3e1b0c:
    if (ctx->pc == 0x3E1B0Cu) {
        ctx->pc = 0x3E1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B08u;
        // 0x3e1b0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B10u;
        goto label_3e1b10;
    }
    ctx->pc = 0x3E1B08u;
    SET_GPR_U32(ctx, 31, 0x3E1B10u);
    ctx->pc = 0x3E1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1B08u;
    // 0x3e1b0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3E1B08u, 0x3E1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1B10u;
label_3e1b10:
    // 0x3e1b10: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x3e1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
label_3e1b14:
    // 0x3e1b14: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3e1b18:
    if (ctx->pc == 0x3E1B18u) {
        ctx->pc = 0x3E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B14u;
        // 0x3e1b18: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B1Cu;
        goto label_3e1b1c;
    }
    ctx->pc = 0x3E1B14u;
    {
        const bool branch_taken_0x3e1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B14u;
        // 0x3e1b18: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b14) {
            ctx->pc = 0x3E1C08u;
            goto label_3e1c08;
        }
    }
    ctx->pc = 0x3E1B1Cu;
label_3e1b1c:
    // 0x3e1b1c: 0x1602003b  bne         $s0, $v0, . + 4 + (0x3B << 2)
label_3e1b20:
    if (ctx->pc == 0x3E1B20u) {
        ctx->pc = 0x3E1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B1Cu;
        // 0x3e1b20: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B24u;
        goto label_3e1b24;
    }
    ctx->pc = 0x3E1B1Cu;
    {
        const bool branch_taken_0x3e1b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B1Cu;
        // 0x3e1b20: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b1c) {
            ctx->pc = 0x3E1C0Cu;
            goto label_3e1c0c;
        }
    }
    ctx->pc = 0x3E1B24u;
label_3e1b24:
    // 0x3e1b24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3e1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3e1b28:
    // 0x3e1b28: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_3e1b2c:
    if (ctx->pc == 0x3E1B2Cu) {
        ctx->pc = 0x3E1B30u;
        goto label_3e1b30;
    }
    ctx->pc = 0x3E1B28u;
    {
        const bool branch_taken_0x3e1b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1b28) {
            ctx->pc = 0x3E1B7Cu;
            goto label_3e1b7c;
        }
    }
    ctx->pc = 0x3E1B30u;
label_3e1b30:
    // 0x3e1b30: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3e1b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3e1b34:
    // 0x3e1b34: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3e1b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3e1b38:
    // 0x3e1b38: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3e1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_3e1b3c:
    // 0x3e1b3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e1b3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e1b40:
    // 0x3e1b40: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3e1b40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3e1b44:
    // 0x3e1b44: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3e1b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1b48:
    // 0x3e1b48: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e1b48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1b4c:
    // 0x3e1b4c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e1b4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e1b50:
    // 0x3e1b50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e1b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1b54:
    // 0x3e1b54: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3e1b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e1b58:
    // 0x3e1b58: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3e1b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1b5c:
    // 0x3e1b5c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e1b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e1b60:
    // 0x3e1b60: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3e1b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1b64:
    // 0x3e1b64: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3e1b64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e1b68:
    // 0x3e1b68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e1b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e1b6c:
    // 0x3e1b6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3e1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3e1b70:
    // 0x3e1b70: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3e1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3e1b74:
    // 0x3e1b74: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3e1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3e1b78:
    // 0x3e1b78: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e1b7c:
    // 0x3e1b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e1b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e1b80:
    // 0x3e1b80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1b84:
    // 0x3e1b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1b88:
    // 0x3e1b88: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3e1b8c:
    // 0x3e1b8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e1b90:
    // 0x3e1b90: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e1b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e1b94:
    // 0x3e1b94: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3e1b98:
    // 0x3e1b98: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3e1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_3e1b9c:
    // 0x3e1b9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e1b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1ba0:
    // 0x3e1ba0: 0xc0f3222  jal         func_3CC888
label_3e1ba4:
    if (ctx->pc == 0x3E1BA4u) {
        ctx->pc = 0x3E1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BA0u;
        // 0x3e1ba4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BA8u;
        goto label_3e1ba8;
    }
    ctx->pc = 0x3E1BA0u;
    SET_GPR_U32(ctx, 31, 0x3E1BA8u);
    ctx->pc = 0x3E1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BA0u;
    // 0x3e1ba4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3E1BA0u, 0x3E1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BA8u;
label_3e1ba8:
    // 0x3e1ba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1bac:
    // 0x3e1bac: 0x10000015  b           . + 4 + (0x15 << 2)
label_3e1bb0:
    if (ctx->pc == 0x3E1BB0u) {
        ctx->pc = 0x3E1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BACu;
        // 0x3e1bb0: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BB4u;
        goto label_3e1bb4;
    }
    ctx->pc = 0x3E1BACu;
    {
        const bool branch_taken_0x3e1bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BACu;
        // 0x3e1bb0: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bac) {
            ctx->pc = 0x3E1C04u;
            goto label_3e1c04;
        }
    }
    ctx->pc = 0x3E1BB4u;
label_3e1bb4:
    // 0x3e1bb4: 0xc0ea146  jal         func_3A8518
label_3e1bb8:
    if (ctx->pc == 0x3E1BB8u) {
        ctx->pc = 0x3E1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BB4u;
        // 0x3e1bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BBCu;
        goto label_3e1bbc;
    }
    ctx->pc = 0x3E1BB4u;
    SET_GPR_U32(ctx, 31, 0x3E1BBCu);
    ctx->pc = 0x3E1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BB4u;
    // 0x3e1bb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E1BB4u, 0x3E1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BBCu;
label_3e1bbc:
    // 0x3e1bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1bc0:
    // 0x3e1bc0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3e1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3e1bc4:
    // 0x3e1bc4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3e1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e1bc8:
    // 0x3e1bc8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3e1bcc:
    if (ctx->pc == 0x3E1BCCu) {
        ctx->pc = 0x3E1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BC8u;
        // 0x3e1bcc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BD0u;
        goto label_3e1bd0;
    }
    ctx->pc = 0x3E1BC8u;
    {
        const bool branch_taken_0x3e1bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1bc8) {
            ctx->pc = 0x3E1BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1BC8u;
            // 0x3e1bcc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1BE4u;
            goto label_3e1be4;
        }
    }
    ctx->pc = 0x3E1BD0u;
label_3e1bd0:
    // 0x3e1bd0: 0xc0e9132  jal         func_3A44C8
label_3e1bd4:
    if (ctx->pc == 0x3E1BD4u) {
        ctx->pc = 0x3E1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BD0u;
        // 0x3e1bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BD8u;
        goto label_3e1bd8;
    }
    ctx->pc = 0x3E1BD0u;
    SET_GPR_U32(ctx, 31, 0x3E1BD8u);
    ctx->pc = 0x3E1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BD0u;
    // 0x3e1bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E1BD0u, 0x3E1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BD8u;
label_3e1bd8:
    // 0x3e1bd8: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3e1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3e1bdc:
    // 0x3e1bdc: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e1be0:
    if (ctx->pc == 0x3E1BE0u) {
        ctx->pc = 0x3E1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BDCu;
        // 0x3e1be0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BE4u;
        goto label_3e1be4;
    }
    ctx->pc = 0x3E1BDCu;
    {
        const bool branch_taken_0x3e1bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BDCu;
        // 0x3e1be0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bdc) {
            ctx->pc = 0x3E1C04u;
            goto label_3e1c04;
        }
    }
    ctx->pc = 0x3E1BE4u;
label_3e1be4:
    // 0x3e1be4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3e1be8:
    if (ctx->pc == 0x3E1BE8u) {
        ctx->pc = 0x3E1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BE4u;
        // 0x3e1be8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BECu;
        goto label_3e1bec;
    }
    ctx->pc = 0x3E1BE4u;
    {
        const bool branch_taken_0x3e1be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BE4u;
        // 0x3e1be8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1be4) {
            ctx->pc = 0x3E1BF4u;
            goto label_3e1bf4;
        }
    }
    ctx->pc = 0x3E1BECu;
label_3e1bec:
    // 0x3e1bec: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e1bf0:
    if (ctx->pc == 0x3E1BF0u) {
        ctx->pc = 0x3E1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BECu;
        // 0x3e1bf0: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BF4u;
        goto label_3e1bf4;
    }
    ctx->pc = 0x3E1BECu;
    {
        const bool branch_taken_0x3e1bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BECu;
        // 0x3e1bf0: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bec) {
            ctx->pc = 0x3E1C04u;
            goto label_3e1c04;
        }
    }
    ctx->pc = 0x3E1BF4u;
label_3e1bf4:
    // 0x3e1bf4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3e1bf8:
    if (ctx->pc == 0x3E1BF8u) {
        ctx->pc = 0x3E1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BF4u;
        // 0x3e1bf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BFCu;
        goto label_3e1bfc;
    }
    ctx->pc = 0x3E1BF4u;
    {
        const bool branch_taken_0x3e1bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BF4u;
        // 0x3e1bf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1bf4) {
            ctx->pc = 0x3E1C0Cu;
            goto label_3e1c0c;
        }
    }
    ctx->pc = 0x3E1BFCu;
label_3e1bfc:
    // 0x3e1bfc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e1c00:
    // 0x3e1c00: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x3e1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
label_3e1c04:
    // 0x3e1c04: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3e1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3e1c08:
    // 0x3e1c08: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3e1c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e1c0c:
    // 0x3e1c0c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3e1c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e1c10:
    // 0x3e1c10: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3e1c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e1c14:
    // 0x3e1c14: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3e1c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e1c18:
    // 0x3e1c18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e1c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3e1c1c:
    // 0x3e1c1c: 0x3e00008  jr          $ra
label_3e1c20:
    if (ctx->pc == 0x3E1C20u) {
        ctx->pc = 0x3E1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C1Cu;
        // 0x3e1c20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C24u;
        goto label_3e1c24;
    }
    ctx->pc = 0x3E1C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C1Cu;
        // 0x3e1c20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1C24u;
label_3e1c24:
    // 0x3e1c24: 0x0  nop
    ctx->pc = 0x3e1c24u;
    // NOP
    ctx->pc = 0x3e1c28u;
}
