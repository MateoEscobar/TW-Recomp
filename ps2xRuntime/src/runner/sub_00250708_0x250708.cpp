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

// Function: sub_00250708
// Address: 0x250708 - 0x250760
void sub_00250708_0x250708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250708_0x250708");
#endif

    switch (ctx->pc) {
        case 0x250720u: goto label_250720;
        case 0x25073cu: goto label_25073c;
        default: break;
    }

    ctx->pc = 0x250708u;

    // 0x250708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25070c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x250710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x250714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250718: 0xc0941d8  jal         func_250760
    ctx->pc = 0x250718u;
    SET_GPR_U32(ctx, 31, 0x250720u);
    ctx->pc = 0x25071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250718u;
    // 0x25071c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x250718u, 0x250720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250720u;
label_250720:
    // 0x250720: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x250720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250724: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x250724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x250728: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250728u;
    {
        const bool branch_taken_0x250728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250728u;
        // 0x25072c: 0xac50a234  sw          $s0, -0x5DCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250728) {
            ctx->pc = 0x250748u;
            goto label_250748;
        }
    }
    ctx->pc = 0x250730u;
    // 0x250730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250734: 0xc093a98  jal         func_24EA60
    ctx->pc = 0x250734u;
    SET_GPR_U32(ctx, 31, 0x25073Cu);
    ctx->pc = 0x250738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250734u;
    // 0x250738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EA60u, 0x250734u, 0x25073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25073Cu;
label_25073c:
    // 0x25073c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x25073cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x250740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250740u;
    {
        const bool branch_taken_0x250740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250740u;
        // 0x250744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250740) {
            ctx->pc = 0x25074Cu;
            goto label_25074c;
        }
    }
    ctx->pc = 0x250748u;
label_250748:
    // 0x250748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25074c:
    // 0x25074c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25074cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250758: 0x3e00008  jr          $ra
    ctx->pc = 0x250758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250758u;
        // 0x25075c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250760u;
}
