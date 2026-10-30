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

// Function: sub_004E5C90
// Address: 0x4e5c90 - 0x4e5dd8
void sub_004E5C90_0x4e5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5C90_0x4e5c90");
#endif

    switch (ctx->pc) {
        case 0x4e5ce8u: goto label_4e5ce8;
        case 0x4e5d10u: goto label_4e5d10;
        case 0x4e5d20u: goto label_4e5d20;
        case 0x4e5d28u: goto label_4e5d28;
        case 0x4e5d34u: goto label_4e5d34;
        case 0x4e5da4u: goto label_4e5da4;
        default: break;
    }

    ctx->pc = 0x4e5c90u;

    // 0x4e5c90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4e5c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4e5c94: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4e5c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4e5c98: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4e5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4e5c9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e5c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ca0: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x4e5ca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ca4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4e5ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4e5ca8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e5ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4e5cac: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x4e5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x4e5cb0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4e5cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4e5cb4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4e5cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5cb8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4e5cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4e5cbc: 0x24720002  addiu       $s2, $v1, 0x2
    ctx->pc = 0x4e5cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4e5cc0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4e5cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4e5cc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e5cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5cc8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4e5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4e5ccc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4e5cccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5cd0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4e5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4e5cd4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x4e5cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4e5cd8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4E5CD8u;
    {
        const bool branch_taken_0x4e5cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5CD8u;
        // 0x4e5cdc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5cd8) {
            ctx->pc = 0x4E5D68u;
            goto label_4e5d68;
        }
    }
    ctx->pc = 0x4E5CE0u;
    // 0x4e5ce0: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x4e5ce0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x4e5ce4: 0x0  nop
    ctx->pc = 0x4e5ce4u;
    // NOP
label_4e5ce8:
    // 0x4e5ce8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5cec: 0x8ef0489c  lw          $s0, 0x489C($s7)
    ctx->pc = 0x4e5cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x4e5cf0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5cf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e5cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5cfc: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d04: 0x8c51fffc  lw          $s1, -0x4($v0)
    ctx->pc = 0x4e5d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4e5d08: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5D08u;
    SET_GPR_U32(ctx, 31, 0x4E5D10u);
    ctx->pc = 0x4E5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D08u;
    // 0x4e5d0c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5D08u, 0x4E5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5D10u;
label_4e5d10:
    // 0x4e5d10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d18: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5D18u;
    SET_GPR_U32(ctx, 31, 0x4E5D20u);
    ctx->pc = 0x4E5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D18u;
    // 0x4e5d1c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5D18u, 0x4E5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5D20u;
label_4e5d20:
    // 0x4e5d20: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5D20u;
    SET_GPR_U32(ctx, 31, 0x4E5D28u);
    ctx->pc = 0x4E5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D20u;
    // 0x4e5d24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5D20u, 0x4E5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5D28u;
label_4e5d28:
    // 0x4e5d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e5d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d2c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5D2Cu;
    SET_GPR_U32(ctx, 31, 0x4E5D34u);
    ctx->pc = 0x4E5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D2Cu;
    // 0x4e5d30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5D2Cu, 0x4E5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5D34u;
label_4e5d34:
    // 0x4e5d34: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e5d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e5d38: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x4e5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4e5d3c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4e5d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e5d40: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x4e5d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4e5d44: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5d48: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4e5d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5d50: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x4e5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4e5d54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5d58: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x4e5d58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e5d5c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x4e5d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4e5d60: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4E5D60u;
    {
        const bool branch_taken_0x4e5d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5D60u;
        // 0x4e5d64: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d60) {
            ctx->pc = 0x4E5CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5ce8;
        }
    }
    ctx->pc = 0x4E5D68u;
label_4e5d68:
    // 0x4e5d68: 0x16550009  bne         $s2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E5D68u;
    {
        const bool branch_taken_0x4e5d68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x4E5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5D68u;
        // 0x4e5d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d68) {
            ctx->pc = 0x4E5D90u;
            goto label_4e5d90;
        }
    }
    ctx->pc = 0x4E5D70u;
    // 0x4e5d70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5d74: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4e5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4e5d78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5d7c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4e5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4e5d80: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x4e5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4e5d84: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x4e5d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4e5d88: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4e5d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4e5d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e5d90:
    // 0x4e5d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e5d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e5d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d98: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x4e5d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d9c: 0xc1396de  jal         func_4E5B78
    ctx->pc = 0x4E5D9Cu;
    SET_GPR_U32(ctx, 31, 0x4E5DA4u);
    ctx->pc = 0x4E5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5D9Cu;
    // 0x4e5da0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5B78u, 0x4E5D9Cu, 0x4E5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5DA4u;
label_4e5da4:
    // 0x4e5da4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4e5da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4e5da8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4e5da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4e5dac: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4e5dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e5db0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4e5db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e5db4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4e5db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e5db8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e5db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5dbc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4e5dbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5dc0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4e5dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5dc4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4e5dc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e5dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5DCCu;
        // 0x4e5dd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5DD4u;
    // 0x4e5dd4: 0x0  nop
    ctx->pc = 0x4e5dd4u;
    // NOP
    ctx->pc = 0x4e5dd8u;
}
