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

// Function: sub_00327D18
// Address: 0x327d18 - 0x327d78
void sub_00327D18_0x327d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D18_0x327d18");
#endif

    switch (ctx->pc) {
        case 0x327d2cu: goto label_327d2c;
        case 0x327d48u: goto label_327d48;
        case 0x327d5cu: goto label_327d5c;
        default: break;
    }

    ctx->pc = 0x327d18u;

    // 0x327d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x327d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x327d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327d24: 0xc0c9ebe  jal         func_327AF8
    ctx->pc = 0x327D24u;
    SET_GPR_U32(ctx, 31, 0x327D2Cu);
    ctx->pc = 0x327D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D24u;
    // 0x327d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327AF8u, 0x327D24u, 0x327D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D2Cu;
label_327d2c:
    // 0x327d2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x327D2Cu;
    {
        const bool branch_taken_0x327d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D2Cu;
        // 0x327d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d2c) {
            ctx->pc = 0x327D64u;
            goto label_327d64;
        }
    }
    ctx->pc = 0x327D34u;
    // 0x327d34: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327d38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x327d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327d40: 0xc0c9f38  jal         func_327CE0
    ctx->pc = 0x327D40u;
    SET_GPR_U32(ctx, 31, 0x327D48u);
    ctx->pc = 0x327D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D40u;
    // 0x327d44: 0x8c70002c  lw          $s0, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327CE0u, 0x327D40u, 0x327D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D48u;
label_327d48:
    // 0x327d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x327d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327d54: 0xc0c9efe  jal         func_327BF8
    ctx->pc = 0x327D54u;
    SET_GPR_U32(ctx, 31, 0x327D5Cu);
    ctx->pc = 0x327D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D54u;
    // 0x327d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327BF8u, 0x327D54u, 0x327D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D5Cu;
label_327d5c:
    // 0x327d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327D5Cu;
    {
        const bool branch_taken_0x327d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D5Cu;
        // 0x327d60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d5c) {
            ctx->pc = 0x327D6Cu;
            goto label_327d6c;
        }
    }
    ctx->pc = 0x327D64u;
label_327d64:
    // 0x327d64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x327d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x327d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_327d6c:
    // 0x327d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327d70: 0x3e00008  jr          $ra
    ctx->pc = 0x327D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D78u;
}
