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

// Function: sub_0016B018
// Address: 0x16b018 - 0x16b070
void sub_0016B018_0x16b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B018_0x16b018");
#endif

    switch (ctx->pc) {
        case 0x16b048u: goto label_16b048;
        default: break;
    }

    ctx->pc = 0x16b018u;

    // 0x16b018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b01c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b020: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x16b020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b024: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b028: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B028u;
    {
        const bool branch_taken_0x16b028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B028u;
        // 0x16b02c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b028) {
            ctx->pc = 0x16B048u;
            goto label_16b048;
        }
    }
    ctx->pc = 0x16B030u;
    // 0x16b030: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x16b034: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16b034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16b038: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16b038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b03c: 0x24846e30  addiu       $a0, $a0, 0x6E30
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28208));
    // 0x16b040: 0xc05a380  jal         func_168E00
    ctx->pc = 0x16B040u;
    SET_GPR_U32(ctx, 31, 0x16B048u);
    ctx->pc = 0x16B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B040u;
    // 0x16b044: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E00u, 0x16B040u, 0x16B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B048u;
label_16b048:
    // 0x16b048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b04c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B04Cu;
        // 0x16b050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B054u;
    // 0x16b054: 0x0  nop
    ctx->pc = 0x16b054u;
    // NOP
    // 0x16b058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b05c: 0x0  nop
    ctx->pc = 0x16b05cu;
    // NOP
    // 0x16b060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b064: 0x0  nop
    ctx->pc = 0x16b064u;
    // NOP
    // 0x16b068: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b06c: 0x0  nop
    ctx->pc = 0x16b06cu;
    // NOP
    ctx->pc = 0x16b070u;
}
