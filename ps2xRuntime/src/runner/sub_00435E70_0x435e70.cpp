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

// Function: sub_00435E70
// Address: 0x435e70 - 0x435ef0
void sub_00435E70_0x435e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435E70_0x435e70");
#endif

    switch (ctx->pc) {
        case 0x435ea0u: goto label_435ea0;
        case 0x435ebcu: goto label_435ebc;
        default: break;
    }

    ctx->pc = 0x435e70u;

    // 0x435e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x435e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x435e74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x435e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x435e78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x435e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x435e7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x435e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x435e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x435e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435e88: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x435e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x435e8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x435E8Cu;
    {
        const bool branch_taken_0x435e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E8Cu;
        // 0x435e90: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e8c) {
            ctx->pc = 0x435ED0u;
            goto label_435ed0;
        }
    }
    ctx->pc = 0x435E94u;
    // 0x435e94: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x435e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x435e98: 0x2452c531  addiu       $s2, $v0, -0x3ACF
    ctx->pc = 0x435e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x435e9c: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x435e9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_435ea0:
    // 0x435ea0: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x435ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x435ea4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x435ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x435ea8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x435ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x435eac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x435EACu;
    {
        const bool branch_taken_0x435eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435eac) {
            ctx->pc = 0x435EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435EACu;
            // 0x435eb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435EC4u;
            goto label_435ec4;
        }
    }
    ctx->pc = 0x435EB4u;
    // 0x435eb4: 0xc10e69c  jal         func_439A70
    ctx->pc = 0x435EB4u;
    SET_GPR_U32(ctx, 31, 0x435EBCu);
    ctx->pc = 0x439A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A70u, 0x435EB4u, 0x435EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435EBCu;
label_435ebc:
    // 0x435ebc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x435ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x435ec0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x435ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_435ec4:
    // 0x435ec4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x435ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x435ec8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x435EC8u;
    {
        const bool branch_taken_0x435ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435ec8) {
            ctx->pc = 0x435ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435EC8u;
            // 0x435ecc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435ea0;
        }
    }
    ctx->pc = 0x435ED0u;
label_435ed0:
    // 0x435ed0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x435ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ed4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x435ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x435ed8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x435ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435edc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x435edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x435EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435EE4u;
        // 0x435ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435EECu;
    // 0x435eec: 0x0  nop
    ctx->pc = 0x435eecu;
    // NOP
    ctx->pc = 0x435ef0u;
}
