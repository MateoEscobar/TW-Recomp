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

// Function: sub_002FA650
// Address: 0x2fa650 - 0x2fa6e0
void sub_002FA650_0x2fa650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA650_0x2fa650");
#endif

    switch (ctx->pc) {
        case 0x2fa698u: goto label_2fa698;
        case 0x2fa6c0u: goto label_2fa6c0;
        default: break;
    }

    ctx->pc = 0x2fa650u;

    // 0x2fa650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fa660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa664: 0x9203001e  lbu         $v1, 0x1E($s0)
    ctx->pc = 0x2fa664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2fa668: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FA668u;
    {
        const bool branch_taken_0x2fa668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA668u;
        // 0x2fa66c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa668) {
            ctx->pc = 0x2FA6B8u;
            goto label_2fa6b8;
        }
    }
    ctx->pc = 0x2FA670u;
    // 0x2fa670: 0x9208001c  lbu         $t0, 0x1C($s0)
    ctx->pc = 0x2fa670u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fa674: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2fa674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa678: 0x9209001d  lbu         $t1, 0x1D($s0)
    ctx->pc = 0x2fa678u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x2fa67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa680: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fa680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fa684: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x2fa684u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa688: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x2fa688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fa68c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x2fa68cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa690: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2FA690u;
    SET_GPR_U32(ctx, 31, 0x2FA698u);
    ctx->pc = 0x2FA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA690u;
    // 0x2fa694: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2FA690u, 0x2FA698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA698u;
label_2fa698:
    // 0x2fa698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA698u;
    {
        const bool branch_taken_0x2fa698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA698u;
        // 0x2fa69c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa698) {
            ctx->pc = 0x2FA6A8u;
            goto label_2fa6a8;
        }
    }
    ctx->pc = 0x2FA6A0u;
    // 0x2fa6a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FA6A0u;
    {
        const bool branch_taken_0x2fa6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6A0u;
        // 0x2fa6a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6a0) {
            ctx->pc = 0x2FA6CCu;
            goto label_2fa6cc;
        }
    }
    ctx->pc = 0x2FA6A8u;
label_2fa6a8:
    // 0x2fa6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA6B0u;
    {
        const bool branch_taken_0x2fa6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6B0u;
        // 0x2fa6b4: 0xa203001e  sb          $v1, 0x1E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6b0) {
            ctx->pc = 0x2FA6CCu;
            goto label_2fa6cc;
        }
    }
    ctx->pc = 0x2FA6B8u;
label_2fa6b8:
    // 0x2fa6b8: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA6B8u;
    SET_GPR_U32(ctx, 31, 0x2FA6C0u);
    ctx->pc = 0x2FA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA6B8u;
    // 0x2fa6bc: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA6B8u, 0x2FA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA6C0u;
label_2fa6c0:
    // 0x2fa6c0: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fa6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa6c8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2fa6c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2fa6cc:
    // 0x2fa6cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6D4u;
        // 0x2fa6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA6DCu;
    // 0x2fa6dc: 0x0  nop
    ctx->pc = 0x2fa6dcu;
    // NOP
    ctx->pc = 0x2fa6e0u;
}
