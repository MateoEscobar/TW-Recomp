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

// Function: sub_003A4BD0
// Address: 0x3a4bd0 - 0x3a4c48
void sub_003A4BD0_0x3a4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4BD0_0x3a4bd0");
#endif

    switch (ctx->pc) {
        case 0x3a4bf0u: goto label_3a4bf0;
        case 0x3a4c0cu: goto label_3a4c0c;
        default: break;
    }

    ctx->pc = 0x3a4bd0u;

    // 0x3a4bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a4bd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a4bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a4bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4be0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a4be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4be8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A4BE8u;
    SET_GPR_U32(ctx, 31, 0x3A4BF0u);
    ctx->pc = 0x3A4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BE8u;
    // 0x3a4bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A4BE8u, 0x3A4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BF0u;
label_3a4bf0:
    // 0x3a4bf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4BF0u;
    {
        const bool branch_taken_0x3a4bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4bf0) {
            ctx->pc = 0x3A4C04u;
            goto label_3a4c04;
        }
    }
    ctx->pc = 0x3A4BF8u;
    // 0x3a4bf8: 0x784200b0  lq          $v0, 0xB0($v0)
    ctx->pc = 0x3a4bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x3a4bfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A4BFCu;
    {
        const bool branch_taken_0x3a4bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BFCu;
        // 0x3a4c00: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4bfc) {
            ctx->pc = 0x3A4C2Cu;
            goto label_3a4c2c;
        }
    }
    ctx->pc = 0x3A4C04u;
label_3a4c04:
    // 0x3a4c04: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x3A4C04u;
    SET_GPR_U32(ctx, 31, 0x3A4C0Cu);
    ctx->pc = 0x3A4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C04u;
    // 0x3a4c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x3A4C04u, 0x3A4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C0Cu;
label_3a4c0c:
    // 0x3a4c0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4C0Cu;
    {
        const bool branch_taken_0x3a4c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4c0c) {
            ctx->pc = 0x3A4C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4C0Cu;
            // 0x3a4c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4C20u;
            goto label_3a4c20;
        }
    }
    ctx->pc = 0x3A4C14u;
    // 0x3a4c14: 0x784200a0  lq          $v0, 0xA0($v0)
    ctx->pc = 0x3a4c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3a4c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4C18u;
    {
        const bool branch_taken_0x3a4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C18u;
        // 0x3a4c1c: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c18) {
            ctx->pc = 0x3A4C2Cu;
            goto label_3a4c2c;
        }
    }
    ctx->pc = 0x3A4C20u;
label_3a4c20:
    // 0x3a4c20: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a4c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a4c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4c28: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x3a4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_3a4c2c:
    // 0x3a4c2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4c34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a4c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C3Cu;
        // 0x3a4c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4C44u;
    // 0x3a4c44: 0x0  nop
    ctx->pc = 0x3a4c44u;
    // NOP
    ctx->pc = 0x3a4c48u;
}
