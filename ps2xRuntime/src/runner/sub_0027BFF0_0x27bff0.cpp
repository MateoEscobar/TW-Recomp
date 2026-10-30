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

// Function: sub_0027BFF0
// Address: 0x27bff0 - 0x27c058
void sub_0027BFF0_0x27bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BFF0_0x27bff0");
#endif

    switch (ctx->pc) {
        case 0x27c008u: goto label_27c008;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c030u: goto label_27c030;
        default: break;
    }

    ctx->pc = 0x27bff0u;

    // 0x27bff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bff4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27bff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c000: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27C000u;
    SET_GPR_U32(ctx, 31, 0x27C008u);
    ctx->pc = 0x27C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C000u;
    // 0x27c004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27C000u, 0x27C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C008u;
label_27c008:
    // 0x27c008: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x27c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c00c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27C00Cu;
    {
        const bool branch_taken_0x27c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C00Cu;
        // 0x27c010: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c00c) {
            ctx->pc = 0x27C03Cu;
            goto label_27c03c;
        }
    }
    ctx->pc = 0x27C014u;
    // 0x27c014: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27C014u;
    SET_GPR_U32(ctx, 31, 0x27C01Cu);
    ctx->pc = 0x27C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C014u;
    // 0x27c018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27C014u, 0x27C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C01Cu;
label_27c01c:
    // 0x27c01c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27c020: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C020u;
    {
        const bool branch_taken_0x27c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27c020) {
            ctx->pc = 0x27C024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C020u;
            // 0x27c024: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C040u;
            goto label_27c040;
        }
    }
    ctx->pc = 0x27C028u;
    // 0x27c028: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27C028u;
    SET_GPR_U32(ctx, 31, 0x27C030u);
    ctx->pc = 0x27C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C028u;
    // 0x27c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27C028u, 0x27C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C030u;
label_27c030:
    // 0x27c030: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27c034: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C034u;
    {
        const bool branch_taken_0x27c034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C034u;
        // 0x27c038: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c034) {
            ctx->pc = 0x27C044u;
            goto label_27c044;
        }
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27c03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c040:
    // 0x27c040: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27c040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c044:
    // 0x27c044: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27c044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c050: 0x3e00008  jr          $ra
    ctx->pc = 0x27C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C050u;
        // 0x27c054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C058u;
}
