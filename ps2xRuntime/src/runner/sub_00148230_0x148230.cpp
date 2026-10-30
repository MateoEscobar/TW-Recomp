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

// Function: sub_00148230
// Address: 0x148230 - 0x1482d8
void sub_00148230_0x148230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148230_0x148230");
#endif

    switch (ctx->pc) {
        case 0x148248u: goto label_148248;
        case 0x148250u: goto label_148250;
        case 0x148258u: goto label_148258;
        case 0x148260u: goto label_148260;
        case 0x148268u: goto label_148268;
        case 0x148270u: goto label_148270;
        case 0x148280u: goto label_148280;
        case 0x148288u: goto label_148288;
        case 0x1482a0u: goto label_1482a0;
        case 0x1482a8u: goto label_1482a8;
        case 0x1482b0u: goto label_1482b0;
        case 0x1482b8u: goto label_1482b8;
        case 0x1482c0u: goto label_1482c0;
        case 0x1482c8u: goto label_1482c8;
        default: break;
    }

    ctx->pc = 0x148230u;

    // 0x148230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14823c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148240: 0xc110044  jal         func_440110
    ctx->pc = 0x148240u;
    SET_GPR_U32(ctx, 31, 0x148248u);
    ctx->pc = 0x148244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148240u;
    // 0x148244: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440110u, 0x148240u, 0x148248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148248u;
label_148248:
    // 0x148248: 0xc110636  jal         func_4418D8
    ctx->pc = 0x148248u;
    SET_GPR_U32(ctx, 31, 0x148250u);
    ctx->pc = 0x4418D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4418D8u, 0x148248u, 0x148250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148250u;
label_148250:
    // 0x148250: 0xc10f034  jal         func_43C0D0
    ctx->pc = 0x148250u;
    SET_GPR_U32(ctx, 31, 0x148258u);
    ctx->pc = 0x148254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148250u;
    // 0x148254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C0D0u, 0x148250u, 0x148258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148258u;
label_148258:
    // 0x148258: 0xc10f0fa  jal         func_43C3E8
    ctx->pc = 0x148258u;
    SET_GPR_U32(ctx, 31, 0x148260u);
    ctx->pc = 0x14825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148258u;
    // 0x14825c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C3E8u, 0x148258u, 0x148260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148260u;
label_148260:
    // 0x148260: 0xc11093a  jal         func_4424E8
    ctx->pc = 0x148260u;
    SET_GPR_U32(ctx, 31, 0x148268u);
    ctx->pc = 0x4424E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4424E8u, 0x148260u, 0x148268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148268u;
label_148268:
    // 0x148268: 0xc110c6c  jal         func_4431B0
    ctx->pc = 0x148268u;
    SET_GPR_U32(ctx, 31, 0x148270u);
    ctx->pc = 0x14826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148268u;
    // 0x14826c: 0x26049f10  addiu       $a0, $s0, -0x60F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4431B0u, 0x148268u, 0x148270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148270u;
label_148270:
    // 0x148270: 0x0  nop
    ctx->pc = 0x148270u;
    // NOP
    // 0x148274: 0x0  nop
    ctx->pc = 0x148274u;
    // NOP
    // 0x148278: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x148278u;
    {
        const bool branch_taken_0x148278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148278) {
            ctx->pc = 0x148268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148268;
        }
    }
    ctx->pc = 0x148280u;
label_148280:
    // 0x148280: 0xc110c58  jal         func_443160
    ctx->pc = 0x148280u;
    SET_GPR_U32(ctx, 31, 0x148288u);
    ctx->pc = 0x443160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443160u, 0x148280u, 0x148288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148288u;
label_148288:
    // 0x148288: 0x0  nop
    ctx->pc = 0x148288u;
    // NOP
    // 0x14828c: 0x0  nop
    ctx->pc = 0x14828cu;
    // NOP
    // 0x148290: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x148290u;
    {
        const bool branch_taken_0x148290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148290) {
            ctx->pc = 0x148280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148280;
        }
    }
    ctx->pc = 0x148298u;
    // 0x148298: 0xc110044  jal         func_440110
    ctx->pc = 0x148298u;
    SET_GPR_U32(ctx, 31, 0x1482A0u);
    ctx->pc = 0x14829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148298u;
    // 0x14829c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440110u, 0x148298u, 0x1482A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482A0u;
label_1482a0:
    // 0x1482a0: 0xc110a26  jal         func_442898
    ctx->pc = 0x1482A0u;
    SET_GPR_U32(ctx, 31, 0x1482A8u);
    ctx->pc = 0x442898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442898u, 0x1482A0u, 0x1482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482A8u;
label_1482a8:
    // 0x1482a8: 0xc110636  jal         func_4418D8
    ctx->pc = 0x1482A8u;
    SET_GPR_U32(ctx, 31, 0x1482B0u);
    ctx->pc = 0x4418D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4418D8u, 0x1482A8u, 0x1482B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482B0u;
label_1482b0:
    // 0x1482b0: 0xc10f034  jal         func_43C0D0
    ctx->pc = 0x1482B0u;
    SET_GPR_U32(ctx, 31, 0x1482B8u);
    ctx->pc = 0x1482B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482B0u;
    // 0x1482b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C0D0u, 0x1482B0u, 0x1482B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482B8u;
label_1482b8:
    // 0x1482b8: 0xc10f0fa  jal         func_43C3E8
    ctx->pc = 0x1482B8u;
    SET_GPR_U32(ctx, 31, 0x1482C0u);
    ctx->pc = 0x1482BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482B8u;
    // 0x1482bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C3E8u, 0x1482B8u, 0x1482C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482C0u;
label_1482c0:
    // 0x1482c0: 0xc0520d6  jal         func_148358
    ctx->pc = 0x1482C0u;
    SET_GPR_U32(ctx, 31, 0x1482C8u);
    ctx->pc = 0x148358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148358u, 0x1482C0u, 0x1482C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482C8u;
label_1482c8:
    // 0x1482c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1482c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1482cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1482ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1482d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1482D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1482D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482D0u;
        // 0x1482d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1482D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1482D8u;
}
