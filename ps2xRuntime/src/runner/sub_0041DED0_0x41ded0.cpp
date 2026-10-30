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

// Function: sub_0041DED0
// Address: 0x41ded0 - 0x41df40
void sub_0041DED0_0x41ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DED0_0x41ded0");
#endif

    switch (ctx->pc) {
        case 0x41df18u: goto label_41df18;
        default: break;
    }

    ctx->pc = 0x41ded0u;

    // 0x41ded0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41ded4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41ded4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41ded8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41ded8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41dedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41dedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41dee4: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x41dee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41dee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41DEE8u;
    {
        const bool branch_taken_0x41dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DEE8u;
        // 0x41deec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dee8) {
            ctx->pc = 0x41DF04u;
            goto label_41df04;
        }
    }
    ctx->pc = 0x41DEF0u;
    // 0x41def0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41def4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x41def4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x41def8: 0x2442b300  addiu       $v0, $v0, -0x4D00
    ctx->pc = 0x41def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x41defc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41df00: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x41df00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41df04:
    // 0x41df04: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x41df08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41df08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x41df0c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x41df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x41df10: 0xc10904c  jal         func_424130
    ctx->pc = 0x41DF10u;
    SET_GPR_U32(ctx, 31, 0x41DF18u);
    ctx->pc = 0x41DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DF10u;
    // 0x41df14: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x41DF10u, 0x41DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DF18u;
label_41df18:
    // 0x41df18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41DF18u;
    {
        const bool branch_taken_0x41df18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DF18u;
        // 0x41df1c: 0x3a030001  xori        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41df18) {
            ctx->pc = 0x41DF28u;
            goto label_41df28;
        }
    }
    ctx->pc = 0x41DF20u;
    // 0x41df20: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x41df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41df24: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x41df24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_41df28:
    // 0x41df28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41df28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41df2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41df30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41df30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41df34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41df34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41df38: 0x3e00008  jr          $ra
    ctx->pc = 0x41DF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DF38u;
        // 0x41df3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DF40u;
}
