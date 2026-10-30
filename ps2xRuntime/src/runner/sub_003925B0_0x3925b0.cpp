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

// Function: sub_003925B0
// Address: 0x3925b0 - 0x3925f8
void sub_003925B0_0x3925b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003925B0_0x3925b0");
#endif

    switch (ctx->pc) {
        case 0x3925b0u: goto label_3925b0;
        case 0x3925b4u: goto label_3925b4;
        case 0x3925b8u: goto label_3925b8;
        case 0x3925bcu: goto label_3925bc;
        case 0x3925c0u: goto label_3925c0;
        case 0x3925c4u: goto label_3925c4;
        case 0x3925c8u: goto label_3925c8;
        case 0x3925ccu: goto label_3925cc;
        case 0x3925d0u: goto label_3925d0;
        case 0x3925d4u: goto label_3925d4;
        case 0x3925d8u: goto label_3925d8;
        case 0x3925dcu: goto label_3925dc;
        case 0x3925e0u: goto label_3925e0;
        case 0x3925e4u: goto label_3925e4;
        case 0x3925e8u: goto label_3925e8;
        case 0x3925ecu: goto label_3925ec;
        case 0x3925f0u: goto label_3925f0;
        case 0x3925f4u: goto label_3925f4;
        default: break;
    }

    ctx->pc = 0x3925b0u;

label_3925b0:
    // 0x3925b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3925b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3925b4:
    // 0x3925b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3925b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3925b8:
    // 0x3925b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3925b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3925bc:
    // 0x3925bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3925bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3925c0:
    // 0x3925c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3925c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3925c4:
    // 0x3925c4: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3925c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3925c8:
    // 0x3925c8: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3925c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3925cc:
    // 0x3925cc: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3925ccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3925d0:
    // 0x3925d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3925d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3925d4:
    // 0x3925d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3925d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3925d8:
    // 0x3925d8: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x3925d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3925dc:
    // 0x3925dc: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x3925dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3925e0:
    // 0x3925e0: 0xc0f809  jalr        $a2
label_3925e4:
    if (ctx->pc == 0x3925E4u) {
        ctx->pc = 0x3925E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925E0u;
        // 0x3925e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925E8u;
        goto label_3925e8;
    }
    ctx->pc = 0x3925E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3925E8u);
        ctx->pc = 0x3925E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925E0u;
        // 0x3925e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3925E0u, 0x3925E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3925E8u;
label_3925e8:
    // 0x3925e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3925e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3925ec:
    // 0x3925ec: 0x3e00008  jr          $ra
label_3925f0:
    if (ctx->pc == 0x3925F0u) {
        ctx->pc = 0x3925F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925ECu;
        // 0x3925f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925F4u;
        goto label_3925f4;
    }
    ctx->pc = 0x3925ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3925F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925ECu;
        // 0x3925f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3925ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3925F4u;
label_3925f4:
    // 0x3925f4: 0x0  nop
    ctx->pc = 0x3925f4u;
    // NOP
    ctx->pc = 0x3925f8u;
}
