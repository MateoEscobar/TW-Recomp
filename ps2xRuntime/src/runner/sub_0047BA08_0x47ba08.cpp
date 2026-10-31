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

// Function: sub_0047BA08
// Address: 0x47ba08 - 0x47ba70
void sub_0047BA08_0x47ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BA08_0x47ba08");
#endif

    switch (ctx->pc) {
        case 0x47ba54u: goto label_47ba54;
        default: break;
    }

    ctx->pc = 0x47ba08u;

    // 0x47ba08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47ba0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ba10: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x47ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x47ba14: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x47BA14u;
    {
        const bool branch_taken_0x47ba14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA14u;
        // 0x47ba18: 0x8f828918  lw          $v0, -0x76E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ba14) {
            ctx->pc = 0x47BA60u;
            goto label_47ba60;
        }
    }
    ctx->pc = 0x47BA1Cu;
    // 0x47ba1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47ba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ba20: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x47ba24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47ba28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47BA28u;
    {
        const bool branch_taken_0x47ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ba28) {
            ctx->pc = 0x47BA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47BA28u;
            // 0x47ba2c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47BA48u;
            goto label_47ba48;
        }
    }
    ctx->pc = 0x47BA30u;
    // 0x47ba30: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x47ba30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47ba34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ba38: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BA38u;
    {
        const bool branch_taken_0x47ba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47ba38) {
            ctx->pc = 0x47BA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47BA38u;
            // 0x47ba3c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47BA48u;
            goto label_47ba48;
        }
    }
    ctx->pc = 0x47BA40u;
    // 0x47ba40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47BA40u;
    {
        const bool branch_taken_0x47ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA40u;
        // 0x47ba44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ba40) {
            ctx->pc = 0x47BA54u;
            goto label_47ba54;
        }
    }
    ctx->pc = 0x47BA48u;
label_47ba48:
    // 0x47ba48: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x47ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x47ba4c: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47BA4Cu;
    SET_GPR_U32(ctx, 31, 0x47BA54u);
    ctx->pc = 0x47BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BA4Cu;
    // 0x47ba50: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47BA4Cu, 0x47BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BA54u;
label_47ba54:
    // 0x47ba54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ba58: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BA58u;
    {
        const bool branch_taken_0x47ba58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA58u;
        // 0x47ba5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ba58) {
            ctx->pc = 0x47BA64u;
            goto label_47ba64;
        }
    }
    ctx->pc = 0x47BA60u;
label_47ba60:
    // 0x47ba60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ba64:
    // 0x47ba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ba68: 0x3e00008  jr          $ra
    ctx->pc = 0x47BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA68u;
        // 0x47ba6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BA70u;
}
