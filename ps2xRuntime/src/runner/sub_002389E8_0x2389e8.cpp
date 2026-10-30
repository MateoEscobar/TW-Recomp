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

// Function: sub_002389E8
// Address: 0x2389e8 - 0x238a88
void sub_002389E8_0x2389e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002389E8_0x2389e8");
#endif

    switch (ctx->pc) {
        case 0x238a08u: goto label_238a08;
        case 0x238a10u: goto label_238a10;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a64u: goto label_238a64;
        case 0x238a70u: goto label_238a70;
        default: break;
    }

    ctx->pc = 0x2389e8u;

    // 0x2389e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2389e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2389ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2389ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2389f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2389f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2389f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2389f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2389f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2389fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2389fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238a00: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238A00u;
    SET_GPR_U32(ctx, 31, 0x238A08u);
    ctx->pc = 0x238A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A00u;
    // 0x238a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238A00u, 0x238A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A08u;
label_238a08:
    // 0x238a08: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238A08u;
    SET_GPR_U32(ctx, 31, 0x238A10u);
    ctx->pc = 0x238A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A08u;
    // 0x238a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238A08u, 0x238A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A10u;
label_238a10:
    // 0x238a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a14: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x238A14u;
    {
        const bool branch_taken_0x238a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a14) {
            ctx->pc = 0x238A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A14u;
            // 0x238a18: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A1Cu;
    // 0x238a1c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x238a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x238a20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x238A20u;
    {
        const bool branch_taken_0x238a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a20) {
            ctx->pc = 0x238A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A20u;
            // 0x238a24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A28u;
    // 0x238a28: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x238a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x238a2c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x238A2Cu;
    {
        const bool branch_taken_0x238a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a2c) {
            ctx->pc = 0x238A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A2Cu;
            // 0x238a30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A34u;
    // 0x238a34: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x238A34u;
    SET_GPR_U32(ctx, 31, 0x238A3Cu);
    ctx->pc = 0x238A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A34u;
    // 0x238a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x238A34u, 0x238A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A3Cu;
label_238a3c:
    // 0x238a3c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x238A3Cu;
    {
        const bool branch_taken_0x238a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a3c) {
            ctx->pc = 0x238A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A3Cu;
            // 0x238a40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A44u;
    // 0x238a44: 0xc089f86  jal         func_227E18
    ctx->pc = 0x238A44u;
    SET_GPR_U32(ctx, 31, 0x238A4Cu);
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A44u;
    // 0x238a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x238A44u, 0x238A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x238A4Cu;
    {
        const bool branch_taken_0x238a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a4c) {
            ctx->pc = 0x238A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A4Cu;
            // 0x238a50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A54u;
    // 0x238a54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a58: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x238a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x238a5c: 0xc08e1d2  jal         func_238748
    ctx->pc = 0x238A5Cu;
    SET_GPR_U32(ctx, 31, 0x238A64u);
    ctx->pc = 0x238A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A5Cu;
    // 0x238a60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x238A5Cu, 0x238A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A64u;
label_238a64:
    // 0x238a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a68: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x238A68u;
    SET_GPR_U32(ctx, 31, 0x238A70u);
    ctx->pc = 0x238A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A68u;
    // 0x238a6c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238A68u, 0x238A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A70u;
label_238a70:
    // 0x238a70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238a74:
    // 0x238a74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x238A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A7Cu;
        // 0x238a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A84u;
    // 0x238a84: 0x0  nop
    ctx->pc = 0x238a84u;
    // NOP
    ctx->pc = 0x238a88u;
}
