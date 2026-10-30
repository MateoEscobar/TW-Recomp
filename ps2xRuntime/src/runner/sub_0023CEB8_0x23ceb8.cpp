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

// Function: sub_0023CEB8
// Address: 0x23ceb8 - 0x23cf00
void sub_0023CEB8_0x23ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CEB8_0x23ceb8");
#endif

    switch (ctx->pc) {
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        default: break;
    }

    ctx->pc = 0x23ceb8u;

label_23ceb8:
    // 0x23ceb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23cebc:
    // 0x23cebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23cec0:
    // 0x23cec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23cec4:
    // 0x23cec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23cec8:
    // 0x23cec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23cecc:
    // 0x23cecc: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x23ceccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_23ced0:
    // 0x23ced0: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x23ced0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_23ced4:
    // 0x23ced4: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x23ced4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23ced8:
    // 0x23ced8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_23cedc:
    // 0x23cedc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cee0:
    // 0x23cee0: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x23cee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_23cee4:
    // 0x23cee4: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x23cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_23cee8:
    // 0x23cee8: 0xc0f809  jalr        $a2
label_23ceec:
    if (ctx->pc == 0x23CEECu) {
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEF0u;
        goto label_23cef0;
    }
    ctx->pc = 0x23CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x23CEF0u);
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEE8u, 0x23CEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CEF0u;
label_23cef0:
    // 0x23cef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23cef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cef4:
    // 0x23cef4: 0x3e00008  jr          $ra
label_23cef8:
    if (ctx->pc == 0x23CEF8u) {
        ctx->pc = 0x23CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF4u;
        // 0x23cef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEFCu;
        goto label_23cefc;
    }
    ctx->pc = 0x23CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF4u;
        // 0x23cef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CEFCu;
label_23cefc:
    // 0x23cefc: 0x0  nop
    ctx->pc = 0x23cefcu;
    // NOP
    ctx->pc = 0x23cf00u;
}
