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

// Function: sub_00373148
// Address: 0x373148 - 0x373200
void sub_00373148_0x373148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373148_0x373148");
#endif

    switch (ctx->pc) {
        case 0x373170u: goto label_373170;
        case 0x373178u: goto label_373178;
        case 0x37318cu: goto label_37318c;
        case 0x3731a0u: goto label_3731a0;
        case 0x3731b4u: goto label_3731b4;
        case 0x3731c8u: goto label_3731c8;
        case 0x3731d0u: goto label_3731d0;
        case 0x3731dcu: goto label_3731dc;
        default: break;
    }

    ctx->pc = 0x373148u;

    // 0x373148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37314c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373150: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x373150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x373154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373158: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x373158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37315c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373160: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x373160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x373164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373168: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373168u;
    SET_GPR_U32(ctx, 31, 0x373170u);
    ctx->pc = 0x37316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373168u;
    // 0x37316c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373168u, 0x373170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373170u;
label_373170:
    // 0x373170: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373170u;
    SET_GPR_U32(ctx, 31, 0x373178u);
    ctx->pc = 0x373174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373170u;
    // 0x373174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373170u, 0x373178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373178u;
label_373178:
    // 0x373178: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x373178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37317c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373180: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x373180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373184: 0xc102488  jal         func_409220
    ctx->pc = 0x373184u;
    SET_GPR_U32(ctx, 31, 0x37318Cu);
    ctx->pc = 0x373188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373184u;
    // 0x373188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373184u, 0x37318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37318Cu;
label_37318c:
    // 0x37318c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37318cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373194: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x373194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x373198: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373198u;
    SET_GPR_U32(ctx, 31, 0x3731A0u);
    ctx->pc = 0x37319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373198u;
    // 0x37319c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373198u, 0x3731A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731A0u;
label_3731a0:
    // 0x3731a0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x3731a0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3731a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3731a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3731a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3731a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3731ac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3731ACu;
    SET_GPR_U32(ctx, 31, 0x3731B4u);
    ctx->pc = 0x3731B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731ACu;
    // 0x3731b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3731ACu, 0x3731B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731B4u;
label_3731b4:
    // 0x3731b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3731b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3731b8: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x3731b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3731bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3731bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3731c0: 0xc05a872  jal         func_16A1C8
    ctx->pc = 0x3731C0u;
    SET_GPR_U32(ctx, 31, 0x3731C8u);
    ctx->pc = 0x3731C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731C0u;
    // 0x3731c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x3731C0u, 0x3731C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731C8u;
label_3731c8:
    // 0x3731c8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3731C8u;
    SET_GPR_U32(ctx, 31, 0x3731D0u);
    ctx->pc = 0x3731CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731C8u;
    // 0x3731cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3731C8u, 0x3731D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731D0u;
label_3731d0:
    // 0x3731d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3731d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3731d4: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3731D4u;
    SET_GPR_U32(ctx, 31, 0x3731DCu);
    ctx->pc = 0x3731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731D4u;
    // 0x3731d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3731D4u, 0x3731DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731DCu;
label_3731dc:
    // 0x3731dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3731dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3731e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3731e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3731e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3731e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3731e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3731e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3731ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3731ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3731f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3731f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3731f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3731F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731F4u;
        // 0x3731f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3731F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3731FCu;
    // 0x3731fc: 0x0  nop
    ctx->pc = 0x3731fcu;
    // NOP
    ctx->pc = 0x373200u;
}
