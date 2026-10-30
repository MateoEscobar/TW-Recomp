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

// Function: sub_001C4690
// Address: 0x1c4690 - 0x1c4768
void sub_001C4690_0x1c4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4690_0x1c4690");
#endif

    switch (ctx->pc) {
        case 0x1c46d8u: goto label_1c46d8;
        case 0x1c46e8u: goto label_1c46e8;
        case 0x1c46f0u: goto label_1c46f0;
        case 0x1c4720u: goto label_1c4720;
        case 0x1c472cu: goto label_1c472c;
        case 0x1c4734u: goto label_1c4734;
        case 0x1c4744u: goto label_1c4744;
        case 0x1c474cu: goto label_1c474c;
        default: break;
    }

    ctx->pc = 0x1c4690u;

    // 0x1c4690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4694: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c4698: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1c4698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c469c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c469cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c46a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c46a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c46a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c46a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c46a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c46ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c46b0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C46B0u;
    {
        const bool branch_taken_0x1c46b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46B0u;
        // 0x1c46b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46b0) {
            ctx->pc = 0x1C474Cu;
            goto label_1c474c;
        }
    }
    ctx->pc = 0x1C46B8u;
    // 0x1c46b8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1c46bc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1c46bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c46c0: 0x8e030954  lw          $v1, 0x954($s0)
    ctx->pc = 0x1c46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2388)));
    // 0x1c46c4: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C46C4u;
    {
        const bool branch_taken_0x1c46c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46c4) {
            ctx->pc = 0x1C46C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C46C4u;
            // 0x1c46c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4750u;
            goto label_1c4750;
        }
    }
    ctx->pc = 0x1C46CCu;
    // 0x1c46cc: 0x26110944  addiu       $s1, $s0, 0x944
    ctx->pc = 0x1c46ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2372));
    // 0x1c46d0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C46D0u;
    SET_GPR_U32(ctx, 31, 0x1C46D8u);
    ctx->pc = 0x1C46D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46D0u;
    // 0x1c46d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C46D0u, 0x1C46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46D8u;
label_1c46d8:
    // 0x1c46d8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C46D8u;
    {
        const bool branch_taken_0x1c46d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46d8) {
            ctx->pc = 0x1C46DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C46D8u;
            // 0x1c46dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4750u;
            goto label_1c4750;
        }
    }
    ctx->pc = 0x1C46E0u;
    // 0x1c46e0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C46E0u;
    SET_GPR_U32(ctx, 31, 0x1C46E8u);
    ctx->pc = 0x1C46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46E0u;
    // 0x1c46e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C46E0u, 0x1C46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46E8u;
label_1c46e8:
    // 0x1c46e8: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x1C46E8u;
    SET_GPR_U32(ctx, 31, 0x1C46F0u);
    ctx->pc = 0x1C46ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46E8u;
    // 0x1c46ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x1C46E8u, 0x1C46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46F0u;
label_1c46f0:
    // 0x1c46f0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C46F0u;
    {
        const bool branch_taken_0x1c46f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46f0) {
            ctx->pc = 0x1C46F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C46F0u;
            // 0x1c46f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4750u;
            goto label_1c4750;
        }
    }
    ctx->pc = 0x1C46F8u;
    // 0x1c46f8: 0xae120938  sw          $s2, 0x938($s0)
    ctx->pc = 0x1c46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2360), GPR_U32(ctx, 18));
    // 0x1c46fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1c4700: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1c4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4704: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1c4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4708: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c4708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c470c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c470cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x1c4710: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c4710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c4714: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1c4714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x1c4718: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1C4718u;
    SET_GPR_U32(ctx, 31, 0x1C4720u);
    ctx->pc = 0x1C471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4718u;
    // 0x1c471c: 0xe44100c0  swc1        $f1, 0xC0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1C4718u, 0x1C4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4720u;
label_1c4720:
    // 0x1c4720: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c4724: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1C4724u;
    SET_GPR_U32(ctx, 31, 0x1C472Cu);
    ctx->pc = 0x1C4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4724u;
    // 0x1c4728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1C4724u, 0x1C472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C472Cu;
label_1c472c:
    // 0x1c472c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C472Cu;
    SET_GPR_U32(ctx, 31, 0x1C4734u);
    ctx->pc = 0x1C4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C472Cu;
    // 0x1c4730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C472Cu, 0x1C4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4734u;
label_1c4734:
    // 0x1c4734: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1c4738: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c473c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1C473Cu;
    SET_GPR_U32(ctx, 31, 0x1C4744u);
    ctx->pc = 0x1C4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C473Cu;
    // 0x1c4740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1C473Cu, 0x1C4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4744u;
label_1c4744:
    // 0x1c4744: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1C4744u;
    SET_GPR_U32(ctx, 31, 0x1C474Cu);
    ctx->pc = 0x1C4748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4744u;
    // 0x1c4748: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1C4744u, 0x1C474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C474Cu;
label_1c474c:
    // 0x1c474c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4750:
    // 0x1c4750: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4754: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c4754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c475c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4760u;
        // 0x1c4764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4768u;
}
