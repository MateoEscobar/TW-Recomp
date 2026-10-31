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

// Function: sub_00395D20
// Address: 0x395d20 - 0x395d98
void sub_00395D20_0x395d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395D20_0x395d20");
#endif

    switch (ctx->pc) {
        case 0x395d5cu: goto label_395d5c;
        default: break;
    }

    ctx->pc = 0x395d20u;

    // 0x395d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395d24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x395d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395d28: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x395d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395d2c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x395D2Cu;
    {
        const bool branch_taken_0x395d2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D2Cu;
        // 0x395d30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d2c) {
            ctx->pc = 0x395D84u;
            goto label_395d84;
        }
    }
    ctx->pc = 0x395D34u;
    // 0x395d34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x395d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x395d38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x395d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x395d3c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x395d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x395d40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x395d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395d44: 0x8c662c7c  lw          $a2, 0x2C7C($v1)
    ctx->pc = 0x395d44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x395d48: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x395d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x395d4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x395d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x395d50: 0xace20120  sw          $v0, 0x120($a3)
    ctx->pc = 0x395d50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 2));
    // 0x395d54: 0xc0e6734  jal         func_399CD0
    ctx->pc = 0x395D54u;
    SET_GPR_U32(ctx, 31, 0x395D5Cu);
    ctx->pc = 0x395D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395D54u;
    // 0x395d58: 0x8cc40840  lw          $a0, 0x840($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CD0u, 0x395D54u, 0x395D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395D5Cu;
label_395d5c:
    // 0x395d5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x395d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395d60: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x395D60u;
    {
        const bool branch_taken_0x395d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D60u;
        // 0x395d64: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d60) {
            ctx->pc = 0x395D88u;
            goto label_395d88;
        }
    }
    ctx->pc = 0x395D68u;
    // 0x395d68: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x395d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x395d6c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x395d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x395d70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x395d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x395d74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x395d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x395d78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x395d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x395d7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x395D7Cu;
    {
        const bool branch_taken_0x395d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D7Cu;
        // 0x395d80: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d7c) {
            ctx->pc = 0x395D88u;
            goto label_395d88;
        }
    }
    ctx->pc = 0x395D84u;
label_395d84:
    // 0x395d84: 0xace00120  sw          $zero, 0x120($a3)
    ctx->pc = 0x395d84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 0));
label_395d88:
    // 0x395d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x395D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D8Cu;
        // 0x395d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395D94u;
    // 0x395d94: 0x0  nop
    ctx->pc = 0x395d94u;
    // NOP
    ctx->pc = 0x395d98u;
}
