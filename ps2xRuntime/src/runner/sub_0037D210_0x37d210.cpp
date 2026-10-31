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

// Function: sub_0037D210
// Address: 0x37d210 - 0x37d280
void sub_0037D210_0x37d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D210_0x37d210");
#endif

    switch (ctx->pc) {
        case 0x37d230u: goto label_37d230;
        case 0x37d238u: goto label_37d238;
        case 0x37d24cu: goto label_37d24c;
        case 0x37d258u: goto label_37d258;
        case 0x37d264u: goto label_37d264;
        default: break;
    }

    ctx->pc = 0x37d210u;

    // 0x37d210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37d21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d228: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D228u;
    SET_GPR_U32(ctx, 31, 0x37D230u);
    ctx->pc = 0x37D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D228u;
    // 0x37d22c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D228u, 0x37D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D230u;
label_37d230:
    // 0x37d230: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D230u;
    SET_GPR_U32(ctx, 31, 0x37D238u);
    ctx->pc = 0x37D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D230u;
    // 0x37d234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D230u, 0x37D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D238u;
label_37d238:
    // 0x37d238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37d238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d23c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37d23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d244: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37D244u;
    SET_GPR_U32(ctx, 31, 0x37D24Cu);
    ctx->pc = 0x37D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D244u;
    // 0x37d248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37D244u, 0x37D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D24Cu;
label_37d24c:
    // 0x37d24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d250: 0xc108e62  jal         func_423988
    ctx->pc = 0x37D250u;
    SET_GPR_U32(ctx, 31, 0x37D258u);
    ctx->pc = 0x37D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D250u;
    // 0x37d254: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x423988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423988u, 0x37D250u, 0x37D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D258u;
label_37d258:
    // 0x37d258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d25c: 0xc102562  jal         func_409588
    ctx->pc = 0x37D25Cu;
    SET_GPR_U32(ctx, 31, 0x37D264u);
    ctx->pc = 0x37D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D25Cu;
    // 0x37d260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37D25Cu, 0x37D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D264u;
label_37d264:
    // 0x37d264: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37d264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d274: 0x3e00008  jr          $ra
    ctx->pc = 0x37D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D274u;
        // 0x37d278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D27Cu;
    // 0x37d27c: 0x0  nop
    ctx->pc = 0x37d27cu;
    // NOP
    ctx->pc = 0x37d280u;
}
