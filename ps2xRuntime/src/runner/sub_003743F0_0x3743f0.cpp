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

// Function: sub_003743F0
// Address: 0x3743f0 - 0x374518
void sub_003743F0_0x3743f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003743F0_0x3743f0");
#endif

    switch (ctx->pc) {
        case 0x374424u: goto label_374424;
        case 0x37442cu: goto label_37442c;
        case 0x374440u: goto label_374440;
        case 0x374448u: goto label_374448;
        case 0x37445cu: goto label_37445c;
        case 0x374464u: goto label_374464;
        case 0x374470u: goto label_374470;
        case 0x374488u: goto label_374488;
        case 0x374490u: goto label_374490;
        case 0x3744b4u: goto label_3744b4;
        case 0x3744c0u: goto label_3744c0;
        case 0x3744d0u: goto label_3744d0;
        case 0x3744e4u: goto label_3744e4;
        default: break;
    }

    ctx->pc = 0x3743f0u;

    // 0x3743f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3743f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3743f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3743f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3743f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3743f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3743fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3743fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x374400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x374404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374408: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x374408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37440c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x374410: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x374410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x374414: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x374414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x374418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37441c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37441Cu;
    SET_GPR_U32(ctx, 31, 0x374424u);
    ctx->pc = 0x374420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37441Cu;
    // 0x374420: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37441Cu, 0x374424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374424u;
label_374424:
    // 0x374424: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374424u;
    SET_GPR_U32(ctx, 31, 0x37442Cu);
    ctx->pc = 0x374428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374424u;
    // 0x374428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374424u, 0x37442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37442Cu;
label_37442c:
    // 0x37442c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374430: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374438: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374438u;
    SET_GPR_U32(ctx, 31, 0x374440u);
    ctx->pc = 0x37443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374438u;
    // 0x37443c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374438u, 0x374440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374440u;
label_374440:
    // 0x374440: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374440u;
    SET_GPR_U32(ctx, 31, 0x374448u);
    ctx->pc = 0x374444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374440u;
    // 0x374444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374440u, 0x374448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374448u;
label_374448:
    // 0x374448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37444c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374450: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374454: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374454u;
    SET_GPR_U32(ctx, 31, 0x37445Cu);
    ctx->pc = 0x374458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374454u;
    // 0x374458: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374454u, 0x37445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37445Cu;
label_37445c:
    // 0x37445c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37445Cu;
    SET_GPR_U32(ctx, 31, 0x374464u);
    ctx->pc = 0x374460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37445Cu;
    // 0x374460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37445Cu, 0x374464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374464u;
label_374464:
    // 0x374464: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x374464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374468: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37446c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37446cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_374470:
    // 0x374470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x374470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x374474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37447c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374480: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x374480u;
    SET_GPR_U32(ctx, 31, 0x374488u);
    ctx->pc = 0x374484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374480u;
    // 0x374484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x374480u, 0x374488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374488u;
label_374488:
    // 0x374488: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374488u;
    SET_GPR_U32(ctx, 31, 0x374490u);
    ctx->pc = 0x37448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374488u;
    // 0x37448c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374488u, 0x374490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374490u;
label_374490:
    // 0x374490: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x374490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x374494: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x374494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x374498: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x374498u;
    {
        const bool branch_taken_0x374498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374498u;
        // 0x37449c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374498) {
            ctx->pc = 0x374470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374470;
        }
    }
    ctx->pc = 0x3744A0u;
    // 0x3744a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3744a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3744a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3744a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744ac: 0xc05ad9e  jal         func_16B678
    ctx->pc = 0x3744ACu;
    SET_GPR_U32(ctx, 31, 0x3744B4u);
    ctx->pc = 0x3744B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744ACu;
    // 0x3744b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B678u, 0x3744ACu, 0x3744B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744B4u;
label_3744b4:
    // 0x3744b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3744b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3744b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3744bc: 0x0  nop
    ctx->pc = 0x3744bcu;
    // NOP
label_3744c0:
    // 0x3744c0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3744c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3744c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3744c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3744c8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3744C8u;
    SET_GPR_U32(ctx, 31, 0x3744D0u);
    ctx->pc = 0x3744CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744C8u;
    // 0x3744cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3744C8u, 0x3744D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744D0u;
label_3744d0:
    // 0x3744d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3744d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3744d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3744d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3744dc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3744DCu;
    SET_GPR_U32(ctx, 31, 0x3744E4u);
    ctx->pc = 0x3744E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744DCu;
    // 0x3744e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3744DCu, 0x3744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744E4u;
label_3744e4:
    // 0x3744e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3744e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3744e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3744E8u;
    {
        const bool branch_taken_0x3744e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3744ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744E8u;
        // 0x3744ec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3744e8) {
            ctx->pc = 0x3744C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3744c0;
        }
    }
    ctx->pc = 0x3744F0u;
    // 0x3744f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3744f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3744f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3744f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3744f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3744fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3744fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374500: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x374500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374504: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x374504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374508: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x374508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37450c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374510: 0x3e00008  jr          $ra
    ctx->pc = 0x374510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374510u;
        // 0x374514: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374518u;
}
