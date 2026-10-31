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

// Function: sub_00332D28
// Address: 0x332d28 - 0x332db0
void sub_00332D28_0x332d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332D28_0x332d28");
#endif

    switch (ctx->pc) {
        case 0x332d48u: goto label_332d48;
        case 0x332d5cu: goto label_332d5c;
        case 0x332d78u: goto label_332d78;
        case 0x332d88u: goto label_332d88;
        default: break;
    }

    ctx->pc = 0x332d28u;

    // 0x332d28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x332d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x332d2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x332d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x332d30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x332d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x332d34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x332d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x332d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x332d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332d40: 0xc0ccb32  jal         func_332CC8
    ctx->pc = 0x332D40u;
    SET_GPR_U32(ctx, 31, 0x332D48u);
    ctx->pc = 0x332D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D40u;
    // 0x332d44: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332CC8u, 0x332D40u, 0x332D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D48u;
label_332d48:
    // 0x332d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x332d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d4c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x332D4Cu;
    {
        const bool branch_taken_0x332d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D4Cu;
        // 0x332d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d4c) {
            ctx->pc = 0x332D90u;
            goto label_332d90;
        }
    }
    ctx->pc = 0x332D54u;
    // 0x332d54: 0xc0cb244  jal         func_32C910
    ctx->pc = 0x332D54u;
    SET_GPR_U32(ctx, 31, 0x332D5Cu);
    ctx->pc = 0x332D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D54u;
    // 0x332d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x332D54u, 0x332D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D5Cu;
label_332d5c:
    // 0x332d5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x332d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x332d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x332d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d70: 0xc0ccac4  jal         func_332B10
    ctx->pc = 0x332D70u;
    SET_GPR_U32(ctx, 31, 0x332D78u);
    ctx->pc = 0x332D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D70u;
    // 0x332d74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332B10u, 0x332D70u, 0x332D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D78u;
label_332d78:
    // 0x332d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d80: 0xc0cbebc  jal         func_32FAF0
    ctx->pc = 0x332D80u;
    SET_GPR_U32(ctx, 31, 0x332D88u);
    ctx->pc = 0x332D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D80u;
    // 0x332d84: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x332D80u, 0x332D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D88u;
label_332d88:
    // 0x332d88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x332D88u;
    {
        const bool branch_taken_0x332d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D88u;
        // 0x332d8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d88) {
            ctx->pc = 0x332D98u;
            goto label_332d98;
        }
    }
    ctx->pc = 0x332D90u;
label_332d90:
    // 0x332d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x332d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x332d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_332d98:
    // 0x332d98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332d9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x332d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332da4: 0x3e00008  jr          $ra
    ctx->pc = 0x332DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DA4u;
        // 0x332da8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332DACu;
    // 0x332dac: 0x0  nop
    ctx->pc = 0x332dacu;
    // NOP
    ctx->pc = 0x332db0u;
}
