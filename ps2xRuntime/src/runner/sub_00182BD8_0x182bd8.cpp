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

// Function: sub_00182BD8
// Address: 0x182bd8 - 0x182c38
void sub_00182BD8_0x182bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182BD8_0x182bd8");
#endif

    switch (ctx->pc) {
        case 0x182c1cu: goto label_182c1c;
        default: break;
    }

    ctx->pc = 0x182bd8u;

    // 0x182bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182be8: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x182be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x182bec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182bf0: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x182BF0u;
    {
        const bool branch_taken_0x182bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x182BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BF0u;
        // 0x182bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bf0) {
            ctx->pc = 0x182C28u;
            goto label_182c28;
        }
    }
    ctx->pc = 0x182BF8u;
    // 0x182bf8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182BF8u;
    {
        const bool branch_taken_0x182bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BF8u;
        // 0x182bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bf8) {
            ctx->pc = 0x182C08u;
            goto label_182c08;
        }
    }
    ctx->pc = 0x182C00u;
    // 0x182c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182C00u;
    {
        const bool branch_taken_0x182c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C00u;
        // 0x182c04: 0xa2020010  sb          $v0, 0x10($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c00) {
            ctx->pc = 0x182C20u;
            goto label_182c20;
        }
    }
    ctx->pc = 0x182C08u;
label_182c08:
    // 0x182c08: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x182c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x182c0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182C0Cu;
    {
        const bool branch_taken_0x182c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C0Cu;
        // 0x182c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c0c) {
            ctx->pc = 0x182C1Cu;
            goto label_182c1c;
        }
    }
    ctx->pc = 0x182C14u;
    // 0x182c14: 0xc065cac  jal         func_1972B0
    ctx->pc = 0x182C14u;
    SET_GPR_U32(ctx, 31, 0x182C1Cu);
    ctx->pc = 0x182C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C14u;
    // 0x182c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x182C14u, 0x182C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C1Cu;
label_182c1c:
    // 0x182c1c: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x182c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_182c20:
    // 0x182c20: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x182c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x182c24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_182c28:
    // 0x182c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x182c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c30: 0x3e00008  jr          $ra
    ctx->pc = 0x182C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C30u;
        // 0x182c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C38u;
}
