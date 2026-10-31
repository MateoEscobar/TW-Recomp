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

// Function: sub_0027BDF8
// Address: 0x27bdf8 - 0x27be50
void sub_0027BDF8_0x27bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BDF8_0x27bdf8");
#endif

    switch (ctx->pc) {
        case 0x27be10u: goto label_27be10;
        case 0x27be24u: goto label_27be24;
        default: break;
    }

    ctx->pc = 0x27bdf8u;

    // 0x27bdf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bdfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27be00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27be04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27be08: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BE08u;
    SET_GPR_U32(ctx, 31, 0x27BE10u);
    ctx->pc = 0x27BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE08u;
    // 0x27be0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BE08u, 0x27BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE10u;
label_27be10:
    // 0x27be10: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x27be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27be14: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BE14u;
    {
        const bool branch_taken_0x27be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE14u;
        // 0x27be18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be14) {
            ctx->pc = 0x27BE30u;
            goto label_27be30;
        }
    }
    ctx->pc = 0x27BE1Cu;
    // 0x27be1c: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BE1Cu;
    SET_GPR_U32(ctx, 31, 0x27BE24u);
    ctx->pc = 0x27BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE1Cu;
    // 0x27be20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BE1Cu, 0x27BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE24u;
label_27be24:
    // 0x27be24: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x27be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27be28: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE28u;
    {
        const bool branch_taken_0x27be28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE28u;
        // 0x27be2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be28) {
            ctx->pc = 0x27BE38u;
            goto label_27be38;
        }
    }
    ctx->pc = 0x27BE30u;
label_27be30:
    // 0x27be30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27be30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27be34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27be34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27be38:
    // 0x27be38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27be38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27be3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27be40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27be40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be44: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE44u;
        // 0x27be48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BE4Cu;
    // 0x27be4c: 0x0  nop
    ctx->pc = 0x27be4cu;
    // NOP
    ctx->pc = 0x27be50u;
}
