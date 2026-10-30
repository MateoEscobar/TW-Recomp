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

// Function: sub_00237BE0
// Address: 0x237be0 - 0x237c38
void sub_00237BE0_0x237be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237BE0_0x237be0");
#endif

    switch (ctx->pc) {
        case 0x237c00u: goto label_237c00;
        case 0x237c08u: goto label_237c08;
        default: break;
    }

    ctx->pc = 0x237be0u;

    // 0x237be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237be4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x237be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x237be8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237bec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237bf0: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x237bf0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x237bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237bf8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237BF8u;
    SET_GPR_U32(ctx, 31, 0x237C00u);
    ctx->pc = 0x237BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BF8u;
    // 0x237bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237BF8u, 0x237C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C00u;
label_237c00:
    // 0x237c00: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237C00u;
    SET_GPR_U32(ctx, 31, 0x237C08u);
    ctx->pc = 0x237C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C00u;
    // 0x237c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237C00u, 0x237C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c0c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x237C0Cu;
    {
        const bool branch_taken_0x237c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237c0c) {
            ctx->pc = 0x237C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C0Cu;
            // 0x237c10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C28u;
            goto label_237c28;
        }
    }
    ctx->pc = 0x237C14u;
    // 0x237c14: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x237c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x237c18: 0xa4500146  sh          $s0, 0x146($v0)
    ctx->pc = 0x237c18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 326), (uint16_t)GPR_U32(ctx, 16));
    // 0x237c1c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x237c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x237c20: 0xa4700144  sh          $s0, 0x144($v1)
    ctx->pc = 0x237c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 16));
    // 0x237c24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237c28:
    // 0x237c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x237C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C2Cu;
        // 0x237c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237C34u;
    // 0x237c34: 0x0  nop
    ctx->pc = 0x237c34u;
    // NOP
    ctx->pc = 0x237c38u;
}
