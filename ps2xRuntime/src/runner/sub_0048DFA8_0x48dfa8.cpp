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

// Function: sub_0048DFA8
// Address: 0x48dfa8 - 0x48e048
void sub_0048DFA8_0x48dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DFA8_0x48dfa8");
#endif

    switch (ctx->pc) {
        case 0x48e02cu: goto label_48e02c;
        default: break;
    }

    ctx->pc = 0x48dfa8u;

    // 0x48dfa8: 0x97838a12  lhu         $v1, -0x75EE($gp)
    ctx->pc = 0x48dfa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48dfac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48dfacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48dfb0: 0x8f858a0c  lw          $a1, -0x75F4($gp)
    ctx->pc = 0x48dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x48dfb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x48dfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dfb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48dfbc: 0x24010001  addiu       $at, $zero, 0x1
    ctx->pc = 0x48dfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48dfc0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x48dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x48dfc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48dfc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48dfcc: 0xa7838a12  sh          $v1, -0x75EE($gp)
    ctx->pc = 0x48dfccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 3));
    // 0x48dfd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48dfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48dfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dfd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x48dfdc: 0x97868682  lhu         $a2, -0x797E($gp)
    ctx->pc = 0x48dfdcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
    // 0x48dfe0: 0x97828a12  lhu         $v0, -0x75EE($gp)
    ctx->pc = 0x48dfe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48dfe4: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x48dfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x48dfe8: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x48DFE8u;
    {
        const bool branch_taken_0x48dfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x48dfe8) {
            ctx->pc = 0x48DFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48DFE8u;
            // 0x48dfec: 0xa7808a12  sh          $zero, -0x75EE($gp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48DFF0u;
            goto label_48dff0;
        }
    }
    ctx->pc = 0x48DFF0u;
label_48dff0:
    // 0x48dff0: 0x97848a10  lhu         $a0, -0x75F0($gp)
    ctx->pc = 0x48dff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x48dff4: 0x97828a12  lhu         $v0, -0x75EE($gp)
    ctx->pc = 0x48dff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48dff8: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48DFF8u;
    {
        const bool branch_taken_0x48dff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x48DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DFF8u;
        // 0x48dffc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dff8) {
            ctx->pc = 0x48E038u;
            goto label_48e038;
        }
    }
    ctx->pc = 0x48E000u;
    // 0x48e000: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x48e000u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x48e004: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48e004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e008: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x48e008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48e00c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x48e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x48e010: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x48e010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48e014: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E014u;
    {
        const bool branch_taken_0x48e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E014u;
        // 0x48e018: 0xa7848a12  sh          $a0, -0x75EE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e014) {
            ctx->pc = 0x48E024u;
            goto label_48e024;
        }
    }
    ctx->pc = 0x48E01Cu;
    // 0x48e01c: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x48e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48e020: 0xa7828a12  sh          $v0, -0x75EE($gp)
    ctx->pc = 0x48e020u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 2));
label_48e024:
    // 0x48e024: 0xc123024  jal         func_48C090
    ctx->pc = 0x48E024u;
    SET_GPR_U32(ctx, 31, 0x48E02Cu);
    ctx->pc = 0x48E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E024u;
    // 0x48e028: 0x97908a12  lhu         $s0, -0x75EE($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48E024u, 0x48E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E02Cu;
label_48e02c:
    // 0x48e02c: 0xa7908a10  sh          $s0, -0x75F0($gp)
    ctx->pc = 0x48e02cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937104), (uint16_t)GPR_U32(ctx, 16));
    // 0x48e030: 0xa7918a12  sh          $s1, -0x75EE($gp)
    ctx->pc = 0x48e030u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 17));
    // 0x48e034: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48e034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48e038:
    // 0x48e038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e040: 0x3e00008  jr          $ra
    ctx->pc = 0x48E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E040u;
        // 0x48e044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E048u;
}
