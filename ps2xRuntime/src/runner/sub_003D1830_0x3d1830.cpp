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

// Function: sub_003D1830
// Address: 0x3d1830 - 0x3d1908
void sub_003D1830_0x3d1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1830_0x3d1830");
#endif

    switch (ctx->pc) {
        case 0x3d1830u: goto label_3d1830;
        case 0x3d1834u: goto label_3d1834;
        case 0x3d1838u: goto label_3d1838;
        case 0x3d183cu: goto label_3d183c;
        case 0x3d1840u: goto label_3d1840;
        case 0x3d1844u: goto label_3d1844;
        case 0x3d1848u: goto label_3d1848;
        case 0x3d184cu: goto label_3d184c;
        case 0x3d1850u: goto label_3d1850;
        case 0x3d1854u: goto label_3d1854;
        case 0x3d1858u: goto label_3d1858;
        case 0x3d185cu: goto label_3d185c;
        case 0x3d1860u: goto label_3d1860;
        case 0x3d1864u: goto label_3d1864;
        case 0x3d1868u: goto label_3d1868;
        case 0x3d186cu: goto label_3d186c;
        case 0x3d1870u: goto label_3d1870;
        case 0x3d1874u: goto label_3d1874;
        case 0x3d1878u: goto label_3d1878;
        case 0x3d187cu: goto label_3d187c;
        case 0x3d1880u: goto label_3d1880;
        case 0x3d1884u: goto label_3d1884;
        case 0x3d1888u: goto label_3d1888;
        case 0x3d188cu: goto label_3d188c;
        case 0x3d1890u: goto label_3d1890;
        case 0x3d1894u: goto label_3d1894;
        case 0x3d1898u: goto label_3d1898;
        case 0x3d189cu: goto label_3d189c;
        case 0x3d18a0u: goto label_3d18a0;
        case 0x3d18a4u: goto label_3d18a4;
        case 0x3d18a8u: goto label_3d18a8;
        case 0x3d18acu: goto label_3d18ac;
        case 0x3d18b0u: goto label_3d18b0;
        case 0x3d18b4u: goto label_3d18b4;
        case 0x3d18b8u: goto label_3d18b8;
        case 0x3d18bcu: goto label_3d18bc;
        case 0x3d18c0u: goto label_3d18c0;
        case 0x3d18c4u: goto label_3d18c4;
        case 0x3d18c8u: goto label_3d18c8;
        case 0x3d18ccu: goto label_3d18cc;
        case 0x3d18d0u: goto label_3d18d0;
        case 0x3d18d4u: goto label_3d18d4;
        case 0x3d18d8u: goto label_3d18d8;
        case 0x3d18dcu: goto label_3d18dc;
        case 0x3d18e0u: goto label_3d18e0;
        case 0x3d18e4u: goto label_3d18e4;
        case 0x3d18e8u: goto label_3d18e8;
        case 0x3d18ecu: goto label_3d18ec;
        case 0x3d18f0u: goto label_3d18f0;
        case 0x3d18f4u: goto label_3d18f4;
        case 0x3d18f8u: goto label_3d18f8;
        case 0x3d18fcu: goto label_3d18fc;
        case 0x3d1900u: goto label_3d1900;
        case 0x3d1904u: goto label_3d1904;
        default: break;
    }

    ctx->pc = 0x3d1830u;

label_3d1830:
    // 0x3d1830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d1834:
    // 0x3d1834: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d1834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d1838:
    // 0x3d1838: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d183c:
    // 0x3d183c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d183cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d1840:
    // 0x3d1840: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d1840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d1844:
    // 0x3d1844: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d1844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d1848:
    // 0x3d1848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d184c:
    // 0x3d184c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1850:
    // 0x3d1850: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d1850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d1854:
    // 0x3d1854: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d1858:
    // 0x3d1858: 0x40f809  jalr        $v0
label_3d185c:
    if (ctx->pc == 0x3D185Cu) {
        ctx->pc = 0x3D185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1858u;
        // 0x3d185c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1860u;
        goto label_3d1860;
    }
    ctx->pc = 0x3D1858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1860u);
        ctx->pc = 0x3D185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1858u;
        // 0x3d185c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1858u, 0x3D1860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1860u;
label_3d1860:
    // 0x3d1860: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d1860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1864:
    // 0x3d1864: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d1868:
    // 0x3d1868: 0xc0e858c  jal         func_3A1630
label_3d186c:
    if (ctx->pc == 0x3D186Cu) {
        ctx->pc = 0x3D186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1868u;
        // 0x3d186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1870u;
        goto label_3d1870;
    }
    ctx->pc = 0x3D1868u;
    SET_GPR_U32(ctx, 31, 0x3D1870u);
    ctx->pc = 0x3D186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1868u;
    // 0x3d186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D1868u, 0x3D1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1870u;
label_3d1870:
    // 0x3d1870: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3d1870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3d1874:
    // 0x3d1874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1878:
    // 0x3d1878: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3d1878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_3d187c:
    // 0x3d187c: 0xc0ea14c  jal         func_3A8530
label_3d1880:
    if (ctx->pc == 0x3D1880u) {
        ctx->pc = 0x3D1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D187Cu;
        // 0x3d1880: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1884u;
        goto label_3d1884;
    }
    ctx->pc = 0x3D187Cu;
    SET_GPR_U32(ctx, 31, 0x3D1884u);
    ctx->pc = 0x3D1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D187Cu;
    // 0x3d1880: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D187Cu, 0x3D1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1884u;
label_3d1884:
    // 0x3d1884: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1888:
    // 0x3d1888: 0xc0ea12a  jal         func_3A84A8
label_3d188c:
    if (ctx->pc == 0x3D188Cu) {
        ctx->pc = 0x3D188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1888u;
        // 0x3d188c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1890u;
        goto label_3d1890;
    }
    ctx->pc = 0x3D1888u;
    SET_GPR_U32(ctx, 31, 0x3D1890u);
    ctx->pc = 0x3D188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1888u;
    // 0x3d188c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D1888u, 0x3D1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1890u;
label_3d1890:
    // 0x3d1890: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d1890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1894:
    // 0x3d1894: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d1894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1898:
    // 0x3d1898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d189c:
    // 0x3d189c: 0xc0ea12a  jal         func_3A84A8
label_3d18a0:
    if (ctx->pc == 0x3D18A0u) {
        ctx->pc = 0x3D18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D189Cu;
        // 0x3d18a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18A4u;
        goto label_3d18a4;
    }
    ctx->pc = 0x3D189Cu;
    SET_GPR_U32(ctx, 31, 0x3D18A4u);
    ctx->pc = 0x3D18A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D189Cu;
    // 0x3d18a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D189Cu, 0x3D18A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18A4u;
label_3d18a4:
    // 0x3d18a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d18a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d18a8:
    // 0x3d18a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d18ac:
    // 0x3d18ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d18acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d18b0:
    // 0x3d18b0: 0xc0e858c  jal         func_3A1630
label_3d18b4:
    if (ctx->pc == 0x3D18B4u) {
        ctx->pc = 0x3D18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18B0u;
        // 0x3d18b4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18B8u;
        goto label_3d18b8;
    }
    ctx->pc = 0x3D18B0u;
    SET_GPR_U32(ctx, 31, 0x3D18B8u);
    ctx->pc = 0x3D18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18B0u;
    // 0x3d18b4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D18B0u, 0x3D18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18B8u;
label_3d18b8:
    // 0x3d18b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d18bc:
    // 0x3d18bc: 0xc0e9132  jal         func_3A44C8
label_3d18c0:
    if (ctx->pc == 0x3D18C0u) {
        ctx->pc = 0x3D18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18BCu;
        // 0x3d18c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18C4u;
        goto label_3d18c4;
    }
    ctx->pc = 0x3D18BCu;
    SET_GPR_U32(ctx, 31, 0x3D18C4u);
    ctx->pc = 0x3D18C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18BCu;
    // 0x3d18c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D18BCu, 0x3D18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18C4u;
label_3d18c4:
    // 0x3d18c4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3d18c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d18c8:
    // 0x3d18c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d18cc:
    // 0x3d18cc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d18ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d18d0:
    // 0x3d18d0: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3d18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3d18d4:
    // 0x3d18d4: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3d18d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3d18d8:
    // 0x3d18d8: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3d18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3d18dc:
    // 0x3d18dc: 0xae45002c  sw          $a1, 0x2C($s2)
    ctx->pc = 0x3d18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
label_3d18e0:
    // 0x3d18e0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3d18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3d18e4:
    // 0x3d18e4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3d18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3d18e8:
    // 0x3d18e8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3d18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3d18ec:
    // 0x3d18ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d18ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d18f0:
    // 0x3d18f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d18f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d18f4:
    // 0x3d18f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d18f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d18f8:
    // 0x3d18f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d18f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d18fc:
    // 0x3d18fc: 0x3e00008  jr          $ra
label_3d1900:
    if (ctx->pc == 0x3D1900u) {
        ctx->pc = 0x3D1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18FCu;
        // 0x3d1900: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1904u;
        goto label_3d1904;
    }
    ctx->pc = 0x3D18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18FCu;
        // 0x3d1900: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D18FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1904u;
label_3d1904:
    // 0x3d1904: 0x0  nop
    ctx->pc = 0x3d1904u;
    // NOP
    ctx->pc = 0x3d1908u;
}
