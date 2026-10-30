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

// Function: sub_004A1EA0
// Address: 0x4a1ea0 - 0x4a1f00
void sub_004A1EA0_0x4a1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1EA0_0x4a1ea0");
#endif

    switch (ctx->pc) {
        case 0x4a1eecu: goto label_4a1eec;
        default: break;
    }

    ctx->pc = 0x4a1ea0u;

    // 0x4a1ea0: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4a1ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4a1ea4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a1ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a1eac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1eb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1EB0u;
    {
        const bool branch_taken_0x4a1eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1EB0u;
        // 0x4a1eb4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1eb0) {
            ctx->pc = 0x4A1EC4u;
            goto label_4a1ec4;
        }
    }
    ctx->pc = 0x4A1EB8u;
    // 0x4a1eb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a1ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1EBCu;
    {
        const bool branch_taken_0x4a1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1EBCu;
        // 0x4a1ec0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ebc) {
            ctx->pc = 0x4A1ECCu;
            goto label_4a1ecc;
        }
    }
    ctx->pc = 0x4A1EC4u;
label_4a1ec4:
    // 0x4a1ec4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a1ec8: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x4a1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_4a1ecc:
    // 0x4a1ecc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a1eccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x4a1ed0: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4a1ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x4a1ed4: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x4a1ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x4a1ed8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4a1ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4a1edc: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x4a1edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4a1ee0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x4a1ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a1ee4: 0xc128014  jal         func_4A0050
    ctx->pc = 0x4A1EE4u;
    SET_GPR_U32(ctx, 31, 0x4A1EECu);
    ctx->pc = 0x4A1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1EE4u;
    // 0x4a1ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0050u, 0x4A1EE4u, 0x4A1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1EECu;
label_4a1eec:
    // 0x4a1eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1EF4u;
        // 0x4a1ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1EFCu;
    // 0x4a1efc: 0x0  nop
    ctx->pc = 0x4a1efcu;
    // NOP
    ctx->pc = 0x4a1f00u;
}
