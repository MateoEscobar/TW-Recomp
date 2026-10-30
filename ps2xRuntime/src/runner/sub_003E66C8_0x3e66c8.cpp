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

// Function: sub_003E66C8
// Address: 0x3e66c8 - 0x3e67e8
void sub_003E66C8_0x3e66c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E66C8_0x3e66c8");
#endif

    switch (ctx->pc) {
        case 0x3e66c8u: goto label_3e66c8;
        case 0x3e66ccu: goto label_3e66cc;
        case 0x3e66d0u: goto label_3e66d0;
        case 0x3e66d4u: goto label_3e66d4;
        case 0x3e66d8u: goto label_3e66d8;
        case 0x3e66dcu: goto label_3e66dc;
        case 0x3e66e0u: goto label_3e66e0;
        case 0x3e66e4u: goto label_3e66e4;
        case 0x3e66e8u: goto label_3e66e8;
        case 0x3e66ecu: goto label_3e66ec;
        case 0x3e66f0u: goto label_3e66f0;
        case 0x3e66f4u: goto label_3e66f4;
        case 0x3e66f8u: goto label_3e66f8;
        case 0x3e66fcu: goto label_3e66fc;
        case 0x3e6700u: goto label_3e6700;
        case 0x3e6704u: goto label_3e6704;
        case 0x3e6708u: goto label_3e6708;
        case 0x3e670cu: goto label_3e670c;
        case 0x3e6710u: goto label_3e6710;
        case 0x3e6714u: goto label_3e6714;
        case 0x3e6718u: goto label_3e6718;
        case 0x3e671cu: goto label_3e671c;
        case 0x3e6720u: goto label_3e6720;
        case 0x3e6724u: goto label_3e6724;
        case 0x3e6728u: goto label_3e6728;
        case 0x3e672cu: goto label_3e672c;
        case 0x3e6730u: goto label_3e6730;
        case 0x3e6734u: goto label_3e6734;
        case 0x3e6738u: goto label_3e6738;
        case 0x3e673cu: goto label_3e673c;
        case 0x3e6740u: goto label_3e6740;
        case 0x3e6744u: goto label_3e6744;
        case 0x3e6748u: goto label_3e6748;
        case 0x3e674cu: goto label_3e674c;
        case 0x3e6750u: goto label_3e6750;
        case 0x3e6754u: goto label_3e6754;
        case 0x3e6758u: goto label_3e6758;
        case 0x3e675cu: goto label_3e675c;
        case 0x3e6760u: goto label_3e6760;
        case 0x3e6764u: goto label_3e6764;
        case 0x3e6768u: goto label_3e6768;
        case 0x3e676cu: goto label_3e676c;
        case 0x3e6770u: goto label_3e6770;
        case 0x3e6774u: goto label_3e6774;
        case 0x3e6778u: goto label_3e6778;
        case 0x3e677cu: goto label_3e677c;
        case 0x3e6780u: goto label_3e6780;
        case 0x3e6784u: goto label_3e6784;
        case 0x3e6788u: goto label_3e6788;
        case 0x3e678cu: goto label_3e678c;
        case 0x3e6790u: goto label_3e6790;
        case 0x3e6794u: goto label_3e6794;
        case 0x3e6798u: goto label_3e6798;
        case 0x3e679cu: goto label_3e679c;
        case 0x3e67a0u: goto label_3e67a0;
        case 0x3e67a4u: goto label_3e67a4;
        case 0x3e67a8u: goto label_3e67a8;
        case 0x3e67acu: goto label_3e67ac;
        case 0x3e67b0u: goto label_3e67b0;
        case 0x3e67b4u: goto label_3e67b4;
        case 0x3e67b8u: goto label_3e67b8;
        case 0x3e67bcu: goto label_3e67bc;
        case 0x3e67c0u: goto label_3e67c0;
        case 0x3e67c4u: goto label_3e67c4;
        case 0x3e67c8u: goto label_3e67c8;
        case 0x3e67ccu: goto label_3e67cc;
        case 0x3e67d0u: goto label_3e67d0;
        case 0x3e67d4u: goto label_3e67d4;
        case 0x3e67d8u: goto label_3e67d8;
        case 0x3e67dcu: goto label_3e67dc;
        case 0x3e67e0u: goto label_3e67e0;
        case 0x3e67e4u: goto label_3e67e4;
        default: break;
    }

    ctx->pc = 0x3e66c8u;

label_3e66c8:
    // 0x3e66c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e66c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e66cc:
    // 0x3e66cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e66d0:
    // 0x3e66d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e66d4:
    // 0x3e66d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e66d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e66d8:
    // 0x3e66d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e66dc:
    // 0x3e66dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e66dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e66e0:
    // 0x3e66e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e66e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e66e4:
    // 0x3e66e4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3e66e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3e66e8:
    // 0x3e66e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3e66e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3e66ec:
    // 0x3e66ec: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3e66ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e66f0:
    // 0x3e66f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e66f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e66f4:
    // 0x3e66f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e66f8:
    // 0x3e66f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e66f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e66fc:
    // 0x3e66fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e6700:
    // 0x3e6700: 0x40f809  jalr        $v0
label_3e6704:
    if (ctx->pc == 0x3E6704u) {
        ctx->pc = 0x3E6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6700u;
        // 0x3e6704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6708u;
        goto label_3e6708;
    }
    ctx->pc = 0x3E6700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6708u);
        ctx->pc = 0x3E6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6700u;
        // 0x3e6704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6700u, 0x3E6708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6708u;
label_3e6708:
    // 0x3e6708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e670c:
    // 0x3e670c: 0xc0ea146  jal         func_3A8518
label_3e6710:
    if (ctx->pc == 0x3E6710u) {
        ctx->pc = 0x3E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E670Cu;
        // 0x3e6710: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6714u;
        goto label_3e6714;
    }
    ctx->pc = 0x3E670Cu;
    SET_GPR_U32(ctx, 31, 0x3E6714u);
    ctx->pc = 0x3E6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E670Cu;
    // 0x3e6710: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E670Cu, 0x3E6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6714u;
label_3e6714:
    // 0x3e6714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6718:
    // 0x3e6718: 0xc0ea146  jal         func_3A8518
label_3e671c:
    if (ctx->pc == 0x3E671Cu) {
        ctx->pc = 0x3E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6718u;
        // 0x3e671c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6720u;
        goto label_3e6720;
    }
    ctx->pc = 0x3E6718u;
    SET_GPR_U32(ctx, 31, 0x3E6720u);
    ctx->pc = 0x3E671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6718u;
    // 0x3e671c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6718u, 0x3E6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6720u;
label_3e6720:
    // 0x3e6720: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e6720u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6724:
    // 0x3e6724: 0xc0ea13a  jal         func_3A84E8
label_3e6728:
    if (ctx->pc == 0x3E6728u) {
        ctx->pc = 0x3E6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6724u;
        // 0x3e6728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E672Cu;
        goto label_3e672c;
    }
    ctx->pc = 0x3E6724u;
    SET_GPR_U32(ctx, 31, 0x3E672Cu);
    ctx->pc = 0x3E6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6724u;
    // 0x3e6728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6724u, 0x3E672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E672Cu;
label_3e672c:
    // 0x3e672c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e672cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e6730:
    // 0x3e6730: 0xc0ea146  jal         func_3A8518
label_3e6734:
    if (ctx->pc == 0x3E6734u) {
        ctx->pc = 0x3E6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6730u;
        // 0x3e6734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6738u;
        goto label_3e6738;
    }
    ctx->pc = 0x3E6730u;
    SET_GPR_U32(ctx, 31, 0x3E6738u);
    ctx->pc = 0x3E6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6730u;
    // 0x3e6734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6730u, 0x3E6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6738u;
label_3e6738:
    // 0x3e6738: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e673c:
    // 0x3e673c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e6740:
    // 0x3e6740: 0xc0ea12a  jal         func_3A84A8
label_3e6744:
    if (ctx->pc == 0x3E6744u) {
        ctx->pc = 0x3E6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6740u;
        // 0x3e6744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6748u;
        goto label_3e6748;
    }
    ctx->pc = 0x3E6740u;
    SET_GPR_U32(ctx, 31, 0x3E6748u);
    ctx->pc = 0x3E6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6740u;
    // 0x3e6744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E6740u, 0x3E6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6748u;
label_3e6748:
    // 0x3e6748: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3e6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3e674c:
    // 0x3e674c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6750:
    // 0x3e6750: 0x34420304  ori         $v0, $v0, 0x304
    ctx->pc = 0x3e6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)772);
label_3e6754:
    // 0x3e6754: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e6754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e6758:
    // 0x3e6758: 0xc0e858c  jal         func_3A1630
label_3e675c:
    if (ctx->pc == 0x3E675Cu) {
        ctx->pc = 0x3E675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6758u;
        // 0x3e675c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6760u;
        goto label_3e6760;
    }
    ctx->pc = 0x3E6758u;
    SET_GPR_U32(ctx, 31, 0x3E6760u);
    ctx->pc = 0x3E675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6758u;
    // 0x3e675c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6758u, 0x3E6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6760u;
label_3e6760:
    // 0x3e6760: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e6764:
    // 0x3e6764: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e6764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3e6768:
    // 0x3e6768: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e6768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e676c:
    // 0x3e676c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e6770:
    // 0x3e6770: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3e6770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3e6774:
    // 0x3e6774: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_3e6778:
    if (ctx->pc == 0x3E6778u) {
        ctx->pc = 0x3E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6774u;
        // 0x3e6778: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E677Cu;
        goto label_3e677c;
    }
    ctx->pc = 0x3E6774u;
    {
        const bool branch_taken_0x3e6774 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6774u;
        // 0x3e6778: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6774) {
            ctx->pc = 0x3E6784u;
            goto label_3e6784;
        }
    }
    ctx->pc = 0x3E677Cu;
label_3e677c:
    // 0x3e677c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e6780:
    if (ctx->pc == 0x3E6780u) {
        ctx->pc = 0x3E6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E677Cu;
        // 0x3e6780: 0x3c040003  lui         $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6784u;
        goto label_3e6784;
    }
    ctx->pc = 0x3E677Cu;
    {
        const bool branch_taken_0x3e677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E677Cu;
        // 0x3e6780: 0x3c040003  lui         $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e677c) {
            ctx->pc = 0x3E678Cu;
            goto label_3e678c;
        }
    }
    ctx->pc = 0x3E6784u;
label_3e6784:
    // 0x3e6784: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e6784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e6788:
    // 0x3e6788: 0x2622024  and         $a0, $s3, $v0
    ctx->pc = 0x3e6788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3e678c:
    // 0x3e678c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e678cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6790:
    // 0x3e6790: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x3e6790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_3e6794:
    // 0x3e6794: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3e6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e6798:
    // 0x3e6798: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e6798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e679c:
    // 0x3e679c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e679cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e67a0:
    // 0x3e67a0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e67a4:
    // 0x3e67a4: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3e67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3e67a8:
    // 0x3e67a8: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x3e67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
label_3e67ac:
    // 0x3e67ac: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x3e67acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_3e67b0:
    // 0x3e67b0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3e67b4:
    // 0x3e67b4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e67b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e67b8:
    // 0x3e67b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e67b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e67bc:
    // 0x3e67bc: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3e67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_3e67c0:
    // 0x3e67c0: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3e67c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3e67c4:
    // 0x3e67c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e67c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e67c8:
    // 0x3e67c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e67c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e67cc:
    // 0x3e67cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3e67ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e67d0:
    // 0x3e67d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3e67d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e67d4:
    // 0x3e67d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e67d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e67d8:
    // 0x3e67d8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3e67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e67dc:
    // 0x3e67dc: 0x3e00008  jr          $ra
label_3e67e0:
    if (ctx->pc == 0x3E67E0u) {
        ctx->pc = 0x3E67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67DCu;
        // 0x3e67e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E67E4u;
        goto label_3e67e4;
    }
    ctx->pc = 0x3E67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67DCu;
        // 0x3e67e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E67DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E67E4u;
label_3e67e4:
    // 0x3e67e4: 0x0  nop
    ctx->pc = 0x3e67e4u;
    // NOP
    ctx->pc = 0x3e67e8u;
}
