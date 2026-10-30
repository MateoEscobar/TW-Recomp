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

// Function: sub_0032DC20
// Address: 0x32dc20 - 0x32dcb0
void sub_0032DC20_0x32dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DC20_0x32dc20");
#endif

    switch (ctx->pc) {
        case 0x32dc40u: goto label_32dc40;
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc5cu: goto label_32dc5c;
        case 0x32dc7cu: goto label_32dc7c;
        case 0x32dc8cu: goto label_32dc8c;
        case 0x32dc98u: goto label_32dc98;
        default: break;
    }

    ctx->pc = 0x32dc20u;

    // 0x32dc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32dc24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32dc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32dc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32dc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32dc38: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32DC38u;
    SET_GPR_U32(ctx, 31, 0x32DC40u);
    ctx->pc = 0x32DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC38u;
    // 0x32dc3c: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32DC38u, 0x32DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC40u;
label_32dc40:
    // 0x32dc40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32DC40u;
    {
        const bool branch_taken_0x32dc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dc40) {
            ctx->pc = 0x32DC74u;
            goto label_32dc74;
        }
    }
    ctx->pc = 0x32DC48u;
    // 0x32dc48: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32DC48u;
    SET_GPR_U32(ctx, 31, 0x32DC50u);
    ctx->pc = 0x32DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC48u;
    // 0x32dc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32DC48u, 0x32DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC50u;
label_32dc50:
    // 0x32dc50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc54: 0xc0cb4d2  jal         func_32D348
    ctx->pc = 0x32DC54u;
    SET_GPR_U32(ctx, 31, 0x32DC5Cu);
    ctx->pc = 0x32DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC54u;
    // 0x32dc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D348u, 0x32DC54u, 0x32DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC5Cu;
label_32dc5c:
    // 0x32dc5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32dc60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32dc64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32dc68: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x32dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x32dc6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32DC6Cu;
    {
        const bool branch_taken_0x32dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC6Cu;
        // 0x32dc70: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc6c) {
            ctx->pc = 0x32DC8Cu;
            goto label_32dc8c;
        }
    }
    ctx->pc = 0x32DC74u;
label_32dc74:
    // 0x32dc74: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32DC74u;
    SET_GPR_U32(ctx, 31, 0x32DC7Cu);
    ctx->pc = 0x32DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC74u;
    // 0x32dc78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32DC74u, 0x32DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC7Cu;
label_32dc7c:
    // 0x32dc7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32dc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc84: 0xc0cb480  jal         func_32D200
    ctx->pc = 0x32DC84u;
    SET_GPR_U32(ctx, 31, 0x32DC8Cu);
    ctx->pc = 0x32DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC84u;
    // 0x32dc88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D200u, 0x32DC84u, 0x32DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC8Cu;
label_32dc8c:
    // 0x32dc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc90: 0xc0cb69a  jal         func_32DA68
    ctx->pc = 0x32DC90u;
    SET_GPR_U32(ctx, 31, 0x32DC98u);
    ctx->pc = 0x32DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC90u;
    // 0x32dc94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA68u, 0x32DC90u, 0x32DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC98u;
label_32dc98:
    // 0x32dc98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32dc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32dc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x32DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCA4u;
        // 0x32dca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DCACu;
    // 0x32dcac: 0x0  nop
    ctx->pc = 0x32dcacu;
    // NOP
    ctx->pc = 0x32dcb0u;
}
