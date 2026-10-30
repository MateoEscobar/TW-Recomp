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

// Function: sub_003956C0
// Address: 0x3956c0 - 0x395720
void sub_003956C0_0x3956c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003956C0_0x3956c0");
#endif

    switch (ctx->pc) {
        case 0x3956c0u: goto label_3956c0;
        case 0x3956c4u: goto label_3956c4;
        case 0x3956c8u: goto label_3956c8;
        case 0x3956ccu: goto label_3956cc;
        case 0x3956d0u: goto label_3956d0;
        case 0x3956d4u: goto label_3956d4;
        case 0x3956d8u: goto label_3956d8;
        case 0x3956dcu: goto label_3956dc;
        case 0x3956e0u: goto label_3956e0;
        case 0x3956e4u: goto label_3956e4;
        case 0x3956e8u: goto label_3956e8;
        case 0x3956ecu: goto label_3956ec;
        case 0x3956f0u: goto label_3956f0;
        case 0x3956f4u: goto label_3956f4;
        case 0x3956f8u: goto label_3956f8;
        case 0x3956fcu: goto label_3956fc;
        case 0x395700u: goto label_395700;
        case 0x395704u: goto label_395704;
        case 0x395708u: goto label_395708;
        case 0x39570cu: goto label_39570c;
        case 0x395710u: goto label_395710;
        case 0x395714u: goto label_395714;
        case 0x395718u: goto label_395718;
        case 0x39571cu: goto label_39571c;
        default: break;
    }

    ctx->pc = 0x3956c0u;

label_3956c0:
    // 0x3956c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3956c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3956c4:
    // 0x3956c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3956c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3956c8:
    // 0x3956c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3956c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3956cc:
    // 0x3956cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3956ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3956d0:
    // 0x3956d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3956d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3956d4:
    // 0x3956d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3956d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3956d8:
    // 0x3956d8: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3956d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3956dc:
    // 0x3956dc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3956dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3956e0:
    // 0x3956e0: 0x60f809  jalr        $v1
label_3956e4:
    if (ctx->pc == 0x3956E4u) {
        ctx->pc = 0x3956E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E0u;
        // 0x3956e4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3956E8u;
        goto label_3956e8;
    }
    ctx->pc = 0x3956E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3956E8u);
        ctx->pc = 0x3956E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E0u;
        // 0x3956e4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3956E0u, 0x3956E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3956E8u;
label_3956e8:
    // 0x3956e8: 0xc04808c  jal         func_120230
label_3956ec:
    if (ctx->pc == 0x3956ECu) {
        ctx->pc = 0x3956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E8u;
        // 0x3956ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3956F0u;
        goto label_3956f0;
    }
    ctx->pc = 0x3956E8u;
    SET_GPR_U32(ctx, 31, 0x3956F0u);
    ctx->pc = 0x3956ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3956E8u;
    // 0x3956ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3956E8u, 0x3956F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956F0u;
label_3956f0:
    // 0x3956f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3956f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3956f4:
    // 0x3956f4: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x3956f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_3956f8:
    // 0x3956f8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x3956f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_3956fc:
    // 0x3956fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3956fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395700:
    // 0x395700: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x395700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_395704:
    // 0x395704: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x395704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_395708:
    // 0x395708: 0xc06297c  jal         func_18A5F0
label_39570c:
    if (ctx->pc == 0x39570Cu) {
        ctx->pc = 0x39570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395708u;
        // 0x39570c: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395710u;
        goto label_395710;
    }
    ctx->pc = 0x395708u;
    SET_GPR_U32(ctx, 31, 0x395710u);
    ctx->pc = 0x39570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395708u;
    // 0x39570c: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5F0u, 0x395708u, 0x395710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395710u;
label_395710:
    // 0x395710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x395710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_395714:
    // 0x395714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x395714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_395718:
    // 0x395718: 0x3e00008  jr          $ra
label_39571c:
    if (ctx->pc == 0x39571Cu) {
        ctx->pc = 0x39571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395718u;
        // 0x39571c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395720u;
        goto label_fallthrough_0x395718;
    }
    ctx->pc = 0x395718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395718u;
        // 0x39571c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395718:
    ctx->pc = 0x395720u;
}
