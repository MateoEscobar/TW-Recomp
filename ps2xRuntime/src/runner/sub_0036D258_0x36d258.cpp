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

// Function: sub_0036D258
// Address: 0x36d258 - 0x36d2e8
void sub_0036D258_0x36d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D258_0x36d258");
#endif

    switch (ctx->pc) {
        case 0x36d280u: goto label_36d280;
        case 0x36d288u: goto label_36d288;
        case 0x36d29cu: goto label_36d29c;
        case 0x36d2a4u: goto label_36d2a4;
        case 0x36d2b8u: goto label_36d2b8;
        case 0x36d2c8u: goto label_36d2c8;
        default: break;
    }

    ctx->pc = 0x36d258u;

    // 0x36d258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d260: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36d260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36d264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36d268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d26c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d270: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36d270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36d274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d278: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D278u;
    SET_GPR_U32(ctx, 31, 0x36D280u);
    ctx->pc = 0x36D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D278u;
    // 0x36d27c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D278u, 0x36D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D280u;
label_36d280:
    // 0x36d280: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D280u;
    SET_GPR_U32(ctx, 31, 0x36D288u);
    ctx->pc = 0x36D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D280u;
    // 0x36d284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D280u, 0x36D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D288u;
label_36d288:
    // 0x36d288: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d28c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d294: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D294u;
    SET_GPR_U32(ctx, 31, 0x36D29Cu);
    ctx->pc = 0x36D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D294u;
    // 0x36d298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D294u, 0x36D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D29Cu;
label_36d29c:
    // 0x36d29c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36D29Cu;
    SET_GPR_U32(ctx, 31, 0x36D2A4u);
    ctx->pc = 0x36D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D29Cu;
    // 0x36d2a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36D29Cu, 0x36D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2A4u;
label_36d2a4:
    // 0x36d2a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d2b0: 0xc102488  jal         func_409220
    ctx->pc = 0x36D2B0u;
    SET_GPR_U32(ctx, 31, 0x36D2B8u);
    ctx->pc = 0x36D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2B0u;
    // 0x36d2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D2B0u, 0x36D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2B8u;
label_36d2b8:
    // 0x36d2b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2c0: 0xc0e18c2  jal         func_386308
    ctx->pc = 0x36D2C0u;
    SET_GPR_U32(ctx, 31, 0x36D2C8u);
    ctx->pc = 0x36D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2C0u;
    // 0x36d2c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386308u, 0x36D2C0u, 0x36D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2C8u;
label_36d2c8:
    // 0x36d2c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36d2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36d2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d2d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36d2d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D2DCu;
        // 0x36d2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D2E4u;
    // 0x36d2e4: 0x0  nop
    ctx->pc = 0x36d2e4u;
    // NOP
    ctx->pc = 0x36d2e8u;
}
