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

// Function: sub_0039BBA0
// Address: 0x39bba0 - 0x39bbf0
void sub_0039BBA0_0x39bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BBA0_0x39bba0");
#endif

    switch (ctx->pc) {
        case 0x39bba0u: goto label_39bba0;
        case 0x39bba4u: goto label_39bba4;
        case 0x39bba8u: goto label_39bba8;
        case 0x39bbacu: goto label_39bbac;
        case 0x39bbb0u: goto label_39bbb0;
        case 0x39bbb4u: goto label_39bbb4;
        case 0x39bbb8u: goto label_39bbb8;
        case 0x39bbbcu: goto label_39bbbc;
        case 0x39bbc0u: goto label_39bbc0;
        case 0x39bbc4u: goto label_39bbc4;
        case 0x39bbc8u: goto label_39bbc8;
        case 0x39bbccu: goto label_39bbcc;
        case 0x39bbd0u: goto label_39bbd0;
        case 0x39bbd4u: goto label_39bbd4;
        case 0x39bbd8u: goto label_39bbd8;
        case 0x39bbdcu: goto label_39bbdc;
        case 0x39bbe0u: goto label_39bbe0;
        case 0x39bbe4u: goto label_39bbe4;
        case 0x39bbe8u: goto label_39bbe8;
        case 0x39bbecu: goto label_39bbec;
        default: break;
    }

    ctx->pc = 0x39bba0u;

label_39bba0:
    // 0x39bba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39bba4:
    // 0x39bba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39bba8:
    // 0x39bba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39bba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39bbac:
    // 0x39bbac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_39bbb0:
    if (ctx->pc == 0x39BBB0u) {
        ctx->pc = 0x39BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBACu;
        // 0x39bbb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BBB4u;
        goto label_39bbb4;
    }
    ctx->pc = 0x39BBACu;
    {
        const bool branch_taken_0x39bbac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBACu;
        // 0x39bbb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bbac) {
            ctx->pc = 0x39BBBCu;
            goto label_39bbbc;
        }
    }
    ctx->pc = 0x39BBB4u;
label_39bbb4:
    // 0x39bbb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_39bbb8:
    if (ctx->pc == 0x39BBB8u) {
        ctx->pc = 0x39BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBB4u;
        // 0x39bbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BBBCu;
        goto label_39bbbc;
    }
    ctx->pc = 0x39BBB4u;
    {
        const bool branch_taken_0x39bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBB4u;
        // 0x39bbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bbb4) {
            ctx->pc = 0x39BBDCu;
            goto label_39bbdc;
        }
    }
    ctx->pc = 0x39BBBCu;
label_39bbbc:
    // 0x39bbbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39bbc0:
    // 0x39bbc0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x39bbc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_39bbc4:
    // 0x39bbc4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39bbc8:
    // 0x39bbc8: 0x40f809  jalr        $v0
label_39bbcc:
    if (ctx->pc == 0x39BBCCu) {
        ctx->pc = 0x39BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBC8u;
        // 0x39bbcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BBD0u;
        goto label_39bbd0;
    }
    ctx->pc = 0x39BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BBD0u);
        ctx->pc = 0x39BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBC8u;
        // 0x39bbcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BBC8u, 0x39BBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BBD0u;
label_39bbd0:
    // 0x39bbd0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x39bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_39bbd4:
    // 0x39bbd4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x39bbd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_39bbd8:
    // 0x39bbd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39bbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39bbdc:
    // 0x39bbdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39bbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bbe0:
    // 0x39bbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39bbe4:
    // 0x39bbe4: 0x3e00008  jr          $ra
label_39bbe8:
    if (ctx->pc == 0x39BBE8u) {
        ctx->pc = 0x39BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBE4u;
        // 0x39bbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BBECu;
        goto label_39bbec;
    }
    ctx->pc = 0x39BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBE4u;
        // 0x39bbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BBECu;
label_39bbec:
    // 0x39bbec: 0x0  nop
    ctx->pc = 0x39bbecu;
    // NOP
    ctx->pc = 0x39bbf0u;
}
