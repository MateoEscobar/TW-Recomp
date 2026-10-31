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

// Function: sub_0024CA40
// Address: 0x24ca40 - 0x24cac8
void sub_0024CA40_0x24ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA40_0x24ca40");
#endif

    switch (ctx->pc) {
        case 0x24ca74u: goto label_24ca74;
        case 0x24ca8cu: goto label_24ca8c;
        case 0x24caa0u: goto label_24caa0;
        default: break;
    }

    ctx->pc = 0x24ca40u;

    // 0x24ca40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ca44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24ca48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24ca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24ca4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24ca4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24ca54: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x24ca58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ca5c: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x24ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x24ca60: 0x8e230358  lw          $v1, 0x358($s1)
    ctx->pc = 0x24ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x24ca64: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24CA64u;
    {
        const bool branch_taken_0x24ca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA64u;
        // 0x24ca68: 0x26240358  addiu       $a0, $s1, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca64) {
            ctx->pc = 0x24CAACu;
            goto label_24caac;
        }
    }
    ctx->pc = 0x24CA6Cu;
    // 0x24ca6c: 0xc0e4080  jal         func_390200
    ctx->pc = 0x24CA6Cu;
    SET_GPR_U32(ctx, 31, 0x24CA74u);
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x24CA6Cu, 0x24CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA74u;
label_24ca74:
    // 0x24ca74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ca74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca78: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CA78u;
    {
        const bool branch_taken_0x24ca78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA78u;
        // 0x24ca7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca78) {
            ctx->pc = 0x24CAA0u;
            goto label_24caa0;
        }
    }
    ctx->pc = 0x24CA80u;
    // 0x24ca80: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x24ca84: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x24CA84u;
    SET_GPR_U32(ctx, 31, 0x24CA8Cu);
    ctx->pc = 0x24CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA84u;
    // 0x24ca88: 0x34a5d4c0  ori         $a1, $a1, 0xD4C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x24CA84u, 0x24CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA8Cu;
label_24ca8c:
    // 0x24ca8c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x24ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x24ca90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca94: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x24ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x24ca98: 0xc08a5b0  jal         func_2296C0
    ctx->pc = 0x24CA98u;
    SET_GPR_U32(ctx, 31, 0x24CAA0u);
    ctx->pc = 0x24CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA98u;
    // 0x24ca9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x24CA98u, 0x24CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAA0u;
label_24caa0:
    // 0x24caa0: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x24caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x24caa4: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x24caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
    // 0x24caa8: 0xae220358  sw          $v0, 0x358($s1)
    ctx->pc = 0x24caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 2));
label_24caac:
    // 0x24caac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24caacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24cab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cab4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24cab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cabc: 0x3e00008  jr          $ra
    ctx->pc = 0x24CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CABCu;
        // 0x24cac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CAC4u;
    // 0x24cac4: 0x0  nop
    ctx->pc = 0x24cac4u;
    // NOP
    ctx->pc = 0x24cac8u;
}
