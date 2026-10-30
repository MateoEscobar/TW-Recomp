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

// Function: sub_00365938
// Address: 0x365938 - 0x365a10
void sub_00365938_0x365938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365938_0x365938");
#endif

    switch (ctx->pc) {
        case 0x365960u: goto label_365960;
        case 0x365968u: goto label_365968;
        case 0x365978u: goto label_365978;
        case 0x365990u: goto label_365990;
        case 0x365998u: goto label_365998;
        case 0x3659b4u: goto label_3659b4;
        case 0x3659c0u: goto label_3659c0;
        case 0x3659d0u: goto label_3659d0;
        case 0x3659e4u: goto label_3659e4;
        default: break;
    }

    ctx->pc = 0x365938u;

    // 0x365938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x365938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36593c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365940: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x365940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x365944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x365948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36594c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x365950: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x365950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x365954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365958u;
    SET_GPR_U32(ctx, 31, 0x365960u);
    ctx->pc = 0x36595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365958u;
    // 0x36595c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365958u, 0x365960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365960u;
label_365960:
    // 0x365960: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365960u;
    SET_GPR_U32(ctx, 31, 0x365968u);
    ctx->pc = 0x365964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365960u;
    // 0x365964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365960u, 0x365968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365968u;
label_365968:
    // 0x365968: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36596c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36596cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365970: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x365970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365974: 0x0  nop
    ctx->pc = 0x365974u;
    // NOP
label_365978:
    // 0x365978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x365978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36597c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365980: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365988: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x365988u;
    SET_GPR_U32(ctx, 31, 0x365990u);
    ctx->pc = 0x36598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365988u;
    // 0x36598c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x365988u, 0x365990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365990u;
label_365990:
    // 0x365990: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365990u;
    SET_GPR_U32(ctx, 31, 0x365998u);
    ctx->pc = 0x365994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365990u;
    // 0x365994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365990u, 0x365998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365998u;
label_365998:
    // 0x365998: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x365998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36599c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36599cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3659a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3659A0u;
    {
        const bool branch_taken_0x3659a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3659A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659A0u;
        // 0x3659a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3659a0) {
            ctx->pc = 0x365978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365978;
        }
    }
    ctx->pc = 0x3659A8u;
    // 0x3659a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3659a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659ac: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x3659ACu;
    SET_GPR_U32(ctx, 31, 0x3659B4u);
    ctx->pc = 0x3659B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659ACu;
    // 0x3659b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x3659ACu, 0x3659B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659B4u;
label_3659b4:
    // 0x3659b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3659b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3659b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3659bc: 0x0  nop
    ctx->pc = 0x3659bcu;
    // NOP
label_3659c0:
    // 0x3659c0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3659c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3659c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3659c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3659c8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3659C8u;
    SET_GPR_U32(ctx, 31, 0x3659D0u);
    ctx->pc = 0x3659CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659C8u;
    // 0x3659cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3659C8u, 0x3659D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659D0u;
label_3659d0:
    // 0x3659d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3659d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3659d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3659d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3659dc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3659DCu;
    SET_GPR_U32(ctx, 31, 0x3659E4u);
    ctx->pc = 0x3659E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659DCu;
    // 0x3659e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3659DCu, 0x3659E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659E4u;
label_3659e4:
    // 0x3659e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3659e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3659e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3659E8u;
    {
        const bool branch_taken_0x3659e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3659ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659E8u;
        // 0x3659ec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3659e8) {
            ctx->pc = 0x3659C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3659c0;
        }
    }
    ctx->pc = 0x3659F0u;
    // 0x3659f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3659f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3659f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3659f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3659f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3659fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3659fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365a00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365a08: 0x3e00008  jr          $ra
    ctx->pc = 0x365A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A08u;
        // 0x365a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365A10u;
}
