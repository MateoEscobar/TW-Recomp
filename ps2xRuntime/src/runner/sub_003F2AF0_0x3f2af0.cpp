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

// Function: sub_003F2AF0
// Address: 0x3f2af0 - 0x3f2b60
void sub_003F2AF0_0x3f2af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2AF0_0x3f2af0");
#endif

    switch (ctx->pc) {
        case 0x3f2b10u: goto label_3f2b10;
        case 0x3f2b24u: goto label_3f2b24;
        case 0x3f2b4cu: goto label_3f2b4c;
        default: break;
    }

    ctx->pc = 0x3f2af0u;

    // 0x3f2af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2af4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f2af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f2af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2b04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b08: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F2B08u;
    SET_GPR_U32(ctx, 31, 0x3F2B10u);
    ctx->pc = 0x3F2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B08u;
    // 0x3f2b0c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F2B08u, 0x3F2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B10u;
label_3f2b10:
    // 0x3f2b10: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2B10u;
    {
        const bool branch_taken_0x3f2b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b10) {
            ctx->pc = 0x3F2B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2B10u;
            // 0x3f2b14: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2B34u;
            goto label_3f2b34;
        }
    }
    ctx->pc = 0x3F2B18u;
    // 0x3f2b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b1c: 0xc0fc9a6  jal         func_3F2698
    ctx->pc = 0x3F2B1Cu;
    SET_GPR_U32(ctx, 31, 0x3F2B24u);
    ctx->pc = 0x3F2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B1Cu;
    // 0x3f2b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F2B1Cu, 0x3F2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B24u;
label_3f2b24:
    // 0x3f2b24: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3f2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f2b28: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3f2b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3f2b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2B2Cu;
    {
        const bool branch_taken_0x3f2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B2Cu;
        // 0x3f2b30: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b2c) {
            ctx->pc = 0x3F2B4Cu;
            goto label_3f2b4c;
        }
    }
    ctx->pc = 0x3F2B34u;
label_3f2b34:
    // 0x3f2b34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3f2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3f2b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2b40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f2b44: 0xc0fc8fe  jal         func_3F23F8
    ctx->pc = 0x3F2B44u;
    SET_GPR_U32(ctx, 31, 0x3F2B4Cu);
    ctx->pc = 0x3F2B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2B44u;
    // 0x3f2b48: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F23F8u, 0x3F2B44u, 0x3F2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B4Cu;
label_3f2b4c:
    // 0x3f2b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f2b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f2b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2b58: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B58u;
        // 0x3f2b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2B60u;
}
