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

// Function: sub_0042E008
// Address: 0x42e008 - 0x42e058
void sub_0042E008_0x42e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E008_0x42e008");
#endif

    switch (ctx->pc) {
        case 0x42e010u: goto label_42e010;
        default: break;
    }

    ctx->pc = 0x42e008u;

    // 0x42e008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42e008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e00c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42e00cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e010:
    // 0x42e010: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x42e010u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42e014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42e018: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x42e018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x42e01c: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x42e01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x42e020: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x42e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x42e024: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x42e024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x42e028: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42E028u;
    {
        const bool branch_taken_0x42e028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E028u;
        // 0x42e02c: 0x24e70007  addiu       $a3, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e028) {
            ctx->pc = 0x42E010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e010;
        }
    }
    ctx->pc = 0x42E030u;
    // 0x42e030: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x42e030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x42e034: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E034u;
    {
        const bool branch_taken_0x42e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E034u;
        // 0x42e038: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e034) {
            ctx->pc = 0x42E04Cu;
            goto label_42e04c;
        }
    }
    ctx->pc = 0x42E03Cu;
    // 0x42e03c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42E03Cu;
    {
        const bool branch_taken_0x42e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E03Cu;
        // 0x42e040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e03c) {
            ctx->pc = 0x42E04Cu;
            goto label_42e04c;
        }
    }
    ctx->pc = 0x42E044u;
    // 0x42e044: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x42e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x42e048: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x42e048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_42e04c:
    // 0x42e04c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x42e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x42e050: 0x3e00008  jr          $ra
    ctx->pc = 0x42E050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E050u;
        // 0x42e054: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E058u;
}
