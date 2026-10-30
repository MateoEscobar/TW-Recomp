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

// Function: sub_004DAB68
// Address: 0x4dab68 - 0x4dabe8
void sub_004DAB68_0x4dab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAB68_0x4dab68");
#endif

    switch (ctx->pc) {
        case 0x4dab68u: goto label_4dab68;
        case 0x4dab6cu: goto label_4dab6c;
        case 0x4dab70u: goto label_4dab70;
        case 0x4dab74u: goto label_4dab74;
        case 0x4dab78u: goto label_4dab78;
        case 0x4dab7cu: goto label_4dab7c;
        case 0x4dab80u: goto label_4dab80;
        case 0x4dab84u: goto label_4dab84;
        case 0x4dab88u: goto label_4dab88;
        case 0x4dab8cu: goto label_4dab8c;
        case 0x4dab90u: goto label_4dab90;
        case 0x4dab94u: goto label_4dab94;
        case 0x4dab98u: goto label_4dab98;
        case 0x4dab9cu: goto label_4dab9c;
        case 0x4daba0u: goto label_4daba0;
        case 0x4daba4u: goto label_4daba4;
        case 0x4daba8u: goto label_4daba8;
        case 0x4dabacu: goto label_4dabac;
        case 0x4dabb0u: goto label_4dabb0;
        case 0x4dabb4u: goto label_4dabb4;
        case 0x4dabb8u: goto label_4dabb8;
        case 0x4dabbcu: goto label_4dabbc;
        case 0x4dabc0u: goto label_4dabc0;
        case 0x4dabc4u: goto label_4dabc4;
        case 0x4dabc8u: goto label_4dabc8;
        case 0x4dabccu: goto label_4dabcc;
        case 0x4dabd0u: goto label_4dabd0;
        case 0x4dabd4u: goto label_4dabd4;
        case 0x4dabd8u: goto label_4dabd8;
        case 0x4dabdcu: goto label_4dabdc;
        case 0x4dabe0u: goto label_4dabe0;
        case 0x4dabe4u: goto label_4dabe4;
        default: break;
    }

    ctx->pc = 0x4dab68u;

label_4dab68:
    // 0x4dab68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dab6c:
    // 0x4dab6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4dab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4dab70:
    // 0x4dab70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dab74:
    // 0x4dab74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dab78:
    // 0x4dab78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4dab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4dab7c:
    // 0x4dab7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dab7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dab80:
    // 0x4dab80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dab84:
    // 0x4dab84: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4dab88:
    if (ctx->pc == 0x4DAB88u) {
        ctx->pc = 0x4DAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB84u;
        // 0x4dab88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAB8Cu;
        goto label_4dab8c;
    }
    ctx->pc = 0x4DAB84u;
    {
        const bool branch_taken_0x4dab84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB84u;
        // 0x4dab88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dab84) {
            ctx->pc = 0x4DABCCu;
            goto label_4dabcc;
        }
    }
    ctx->pc = 0x4DAB8Cu;
label_4dab8c:
    // 0x4dab8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dab90:
    // 0x4dab90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4dab90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dab94:
    // 0x4dab94: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4dab94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4dab98:
    // 0x4dab98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4dab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4dab9c:
    // 0x4dab9c: 0x60f809  jalr        $v1
label_4daba0:
    if (ctx->pc == 0x4DABA0u) {
        ctx->pc = 0x4DABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB9Cu;
        // 0x4daba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DABA4u;
        goto label_4daba4;
    }
    ctx->pc = 0x4DAB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DABA4u);
        ctx->pc = 0x4DABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB9Cu;
        // 0x4daba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAB9Cu, 0x4DABA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DABA4u;
label_4daba4:
    // 0x4daba4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4daba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4daba8:
    // 0x4daba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4daba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dabac:
    // 0x4dabac: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dabacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dabb0:
    // 0x4dabb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4dabb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dabb4:
    // 0x4dabb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4dabb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dabb8:
    // 0x4dabb8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dabbc:
    // 0x4dabbc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dabbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dabc0:
    // 0x4dabc0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dabc4:
    // 0x4dabc4: 0x60f809  jalr        $v1
label_4dabc8:
    if (ctx->pc == 0x4DABC8u) {
        ctx->pc = 0x4DABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DABC4u;
        // 0x4dabc8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DABCCu;
        goto label_4dabcc;
    }
    ctx->pc = 0x4DABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DABCCu);
        ctx->pc = 0x4DABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DABC4u;
        // 0x4dabc8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DABC4u, 0x4DABCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DABCCu;
label_4dabcc:
    // 0x4dabcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dabccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dabd0:
    // 0x4dabd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dabd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dabd4:
    // 0x4dabd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dabd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dabd8:
    // 0x4dabd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dabd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dabdc:
    // 0x4dabdc: 0x3e00008  jr          $ra
label_4dabe0:
    if (ctx->pc == 0x4DABE0u) {
        ctx->pc = 0x4DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DABDCu;
        // 0x4dabe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DABE4u;
        goto label_4dabe4;
    }
    ctx->pc = 0x4DABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DABDCu;
        // 0x4dabe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DABDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DABE4u;
label_4dabe4:
    // 0x4dabe4: 0x0  nop
    ctx->pc = 0x4dabe4u;
    // NOP
    ctx->pc = 0x4dabe8u;
}
