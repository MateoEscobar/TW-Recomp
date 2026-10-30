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

// Function: sub_00250D00
// Address: 0x250d00 - 0x250db0
void sub_00250D00_0x250d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250D00_0x250d00");
#endif

    switch (ctx->pc) {
        case 0x250d48u: goto label_250d48;
        case 0x250d78u: goto label_250d78;
        default: break;
    }

    ctx->pc = 0x250d00u;

    // 0x250d00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x250d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x250d04: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x250d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x250d08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x250d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x250d0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x250d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x250d14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x250d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x250d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x250d1c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x250d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x250d20: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x250d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x250d24: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x250D24u;
    {
        const bool branch_taken_0x250d24 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x250D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D24u;
        // 0x250d28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d24) {
            ctx->pc = 0x250D8Cu;
            goto label_250d8c;
        }
    }
    ctx->pc = 0x250D2Cu;
    // 0x250d2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x250d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x250d30: 0x8c500594  lw          $s0, 0x594($v0)
    ctx->pc = 0x250d30u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x510594u));
    // 0x250d34: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x250D34u;
    {
        const bool branch_taken_0x250d34 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x250D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D34u;
        // 0x250d38: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d34) {
            ctx->pc = 0x250D8Cu;
            goto label_250d8c;
        }
    }
    ctx->pc = 0x250D3Cu;
    // 0x250d3c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x250d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x250d40: 0x2413fff7  addiu       $s3, $zero, -0x9
    ctx->pc = 0x250d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x250d44: 0x8ea30590  lw          $v1, 0x590($s5)
    ctx->pc = 0x250d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1424)));
label_250d48:
    // 0x250d48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x250d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x250d4c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x250d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x250d50: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x250d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250d54: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x250d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250d58: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x250d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x250d5c: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x250d60: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x250D60u;
    {
        const bool branch_taken_0x250d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x250D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D60u;
        // 0x250d64: 0x741025  or          $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d60) {
            ctx->pc = 0x250D84u;
            goto label_250d84;
        }
    }
    ctx->pc = 0x250D68u;
    // 0x250d68: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250D68u;
    {
        const bool branch_taken_0x250d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D68u;
        // 0x250d6c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d68) {
            ctx->pc = 0x250D84u;
            goto label_250d84;
        }
    }
    ctx->pc = 0x250D70u;
    // 0x250d70: 0xc09422e  jal         func_2508B8
    ctx->pc = 0x250D70u;
    SET_GPR_U32(ctx, 31, 0x250D78u);
    ctx->pc = 0x250D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D70u;
    // 0x250d74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B8u, 0x250D70u, 0x250D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D78u;
label_250d78:
    // 0x250d78: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x250d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x250d7c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x250d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x250d80: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x250d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
label_250d84:
    // 0x250d84: 0x1e00fff0  bgtz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x250D84u;
    {
        const bool branch_taken_0x250d84 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D84u;
        // 0x250d88: 0x8ea30590  lw          $v1, 0x590($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d84) {
            ctx->pc = 0x250D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250d48;
        }
    }
    ctx->pc = 0x250D8Cu;
label_250d8c:
    // 0x250d8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x250d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250d90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x250d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250d94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x250d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250d98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x250d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250d9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x250d9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250da0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x250da0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250da8: 0x3e00008  jr          $ra
    ctx->pc = 0x250DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DA8u;
        // 0x250dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250DB0u;
}
