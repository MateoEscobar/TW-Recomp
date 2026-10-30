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

// Function: sub_004DC7C0
// Address: 0x4dc7c0 - 0x4dc838
void sub_004DC7C0_0x4dc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC7C0_0x4dc7c0");
#endif

    switch (ctx->pc) {
        case 0x4dc7c0u: goto label_4dc7c0;
        case 0x4dc7c4u: goto label_4dc7c4;
        case 0x4dc7c8u: goto label_4dc7c8;
        case 0x4dc7ccu: goto label_4dc7cc;
        case 0x4dc7d0u: goto label_4dc7d0;
        case 0x4dc7d4u: goto label_4dc7d4;
        case 0x4dc7d8u: goto label_4dc7d8;
        case 0x4dc7dcu: goto label_4dc7dc;
        case 0x4dc7e0u: goto label_4dc7e0;
        case 0x4dc7e4u: goto label_4dc7e4;
        case 0x4dc7e8u: goto label_4dc7e8;
        case 0x4dc7ecu: goto label_4dc7ec;
        case 0x4dc7f0u: goto label_4dc7f0;
        case 0x4dc7f4u: goto label_4dc7f4;
        case 0x4dc7f8u: goto label_4dc7f8;
        case 0x4dc7fcu: goto label_4dc7fc;
        case 0x4dc800u: goto label_4dc800;
        case 0x4dc804u: goto label_4dc804;
        case 0x4dc808u: goto label_4dc808;
        case 0x4dc80cu: goto label_4dc80c;
        case 0x4dc810u: goto label_4dc810;
        case 0x4dc814u: goto label_4dc814;
        case 0x4dc818u: goto label_4dc818;
        case 0x4dc81cu: goto label_4dc81c;
        case 0x4dc820u: goto label_4dc820;
        case 0x4dc824u: goto label_4dc824;
        case 0x4dc828u: goto label_4dc828;
        case 0x4dc82cu: goto label_4dc82c;
        case 0x4dc830u: goto label_4dc830;
        case 0x4dc834u: goto label_4dc834;
        default: break;
    }

    ctx->pc = 0x4dc7c0u;

label_4dc7c0:
    // 0x4dc7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dc7c4:
    // 0x4dc7c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4dc7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4dc7c8:
    // 0x4dc7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc7cc:
    // 0x4dc7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc7d0:
    // 0x4dc7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc7d4:
    // 0x4dc7d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dc7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dc7d8:
    // 0x4dc7d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dc7dc:
    // 0x4dc7dc: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x4dc7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_4dc7e0:
    // 0x4dc7e0: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x4dc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_4dc7e4:
    // 0x4dc7e4: 0x40f809  jalr        $v0
label_4dc7e8:
    if (ctx->pc == 0x4DC7E8u) {
        ctx->pc = 0x4DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7E4u;
        // 0x4dc7e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC7ECu;
        goto label_4dc7ec;
    }
    ctx->pc = 0x4DC7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC7ECu);
        ctx->pc = 0x4DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7E4u;
        // 0x4dc7e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC7E4u, 0x4DC7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC7ECu;
label_4dc7ec:
    // 0x4dc7ec: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x4dc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc7f0:
    // 0x4dc7f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4dc7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc7f4:
    // 0x4dc7f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4dc7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc7f8:
    // 0x4dc7f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4dc7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4dc7fc:
    // 0x4dc7fc: 0xc047b82  jal         func_11EE08
label_4dc800:
    if (ctx->pc == 0x4DC800u) {
        ctx->pc = 0x4DC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7FCu;
        // 0x4dc800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC804u;
        goto label_4dc804;
    }
    ctx->pc = 0x4DC7FCu;
    SET_GPR_U32(ctx, 31, 0x4DC804u);
    ctx->pc = 0x4DC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC7FCu;
    // 0x4dc800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x4DC7FCu, 0x4DC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC804u;
label_4dc804:
    // 0x4dc804: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x4dc804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc808:
    // 0x4dc808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4dc808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc80c:
    // 0x4dc80c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4dc810:
    // 0x4dc810: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x4dc810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_4dc814:
    // 0x4dc814: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x4dc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_4dc818:
    // 0x4dc818: 0x60f809  jalr        $v1
label_4dc81c:
    if (ctx->pc == 0x4DC81Cu) {
        ctx->pc = 0x4DC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC818u;
        // 0x4dc81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC820u;
        goto label_4dc820;
    }
    ctx->pc = 0x4DC818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC820u);
        ctx->pc = 0x4DC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC818u;
        // 0x4dc81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC818u, 0x4DC820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC820u;
label_4dc820:
    // 0x4dc820: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4dc820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc824:
    // 0x4dc824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc828:
    // 0x4dc828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc82c:
    // 0x4dc82c: 0x3e00008  jr          $ra
label_4dc830:
    if (ctx->pc == 0x4DC830u) {
        ctx->pc = 0x4DC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC82Cu;
        // 0x4dc830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC834u;
        goto label_4dc834;
    }
    ctx->pc = 0x4DC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC82Cu;
        // 0x4dc830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC834u;
label_4dc834:
    // 0x4dc834: 0x0  nop
    ctx->pc = 0x4dc834u;
    // NOP
    ctx->pc = 0x4dc838u;
}
