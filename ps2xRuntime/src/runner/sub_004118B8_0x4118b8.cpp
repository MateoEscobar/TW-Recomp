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

// Function: sub_004118B8
// Address: 0x4118b8 - 0x411958
void sub_004118B8_0x4118b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004118B8_0x4118b8");
#endif

    switch (ctx->pc) {
        case 0x4118d8u: goto label_4118d8;
        case 0x4118f8u: goto label_4118f8;
        case 0x411910u: goto label_411910;
        case 0x411918u: goto label_411918;
        case 0x411920u: goto label_411920;
        case 0x41192cu: goto label_41192c;
        case 0x411938u: goto label_411938;
        default: break;
    }

    ctx->pc = 0x4118b8u;

    // 0x4118b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4118b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4118bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4118bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4118c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4118c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4118c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4118c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4118c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4118c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4118cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4118ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4118d0: 0xc066408  jal         func_199020
    ctx->pc = 0x4118D0u;
    SET_GPR_U32(ctx, 31, 0x4118D8u);
    ctx->pc = 0x4118D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4118D0u;
    // 0x4118d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199020u, 0x4118D0u, 0x4118D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4118D8u;
label_4118d8:
    // 0x4118d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4118d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4118dc: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x4118dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CED0u));
    // 0x4118e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4118e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4118e4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4118e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4118e8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4118E8u;
    {
        const bool branch_taken_0x4118e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118E8u;
        // 0x4118ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4118e8) {
            ctx->pc = 0x41193Cu;
            goto label_41193c;
        }
    }
    ctx->pc = 0x4118F0u;
    // 0x4118f0: 0xc066088  jal         func_198220
    ctx->pc = 0x4118F0u;
    SET_GPR_U32(ctx, 31, 0x4118F8u);
    ctx->pc = 0x4118F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4118F0u;
    // 0x4118f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198220u, 0x4118F0u, 0x4118F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4118F8u;
label_4118f8:
    // 0x4118f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4118F8u;
    {
        const bool branch_taken_0x4118f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4118FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4118F8u;
        // 0x4118fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4118f8) {
            ctx->pc = 0x41193Cu;
            goto label_41193c;
        }
    }
    ctx->pc = 0x411900u;
    // 0x411900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x411900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411904: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x411904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x411908: 0xc11a830  jal         func_46A0C0
    ctx->pc = 0x411908u;
    SET_GPR_U32(ctx, 31, 0x411910u);
    ctx->pc = 0x41190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411908u;
    // 0x41190c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x411908u, 0x411910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411910u;
label_411910:
    // 0x411910: 0xc121090  jal         func_484240
    ctx->pc = 0x411910u;
    SET_GPR_U32(ctx, 31, 0x411918u);
    ctx->pc = 0x411914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411910u;
    // 0x411914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484240u, 0x411910u, 0x411918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411918u;
label_411918:
    // 0x411918: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x411918u;
    SET_GPR_U32(ctx, 31, 0x411920u);
    ctx->pc = 0x41191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411918u;
    // 0x41191c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x411918u, 0x411920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411920u;
label_411920:
    // 0x411920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x411920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411924: 0xc0663fc  jal         func_198FF0
    ctx->pc = 0x411924u;
    SET_GPR_U32(ctx, 31, 0x41192Cu);
    ctx->pc = 0x411928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411924u;
    // 0x411928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FF0u, 0x411924u, 0x41192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41192Cu;
label_41192c:
    // 0x41192c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411930: 0xc066408  jal         func_199020
    ctx->pc = 0x411930u;
    SET_GPR_U32(ctx, 31, 0x411938u);
    ctx->pc = 0x411934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411930u;
    // 0x411934: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199020u, 0x411930u, 0x411938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411938u;
label_411938:
    // 0x411938: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x411938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41193c:
    // 0x41193c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41193cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x411940: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x411940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x411944: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x411944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x411948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41194c: 0x3e00008  jr          $ra
    ctx->pc = 0x41194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41194Cu;
        // 0x411950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411954u;
    // 0x411954: 0x0  nop
    ctx->pc = 0x411954u;
    // NOP
    ctx->pc = 0x411958u;
}
