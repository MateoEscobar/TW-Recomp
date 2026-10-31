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

// Function: sub_00389800
// Address: 0x389800 - 0x389848
void sub_00389800_0x389800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389800_0x389800");
#endif

    switch (ctx->pc) {
        case 0x389800u: goto label_389800;
        case 0x389804u: goto label_389804;
        case 0x389808u: goto label_389808;
        case 0x38980cu: goto label_38980c;
        case 0x389810u: goto label_389810;
        case 0x389814u: goto label_389814;
        case 0x389818u: goto label_389818;
        case 0x38981cu: goto label_38981c;
        case 0x389820u: goto label_389820;
        case 0x389824u: goto label_389824;
        case 0x389828u: goto label_389828;
        case 0x38982cu: goto label_38982c;
        case 0x389830u: goto label_389830;
        case 0x389834u: goto label_389834;
        case 0x389838u: goto label_389838;
        case 0x38983cu: goto label_38983c;
        case 0x389840u: goto label_389840;
        case 0x389844u: goto label_389844;
        default: break;
    }

    ctx->pc = 0x389800u;

label_389800:
    // 0x389800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x389800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_389804:
    // 0x389804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x389804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389808:
    // 0x389808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38980c:
    // 0x38980c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_389810:
    // 0x389810: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x389810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389814:
    // 0x389814: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x389814u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_389818:
    // 0x389818: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x389818u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38981c:
    // 0x38981c: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x38981cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_389820:
    // 0x389820: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x389820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_389824:
    // 0x389824: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x389824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_389828:
    // 0x389828: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x389828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_38982c:
    // 0x38982c: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x38982cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_389830:
    // 0x389830: 0xc0f809  jalr        $a2
label_389834:
    if (ctx->pc == 0x389834u) {
        ctx->pc = 0x389834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389830u;
        // 0x389834: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389838u;
        goto label_389838;
    }
    ctx->pc = 0x389830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x389838u);
        ctx->pc = 0x389834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389830u;
        // 0x389834: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389830u, 0x389838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389838u;
label_389838:
    // 0x389838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38983c:
    // 0x38983c: 0x3e00008  jr          $ra
label_389840:
    if (ctx->pc == 0x389840u) {
        ctx->pc = 0x389840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38983Cu;
        // 0x389840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389844u;
        goto label_389844;
    }
    ctx->pc = 0x38983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38983Cu;
        // 0x389840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389844u;
label_389844:
    // 0x389844: 0x0  nop
    ctx->pc = 0x389844u;
    // NOP
    ctx->pc = 0x389848u;
}
