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

// Function: sub_00330AA8
// Address: 0x330aa8 - 0x330b40
void sub_00330AA8_0x330aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330AA8_0x330aa8");
#endif

    switch (ctx->pc) {
        case 0x330adcu: goto label_330adc;
        case 0x330b0cu: goto label_330b0c;
        default: break;
    }

    ctx->pc = 0x330aa8u;

    // 0x330aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x330aac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x330aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x330ab0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330ab4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x330ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ab8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x330ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x330abc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ac0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x330ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ac8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x330acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330ad0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x330ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ad4: 0xc0cc0f2  jal         func_3303C8
    ctx->pc = 0x330AD4u;
    SET_GPR_U32(ctx, 31, 0x330ADCu);
    ctx->pc = 0x330AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AD4u;
    // 0x330ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3303C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3303C8u, 0x330AD4u, 0x330ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330ADCu;
label_330adc:
    // 0x330adc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x330adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x330ae0: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x330ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x330ae4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x330ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330ae8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x330ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x330aec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x330aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x330af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x330af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330af8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x330af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x330afc: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x330afcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x330b00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x330b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b04: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x330B04u;
    SET_GPR_U32(ctx, 31, 0x330B0Cu);
    ctx->pc = 0x330B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B04u;
    // 0x330b08: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x330B04u, 0x330B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B0Cu;
label_330b0c:
    // 0x330b0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x330b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x330B10u;
    {
        const bool branch_taken_0x330b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x330B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B10u;
        // 0x330b14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b10) {
            ctx->pc = 0x330B20u;
            goto label_330b20;
        }
    }
    ctx->pc = 0x330B18u;
    // 0x330b18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x330b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x330b1c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x330b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_330b20:
    // 0x330b20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x330b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x330b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330b28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x330b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330b2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x330b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330b30: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x330b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330b38: 0x3e00008  jr          $ra
    ctx->pc = 0x330B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B38u;
        // 0x330b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330B40u;
}
