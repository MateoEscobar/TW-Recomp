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

// Function: sub_00175120
// Address: 0x175120 - 0x175178
void sub_00175120_0x175120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175120_0x175120");
#endif

    switch (ctx->pc) {
        case 0x175158u: goto label_175158;
        default: break;
    }

    ctx->pc = 0x175120u;

    // 0x175120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175128: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17512c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17512Cu;
    {
        const bool branch_taken_0x17512c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17512Cu;
        // 0x175130: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17512c) {
            ctx->pc = 0x175164u;
            goto label_175164;
        }
    }
    ctx->pc = 0x175134u;
    // 0x175134: 0x8c8402b8  lw          $a0, 0x2B8($a0)
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x175138: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x175138u;
    {
        const bool branch_taken_0x175138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175138) {
            ctx->pc = 0x17513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175138u;
            // 0x17513c: 0x92020043  lbu         $v0, 0x43($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17515Cu;
            goto label_17515c;
        }
    }
    ctx->pc = 0x175140u;
    // 0x175140: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x175140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x175144: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x175144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x175148: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x175148u;
    {
        const bool branch_taken_0x175148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175148) {
            ctx->pc = 0x17514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175148u;
            // 0x17514c: 0x92020043  lbu         $v0, 0x43($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17515Cu;
            goto label_17515c;
        }
    }
    ctx->pc = 0x175150u;
    // 0x175150: 0xc09209c  jal         func_248270
    ctx->pc = 0x175150u;
    SET_GPR_U32(ctx, 31, 0x175158u);
    ctx->pc = 0x248270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248270u, 0x175150u, 0x175158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175158u;
label_175158:
    // 0x175158: 0x92020043  lbu         $v0, 0x43($s0)
    ctx->pc = 0x175158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
label_17515c:
    // 0x17515c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175160: 0xa2020043  sb          $v0, 0x43($s0)
    ctx->pc = 0x175160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 2));
label_175164:
    // 0x175164: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17516c: 0x3e00008  jr          $ra
    ctx->pc = 0x17516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17516Cu;
        // 0x175170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17516Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175174u;
    // 0x175174: 0x0  nop
    ctx->pc = 0x175174u;
    // NOP
    ctx->pc = 0x175178u;
}
