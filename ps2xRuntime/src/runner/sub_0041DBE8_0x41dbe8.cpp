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

// Function: sub_0041DBE8
// Address: 0x41dbe8 - 0x41dc80
void sub_0041DBE8_0x41dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DBE8_0x41dbe8");
#endif

    switch (ctx->pc) {
        case 0x41dc10u: goto label_41dc10;
        case 0x41dc18u: goto label_41dc18;
        case 0x41dc68u: goto label_41dc68;
        default: break;
    }

    ctx->pc = 0x41dbe8u;

    // 0x41dbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41dbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41dbec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41dbf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41dbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41dbf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41dbf8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41dbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dbfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x41dc00: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x41dc00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41dc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41dc08: 0xc0e4060  jal         func_390180
    ctx->pc = 0x41DC08u;
    SET_GPR_U32(ctx, 31, 0x41DC10u);
    ctx->pc = 0x41DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DC08u;
    // 0x41dc0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41DC08u, 0x41DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DC10u;
label_41dc10:
    // 0x41dc10: 0xc08a61a  jal         func_229868
    ctx->pc = 0x41DC10u;
    SET_GPR_U32(ctx, 31, 0x41DC18u);
    ctx->pc = 0x41DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DC10u;
    // 0x41dc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x41DC10u, 0x41DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DC18u;
label_41dc18:
    // 0x41dc18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41dc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc1c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x41DC1Cu;
    {
        const bool branch_taken_0x41dc1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DC1Cu;
        // 0x41dc20: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc1c) {
            ctx->pc = 0x41DC68u;
            goto label_41dc68;
        }
    }
    ctx->pc = 0x41DC24u;
    // 0x41dc24: 0x80c501b0  lb          $a1, 0x1B0($a2)
    ctx->pc = 0x41dc24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 432)));
    // 0x41dc28: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x41dc2c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x41dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x41dc30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x41dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x41dc34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x41dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x41dc38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x41dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x41dc3c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x41DC3Cu;
    {
        const bool branch_taken_0x41dc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DC3Cu;
        // 0x41dc40: 0xa090041e  sb          $s0, 0x41E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1054), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc3c) {
            ctx->pc = 0x41DC68u;
            goto label_41dc68;
        }
    }
    ctx->pc = 0x41DC44u;
    // 0x41dc44: 0x80c201b0  lb          $v0, 0x1B0($a2)
    ctx->pc = 0x41dc44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 432)));
    // 0x41dc48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x41dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x41dc4c: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x41dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x41dc50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41dc58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41dc5c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x41dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x41dc60: 0xc069b0e  jal         func_1A6C38
    ctx->pc = 0x41DC60u;
    SET_GPR_U32(ctx, 31, 0x41DC68u);
    ctx->pc = 0x41DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DC60u;
    // 0x41dc64: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C38u, 0x41DC60u, 0x41DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DC68u;
label_41dc68:
    // 0x41dc68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41dc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41dc6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41dc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41dc70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41dc74: 0x3e00008  jr          $ra
    ctx->pc = 0x41DC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DC74u;
        // 0x41dc78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DC7Cu;
    // 0x41dc7c: 0x0  nop
    ctx->pc = 0x41dc7cu;
    // NOP
    ctx->pc = 0x41dc80u;
}
