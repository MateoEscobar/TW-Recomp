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

// Function: sub_00223348
// Address: 0x223348 - 0x2233a8
void sub_00223348_0x223348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223348_0x223348");
#endif

    switch (ctx->pc) {
        case 0x22336cu: goto label_22336c;
        case 0x223380u: goto label_223380;
        default: break;
    }

    ctx->pc = 0x223348u;

    // 0x223348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22334c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x22334cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x223350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223354: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x223354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5102A8u));
    // 0x223358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22335c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22335Cu;
    {
        const bool branch_taken_0x22335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22335Cu;
        // 0x223360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22335c) {
            ctx->pc = 0x223378u;
            goto label_223378;
        }
    }
    ctx->pc = 0x223364u;
    // 0x223364: 0xc087502  jal         func_21D408
    ctx->pc = 0x223364u;
    SET_GPR_U32(ctx, 31, 0x22336Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x223364u, 0x22336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22336Cu;
label_22336c:
    // 0x22336c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223370: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223370u;
    {
        const bool branch_taken_0x223370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223370) {
            ctx->pc = 0x223388u;
            goto label_223388;
        }
    }
    ctx->pc = 0x223378u;
label_223378:
    // 0x223378: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x223378u;
    SET_GPR_U32(ctx, 31, 0x223380u);
    ctx->pc = 0x22337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223378u;
    // 0x22337c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x223378u, 0x223380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223380u;
label_223380:
    // 0x223380: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223380u;
    {
        const bool branch_taken_0x223380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223380u;
        // 0x223384: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223380) {
            ctx->pc = 0x223394u;
            goto label_223394;
        }
    }
    ctx->pc = 0x223388u;
label_223388:
    // 0x223388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22338c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22338Cu;
    {
        const bool branch_taken_0x22338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22338Cu;
        // 0x223390: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22338c) {
            ctx->pc = 0x22339Cu;
            goto label_22339c;
        }
    }
    ctx->pc = 0x223394u;
label_223394:
    // 0x223394: 0xc44001f4  lwc1        $f0, 0x1F4($v0)
    ctx->pc = 0x223394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22339c:
    // 0x22339c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22339cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2233a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2233A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2233A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233A0u;
        // 0x2233a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2233A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2233A8u;
}
