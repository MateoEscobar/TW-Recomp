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

// Function: sub_00143FD8
// Address: 0x143fd8 - 0x144050
void sub_00143FD8_0x143fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143FD8_0x143fd8");
#endif

    switch (ctx->pc) {
        case 0x144000u: goto label_144000;
        case 0x144024u: goto label_144024;
        default: break;
    }

    ctx->pc = 0x143fd8u;

    // 0x143fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x143fdc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x143fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x143fe0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x143fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x143fe4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x143fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x143fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x143fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x143fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x143ff0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x143ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143FF8u;
    {
        const bool branch_taken_0x143ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0x2452c531  addiu       $s2, $v0, -0x3ACF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff8) {
            ctx->pc = 0x14401Cu;
            goto label_14401c;
        }
    }
    ctx->pc = 0x144000u;
label_144000:
    // 0x144000: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x144004: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x144004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x144008: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x144008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14400c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x144010: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x144010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x144014: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x144014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x144018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14401c:
    // 0x14401c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x14401Cu;
    SET_GPR_U32(ctx, 31, 0x144024u);
    ctx->pc = 0x144020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14401Cu;
    // 0x144020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x14401Cu, 0x144024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144024u;
label_144024:
    // 0x144024: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x144024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x144028: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x144028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14402c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x14402Cu;
    {
        const bool branch_taken_0x14402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14402c) {
            ctx->pc = 0x144030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14402Cu;
            // 0x144030: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144000;
        }
    }
    ctx->pc = 0x144034u;
    // 0x144034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x144034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14403c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14403cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144044: 0x3e00008  jr          $ra
    ctx->pc = 0x144044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144044u;
        // 0x144048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14404Cu;
    // 0x14404c: 0x0  nop
    ctx->pc = 0x14404cu;
    // NOP
    ctx->pc = 0x144050u;
}
