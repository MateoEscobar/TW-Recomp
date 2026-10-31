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

// Function: sub_00236AD0
// Address: 0x236ad0 - 0x236b38
void sub_00236AD0_0x236ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AD0_0x236ad0");
#endif

    switch (ctx->pc) {
        case 0x236aecu: goto label_236aec;
        case 0x236af4u: goto label_236af4;
        default: break;
    }

    ctx->pc = 0x236ad0u;

    // 0x236ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236ad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236ad8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236ae4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x236AE4u;
    SET_GPR_U32(ctx, 31, 0x236AECu);
    ctx->pc = 0x236AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AE4u;
    // 0x236ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x236AE4u, 0x236AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AECu;
label_236aec:
    // 0x236aec: 0xc08a61a  jal         func_229868
    ctx->pc = 0x236AECu;
    SET_GPR_U32(ctx, 31, 0x236AF4u);
    ctx->pc = 0x236AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AECu;
    // 0x236af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x236AECu, 0x236AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AF4u;
label_236af4:
    // 0x236af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236af8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x236AF8u;
    {
        const bool branch_taken_0x236af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236af8) {
            ctx->pc = 0x236AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236AF8u;
            // 0x236afc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236B28u;
            goto label_236b28;
        }
    }
    ctx->pc = 0x236B00u;
    // 0x236b00: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236B00u;
    {
        const bool branch_taken_0x236b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B00u;
        // 0x236b04: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b00) {
            ctx->pc = 0x236B18u;
            goto label_236b18;
        }
    }
    ctx->pc = 0x236B08u;
    // 0x236b08: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x236b0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x236b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x236b10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236B10u;
    {
        const bool branch_taken_0x236b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B10u;
        // 0x236b14: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b10) {
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236B18u;
label_236b18:
    // 0x236b18: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x236b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x236b1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_236b20:
    // 0x236b20: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x236b20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x236b24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236b28:
    // 0x236b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x236B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B2Cu;
        // 0x236b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B34u;
    // 0x236b34: 0x0  nop
    ctx->pc = 0x236b34u;
    // NOP
    ctx->pc = 0x236b38u;
}
