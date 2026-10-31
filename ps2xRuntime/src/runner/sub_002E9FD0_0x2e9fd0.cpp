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

// Function: sub_002E9FD0
// Address: 0x2e9fd0 - 0x2ea038
void sub_002E9FD0_0x2e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9FD0_0x2e9fd0");
#endif

    switch (ctx->pc) {
        case 0x2e9ff8u: goto label_2e9ff8;
        case 0x2ea008u: goto label_2ea008;
        default: break;
    }

    ctx->pc = 0x2e9fd0u;

    // 0x2e9fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9fd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e9fd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e9fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e9fe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e9fe4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e9fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9ff0: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2E9FF0u;
    SET_GPR_U32(ctx, 31, 0x2E9FF8u);
    ctx->pc = 0x2E9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FF0u;
    // 0x2e9ff4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2E9FF0u, 0x2E9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FF8u;
label_2e9ff8:
    // 0x2e9ff8: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9FF8u;
    {
        const bool branch_taken_0x2e9ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2e9ff8) {
            ctx->pc = 0x2E9FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9FF8u;
            // 0x2e9ffc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA014u;
            goto label_2ea014;
        }
    }
    ctx->pc = 0x2EA000u;
    // 0x2ea000: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2EA000u;
    SET_GPR_U32(ctx, 31, 0x2EA008u);
    ctx->pc = 0x2EA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA000u;
    // 0x2ea004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EA000u, 0x2EA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA008u;
label_2ea008:
    // 0x2ea008: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA008u;
    {
        const bool branch_taken_0x2ea008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA008u;
        // 0x2ea00c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea008) {
            ctx->pc = 0x2EA020u;
            goto label_2ea020;
        }
    }
    ctx->pc = 0x2EA010u;
    // 0x2ea010: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ea014:
    // 0x2ea014: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2ea018: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ea018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ea01c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea020:
    // 0x2ea020: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ea020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea024: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ea024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea02c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA02Cu;
        // 0x2ea030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA034u;
    // 0x2ea034: 0x0  nop
    ctx->pc = 0x2ea034u;
    // NOP
    ctx->pc = 0x2ea038u;
}
