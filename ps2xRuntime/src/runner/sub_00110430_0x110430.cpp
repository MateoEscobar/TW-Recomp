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

// Function: sub_00110430
// Address: 0x110430 - 0x110488
void sub_00110430_0x110430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110430_0x110430");
#endif

    switch (ctx->pc) {
        case 0x11044cu: goto label_11044c;
        case 0x110464u: goto label_110464;
        default: break;
    }

    ctx->pc = 0x110430u;

    // 0x110430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x110434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11043c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110440: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110444: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110444u;
    SET_GPR_U32(ctx, 31, 0x11044Cu);
    ctx->pc = 0x110448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110444u;
    // 0x110448: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110444u, 0x11044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11044Cu;
label_11044c:
    // 0x11044c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11044Cu;
    {
        const bool branch_taken_0x11044c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11044Cu;
        // 0x110450: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11044c) {
            ctx->pc = 0x11045Cu;
            goto label_11045c;
        }
    }
    ctx->pc = 0x110454u;
    // 0x110454: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110454u;
    {
        const bool branch_taken_0x110454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110454u;
        // 0x110458: 0x906283b8  lbu         $v0, -0x7C48($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110454) {
            ctx->pc = 0x110474u;
            goto label_110474;
        }
    }
    ctx->pc = 0x11045Cu;
label_11045c:
    // 0x11045c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11045Cu;
    SET_GPR_U32(ctx, 31, 0x110464u);
    ctx->pc = 0x110460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11045Cu;
    // 0x110460: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11045Cu, 0x110464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110464u;
label_110464:
    // 0x110464: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x110464u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110468: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x110468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x11046c: 0x7c4300c0  sq          $v1, 0xC0($v0)
    ctx->pc = 0x11046cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 3));
    // 0x110470: 0x908283b9  lbu         $v0, -0x7C47($a0)
    ctx->pc = 0x110470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5483B9u));
label_110474:
    // 0x110474: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x110474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11047c: 0x3e00008  jr          $ra
    ctx->pc = 0x11047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11047Cu;
        // 0x110480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110484u;
    // 0x110484: 0x0  nop
    ctx->pc = 0x110484u;
    // NOP
    ctx->pc = 0x110488u;
}
