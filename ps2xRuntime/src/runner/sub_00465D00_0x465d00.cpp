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

// Function: sub_00465D00
// Address: 0x465d00 - 0x465d60
void sub_00465D00_0x465d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465D00_0x465d00");
#endif

    switch (ctx->pc) {
        case 0x465d24u: goto label_465d24;
        case 0x465d44u: goto label_465d44;
        default: break;
    }

    ctx->pc = 0x465d00u;

    // 0x465d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x465d04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x465d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x465d08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x465d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465d0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x465d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x465d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x465d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465d14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x465d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x465d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x465d1c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x465D1Cu;
    SET_GPR_U32(ctx, 31, 0x465D24u);
    ctx->pc = 0x465D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465D1Cu;
    // 0x465d20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x465D1Cu, 0x465D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465D24u;
label_465d24:
    // 0x465d24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x465D24u;
    {
        const bool branch_taken_0x465d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465D24u;
        // 0x465d28: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465d24) {
            ctx->pc = 0x465D34u;
            goto label_465d34;
        }
    }
    ctx->pc = 0x465D2Cu;
    // 0x465d2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465D2Cu;
    {
        const bool branch_taken_0x465d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465D2Cu;
        // 0x465d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465d2c) {
            ctx->pc = 0x465D48u;
            goto label_465d48;
        }
    }
    ctx->pc = 0x465D34u;
label_465d34:
    // 0x465d34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465D34u;
    {
        const bool branch_taken_0x465d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465D34u;
        // 0x465d38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465d34) {
            ctx->pc = 0x465D48u;
            goto label_465d48;
        }
    }
    ctx->pc = 0x465D3Cu;
    // 0x465d3c: 0xc1194c4  jal         func_465310
    ctx->pc = 0x465D3Cu;
    SET_GPR_U32(ctx, 31, 0x465D44u);
    ctx->pc = 0x465D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465D3Cu;
    // 0x465d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x465D3Cu, 0x465D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465D44u;
label_465d44:
    // 0x465d44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465d48:
    // 0x465d48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x465d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465d4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x465d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x465d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465d54: 0x3e00008  jr          $ra
    ctx->pc = 0x465D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465D54u;
        // 0x465d58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465D5Cu;
    // 0x465d5c: 0x0  nop
    ctx->pc = 0x465d5cu;
    // NOP
    ctx->pc = 0x465d60u;
}
