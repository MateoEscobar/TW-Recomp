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

// Function: sub_00177B00
// Address: 0x177b00 - 0x177b80
void sub_00177B00_0x177b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B00_0x177b00");
#endif

    switch (ctx->pc) {
        case 0x177b34u: goto label_177b34;
        case 0x177b48u: goto label_177b48;
        case 0x177b64u: goto label_177b64;
        default: break;
    }

    ctx->pc = 0x177b00u;

    // 0x177b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177b04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x177b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x177b08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177b0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x177b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x177b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x177b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x177b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b1c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x177B1Cu;
    {
        const bool branch_taken_0x177b1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B1Cu;
        // 0x177b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b1c) {
            ctx->pc = 0x177B34u;
            goto label_177b34;
        }
    }
    ctx->pc = 0x177B24u;
    // 0x177b24: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177b28: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x177b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177b2c: 0xc05e0ba  jal         func_1782E8
    ctx->pc = 0x177B2Cu;
    SET_GPR_U32(ctx, 31, 0x177B34u);
    ctx->pc = 0x177B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B2Cu;
    // 0x177b30: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1782E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1782E8u, 0x177B2Cu, 0x177B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B34u;
label_177b34:
    // 0x177b34: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b3c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x177b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177b40: 0xc05ba88  jal         func_16EA20
    ctx->pc = 0x177B40u;
    SET_GPR_U32(ctx, 31, 0x177B48u);
    ctx->pc = 0x177B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B40u;
    // 0x177b44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA20u, 0x177B40u, 0x177B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B48u;
label_177b48:
    // 0x177b48: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x177B48u;
    {
        const bool branch_taken_0x177b48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x177b48) {
            ctx->pc = 0x177B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177B48u;
            // 0x177b4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177B68u;
            goto label_177b68;
        }
    }
    ctx->pc = 0x177B50u;
    // 0x177b50: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x177b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177b5c: 0xc063ac4  jal         func_18EB10
    ctx->pc = 0x177B5Cu;
    SET_GPR_U32(ctx, 31, 0x177B64u);
    ctx->pc = 0x177B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B5Cu;
    // 0x177b60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EB10u, 0x177B5Cu, 0x177B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B64u;
label_177b64:
    // 0x177b64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x177b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177b68:
    // 0x177b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x177b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b78: 0x3e00008  jr          $ra
    ctx->pc = 0x177B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B78u;
        // 0x177b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B80u;
}
