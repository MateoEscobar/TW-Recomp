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

// Function: sub_0033AB28
// Address: 0x33ab28 - 0x33ab98
void sub_0033AB28_0x33ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB28_0x33ab28");
#endif

    switch (ctx->pc) {
        case 0x33ab6cu: goto label_33ab6c;
        case 0x33ab74u: goto label_33ab74;
        case 0x33ab88u: goto label_33ab88;
        default: break;
    }

    ctx->pc = 0x33ab28u;

    // 0x33ab28: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x33ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x33ab2c: 0xffa50258  sd          $a1, 0x258($sp)
    ctx->pc = 0x33ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 5));
    // 0x33ab30: 0xffa60260  sd          $a2, 0x260($sp)
    ctx->pc = 0x33ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 6));
    // 0x33ab34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33ab34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab38: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x33ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x33ab3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab40: 0x27a60258  addiu       $a2, $sp, 0x258
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x33ab44: 0xffa70268  sd          $a3, 0x268($sp)
    ctx->pc = 0x33ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 7));
    // 0x33ab48: 0xffa80270  sd          $t0, 0x270($sp)
    ctx->pc = 0x33ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 8));
    // 0x33ab4c: 0xffa90278  sd          $t1, 0x278($sp)
    ctx->pc = 0x33ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 9));
    // 0x33ab50: 0xffaa0280  sd          $t2, 0x280($sp)
    ctx->pc = 0x33ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 10));
    // 0x33ab54: 0xffab0288  sd          $t3, 0x288($sp)
    ctx->pc = 0x33ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 11));
    // 0x33ab58: 0xe7ac0248  swc1        $f12, 0x248($sp)
    ctx->pc = 0x33ab58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x33ab5c: 0xe7ae024c  swc1        $f14, 0x24C($sp)
    ctx->pc = 0x33ab5cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x33ab60: 0xe7b00250  swc1        $f16, 0x250($sp)
    ctx->pc = 0x33ab60u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x33ab64: 0xc10ce32  jal         func_4338C8
    ctx->pc = 0x33AB64u;
    SET_GPR_U32(ctx, 31, 0x33AB6Cu);
    ctx->pc = 0x33AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB64u;
    // 0x33ab68: 0xe7b20254  swc1        $f18, 0x254($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4338C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4338C8u, 0x33AB64u, 0x33AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB6Cu;
label_33ab6c:
    // 0x33ab6c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x33AB6Cu;
    SET_GPR_U32(ctx, 31, 0x33AB74u);
    ctx->pc = 0x33AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB6Cu;
    // 0x33ab70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x33AB6Cu, 0x33AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB74u;
label_33ab74:
    // 0x33ab74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x33ab78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33ab78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab7c: 0x8c6427ec  lw          $a0, 0x27EC($v1)
    ctx->pc = 0x33ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5127ECu));
    // 0x33ab80: 0xc110872  jal         func_4421C8
    ctx->pc = 0x33AB80u;
    SET_GPR_U32(ctx, 31, 0x33AB88u);
    ctx->pc = 0x33AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB80u;
    // 0x33ab84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4421C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4421C8u, 0x33AB80u, 0x33AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB88u;
label_33ab88:
    // 0x33ab88: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x33ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x33ab8c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB8Cu;
        // 0x33ab90: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB94u;
    // 0x33ab94: 0x0  nop
    ctx->pc = 0x33ab94u;
    // NOP
    ctx->pc = 0x33ab98u;
}
