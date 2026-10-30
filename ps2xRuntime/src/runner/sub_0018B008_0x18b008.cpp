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

// Function: sub_0018B008
// Address: 0x18b008 - 0x18b058
void sub_0018B008_0x18b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B008_0x18b008");
#endif

    switch (ctx->pc) {
        case 0x18b048u: goto label_18b048;
        default: break;
    }

    ctx->pc = 0x18b008u;

    // 0x18b008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b00c: 0x24840c54  addiu       $a0, $a0, 0xC54
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3156));
    // 0x18b010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b014: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18b014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18b018: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b01c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18b020: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B020u;
    {
        const bool branch_taken_0x18b020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b020) {
            ctx->pc = 0x18B024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B020u;
            // 0x18b024: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B040u;
            goto label_18b040;
        }
    }
    ctx->pc = 0x18B028u;
    // 0x18b028: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18B028u;
    {
        const bool branch_taken_0x18b028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b028) {
            ctx->pc = 0x18B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B028u;
            // 0x18b02c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B030u;
            goto label_18b030;
        }
    }
    ctx->pc = 0x18B030u;
label_18b030:
    // 0x18b030: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b034: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18b038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B038u;
    {
        const bool branch_taken_0x18b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B038u;
        // 0x18b03c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b038) {
            ctx->pc = 0x18B048u;
            goto label_18b048;
        }
    }
    ctx->pc = 0x18B040u;
label_18b040:
    // 0x18b040: 0xc138d42  jal         func_4E3508
    ctx->pc = 0x18B040u;
    SET_GPR_U32(ctx, 31, 0x18B048u);
    ctx->pc = 0x18B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B040u;
    // 0x18b044: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3508u, 0x18B040u, 0x18B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B048u;
label_18b048:
    // 0x18b048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b04c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B04Cu;
        // 0x18b050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B054u;
    // 0x18b054: 0x0  nop
    ctx->pc = 0x18b054u;
    // NOP
    ctx->pc = 0x18b058u;
}
