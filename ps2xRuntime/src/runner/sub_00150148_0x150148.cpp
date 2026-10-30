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

// Function: sub_00150148
// Address: 0x150148 - 0x1501a8
void sub_00150148_0x150148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150148_0x150148");
#endif

    switch (ctx->pc) {
        case 0x15015cu: goto label_15015c;
        case 0x150164u: goto label_150164;
        case 0x150170u: goto label_150170;
        case 0x150178u: goto label_150178;
        case 0x150180u: goto label_150180;
        default: break;
    }

    ctx->pc = 0x150148u;

    // 0x150148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15014c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150154: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150154u;
    SET_GPR_U32(ctx, 31, 0x15015Cu);
    ctx->pc = 0x150158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150154u;
    // 0x150158: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150154u, 0x15015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15015Cu;
label_15015c:
    // 0x15015c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x15015Cu;
    SET_GPR_U32(ctx, 31, 0x150164u);
    ctx->pc = 0x150160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15015Cu;
    // 0x150160: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x15015Cu, 0x150164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150164u;
label_150164:
    // 0x150164: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150168: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150168u;
    SET_GPR_U32(ctx, 31, 0x150170u);
    ctx->pc = 0x15016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150168u;
    // 0x15016c: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150168u, 0x150170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150170u;
label_150170:
    // 0x150170: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150170u;
    SET_GPR_U32(ctx, 31, 0x150178u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150170u, 0x150178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150178u;
label_150178:
    // 0x150178: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150178u;
    SET_GPR_U32(ctx, 31, 0x150180u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150178u, 0x150180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150180u;
label_150180:
    // 0x150180: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150188: 0x3e00008  jr          $ra
    ctx->pc = 0x150188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150188u;
        // 0x15018c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150190u;
    // 0x150190: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150194: 0x0  nop
    ctx->pc = 0x150194u;
    // NOP
    // 0x150198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15019c: 0x0  nop
    ctx->pc = 0x15019cu;
    // NOP
    // 0x1501a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1501a4: 0x0  nop
    ctx->pc = 0x1501a4u;
    // NOP
    ctx->pc = 0x1501a8u;
}
