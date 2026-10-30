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

// Function: sub_00325220
// Address: 0x325220 - 0x325298
void sub_00325220_0x325220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325220_0x325220");
#endif

    switch (ctx->pc) {
        case 0x32523cu: goto label_32523c;
        case 0x325244u: goto label_325244;
        case 0x325254u: goto label_325254;
        case 0x32525cu: goto label_32525c;
        case 0x32526cu: goto label_32526c;
        case 0x325274u: goto label_325274;
        case 0x325280u: goto label_325280;
        default: break;
    }

    ctx->pc = 0x325220u;

    // 0x325220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32522c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325234: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x325234u;
    SET_GPR_U32(ctx, 31, 0x32523Cu);
    ctx->pc = 0x325238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325234u;
    // 0x325238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x325234u, 0x32523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32523Cu;
label_32523c:
    // 0x32523c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32523Cu;
    SET_GPR_U32(ctx, 31, 0x325244u);
    ctx->pc = 0x325240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32523Cu;
    // 0x325240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32523Cu, 0x325244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325244u;
label_325244:
    // 0x325244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x325244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325248: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32524c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32524Cu;
    SET_GPR_U32(ctx, 31, 0x325254u);
    ctx->pc = 0x325250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32524Cu;
    // 0x325250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32524Cu, 0x325254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325254u;
label_325254:
    // 0x325254: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x325254u;
    SET_GPR_U32(ctx, 31, 0x32525Cu);
    ctx->pc = 0x325258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325254u;
    // 0x325258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x325254u, 0x32525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32525Cu;
label_32525c:
    // 0x32525c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32525cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325264: 0xc0cc9b8  jal         func_3326E0
    ctx->pc = 0x325264u;
    SET_GPR_U32(ctx, 31, 0x32526Cu);
    ctx->pc = 0x325268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325264u;
    // 0x325268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326E0u, 0x325264u, 0x32526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32526Cu;
label_32526c:
    // 0x32526c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32526Cu;
    SET_GPR_U32(ctx, 31, 0x325274u);
    ctx->pc = 0x325270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32526Cu;
    // 0x325270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32526Cu, 0x325274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325274u;
label_325274:
    // 0x325274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325278: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325278u;
    SET_GPR_U32(ctx, 31, 0x325280u);
    ctx->pc = 0x32527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325278u;
    // 0x32527c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325278u, 0x325280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325280u;
label_325280:
    // 0x325280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32528c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32528cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325290: 0x3e00008  jr          $ra
    ctx->pc = 0x325290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325290u;
        // 0x325294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325298u;
}
