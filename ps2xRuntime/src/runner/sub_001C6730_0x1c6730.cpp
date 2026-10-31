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

// Function: sub_001C6730
// Address: 0x1c6730 - 0x1c6878
void sub_001C6730_0x1c6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6730_0x1c6730");
#endif

    switch (ctx->pc) {
        case 0x1c6730u: goto label_1c6730;
        case 0x1c6734u: goto label_1c6734;
        case 0x1c6738u: goto label_1c6738;
        case 0x1c673cu: goto label_1c673c;
        case 0x1c6740u: goto label_1c6740;
        case 0x1c6744u: goto label_1c6744;
        case 0x1c6748u: goto label_1c6748;
        case 0x1c674cu: goto label_1c674c;
        case 0x1c6750u: goto label_1c6750;
        case 0x1c6754u: goto label_1c6754;
        case 0x1c6758u: goto label_1c6758;
        case 0x1c675cu: goto label_1c675c;
        case 0x1c6760u: goto label_1c6760;
        case 0x1c6764u: goto label_1c6764;
        case 0x1c6768u: goto label_1c6768;
        case 0x1c676cu: goto label_1c676c;
        case 0x1c6770u: goto label_1c6770;
        case 0x1c6774u: goto label_1c6774;
        case 0x1c6778u: goto label_1c6778;
        case 0x1c677cu: goto label_1c677c;
        case 0x1c6780u: goto label_1c6780;
        case 0x1c6784u: goto label_1c6784;
        case 0x1c6788u: goto label_1c6788;
        case 0x1c678cu: goto label_1c678c;
        case 0x1c6790u: goto label_1c6790;
        case 0x1c6794u: goto label_1c6794;
        case 0x1c6798u: goto label_1c6798;
        case 0x1c679cu: goto label_1c679c;
        case 0x1c67a0u: goto label_1c67a0;
        case 0x1c67a4u: goto label_1c67a4;
        case 0x1c67a8u: goto label_1c67a8;
        case 0x1c67acu: goto label_1c67ac;
        case 0x1c67b0u: goto label_1c67b0;
        case 0x1c67b4u: goto label_1c67b4;
        case 0x1c67b8u: goto label_1c67b8;
        case 0x1c67bcu: goto label_1c67bc;
        case 0x1c67c0u: goto label_1c67c0;
        case 0x1c67c4u: goto label_1c67c4;
        case 0x1c67c8u: goto label_1c67c8;
        case 0x1c67ccu: goto label_1c67cc;
        case 0x1c67d0u: goto label_1c67d0;
        case 0x1c67d4u: goto label_1c67d4;
        case 0x1c67d8u: goto label_1c67d8;
        case 0x1c67dcu: goto label_1c67dc;
        case 0x1c67e0u: goto label_1c67e0;
        case 0x1c67e4u: goto label_1c67e4;
        case 0x1c67e8u: goto label_1c67e8;
        case 0x1c67ecu: goto label_1c67ec;
        case 0x1c67f0u: goto label_1c67f0;
        case 0x1c67f4u: goto label_1c67f4;
        case 0x1c67f8u: goto label_1c67f8;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6800u: goto label_1c6800;
        case 0x1c6804u: goto label_1c6804;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c680cu: goto label_1c680c;
        case 0x1c6810u: goto label_1c6810;
        case 0x1c6814u: goto label_1c6814;
        case 0x1c6818u: goto label_1c6818;
        case 0x1c681cu: goto label_1c681c;
        case 0x1c6820u: goto label_1c6820;
        case 0x1c6824u: goto label_1c6824;
        case 0x1c6828u: goto label_1c6828;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c6830u: goto label_1c6830;
        case 0x1c6834u: goto label_1c6834;
        case 0x1c6838u: goto label_1c6838;
        case 0x1c683cu: goto label_1c683c;
        case 0x1c6840u: goto label_1c6840;
        case 0x1c6844u: goto label_1c6844;
        case 0x1c6848u: goto label_1c6848;
        case 0x1c684cu: goto label_1c684c;
        case 0x1c6850u: goto label_1c6850;
        case 0x1c6854u: goto label_1c6854;
        case 0x1c6858u: goto label_1c6858;
        case 0x1c685cu: goto label_1c685c;
        case 0x1c6860u: goto label_1c6860;
        case 0x1c6864u: goto label_1c6864;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c686cu: goto label_1c686c;
        case 0x1c6870u: goto label_1c6870;
        case 0x1c6874u: goto label_1c6874;
        default: break;
    }

    ctx->pc = 0x1c6730u;

label_1c6730:
    // 0x1c6730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c6734:
    // 0x1c6734: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c6734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c6738:
    // 0x1c6738: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c6738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c673c:
    // 0x1c673c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c673cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c6740:
    // 0x1c6740: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c6740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c6744:
    // 0x1c6744: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x1c6744u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_1c6748:
    // 0x1c6748: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c674c:
    // 0x1c674c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1c674cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c6750:
    // 0x1c6750: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1c6750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c6754:
    // 0x1c6754: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c6754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c6758:
    // 0x1c6758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c6758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c675c:
    // 0x1c675c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6760:
    // 0x1c6760: 0xc0e4060  jal         func_390180
label_1c6764:
    if (ctx->pc == 0x1C6764u) {
        ctx->pc = 0x1C6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6760u;
        // 0x1c6764: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6768u;
        goto label_1c6768;
    }
    ctx->pc = 0x1C6760u;
    SET_GPR_U32(ctx, 31, 0x1C6768u);
    ctx->pc = 0x1C6764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6760u;
    // 0x1c6764: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C6760u, 0x1C6768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6768u;
label_1c6768:
    // 0x1c6768: 0xc0e6ee8  jal         func_39BBA0
label_1c676c:
    if (ctx->pc == 0x1C676Cu) {
        ctx->pc = 0x1C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6768u;
        // 0x1c676c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6770u;
        goto label_1c6770;
    }
    ctx->pc = 0x1C6768u;
    SET_GPR_U32(ctx, 31, 0x1C6770u);
    ctx->pc = 0x1C676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6768u;
    // 0x1c676c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x1C6768u, 0x1C6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6770u;
label_1c6770:
    // 0x1c6770: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c6774:
    // 0x1c6774: 0xc45500c0  lwc1        $f21, 0xC0($v0)
    ctx->pc = 0x1c6774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c6778:
    // 0x1c6778: 0x24840944  addiu       $a0, $a0, 0x944
    ctx->pc = 0x1c6778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
label_1c677c:
    // 0x1c677c: 0xc0e4060  jal         func_390180
label_1c6780:
    if (ctx->pc == 0x1C6780u) {
        ctx->pc = 0x1C6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C677Cu;
        // 0x1c6780: 0xc45400bc  lwc1        $f20, 0xBC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6784u;
        goto label_1c6784;
    }
    ctx->pc = 0x1C677Cu;
    SET_GPR_U32(ctx, 31, 0x1C6784u);
    ctx->pc = 0x1C6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C677Cu;
    // 0x1c6780: 0xc45400bc  lwc1        $f20, 0xBC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C677Cu, 0x1C6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6784u;
label_1c6784:
    // 0x1c6784: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1c6788:
    if (ctx->pc == 0x1C6788u) {
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x2309021  addu        $s2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C678Cu;
        goto label_1c678c;
    }
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x2309021  addu        $s2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C6850u;
            goto label_1c6850;
        }
    }
    ctx->pc = 0x1C678Cu;
label_1c678c:
    // 0x1c678c: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c6790:
    // 0x1c6790: 0x24840944  addiu       $a0, $a0, 0x944
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
label_1c6794:
    // 0x1c6794: 0xc0e4060  jal         func_390180
label_1c6798:
    if (ctx->pc == 0x1C6798u) {
        ctx->pc = 0x1C6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6794u;
        // 0x1c6798: 0x26500944  addiu       $s0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C679Cu;
        goto label_1c679c;
    }
    ctx->pc = 0x1C6794u;
    SET_GPR_U32(ctx, 31, 0x1C679Cu);
    ctx->pc = 0x1C6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6794u;
    // 0x1c6798: 0x26500944  addiu       $s0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C6794u, 0x1C679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C679Cu;
label_1c679c:
    // 0x1c679c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c67a0:
    // 0x1c67a0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c67a4:
    // 0x1c67a4: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1c67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c67a8:
    // 0x1c67a8: 0xa0f809  jalr        $a1
label_1c67ac:
    if (ctx->pc == 0x1C67ACu) {
        ctx->pc = 0x1C67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67A8u;
        // 0x1c67ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67B0u;
        goto label_1c67b0;
    }
    ctx->pc = 0x1C67A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C67B0u);
        ctx->pc = 0x1C67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67A8u;
        // 0x1c67ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C67A8u, 0x1C67B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C67B0u;
label_1c67b0:
    // 0x1c67b0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1c67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1c67b4:
    // 0x1c67b4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1c67b8:
    // 0x1c67b8: 0x8e450934  lw          $a1, 0x934($s2)
    ctx->pc = 0x1c67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2356)));
label_1c67bc:
    // 0x1c67bc: 0x248451e0  addiu       $a0, $a0, 0x51E0
    ctx->pc = 0x1c67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
label_1c67c0:
    // 0x1c67c0: 0xae420940  sw          $v0, 0x940($s2)
    ctx->pc = 0x1c67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2368), GPR_U32(ctx, 2));
label_1c67c4:
    // 0x1c67c4: 0xc07a67e  jal         func_1E99F8
label_1c67c8:
    if (ctx->pc == 0x1C67C8u) {
        ctx->pc = 0x1C67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67C4u;
        // 0x1c67c8: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67CCu;
        goto label_1c67cc;
    }
    ctx->pc = 0x1C67C4u;
    SET_GPR_U32(ctx, 31, 0x1C67CCu);
    ctx->pc = 0x1C67C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67C4u;
    // 0x1c67c8: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E99F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E99F8u, 0x1C67C4u, 0x1C67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67CCu;
label_1c67cc:
    // 0x1c67cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c67d0:
    // 0x1c67d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1c67d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1c67d4:
    // 0x1c67d4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1c67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1c67d8:
    // 0x1c67d8: 0xa0f809  jalr        $a1
label_1c67dc:
    if (ctx->pc == 0x1C67DCu) {
        ctx->pc = 0x1C67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D8u;
        // 0x1c67dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67E0u;
        goto label_1c67e0;
    }
    ctx->pc = 0x1C67D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C67E0u);
        ctx->pc = 0x1C67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D8u;
        // 0x1c67dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C67D8u, 0x1C67E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C67E0u;
label_1c67e0:
    // 0x1c67e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c67e4:
    // 0x1c67e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c67e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c67e8:
    // 0x1c67e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c67e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c67ec:
    // 0x1c67ec: 0x8e460938  lw          $a2, 0x938($s2)
    ctx->pc = 0x1c67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_1c67f0:
    // 0x1c67f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c67f4:
    // 0x1c67f4: 0xc0711a4  jal         func_1C4690
label_1c67f8:
    if (ctx->pc == 0x1C67F8u) {
        ctx->pc = 0x1C67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67F4u;
        // 0x1c67f8: 0xae420944  sw          $v0, 0x944($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67FCu;
        goto label_1c67fc;
    }
    ctx->pc = 0x1C67F4u;
    SET_GPR_U32(ctx, 31, 0x1C67FCu);
    ctx->pc = 0x1C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67F4u;
    // 0x1c67f8: 0xae420944  sw          $v0, 0x944($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1C67F4u, 0x1C67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67FCu;
label_1c67fc:
    // 0x1c67fc: 0xc0e4060  jal         func_390180
label_1c6800:
    if (ctx->pc == 0x1C6800u) {
        ctx->pc = 0x1C6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67FCu;
        // 0x1c6800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6804u;
        goto label_1c6804;
    }
    ctx->pc = 0x1C67FCu;
    SET_GPR_U32(ctx, 31, 0x1C6804u);
    ctx->pc = 0x1C6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67FCu;
    // 0x1c6800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C67FCu, 0x1C6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6804u;
label_1c6804:
    // 0x1c6804: 0xc0e6ee8  jal         func_39BBA0
label_1c6808:
    if (ctx->pc == 0x1C6808u) {
        ctx->pc = 0x1C6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6804u;
        // 0x1c6808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C680Cu;
        goto label_1c680c;
    }
    ctx->pc = 0x1C6804u;
    SET_GPR_U32(ctx, 31, 0x1C680Cu);
    ctx->pc = 0x1C6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6804u;
    // 0x1c6808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x1C6804u, 0x1C680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C680Cu;
label_1c680c:
    // 0x1c680c: 0xe45500c0  swc1        $f21, 0xC0($v0)
    ctx->pc = 0x1c680cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_1c6810:
    // 0x1c6810: 0xe45400bc  swc1        $f20, 0xBC($v0)
    ctx->pc = 0x1c6810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1c6814:
    // 0x1c6814: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c6818:
    // 0x1c6818: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c681c:
    if (ctx->pc == 0x1C681Cu) {
        ctx->pc = 0x1C681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6818u;
        // 0x1c681c: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6820u;
        goto label_1c6820;
    }
    ctx->pc = 0x1C6818u;
    {
        const bool branch_taken_0x1c6818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6818) {
            ctx->pc = 0x1C681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6818u;
            // 0x1c681c: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C683Cu;
            goto label_1c683c;
        }
    }
    ctx->pc = 0x1C6820u;
label_1c6820:
    // 0x1c6820: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c6820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c6824:
    // 0x1c6824: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1c6828:
    if (ctx->pc == 0x1C6828u) {
        ctx->pc = 0x1C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6824u;
        // 0x1c6828: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C682Cu;
        goto label_1c682c;
    }
    ctx->pc = 0x1C6824u;
    {
        const bool branch_taken_0x1c6824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6824) {
            ctx->pc = 0x1C6828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6824u;
            // 0x1c6828: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C683Cu;
            goto label_1c683c;
        }
    }
    ctx->pc = 0x1C682Cu;
label_1c682c:
    // 0x1c682c: 0x92420950  lbu         $v0, 0x950($s2)
    ctx->pc = 0x1c682cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2384)));
label_1c6830:
    // 0x1c6830: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1c6834:
    if (ctx->pc == 0x1C6834u) {
        ctx->pc = 0x1C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6830u;
        // 0x1c6834: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6838u;
        goto label_1c6838;
    }
    ctx->pc = 0x1C6830u;
    {
        const bool branch_taken_0x1c6830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6830u;
        // 0x1c6834: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6830) {
            ctx->pc = 0x1C6854u;
            goto label_1c6854;
        }
    }
    ctx->pc = 0x1C6838u;
label_1c6838:
    // 0x1c6838: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x1c6838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_1c683c:
    // 0x1c683c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1c6840:
    // 0x1c6840: 0xc0e4060  jal         func_390180
label_1c6844:
    if (ctx->pc == 0x1C6844u) {
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6840u;
        // 0x1c6844: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6848u;
        goto label_1c6848;
    }
    ctx->pc = 0x1C6840u;
    SET_GPR_U32(ctx, 31, 0x1C6848u);
    ctx->pc = 0x1C6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6840u;
    // 0x1c6844: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C6840u, 0x1C6848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6848u;
label_1c6848:
    // 0x1c6848: 0xc07a6ce  jal         func_1E9B38
label_1c684c:
    if (ctx->pc == 0x1C684Cu) {
        ctx->pc = 0x1C684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6848u;
        // 0x1c684c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6850u;
        goto label_1c6850;
    }
    ctx->pc = 0x1C6848u;
    SET_GPR_U32(ctx, 31, 0x1C6850u);
    ctx->pc = 0x1C684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6848u;
    // 0x1c684c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C6848u, 0x1C6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6850u;
label_1c6850:
    // 0x1c6850: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c6850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c6854:
    // 0x1c6854: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c6854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c6858:
    // 0x1c6858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c685c:
    // 0x1c685c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c685cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6860:
    // 0x1c6860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6864:
    // 0x1c6864: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1c6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c6868:
    // 0x1c6868: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c686c:
    // 0x1c686c: 0x3e00008  jr          $ra
label_1c6870:
    if (ctx->pc == 0x1C6870u) {
        ctx->pc = 0x1C6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C686Cu;
        // 0x1c6870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6874u;
        goto label_1c6874;
    }
    ctx->pc = 0x1C686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C686Cu;
        // 0x1c6870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6874u;
label_1c6874:
    // 0x1c6874: 0x0  nop
    ctx->pc = 0x1c6874u;
    // NOP
    ctx->pc = 0x1c6878u;
}
