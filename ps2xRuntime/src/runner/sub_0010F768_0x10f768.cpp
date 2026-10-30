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

// Function: sub_0010F768
// Address: 0x10f768 - 0x10f7f8
void sub_0010F768_0x10f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F768_0x10f768");
#endif

    switch (ctx->pc) {
        case 0x10f768u: goto label_10f768;
        case 0x10f76cu: goto label_10f76c;
        case 0x10f770u: goto label_10f770;
        case 0x10f774u: goto label_10f774;
        case 0x10f778u: goto label_10f778;
        case 0x10f77cu: goto label_10f77c;
        case 0x10f780u: goto label_10f780;
        case 0x10f784u: goto label_10f784;
        case 0x10f788u: goto label_10f788;
        case 0x10f78cu: goto label_10f78c;
        case 0x10f790u: goto label_10f790;
        case 0x10f794u: goto label_10f794;
        case 0x10f798u: goto label_10f798;
        case 0x10f79cu: goto label_10f79c;
        case 0x10f7a0u: goto label_10f7a0;
        case 0x10f7a4u: goto label_10f7a4;
        case 0x10f7a8u: goto label_10f7a8;
        case 0x10f7acu: goto label_10f7ac;
        case 0x10f7b0u: goto label_10f7b0;
        case 0x10f7b4u: goto label_10f7b4;
        case 0x10f7b8u: goto label_10f7b8;
        case 0x10f7bcu: goto label_10f7bc;
        case 0x10f7c0u: goto label_10f7c0;
        case 0x10f7c4u: goto label_10f7c4;
        case 0x10f7c8u: goto label_10f7c8;
        case 0x10f7ccu: goto label_10f7cc;
        case 0x10f7d0u: goto label_10f7d0;
        case 0x10f7d4u: goto label_10f7d4;
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7dcu: goto label_10f7dc;
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7e4u: goto label_10f7e4;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f7ecu: goto label_10f7ec;
        case 0x10f7f0u: goto label_10f7f0;
        case 0x10f7f4u: goto label_10f7f4;
        default: break;
    }

    ctx->pc = 0x10f768u;

label_10f768:
    // 0x10f768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10f76c:
    // 0x10f76c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10f770:
    // 0x10f770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_10f774:
    // 0x10f774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10f778:
    // 0x10f778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f77c:
    // 0x10f77c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10f77cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10f780:
    // 0x10f780: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_10f784:
    // 0x10f784: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10f784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_10f788:
    // 0x10f788: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10f788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_10f78c:
    // 0x10f78c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10f790:
    // 0x10f790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10f794:
    // 0x10f794: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x10f794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_10f798:
    // 0x10f798: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x10f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_10f79c:
    // 0x10f79c: 0x40f809  jalr        $v0
label_10f7a0:
    if (ctx->pc == 0x10F7A0u) {
        ctx->pc = 0x10F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F79Cu;
        // 0x10f7a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7A4u;
        goto label_10f7a4;
    }
    ctx->pc = 0x10F79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10F7A4u);
        ctx->pc = 0x10F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F79Cu;
        // 0x10f7a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F79Cu, 0x10F7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F7A4u;
label_10f7a4:
    // 0x10f7a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x10f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_10f7a8:
    // 0x10f7a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10f7ac:
    // 0x10f7ac: 0x2464b8b0  addiu       $a0, $v1, -0x4750
    ctx->pc = 0x10f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949040));
label_10f7b0:
    // 0x10f7b0: 0xc0cd526  jal         func_335498
label_10f7b4:
    if (ctx->pc == 0x10F7B4u) {
        ctx->pc = 0x10F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7B0u;
        // 0x10f7b4: 0xac62b8b0  sw          $v0, -0x4750($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7B8u;
        goto label_10f7b8;
    }
    ctx->pc = 0x10F7B0u;
    SET_GPR_U32(ctx, 31, 0x10F7B8u);
    ctx->pc = 0x10F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7B0u;
    // 0x10f7b4: 0xac62b8b0  sw          $v0, -0x4750($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949040), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x10F7B0u, 0x10F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7B8u;
label_10f7b8:
    // 0x10f7b8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x10f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_10f7bc:
    // 0x10f7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f7c0:
    // 0x10f7c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x10f7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_10f7c4:
    // 0x10f7c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10f7c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10f7c8:
    // 0x10f7c8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_10f7cc:
    // 0x10f7cc: 0xc04418e  jal         func_110638
label_10f7d0:
    if (ctx->pc == 0x10F7D0u) {
        ctx->pc = 0x10F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7CCu;
        // 0x10f7d0: 0xac627a28  sw          $v0, 0x7A28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7D4u;
        goto label_10f7d4;
    }
    ctx->pc = 0x10F7CCu;
    SET_GPR_U32(ctx, 31, 0x10F7D4u);
    ctx->pc = 0x10F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7CCu;
    // 0x10f7d0: 0xac627a28  sw          $v0, 0x7A28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x10F7CCu, 0x10F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7D4u;
label_10f7d4:
    // 0x10f7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f7d8:
    // 0x10f7d8: 0xc04416c  jal         func_1105B0
label_10f7dc:
    if (ctx->pc == 0x10F7DCu) {
        ctx->pc = 0x10F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D8u;
        // 0x10f7dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7E0u;
        goto label_10f7e0;
    }
    ctx->pc = 0x10F7D8u;
    SET_GPR_U32(ctx, 31, 0x10F7E0u);
    ctx->pc = 0x10F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7D8u;
    // 0x10f7dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105B0u, 0x10F7D8u, 0x10F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7E0u;
label_10f7e0:
    // 0x10f7e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10f7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f7e4:
    // 0x10f7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f7e8:
    // 0x10f7e8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10f7ec:
    // 0x10f7ec: 0x3e00008  jr          $ra
label_10f7f0:
    if (ctx->pc == 0x10F7F0u) {
        ctx->pc = 0x10F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7ECu;
        // 0x10f7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7F4u;
        goto label_10f7f4;
    }
    ctx->pc = 0x10F7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7ECu;
        // 0x10f7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7F4u;
label_10f7f4:
    // 0x10f7f4: 0x0  nop
    ctx->pc = 0x10f7f4u;
    // NOP
    ctx->pc = 0x10f7f8u;
}
