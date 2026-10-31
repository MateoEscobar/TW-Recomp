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

// Function: sub_002FA800
// Address: 0x2fa800 - 0x2fa878
void sub_002FA800_0x2fa800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA800_0x2fa800");
#endif

    switch (ctx->pc) {
        case 0x2fa83cu: goto label_2fa83c;
        case 0x2fa858u: goto label_2fa858;
        default: break;
    }

    ctx->pc = 0x2fa800u;

    // 0x2fa800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa804: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fa804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fa808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa80c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2fa80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2fa810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa818: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2fa818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2fa81c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa820: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x2fa820u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fa824: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x2fa824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x2fa828: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2fa828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa82c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA82Cu;
    {
        const bool branch_taken_0x2fa82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA82Cu;
        // 0x2fa830: 0x45300a  movz        $a2, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa82c) {
            ctx->pc = 0x2FA84Cu;
            goto label_2fa84c;
        }
    }
    ctx->pc = 0x2FA834u;
    // 0x2fa834: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA834u;
    SET_GPR_U32(ctx, 31, 0x2FA83Cu);
    ctx->pc = 0x2FA838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA834u;
    // 0x2fa838: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA834u, 0x2FA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA83Cu;
label_2fa83c:
    // 0x2fa83c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fa83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA844u;
    {
        const bool branch_taken_0x2fa844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA844u;
        // 0x2fa848: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa844) {
            ctx->pc = 0x2FA864u;
            goto label_2fa864;
        }
    }
    ctx->pc = 0x2FA84Cu;
label_2fa84c:
    // 0x2fa84c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fa84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fa850: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x2FA850u;
    SET_GPR_U32(ctx, 31, 0x2FA858u);
    ctx->pc = 0x2FA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA850u;
    // 0x2fa854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2FA850u, 0x2FA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA858u;
label_2fa858:
    // 0x2fa858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa860: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x2fa860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
label_2fa864:
    // 0x2fa864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa86c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA86Cu;
        // 0x2fa870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA874u;
    // 0x2fa874: 0x0  nop
    ctx->pc = 0x2fa874u;
    // NOP
    ctx->pc = 0x2fa878u;
}
