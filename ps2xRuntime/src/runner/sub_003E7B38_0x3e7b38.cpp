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

// Function: sub_003E7B38
// Address: 0x3e7b38 - 0x3e7b88
void sub_003E7B38_0x3e7b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7B38_0x3e7b38");
#endif

    switch (ctx->pc) {
        case 0x3e7b50u: goto label_3e7b50;
        default: break;
    }

    ctx->pc = 0x3e7b38u;

    // 0x3e7b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e7b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e7b48: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E7B48u;
    SET_GPR_U32(ctx, 31, 0x3E7B50u);
    ctx->pc = 0x3E7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B48u;
    // 0x3e7b4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E7B48u, 0x3E7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B50u;
label_3e7b50:
    // 0x3e7b50: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E7B50u;
    {
        const bool branch_taken_0x3e7b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b50) {
            ctx->pc = 0x3E7B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7B50u;
            // 0x3e7b54: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B70u;
            goto label_3e7b70;
        }
    }
    ctx->pc = 0x3E7B58u;
    // 0x3e7b58: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3e7b5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e7b60: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3e7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x3e7b64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e7b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e7b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7B68u;
    {
        const bool branch_taken_0x3e7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B68u;
        // 0x3e7b6c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b68) {
            ctx->pc = 0x3E7B78u;
            goto label_3e7b78;
        }
    }
    ctx->pc = 0x3E7B70u;
label_3e7b70:
    // 0x3e7b70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3e7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3e7b74: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e7b78:
    // 0x3e7b78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e7b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B80u;
        // 0x3e7b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7B88u;
}
