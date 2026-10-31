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

// Function: sub_002F9C18
// Address: 0x2f9c18 - 0x2f9c88
void sub_002F9C18_0x2f9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9C18_0x2f9c18");
#endif

    switch (ctx->pc) {
        case 0x2f9c3cu: goto label_2f9c3c;
        default: break;
    }

    ctx->pc = 0x2f9c18u;

    // 0x2f9c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9c1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f9c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f9c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9c2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9c30: 0x8205003c  lb          $a1, 0x3C($s0)
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f9c34: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2F9C34u;
    SET_GPR_U32(ctx, 31, 0x2F9C3Cu);
    ctx->pc = 0x2F9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C34u;
    // 0x2f9c38: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2F9C34u, 0x2F9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C3Cu;
label_2f9c3c:
    // 0x2f9c3c: 0x9203003e  lbu         $v1, 0x3E($s0)
    ctx->pc = 0x2f9c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2f9c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9c44: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9C44u;
    {
        const bool branch_taken_0x2f9c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9c44) {
            ctx->pc = 0x2F9C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C44u;
            // 0x2f9c48: 0x9202003f  lbu         $v0, 0x3F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C60u;
            goto label_2f9c60;
        }
    }
    ctx->pc = 0x2F9C4Cu;
    // 0x2f9c4c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2f9c4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2f9c50: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2f9c54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f9c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f9c58: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2f9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    // 0x2f9c5c: 0x9202003f  lbu         $v0, 0x3F($s0)
    ctx->pc = 0x2f9c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
label_2f9c60:
    // 0x2f9c60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9C60u;
    {
        const bool branch_taken_0x2f9c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C60u;
        // 0x2f9c64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c60) {
            ctx->pc = 0x2F9C78u;
            goto label_2f9c78;
        }
    }
    ctx->pc = 0x2F9C68u;
    // 0x2f9c68: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2f9c68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2f9c6c: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f9c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f9c74: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2f9c74u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2f9c78:
    // 0x2f9c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9c80: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C80u;
        // 0x2f9c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9C88u;
}
