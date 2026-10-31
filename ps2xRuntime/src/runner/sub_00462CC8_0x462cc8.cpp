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

// Function: sub_00462CC8
// Address: 0x462cc8 - 0x462d38
void sub_00462CC8_0x462cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462CC8_0x462cc8");
#endif

    ctx->pc = 0x462cc8u;

    // 0x462cc8: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x462cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x462ccc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x462cd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x462cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x462cd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x462cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x462cd8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x462CD8u;
    {
        const bool branch_taken_0x462cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x462CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462CD8u;
        // 0x462cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462cd8) {
            ctx->pc = 0x462CECu;
            goto label_462cec;
        }
    }
    ctx->pc = 0x462CE0u;
    // 0x462ce0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x462ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x462ce4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x462CE4u;
    {
        const bool branch_taken_0x462ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ce4) {
            ctx->pc = 0x462CF0u;
            goto label_462cf0;
        }
    }
    ctx->pc = 0x462CECu;
label_462cec:
    // 0x462cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x462cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462cf0:
    // 0x462cf0: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x462CF0u;
    {
        const bool branch_taken_0x462cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x462cf0) {
            ctx->pc = 0x462D2Cu;
            goto label_462d2c;
        }
    }
    ctx->pc = 0x462CF8u;
    // 0x462cf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x462cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x462cfc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x462CFCu;
    {
        const bool branch_taken_0x462cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x462D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462CFCu;
        // 0x462d00: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462cfc) {
            ctx->pc = 0x462D24u;
            goto label_462d24;
        }
    }
    ctx->pc = 0x462D04u;
    // 0x462d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x462d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x462d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x462d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x462d0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x462D0Cu;
    {
        const bool branch_taken_0x462d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462d0c) {
            ctx->pc = 0x462D24u;
            goto label_462d24;
        }
    }
    ctx->pc = 0x462D14u;
    // 0x462d14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x462d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x462d18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x462d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x462d1c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x462d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x462d20: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x462d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_462d24:
    // 0x462d24: 0x3e00008  jr          $ra
    ctx->pc = 0x462D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462D24u;
        // 0x462d28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462D2Cu;
label_462d2c:
    // 0x462d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x462D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462D2Cu;
        // 0x462d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462D34u;
    // 0x462d34: 0x0  nop
    ctx->pc = 0x462d34u;
    // NOP
    ctx->pc = 0x462d38u;
}
