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

// Function: sub_003E8788
// Address: 0x3e8788 - 0x3e8820
void sub_003E8788_0x3e8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8788_0x3e8788");
#endif

    switch (ctx->pc) {
        case 0x3e8788u: goto label_3e8788;
        case 0x3e878cu: goto label_3e878c;
        case 0x3e8790u: goto label_3e8790;
        case 0x3e8794u: goto label_3e8794;
        case 0x3e8798u: goto label_3e8798;
        case 0x3e879cu: goto label_3e879c;
        case 0x3e87a0u: goto label_3e87a0;
        case 0x3e87a4u: goto label_3e87a4;
        case 0x3e87a8u: goto label_3e87a8;
        case 0x3e87acu: goto label_3e87ac;
        case 0x3e87b0u: goto label_3e87b0;
        case 0x3e87b4u: goto label_3e87b4;
        case 0x3e87b8u: goto label_3e87b8;
        case 0x3e87bcu: goto label_3e87bc;
        case 0x3e87c0u: goto label_3e87c0;
        case 0x3e87c4u: goto label_3e87c4;
        case 0x3e87c8u: goto label_3e87c8;
        case 0x3e87ccu: goto label_3e87cc;
        case 0x3e87d0u: goto label_3e87d0;
        case 0x3e87d4u: goto label_3e87d4;
        case 0x3e87d8u: goto label_3e87d8;
        case 0x3e87dcu: goto label_3e87dc;
        case 0x3e87e0u: goto label_3e87e0;
        case 0x3e87e4u: goto label_3e87e4;
        case 0x3e87e8u: goto label_3e87e8;
        case 0x3e87ecu: goto label_3e87ec;
        case 0x3e87f0u: goto label_3e87f0;
        case 0x3e87f4u: goto label_3e87f4;
        case 0x3e87f8u: goto label_3e87f8;
        case 0x3e87fcu: goto label_3e87fc;
        case 0x3e8800u: goto label_3e8800;
        case 0x3e8804u: goto label_3e8804;
        case 0x3e8808u: goto label_3e8808;
        case 0x3e880cu: goto label_3e880c;
        case 0x3e8810u: goto label_3e8810;
        case 0x3e8814u: goto label_3e8814;
        case 0x3e8818u: goto label_3e8818;
        case 0x3e881cu: goto label_3e881c;
        default: break;
    }

    ctx->pc = 0x3e8788u;

label_3e8788:
    // 0x3e8788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e8788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e878c:
    // 0x3e878c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e8790:
    // 0x3e8790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e8794:
    // 0x3e8794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8798:
    // 0x3e8798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e879c:
    // 0x3e879c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e879cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e87a0:
    // 0x3e87a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e87a4:
    // 0x3e87a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e87a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e87a8:
    // 0x3e87a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e87ac:
    // 0x3e87ac: 0x40f809  jalr        $v0
label_3e87b0:
    if (ctx->pc == 0x3E87B0u) {
        ctx->pc = 0x3E87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87ACu;
        // 0x3e87b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E87B4u;
        goto label_3e87b4;
    }
    ctx->pc = 0x3E87ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E87B4u);
        ctx->pc = 0x3E87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87ACu;
        // 0x3e87b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E87ACu, 0x3E87B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E87B4u;
label_3e87b4:
    // 0x3e87b4: 0xc0ea14c  jal         func_3A8530
label_3e87b8:
    if (ctx->pc == 0x3E87B8u) {
        ctx->pc = 0x3E87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87B4u;
        // 0x3e87b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E87BCu;
        goto label_3e87bc;
    }
    ctx->pc = 0x3E87B4u;
    SET_GPR_U32(ctx, 31, 0x3E87BCu);
    ctx->pc = 0x3E87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87B4u;
    // 0x3e87b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E87B4u, 0x3E87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87BCu;
label_3e87bc:
    // 0x3e87bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e87bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e87c0:
    // 0x3e87c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e87c4:
    // 0x3e87c4: 0xc0e858c  jal         func_3A1630
label_3e87c8:
    if (ctx->pc == 0x3E87C8u) {
        ctx->pc = 0x3E87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87C4u;
        // 0x3e87c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E87CCu;
        goto label_3e87cc;
    }
    ctx->pc = 0x3E87C4u;
    SET_GPR_U32(ctx, 31, 0x3E87CCu);
    ctx->pc = 0x3E87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87C4u;
    // 0x3e87c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E87C4u, 0x3E87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87CCu;
label_3e87cc:
    // 0x3e87cc: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x3e87ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_3e87d0:
    // 0x3e87d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e87d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e87d4:
    // 0x3e87d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3e87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3e87d8:
    // 0x3e87d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e87d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e87dc:
    // 0x3e87dc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e87e0:
    // 0x3e87e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3e87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3e87e4:
    // 0x3e87e4: 0xc0e896e  jal         func_3A25B8
label_3e87e8:
    if (ctx->pc == 0x3E87E8u) {
        ctx->pc = 0x3E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87E4u;
        // 0x3e87e8: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E87ECu;
        goto label_3e87ec;
    }
    ctx->pc = 0x3E87E4u;
    SET_GPR_U32(ctx, 31, 0x3E87ECu);
    ctx->pc = 0x3E87E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87E4u;
    // 0x3e87e8: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E87E4u, 0x3E87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87ECu;
label_3e87ec:
    // 0x3e87ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e87ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e87f0:
    // 0x3e87f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e87f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e87f4:
    // 0x3e87f4: 0xc0e8604  jal         func_3A1810
label_3e87f8:
    if (ctx->pc == 0x3E87F8u) {
        ctx->pc = 0x3E87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87F4u;
        // 0x3e87f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E87FCu;
        goto label_3e87fc;
    }
    ctx->pc = 0x3E87F4u;
    SET_GPR_U32(ctx, 31, 0x3E87FCu);
    ctx->pc = 0x3E87F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87F4u;
    // 0x3e87f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E87F4u, 0x3E87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87FCu;
label_3e87fc:
    // 0x3e87fc: 0x3c02e0e0  lui         $v0, 0xE0E0
    ctx->pc = 0x3e87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57568 << 16));
label_3e8800:
    // 0x3e8800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e8800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8804:
    // 0x3e8804: 0x3442ffe4  ori         $v0, $v0, 0xFFE4
    ctx->pc = 0x3e8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65508);
label_3e8808:
    // 0x3e8808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e880c:
    // 0x3e880c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e8810:
    // 0x3e8810: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3e8810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3e8814:
    // 0x3e8814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e8814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8818:
    // 0x3e8818: 0x3e00008  jr          $ra
label_3e881c:
    if (ctx->pc == 0x3E881Cu) {
        ctx->pc = 0x3E881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8818u;
        // 0x3e881c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8820u;
        goto label_fallthrough_0x3e8818;
    }
    ctx->pc = 0x3E8818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8818u;
        // 0x3e881c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e8818:
    ctx->pc = 0x3E8820u;
}
