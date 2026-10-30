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

// Function: sub_0035D218
// Address: 0x35d218 - 0x35d290
void sub_0035D218_0x35d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D218_0x35d218");
#endif

    switch (ctx->pc) {
        case 0x35d238u: goto label_35d238;
        case 0x35d240u: goto label_35d240;
        case 0x35d248u: goto label_35d248;
        case 0x35d254u: goto label_35d254;
        case 0x35d26cu: goto label_35d26c;
        case 0x35d278u: goto label_35d278;
        default: break;
    }

    ctx->pc = 0x35d218u;

    // 0x35d218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35d22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D230u;
    SET_GPR_U32(ctx, 31, 0x35D238u);
    ctx->pc = 0x35D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D230u;
    // 0x35d234: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D230u, 0x35D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D238u;
label_35d238:
    // 0x35d238: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D238u;
    SET_GPR_U32(ctx, 31, 0x35D240u);
    ctx->pc = 0x35D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D238u;
    // 0x35d23c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D238u, 0x35D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D240u;
label_35d240:
    // 0x35d240: 0xc08e782  jal         func_239E08
    ctx->pc = 0x35D240u;
    SET_GPR_U32(ctx, 31, 0x35D248u);
    ctx->pc = 0x35D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D240u;
    // 0x35d244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E08u, 0x35D240u, 0x35D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D248u;
label_35d248:
    // 0x35d248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35d248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d24c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35D24Cu;
    SET_GPR_U32(ctx, 31, 0x35D254u);
    ctx->pc = 0x35D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D24Cu;
    // 0x35d250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35D24Cu, 0x35D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D254u;
label_35d254:
    // 0x35d254: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D254u;
    {
        const bool branch_taken_0x35d254 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D254u;
        // 0x35d258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d254) {
            ctx->pc = 0x35D270u;
            goto label_35d270;
        }
    }
    ctx->pc = 0x35D25Cu;
    // 0x35d25c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35d25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35d260: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35d260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35d264: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35D264u;
    SET_GPR_U32(ctx, 31, 0x35D26Cu);
    ctx->pc = 0x35D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D264u;
    // 0x35d268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35D264u, 0x35D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D26Cu;
label_35d26c:
    // 0x35d26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35d270:
    // 0x35d270: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35D270u;
    SET_GPR_U32(ctx, 31, 0x35D278u);
    ctx->pc = 0x35D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D270u;
    // 0x35d274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35D270u, 0x35D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D278u;
label_35d278:
    // 0x35d278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d288: 0x3e00008  jr          $ra
    ctx->pc = 0x35D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D288u;
        // 0x35d28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D290u;
}
