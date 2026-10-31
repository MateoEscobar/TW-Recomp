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

// Function: sub_001E46C0
// Address: 0x1e46c0 - 0x1e4820
void sub_001E46C0_0x1e46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E46C0_0x1e46c0");
#endif

    switch (ctx->pc) {
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        case 0x1e4708u: goto label_1e4708;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e4714u: goto label_1e4714;
        case 0x1e4718u: goto label_1e4718;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        case 0x1e47f8u: goto label_1e47f8;
        case 0x1e47fcu: goto label_1e47fc;
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        default: break;
    }

    ctx->pc = 0x1e46c0u;

label_1e46c0:
    // 0x1e46c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e46c4:
    // 0x1e46c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e46c8:
    // 0x1e46c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e46c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e46cc:
    // 0x1e46cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e46ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e46d0:
    // 0x1e46d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e46d4:
    // 0x1e46d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e46d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e46d8:
    // 0x1e46d8: 0x26501c60  addiu       $s0, $s2, 0x1C60
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
label_1e46dc:
    // 0x1e46dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e46dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e46e0:
    // 0x1e46e0: 0xc078d7e  jal         func_1E35F8
label_1e46e4:
    if (ctx->pc == 0x1E46E4u) {
        ctx->pc = 0x1E46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46E0u;
        // 0x1e46e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46E8u;
        goto label_1e46e8;
    }
    ctx->pc = 0x1E46E0u;
    SET_GPR_U32(ctx, 31, 0x1E46E8u);
    ctx->pc = 0x1E46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46E0u;
    // 0x1e46e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35F8u, 0x1E46E0u, 0x1E46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46E8u;
label_1e46e8:
    // 0x1e46e8: 0x26510140  addiu       $s1, $s2, 0x140
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1e46ec:
    // 0x1e46ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e46f0:
    // 0x1e46f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e46f4:
    // 0x1e46f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e46f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e46f8:
    // 0x1e46f8: 0xc442f0e8  lwc1        $f2, -0xF18($v0)
    ctx->pc = 0x1e46f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e46fc:
    // 0x1e46fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e4700:
    // 0x1e4700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e4704:
    // 0x1e4704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4708:
    // 0x1e4708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e470c:
    // 0x1e470c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e4710:
    // 0x1e4710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4714:
    // 0x1e4714: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e4718:
    // 0x1e4718: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e4718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e471c:
    // 0x1e471c: 0xc048b52  jal         func_122D48
label_1e4720:
    if (ctx->pc == 0x1E4720u) {
        ctx->pc = 0x1E4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E471Cu;
        // 0x1e4720: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4724u;
        goto label_1e4724;
    }
    ctx->pc = 0x1E471Cu;
    SET_GPR_U32(ctx, 31, 0x1E4724u);
    ctx->pc = 0x1E4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E471Cu;
    // 0x1e4720: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E471Cu, 0x1E4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4724u;
label_1e4724:
    // 0x1e4724: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4728:
    // 0x1e4728: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e4728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e472c:
    // 0x1e472c: 0xc44cf0e0  lwc1        $f12, -0xF20($v0)
    ctx->pc = 0x1e472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4730:
    // 0x1e4730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4734:
    // 0x1e4734: 0xc46df0e4  lwc1        $f13, -0xF1C($v1)
    ctx->pc = 0x1e4734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4738:
    // 0x1e4738: 0xc068848  jal         func_1A2120
label_1e473c:
    if (ctx->pc == 0x1E473Cu) {
        ctx->pc = 0x1E473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4738u;
        // 0x1e473c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4740u;
        goto label_1e4740;
    }
    ctx->pc = 0x1E4738u;
    SET_GPR_U32(ctx, 31, 0x1E4740u);
    ctx->pc = 0x1E473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4738u;
    // 0x1e473c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E4738u, 0x1E4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4740u;
label_1e4740:
    // 0x1e4740: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e4744:
    // 0x1e4744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4748:
    // 0x1e4748: 0xc068818  jal         func_1A2060
label_1e474c:
    if (ctx->pc == 0x1E474Cu) {
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4750u;
        goto label_1e4750;
    }
    ctx->pc = 0x1E4748u;
    SET_GPR_U32(ctx, 31, 0x1E4750u);
    ctx->pc = 0x1E474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4748u;
    // 0x1e474c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E4748u, 0x1E4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4754:
    // 0x1e4754: 0xc06887a  jal         func_1A21E8
label_1e4758:
    if (ctx->pc == 0x1E4758u) {
        ctx->pc = 0x1E4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4754u;
        // 0x1e4758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E475Cu;
        goto label_1e475c;
    }
    ctx->pc = 0x1E4754u;
    SET_GPR_U32(ctx, 31, 0x1E475Cu);
    ctx->pc = 0x1E4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4754u;
    // 0x1e4758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1E4754u, 0x1E475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E475Cu;
label_1e475c:
    // 0x1e475c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e4760:
    // 0x1e4760: 0x2450ed50  addiu       $s0, $v0, -0x12B0
    ctx->pc = 0x1e4760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
label_1e4764:
    // 0x1e4764: 0x0  nop
    ctx->pc = 0x1e4764u;
    // NOP
label_1e4768:
    // 0x1e4768: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e476c:
    // 0x1e476c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e476cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4770:
    // 0x1e4770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4774:
    // 0x1e4774: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e4778:
    // 0x1e4778: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e477c:
    // 0x1e477c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e4780:
    // 0x1e4780: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e4784:
    // 0x1e4784: 0x60f809  jalr        $v1
label_1e4788:
    if (ctx->pc == 0x1E4788u) {
        ctx->pc = 0x1E4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4784u;
        // 0x1e4788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E478Cu;
        goto label_1e478c;
    }
    ctx->pc = 0x1E4784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E478Cu);
        ctx->pc = 0x1E4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4784u;
        // 0x1e4788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4784u, 0x1E478Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E478Cu;
label_1e478c:
    // 0x1e478c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4790:
    // 0x1e4790: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e4790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e4794:
    // 0x1e4794: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e4794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e4798:
    // 0x1e4798: 0x60f809  jalr        $v1
label_1e479c:
    if (ctx->pc == 0x1E479Cu) {
        ctx->pc = 0x1E479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4798u;
        // 0x1e479c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47A0u;
        goto label_1e47a0;
    }
    ctx->pc = 0x1E4798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E47A0u);
        ctx->pc = 0x1E479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4798u;
        // 0x1e479c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4798u, 0x1E47A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E47A0u;
label_1e47a0:
    // 0x1e47a0: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e47a4:
    // 0x1e47a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1e47a8:
    if (ctx->pc == 0x1E47A8u) {
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47ACu;
        goto label_1e47ac;
    }
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E4768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4768;
        }
    }
    ctx->pc = 0x1E47ACu;
label_1e47ac:
    // 0x1e47ac: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e47b0:
    // 0x1e47b0: 0x26500ed0  addiu       $s0, $s2, 0xED0
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
label_1e47b4:
    // 0x1e47b4: 0x2452edc0  addiu       $s2, $v0, -0x1240
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
label_1e47b8:
    // 0x1e47b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e47b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e47bc:
    // 0x1e47bc: 0x0  nop
    ctx->pc = 0x1e47bcu;
    // NOP
label_1e47c0:
    // 0x1e47c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e47c4:
    // 0x1e47c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e47c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e47c8:
    // 0x1e47c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e47cc:
    // 0x1e47cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e47d0:
    // 0x1e47d0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e47d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e47d4:
    // 0x1e47d4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e47d8:
    // 0x1e47d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e47dc:
    // 0x1e47dc: 0x60f809  jalr        $v1
label_1e47e0:
    if (ctx->pc == 0x1E47E0u) {
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47E4u;
        goto label_1e47e4;
    }
    ctx->pc = 0x1E47DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E47E4u);
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47DCu, 0x1E47E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E47E4u;
label_1e47e4:
    // 0x1e47e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e47e8:
    // 0x1e47e8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e47e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e47ec:
    // 0x1e47ec: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e47f0:
    // 0x1e47f0: 0x60f809  jalr        $v1
label_1e47f4:
    if (ctx->pc == 0x1E47F4u) {
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47F8u;
        goto label_1e47f8;
    }
    ctx->pc = 0x1E47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E47F8u);
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47F0u, 0x1E47F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E47F8u;
label_1e47f8:
    // 0x1e47f8: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e47fc:
    // 0x1e47fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1e4800:
    if (ctx->pc == 0x1E4800u) {
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4804u;
        goto label_1e4804;
    }
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e47c0;
        }
    }
    ctx->pc = 0x1E4804u;
label_1e4804:
    // 0x1e4804: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e4804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4808:
    // 0x1e4808: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e4808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e480c:
    // 0x1e480c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e480cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4810:
    // 0x1e4810: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e4810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4814:
    // 0x1e4814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4818:
    // 0x1e4818: 0x3e00008  jr          $ra
label_1e481c:
    if (ctx->pc == 0x1E481Cu) {
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4820u;
        goto label_fallthrough_0x1e4818;
    }
    ctx->pc = 0x1E4818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4818:
    ctx->pc = 0x1E4820u;
}
