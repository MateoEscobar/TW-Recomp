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

// Function: sub_002E4AB8
// Address: 0x2e4ab8 - 0x2e4b30
void sub_002E4AB8_0x2e4ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4AB8_0x2e4ab8");
#endif

    switch (ctx->pc) {
        case 0x2e4adcu: goto label_2e4adc;
        case 0x2e4ae4u: goto label_2e4ae4;
        case 0x2e4aecu: goto label_2e4aec;
        case 0x2e4b08u: goto label_2e4b08;
        case 0x2e4b14u: goto label_2e4b14;
        default: break;
    }

    ctx->pc = 0x2e4ab8u;

    // 0x2e4ab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e4abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4ac0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e4ac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e4ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ac8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e4ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e4acc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e4ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4ad4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E4AD4u;
    SET_GPR_U32(ctx, 31, 0x2E4ADCu);
    ctx->pc = 0x2E4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4AD4u;
    // 0x2e4ad8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E4AD4u, 0x2E4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ADCu;
label_2e4adc:
    // 0x2e4adc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E4ADCu;
    SET_GPR_U32(ctx, 31, 0x2E4AE4u);
    ctx->pc = 0x2E4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4ADCu;
    // 0x2e4ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E4ADCu, 0x2E4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AE4u;
label_2e4ae4:
    // 0x2e4ae4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E4AE4u;
    SET_GPR_U32(ctx, 31, 0x2E4AECu);
    ctx->pc = 0x2E4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4AE4u;
    // 0x2e4ae8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E4AE4u, 0x2E4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AECu;
label_2e4aec:
    // 0x2e4aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4af0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4AF0u;
    {
        const bool branch_taken_0x2e4af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AF0u;
        // 0x2e4af4: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4af0) {
            ctx->pc = 0x2E4B08u;
            goto label_2e4b08;
        }
    }
    ctx->pc = 0x2E4AF8u;
    // 0x2e4af8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e4af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b00: 0xc0b92cc  jal         func_2E4B30
    ctx->pc = 0x2E4B00u;
    SET_GPR_U32(ctx, 31, 0x2E4B08u);
    ctx->pc = 0x2E4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B00u;
    // 0x2e4b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4B30u, 0x2E4B00u, 0x2E4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B08u;
label_2e4b08:
    // 0x2e4b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b0c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E4B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B14u);
    ctx->pc = 0x2E4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B0Cu;
    // 0x2e4b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E4B0Cu, 0x2E4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B14u;
label_2e4b14:
    // 0x2e4b14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e4b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4b18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e4b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4b24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B24u;
        // 0x2e4b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B2Cu;
    // 0x2e4b2c: 0x0  nop
    ctx->pc = 0x2e4b2cu;
    // NOP
    ctx->pc = 0x2e4b30u;
}
