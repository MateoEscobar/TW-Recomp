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

// Function: sub_00279A08
// Address: 0x279a08 - 0x279b30
void sub_00279A08_0x279a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279A08_0x279a08");
#endif

    switch (ctx->pc) {
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        case 0x279aa0u: goto label_279aa0;
        case 0x279aa4u: goto label_279aa4;
        case 0x279aa8u: goto label_279aa8;
        case 0x279aacu: goto label_279aac;
        case 0x279ab0u: goto label_279ab0;
        case 0x279ab4u: goto label_279ab4;
        case 0x279ab8u: goto label_279ab8;
        case 0x279abcu: goto label_279abc;
        case 0x279ac0u: goto label_279ac0;
        case 0x279ac4u: goto label_279ac4;
        case 0x279ac8u: goto label_279ac8;
        case 0x279accu: goto label_279acc;
        case 0x279ad0u: goto label_279ad0;
        case 0x279ad4u: goto label_279ad4;
        case 0x279ad8u: goto label_279ad8;
        case 0x279adcu: goto label_279adc;
        case 0x279ae0u: goto label_279ae0;
        case 0x279ae4u: goto label_279ae4;
        case 0x279ae8u: goto label_279ae8;
        case 0x279aecu: goto label_279aec;
        case 0x279af0u: goto label_279af0;
        case 0x279af4u: goto label_279af4;
        case 0x279af8u: goto label_279af8;
        case 0x279afcu: goto label_279afc;
        case 0x279b00u: goto label_279b00;
        case 0x279b04u: goto label_279b04;
        case 0x279b08u: goto label_279b08;
        case 0x279b0cu: goto label_279b0c;
        case 0x279b10u: goto label_279b10;
        case 0x279b14u: goto label_279b14;
        case 0x279b18u: goto label_279b18;
        case 0x279b1cu: goto label_279b1c;
        case 0x279b20u: goto label_279b20;
        case 0x279b24u: goto label_279b24;
        case 0x279b28u: goto label_279b28;
        case 0x279b2cu: goto label_279b2c;
        default: break;
    }

    ctx->pc = 0x279a08u;

label_279a08:
    // 0x279a08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_279a0c:
    // 0x279a0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x279a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_279a10:
    // 0x279a10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x279a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_279a14:
    // 0x279a14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_279a18:
    // 0x279a18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x279a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_279a1c:
    // 0x279a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279a20:
    // 0x279a20: 0xc08a61a  jal         func_229868
label_279a24:
    if (ctx->pc == 0x279A24u) {
        ctx->pc = 0x279A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A20u;
        // 0x279a24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A28u;
        goto label_279a28;
    }
    ctx->pc = 0x279A20u;
    SET_GPR_U32(ctx, 31, 0x279A28u);
    ctx->pc = 0x279A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A20u;
    // 0x279a24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279A20u, 0x279A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A28u;
label_279a28:
    // 0x279a28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279a2c:
    // 0x279a2c: 0xc08a61a  jal         func_229868
label_279a30:
    if (ctx->pc == 0x279A30u) {
        ctx->pc = 0x279A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A2Cu;
        // 0x279a30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A34u;
        goto label_279a34;
    }
    ctx->pc = 0x279A2Cu;
    SET_GPR_U32(ctx, 31, 0x279A34u);
    ctx->pc = 0x279A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A2Cu;
    // 0x279a30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279A2Cu, 0x279A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A34u;
label_279a34:
    // 0x279a34: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_279a38:
    if (ctx->pc == 0x279A38u) {
        ctx->pc = 0x279A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A34u;
        // 0x279a38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A3Cu;
        goto label_279a3c;
    }
    ctx->pc = 0x279A34u;
    {
        const bool branch_taken_0x279a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A34u;
        // 0x279a38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a34) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x279A3Cu;
label_279a3c:
    // 0x279a3c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_279a40:
    if (ctx->pc == 0x279A40u) {
        ctx->pc = 0x279A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A3Cu;
        // 0x279a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A44u;
        goto label_279a44;
    }
    ctx->pc = 0x279A3Cu;
    {
        const bool branch_taken_0x279a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A3Cu;
        // 0x279a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a3c) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279A44u;
label_279a44:
    // 0x279a44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x279a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279a48:
    // 0x279a48: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279a4c:
    // 0x279a4c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279a50:
    // 0x279a50: 0x40f809  jalr        $v0
label_279a54:
    if (ctx->pc == 0x279A54u) {
        ctx->pc = 0x279A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A50u;
        // 0x279a54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A58u;
        goto label_279a58;
    }
    ctx->pc = 0x279A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279A58u);
        ctx->pc = 0x279A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A50u;
        // 0x279a54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A50u, 0x279A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279A58u;
label_279a58:
    // 0x279a58: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_279a5c:
    if (ctx->pc == 0x279A5Cu) {
        ctx->pc = 0x279A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A58u;
        // 0x279a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A60u;
        goto label_279a60;
    }
    ctx->pc = 0x279A58u;
    {
        const bool branch_taken_0x279a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A58u;
        // 0x279a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a58) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279A60u;
label_279a60:
    // 0x279a60: 0xc089f5e  jal         func_227D78
label_279a64:
    if (ctx->pc == 0x279A64u) {
        ctx->pc = 0x279A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A60u;
        // 0x279a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A68u;
        goto label_279a68;
    }
    ctx->pc = 0x279A60u;
    SET_GPR_U32(ctx, 31, 0x279A68u);
    ctx->pc = 0x279A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A60u;
    // 0x279a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279A60u, 0x279A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A68u;
label_279a68:
    // 0x279a68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_279a6c:
    if (ctx->pc == 0x279A6Cu) {
        ctx->pc = 0x279A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A68u;
        // 0x279a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A70u;
        goto label_279a70;
    }
    ctx->pc = 0x279A68u;
    {
        const bool branch_taken_0x279a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A68u;
        // 0x279a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a68) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x279A70u;
label_279a70:
    // 0x279a70: 0xc088aa4  jal         func_222A90
label_279a74:
    if (ctx->pc == 0x279A74u) {
        ctx->pc = 0x279A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A70u;
        // 0x279a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A78u;
        goto label_279a78;
    }
    ctx->pc = 0x279A70u;
    SET_GPR_U32(ctx, 31, 0x279A78u);
    ctx->pc = 0x279A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A70u;
    // 0x279a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279A70u, 0x279A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A78u;
label_279a78:
    // 0x279a78: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_279a7c:
    if (ctx->pc == 0x279A7Cu) {
        ctx->pc = 0x279A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A78u;
        // 0x279a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A80u;
        goto label_279a80;
    }
    ctx->pc = 0x279A78u;
    {
        const bool branch_taken_0x279a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A78u;
        // 0x279a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a78) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279A80u;
label_279a80:
    // 0x279a80: 0xc087502  jal         func_21D408
label_279a84:
    if (ctx->pc == 0x279A84u) {
        ctx->pc = 0x279A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A80u;
        // 0x279a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A88u;
        goto label_279a88;
    }
    ctx->pc = 0x279A80u;
    SET_GPR_U32(ctx, 31, 0x279A88u);
    ctx->pc = 0x279A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A80u;
    // 0x279a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279A80u, 0x279A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A88u;
label_279a88:
    // 0x279a88: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279a8c:
    // 0x279a8c: 0xc087502  jal         func_21D408
label_279a90:
    if (ctx->pc == 0x279A90u) {
        ctx->pc = 0x279A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A8Cu;
        // 0x279a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A94u;
        goto label_279a94;
    }
    ctx->pc = 0x279A8Cu;
    SET_GPR_U32(ctx, 31, 0x279A94u);
    ctx->pc = 0x279A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A8Cu;
    // 0x279a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279A8Cu, 0x279A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A94u;
label_279a94:
    // 0x279a94: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x279a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279a98:
    // 0x279a98: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_279a9c:
    if (ctx->pc == 0x279A9Cu) {
        ctx->pc = 0x279A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A98u;
        // 0x279a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AA0u;
        goto label_279aa0;
    }
    ctx->pc = 0x279A98u;
    {
        const bool branch_taken_0x279a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x279A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A98u;
        // 0x279a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a98) {
            ctx->pc = 0x279AC4u;
            goto label_279ac4;
        }
    }
    ctx->pc = 0x279AA0u;
label_279aa0:
    // 0x279aa0: 0xc08a684  jal         func_229A10
label_279aa4:
    if (ctx->pc == 0x279AA4u) {
        ctx->pc = 0x279AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AA0u;
        // 0x279aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AA8u;
        goto label_279aa8;
    }
    ctx->pc = 0x279AA0u;
    SET_GPR_U32(ctx, 31, 0x279AA8u);
    ctx->pc = 0x279AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AA0u;
    // 0x279aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279AA0u, 0x279AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AA8u;
label_279aa8:
    // 0x279aa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279aac:
    // 0x279aac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279aacu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279ab0:
    // 0x279ab0: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279ab4:
    // 0x279ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279ab8:
    // 0x279ab8: 0x0  nop
    ctx->pc = 0x279ab8u;
    // NOP
label_279abc:
    // 0x279abc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279ac0:
    if (ctx->pc == 0x279AC0u) {
        ctx->pc = 0x279AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ABCu;
        // 0x279ac0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AC4u;
        goto label_279ac4;
    }
    ctx->pc = 0x279ABCu;
    {
        const bool branch_taken_0x279abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ABCu;
        // 0x279ac0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279abc) {
            ctx->pc = 0x279ACCu;
            goto label_279acc;
        }
    }
    ctx->pc = 0x279AC4u;
label_279ac4:
    // 0x279ac4: 0x10000013  b           . + 4 + (0x13 << 2)
label_279ac8:
    if (ctx->pc == 0x279AC8u) {
        ctx->pc = 0x279AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AC4u;
        // 0x279ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279ACCu;
        goto label_279acc;
    }
    ctx->pc = 0x279AC4u;
    {
        const bool branch_taken_0x279ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AC4u;
        // 0x279ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac4) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279ACCu;
label_279acc:
    // 0x279acc: 0xc089fac  jal         func_227EB0
label_279ad0:
    if (ctx->pc == 0x279AD0u) {
        ctx->pc = 0x279AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ACCu;
        // 0x279ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AD4u;
        goto label_279ad4;
    }
    ctx->pc = 0x279ACCu;
    SET_GPR_U32(ctx, 31, 0x279AD4u);
    ctx->pc = 0x279AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279ACCu;
    // 0x279ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x279ACCu, 0x279AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AD4u;
label_279ad4:
    // 0x279ad4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_279ad8:
    if (ctx->pc == 0x279AD8u) {
        ctx->pc = 0x279AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AD4u;
        // 0x279ad8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279ADCu;
        goto label_279adc;
    }
    ctx->pc = 0x279AD4u;
    {
        const bool branch_taken_0x279ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AD4u;
        // 0x279ad8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ad4) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279ADCu;
label_279adc:
    // 0x279adc: 0xc088f04  jal         func_223C10
label_279ae0:
    if (ctx->pc == 0x279AE0u) {
        ctx->pc = 0x279AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ADCu;
        // 0x279ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AE4u;
        goto label_279ae4;
    }
    ctx->pc = 0x279ADCu;
    SET_GPR_U32(ctx, 31, 0x279AE4u);
    ctx->pc = 0x279AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279ADCu;
    // 0x279ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279ADCu, 0x279AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AE4u;
label_279ae4:
    // 0x279ae4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_279ae8:
    if (ctx->pc == 0x279AE8u) {
        ctx->pc = 0x279AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AE4u;
        // 0x279ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AECu;
        goto label_279aec;
    }
    ctx->pc = 0x279AE4u;
    {
        const bool branch_taken_0x279ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AE4u;
        // 0x279ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ae4) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279AECu;
label_279aec:
    // 0x279aec: 0xc089fe4  jal         func_227F90
label_279af0:
    if (ctx->pc == 0x279AF0u) {
        ctx->pc = 0x279AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AECu;
        // 0x279af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AF4u;
        goto label_279af4;
    }
    ctx->pc = 0x279AECu;
    SET_GPR_U32(ctx, 31, 0x279AF4u);
    ctx->pc = 0x279AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AECu;
    // 0x279af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x279AECu, 0x279AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AF4u;
label_279af4:
    // 0x279af4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_279af8:
    if (ctx->pc == 0x279AF8u) {
        ctx->pc = 0x279AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AF4u;
        // 0x279af8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AFCu;
        goto label_279afc;
    }
    ctx->pc = 0x279AF4u;
    {
        const bool branch_taken_0x279af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AF4u;
        // 0x279af8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279af4) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279AFCu;
label_279afc:
    // 0x279afc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x279afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_279b00:
    // 0x279b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279b04:
    // 0x279b04: 0xc089998  jal         func_226660
label_279b08:
    if (ctx->pc == 0x279B08u) {
        ctx->pc = 0x279B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B04u;
        // 0x279b08: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B0Cu;
        goto label_279b0c;
    }
    ctx->pc = 0x279B04u;
    SET_GPR_U32(ctx, 31, 0x279B0Cu);
    ctx->pc = 0x279B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B04u;
    // 0x279b08: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x279B04u, 0x279B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B0Cu;
label_279b0c:
    // 0x279b0c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x279b0cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279b10:
    // 0x279b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279b14:
    // 0x279b14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x279b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_279b18:
    // 0x279b18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x279b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279b1c:
    // 0x279b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279b20:
    // 0x279b20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x279b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279b24:
    // 0x279b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279b28:
    // 0x279b28: 0x3e00008  jr          $ra
label_279b2c:
    if (ctx->pc == 0x279B2Cu) {
        ctx->pc = 0x279B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B28u;
        // 0x279b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B30u;
        goto label_fallthrough_0x279b28;
    }
    ctx->pc = 0x279B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B28u;
        // 0x279b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279b28:
    ctx->pc = 0x279B30u;
}
