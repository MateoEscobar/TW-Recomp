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

// Function: sub_003796B8
// Address: 0x3796b8 - 0x379900
void sub_003796B8_0x3796b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003796B8_0x3796b8");
#endif

    switch (ctx->pc) {
        case 0x3796ecu: goto label_3796ec;
        case 0x379700u: goto label_379700;
        case 0x379708u: goto label_379708;
        case 0x379720u: goto label_379720;
        case 0x379738u: goto label_379738;
        case 0x379740u: goto label_379740;
        case 0x379758u: goto label_379758;
        case 0x379770u: goto label_379770;
        case 0x379778u: goto label_379778;
        case 0x379790u: goto label_379790;
        case 0x3797a8u: goto label_3797a8;
        case 0x3797b0u: goto label_3797b0;
        case 0x3797d8u: goto label_3797d8;
        case 0x3797e4u: goto label_3797e4;
        case 0x3797fcu: goto label_3797fc;
        case 0x379808u: goto label_379808;
        case 0x379810u: goto label_379810;
        case 0x379820u: goto label_379820;
        case 0x379834u: goto label_379834;
        case 0x379848u: goto label_379848;
        case 0x379858u: goto label_379858;
        case 0x37986cu: goto label_37986c;
        case 0x379880u: goto label_379880;
        case 0x379894u: goto label_379894;
        case 0x3798acu: goto label_3798ac;
        case 0x3798c0u: goto label_3798c0;
        default: break;
    }

    ctx->pc = 0x3796b8u;

    // 0x3796b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3796b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3796bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3796bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3796c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3796c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3796c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3796c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3796c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3796c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3796cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3796ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3796d0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3796d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3796d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3796d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3796d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3796dc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3796dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3796e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3796e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3796e4: 0xc102488  jal         func_409220
    ctx->pc = 0x3796E4u;
    SET_GPR_U32(ctx, 31, 0x3796ECu);
    ctx->pc = 0x3796E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796E4u;
    // 0x3796e8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3796E4u, 0x3796ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3796ECu;
label_3796ec:
    // 0x3796ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3796ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3796f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3796f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3796f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3796f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3796F8u;
    SET_GPR_U32(ctx, 31, 0x379700u);
    ctx->pc = 0x3796FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796F8u;
    // 0x3796fc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3796F8u, 0x379700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379700u;
label_379700:
    // 0x379700: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379700u;
    SET_GPR_U32(ctx, 31, 0x379708u);
    ctx->pc = 0x379704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379700u;
    // 0x379704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379700u, 0x379708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379708u;
label_379708:
    // 0x379708: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x379708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37970c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x37970cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379710: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x379710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379718: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x379718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37971c: 0x0  nop
    ctx->pc = 0x37971cu;
    // NOP
label_379720:
    // 0x379720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379728: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37972c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379730: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x379730u;
    SET_GPR_U32(ctx, 31, 0x379738u);
    ctx->pc = 0x379734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379730u;
    // 0x379734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x379730u, 0x379738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379738u;
label_379738:
    // 0x379738: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379738u;
    SET_GPR_U32(ctx, 31, 0x379740u);
    ctx->pc = 0x37973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379738u;
    // 0x37973c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379738u, 0x379740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379740u;
label_379740:
    // 0x379740: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x379740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x379744: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379748: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379748u;
    {
        const bool branch_taken_0x379748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379748u;
        // 0x37974c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379748) {
            ctx->pc = 0x379720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379720;
        }
    }
    ctx->pc = 0x379750u;
    // 0x379750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379754: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x379754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_379758:
    // 0x379758: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37975c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379760: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379764: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379768: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x379768u;
    SET_GPR_U32(ctx, 31, 0x379770u);
    ctx->pc = 0x37976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379768u;
    // 0x37976c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x379768u, 0x379770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379770u;
label_379770:
    // 0x379770: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379770u;
    SET_GPR_U32(ctx, 31, 0x379778u);
    ctx->pc = 0x379774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379770u;
    // 0x379774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379770u, 0x379778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379778u;
label_379778:
    // 0x379778: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x379778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37977c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x379780: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379780u;
    {
        const bool branch_taken_0x379780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379780u;
        // 0x379784: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379780) {
            ctx->pc = 0x379758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379758;
        }
    }
    ctx->pc = 0x379788u;
    // 0x379788: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37978c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x37978cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_379790:
    // 0x379790: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379798: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37979c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37979cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797a0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3797A0u;
    SET_GPR_U32(ctx, 31, 0x3797A8u);
    ctx->pc = 0x3797A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797A0u;
    // 0x3797a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3797A0u, 0x3797A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797A8u;
label_3797a8:
    // 0x3797a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3797A8u;
    SET_GPR_U32(ctx, 31, 0x3797B0u);
    ctx->pc = 0x3797ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797A8u;
    // 0x3797ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3797A8u, 0x3797B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797B0u;
label_3797b0:
    // 0x3797b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3797b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3797b4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3797b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3797b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3797B8u;
    {
        const bool branch_taken_0x3797b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3797BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797B8u;
        // 0x3797bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3797b8) {
            ctx->pc = 0x379790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379790;
        }
    }
    ctx->pc = 0x3797C0u;
    // 0x3797c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3797c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797c4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3797c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3797c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3797ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797d0: 0xc0e5c8c  jal         func_397230
    ctx->pc = 0x3797D0u;
    SET_GPR_U32(ctx, 31, 0x3797D8u);
    ctx->pc = 0x3797D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797D0u;
    // 0x3797d4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397230u, 0x3797D0u, 0x3797D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797D8u;
label_3797d8:
    // 0x3797d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3797d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797dc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3797DCu;
    SET_GPR_U32(ctx, 31, 0x3797E4u);
    ctx->pc = 0x3797E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797DCu;
    // 0x3797e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3797DCu, 0x3797E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797E4u;
label_3797e4:
    // 0x3797e4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3797E4u;
    {
        const bool branch_taken_0x3797e4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3797E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797E4u;
        // 0x3797e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3797e4) {
            ctx->pc = 0x379800u;
            goto label_379800;
        }
    }
    ctx->pc = 0x3797ECu;
    // 0x3797ec: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3797ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3797f0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3797f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3797f4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3797F4u;
    SET_GPR_U32(ctx, 31, 0x3797FCu);
    ctx->pc = 0x3797F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797F4u;
    // 0x3797f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3797F4u, 0x3797FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797FCu;
label_3797fc:
    // 0x3797fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3797fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_379800:
    // 0x379800: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x379800u;
    SET_GPR_U32(ctx, 31, 0x379808u);
    ctx->pc = 0x379804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379800u;
    // 0x379804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x379800u, 0x379808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379808u;
label_379808:
    // 0x379808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37980c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37980cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_379810:
    // 0x379810: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x379810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x379814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379818: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379818u;
    SET_GPR_U32(ctx, 31, 0x379820u);
    ctx->pc = 0x37981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379818u;
    // 0x37981c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379818u, 0x379820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379820u;
label_379820:
    // 0x379820: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37982c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37982Cu;
    SET_GPR_U32(ctx, 31, 0x379834u);
    ctx->pc = 0x379830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37982Cu;
    // 0x379830: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37982Cu, 0x379834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379834u;
label_379834:
    // 0x379834: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379838: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379838u;
    {
        const bool branch_taken_0x379838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379838u;
        // 0x37983c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379838) {
            ctx->pc = 0x379810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379810;
        }
    }
    ctx->pc = 0x379840u;
    // 0x379840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379844: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x379844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_379848:
    // 0x379848: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x379848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37984c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37984cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379850: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379850u;
    SET_GPR_U32(ctx, 31, 0x379858u);
    ctx->pc = 0x379854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379850u;
    // 0x379854: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379850u, 0x379858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379858u;
label_379858:
    // 0x379858: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37985c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379860: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379864: 0xc102576  jal         func_4095D8
    ctx->pc = 0x379864u;
    SET_GPR_U32(ctx, 31, 0x37986Cu);
    ctx->pc = 0x379868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379864u;
    // 0x379868: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x379864u, 0x37986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37986Cu;
label_37986c:
    // 0x37986c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37986cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x379870: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379870u;
    {
        const bool branch_taken_0x379870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379870u;
        // 0x379874: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379870) {
            ctx->pc = 0x379848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379848;
        }
    }
    ctx->pc = 0x379878u;
    // 0x379878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37987c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x37987cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_379880:
    // 0x379880: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x379884: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x379884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x379888: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x379888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37988c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37988Cu;
    SET_GPR_U32(ctx, 31, 0x379894u);
    ctx->pc = 0x379890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37988Cu;
    // 0x379890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37988Cu, 0x379894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379894u;
label_379894:
    // 0x379894: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379894u;
    {
        const bool branch_taken_0x379894 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x379898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379894u;
        // 0x379898: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379894) {
            ctx->pc = 0x3798B0u;
            goto label_3798b0;
        }
    }
    ctx->pc = 0x37989Cu;
    // 0x37989c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37989cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3798a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3798a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3798a4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3798A4u;
    SET_GPR_U32(ctx, 31, 0x3798ACu);
    ctx->pc = 0x3798A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798A4u;
    // 0x3798a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3798A4u, 0x3798ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798ACu;
label_3798ac:
    // 0x3798ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3798acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3798b0:
    // 0x3798b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3798b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3798b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3798b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3798b8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3798B8u;
    SET_GPR_U32(ctx, 31, 0x3798C0u);
    ctx->pc = 0x3798BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798B8u;
    // 0x3798bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3798B8u, 0x3798C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798C0u;
label_3798c0:
    // 0x3798c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3798c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3798c4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3798c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3798c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3798C8u;
    {
        const bool branch_taken_0x3798c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798C8u;
        // 0x3798cc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798c8) {
            ctx->pc = 0x379880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379880;
        }
    }
    ctx->pc = 0x3798D0u;
    // 0x3798d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3798d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3798d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3798d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3798d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3798d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3798dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3798dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3798e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3798e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3798e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3798e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3798e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3798e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3798ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3798ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3798f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3798f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3798f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3798F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3798F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798F4u;
        // 0x3798f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3798F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3798FCu;
    // 0x3798fc: 0x0  nop
    ctx->pc = 0x3798fcu;
    // NOP
    ctx->pc = 0x379900u;
}
