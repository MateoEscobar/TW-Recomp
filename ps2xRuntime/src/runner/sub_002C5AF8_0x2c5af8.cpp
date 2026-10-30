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

// Function: sub_002C5AF8
// Address: 0x2c5af8 - 0x2c5b68
void sub_002C5AF8_0x2c5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5AF8_0x2c5af8");
#endif

    switch (ctx->pc) {
        case 0x2c5b20u: goto label_2c5b20;
        case 0x2c5b3cu: goto label_2c5b3c;
        case 0x2c5b48u: goto label_2c5b48;
        default: break;
    }

    ctx->pc = 0x2c5af8u;

    // 0x2c5af8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c5afc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c5afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c5b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5b04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c5b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2c5b0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c5b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c5b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5b18: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C5B18u;
    SET_GPR_U32(ctx, 31, 0x2C5B20u);
    ctx->pc = 0x2C5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B18u;
    // 0x2c5b1c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C5B18u, 0x2C5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B20u;
label_2c5b20:
    // 0x2c5b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b24: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5B24u;
    {
        const bool branch_taken_0x2c5b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B24u;
        // 0x2c5b28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b24) {
            ctx->pc = 0x2C5B3Cu;
            goto label_2c5b3c;
        }
    }
    ctx->pc = 0x2C5B2Cu;
    // 0x2c5b2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c5b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b34: 0xc0b16da  jal         func_2C5B68
    ctx->pc = 0x2C5B34u;
    SET_GPR_U32(ctx, 31, 0x2C5B3Cu);
    ctx->pc = 0x2C5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B34u;
    // 0x2c5b38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B68u, 0x2C5B34u, 0x2C5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B3Cu;
label_2c5b3c:
    // 0x2c5b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b40: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C5B40u;
    SET_GPR_U32(ctx, 31, 0x2C5B48u);
    ctx->pc = 0x2C5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B40u;
    // 0x2c5b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C5B40u, 0x2C5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B48u;
label_2c5b48:
    // 0x2c5b48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c5b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5b4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c5b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5b54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c5b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B5Cu;
        // 0x2c5b60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5B64u;
    // 0x2c5b64: 0x0  nop
    ctx->pc = 0x2c5b64u;
    // NOP
    ctx->pc = 0x2c5b68u;
}
