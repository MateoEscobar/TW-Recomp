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

// Function: sub_004552E0
// Address: 0x4552e0 - 0x4553c0
void sub_004552E0_0x4552e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004552E0_0x4552e0");
#endif

    switch (ctx->pc) {
        case 0x455308u: goto label_455308;
        case 0x455338u: goto label_455338;
        case 0x45534cu: goto label_45534c;
        case 0x455354u: goto label_455354;
        case 0x45535cu: goto label_45535c;
        case 0x45536cu: goto label_45536c;
        case 0x455374u: goto label_455374;
        default: break;
    }

    ctx->pc = 0x4552e0u;

    // 0x4552e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4552e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4552e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4552e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4552e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4552e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4552ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4552ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4552f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4552f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4552f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4552f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4552f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4552f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4552fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4552fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x455300: 0xc11ac5c  jal         func_46B170
    ctx->pc = 0x455300u;
    SET_GPR_U32(ctx, 31, 0x455308u);
    ctx->pc = 0x455304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455300u;
    // 0x455304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x455300u, 0x455308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455308u;
label_455308:
    // 0x455308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x455308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45530c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x45530Cu;
    {
        const bool branch_taken_0x45530c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x455310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45530Cu;
        // 0x455310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45530c) {
            ctx->pc = 0x4553A4u;
            goto label_4553a4;
        }
    }
    ctx->pc = 0x455314u;
    // 0x455314: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x455314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x455318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x455318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45531c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x455320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x455320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x455324: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x455324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x455328: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x455328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x45532c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x45532cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x455330: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x455330u;
    SET_GPR_U32(ctx, 31, 0x455338u);
    ctx->pc = 0x455334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455330u;
    // 0x455334: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x455330u, 0x455338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455338u;
label_455338:
    // 0x455338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x455338u;
    {
        const bool branch_taken_0x455338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455338u;
        // 0x45533c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455338) {
            ctx->pc = 0x4553A0u;
            goto label_4553a0;
        }
    }
    ctx->pc = 0x455340u;
    // 0x455340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455344: 0xc11a984  jal         func_46A610
    ctx->pc = 0x455344u;
    SET_GPR_U32(ctx, 31, 0x45534Cu);
    ctx->pc = 0x455348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455344u;
    // 0x455348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x455344u, 0x45534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45534Cu;
label_45534c:
    // 0x45534c: 0xc11b010  jal         func_46C040
    ctx->pc = 0x45534Cu;
    SET_GPR_U32(ctx, 31, 0x455354u);
    ctx->pc = 0x455350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45534Cu;
    // 0x455350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x45534Cu, 0x455354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455354u;
label_455354:
    // 0x455354: 0xc11b3b6  jal         func_46CED8
    ctx->pc = 0x455354u;
    SET_GPR_U32(ctx, 31, 0x45535Cu);
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x455354u, 0x45535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45535Cu;
label_45535c:
    // 0x45535c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455360: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x455360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x455364: 0xc11b448  jal         func_46D120
    ctx->pc = 0x455364u;
    SET_GPR_U32(ctx, 31, 0x45536Cu);
    ctx->pc = 0x455368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455364u;
    // 0x455368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x455364u, 0x45536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45536Cu;
label_45536c:
    // 0x45536c: 0xc11b3e4  jal         func_46CF90
    ctx->pc = 0x45536Cu;
    SET_GPR_U32(ctx, 31, 0x455374u);
    ctx->pc = 0x455370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45536Cu;
    // 0x455370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x45536Cu, 0x455374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455374u;
label_455374:
    // 0x455374: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x455374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x455378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x455378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45537c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x45537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x455380: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x455380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x455384: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x455384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x455388: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x455388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x45538c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x45538cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x455390: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x455390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x455394: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x455394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x455398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x455398u;
    {
        const bool branch_taken_0x455398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455398u;
        // 0x45539c: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455398) {
            ctx->pc = 0x4553A4u;
            goto label_4553a4;
        }
    }
    ctx->pc = 0x4553A0u;
label_4553a0:
    // 0x4553a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4553a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4553a4:
    // 0x4553a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4553a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4553a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4553a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4553ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4553acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4553b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4553b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4553b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4553B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4553B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4553B4u;
        // 0x4553b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4553B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4553BCu;
    // 0x4553bc: 0x0  nop
    ctx->pc = 0x4553bcu;
    // NOP
    ctx->pc = 0x4553c0u;
}
