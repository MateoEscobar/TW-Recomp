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

// Function: sub_0029B6D8
// Address: 0x29b6d8 - 0x29b848
void sub_0029B6D8_0x29b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B6D8_0x29b6d8");
#endif

    switch (ctx->pc) {
        case 0x29b768u: goto label_29b768;
        case 0x29b774u: goto label_29b774;
        case 0x29b788u: goto label_29b788;
        case 0x29b7a0u: goto label_29b7a0;
        case 0x29b7bcu: goto label_29b7bc;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b824u: goto label_29b824;
        default: break;
    }

    ctx->pc = 0x29b6d8u;

    // 0x29b6d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29b6dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x29b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x29b6e4: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x29b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x29b6e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x29b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x29b6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29b6f4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x29b6f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b6fc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x29b6fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29b700: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x29b700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29b704: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b708: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x29b708u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b70c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x29b70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b710: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x29b710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b714: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29b718: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x29b718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b71c: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x29b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29b720: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x29b720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b724: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x29b724u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x29b728: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x29b728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b72c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b730: 0x84e20092  lh          $v0, 0x92($a3)
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 146)));
    // 0x29b734: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x29b734u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b738: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29b73c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29b740: 0x91202a  slt         $a0, $a0, $s1
    ctx->pc = 0x29b740u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29b744: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29b744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b748: 0xa2050010  sb          $a1, 0x10($s0)
    ctx->pc = 0x29b748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b74c: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x29B74Cu;
    {
        const bool branch_taken_0x29b74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B74Cu;
        // 0x29b750: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b74c) {
            ctx->pc = 0x29B81Cu;
            goto label_29b81c;
        }
    }
    ctx->pc = 0x29B754u;
    // 0x29b754: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x29b758: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29b758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29b75c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29b75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b764: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29b764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29b768:
    // 0x29b768: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b76c: 0xc0a6d2e  jal         func_29B4B8
    ctx->pc = 0x29B76Cu;
    SET_GPR_U32(ctx, 31, 0x29B774u);
    ctx->pc = 0x29B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B76Cu;
    // 0x29b770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B4B8u, 0x29B76Cu, 0x29B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B774u;
label_29b774:
    // 0x29b774: 0x50520023  beql        $v0, $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x29B774u;
    {
        const bool branch_taken_0x29b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x29b774) {
            ctx->pc = 0x29B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B774u;
            // 0x29b778: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B804u;
            goto label_29b804;
        }
    }
    ctx->pc = 0x29B77Cu;
    // 0x29b77c: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29b77cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b780: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B780u;
    SET_GPR_U32(ctx, 31, 0x29B788u);
    ctx->pc = 0x29B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B780u;
    // 0x29b784: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B780u, 0x29B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B788u;
label_29b788:
    // 0x29b788: 0x82050010  lb          $a1, 0x10($s0)
    ctx->pc = 0x29b788u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b78c: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B78Cu;
    {
        const bool branch_taken_0x29b78c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B78Cu;
        // 0x29b790: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b78c) {
            ctx->pc = 0x29B7A8u;
            goto label_29b7a8;
        }
    }
    ctx->pc = 0x29B794u;
    // 0x29b794: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b798: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B798u;
    SET_GPR_U32(ctx, 31, 0x29B7A0u);
    ctx->pc = 0x29B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B798u;
    // 0x29b79c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B798u, 0x29B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7A0u;
label_29b7a0:
    // 0x29b7a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B7A0u;
    {
        const bool branch_taken_0x29b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7a0) {
            ctx->pc = 0x29B7ACu;
            goto label_29b7ac;
        }
    }
    ctx->pc = 0x29B7A8u;
label_29b7a8:
    // 0x29b7a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b7ac:
    // 0x29b7ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B7ACu;
    {
        const bool branch_taken_0x29b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7ACu;
        // 0x29b7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7ac) {
            ctx->pc = 0x29B7D4u;
            goto label_29b7d4;
        }
    }
    ctx->pc = 0x29B7B4u;
    // 0x29b7b4: 0xc09441c  jal         func_251070
    ctx->pc = 0x29B7B4u;
    SET_GPR_U32(ctx, 31, 0x29B7BCu);
    ctx->pc = 0x29B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7B4u;
    // 0x29b7b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29B7B4u, 0x29B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7BCu;
label_29b7bc:
    // 0x29b7bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29b7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29b7c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B7C0u;
    {
        const bool branch_taken_0x29b7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b7c0) {
            ctx->pc = 0x29B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B7C0u;
            // 0x29b7c4: 0xe6140008  swc1        $f20, 0x8($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B7D8u;
            goto label_29b7d8;
        }
    }
    ctx->pc = 0x29B7C8u;
    // 0x29b7c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b7cc: 0xc0a5022  jal         func_294088
    ctx->pc = 0x29B7CCu;
    SET_GPR_U32(ctx, 31, 0x29B7D4u);
    ctx->pc = 0x29B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7CCu;
    // 0x29b7d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294088u, 0x29B7CCu, 0x29B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7D4u;
label_29b7d4:
    // 0x29b7d4: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x29b7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_29b7d8:
    // 0x29b7d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29b7dc: 0xc0a68f0  jal         func_29A3C0
    ctx->pc = 0x29B7DCu;
    SET_GPR_U32(ctx, 31, 0x29B7E4u);
    ctx->pc = 0x29B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7DCu;
    // 0x29b7e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29B7DCu, 0x29B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7E4u;
label_29b7e4:
    // 0x29b7e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b7ec: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x29b7ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b7f0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x29b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b7f4: 0x7c640090  sq          $a0, 0x90($v1)
    ctx->pc = 0x29b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 4));
    // 0x29b7f8: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x29b7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x29b7fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29B7FCu;
    {
        const bool branch_taken_0x29b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7FCu;
        // 0x29b800: 0xe475009c  swc1        $f21, 0x9C($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7fc) {
            ctx->pc = 0x29B828u;
            goto label_29b828;
        }
    }
    ctx->pc = 0x29B804u;
label_29b804:
    // 0x29b804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29b808: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x29b808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x29b80c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x29b80cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x29b810: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x29b810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29b814: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x29B814u;
    {
        const bool branch_taken_0x29b814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B814u;
        // 0x29b818: 0xa2020010  sb          $v0, 0x10($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b814) {
            ctx->pc = 0x29B768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b768;
        }
    }
    ctx->pc = 0x29B81Cu;
label_29b81c:
    // 0x29b81c: 0xc0a6d1c  jal         func_29B470
    ctx->pc = 0x29B81Cu;
    SET_GPR_U32(ctx, 31, 0x29B824u);
    ctx->pc = 0x29B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B81Cu;
    // 0x29b820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B470u, 0x29B81Cu, 0x29B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B824u;
label_29b824:
    // 0x29b824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b828:
    // 0x29b828: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x29b828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b82c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x29b82cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29b830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b838: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x29b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b83c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x29b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b840: 0x3e00008  jr          $ra
    ctx->pc = 0x29B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B840u;
        // 0x29b844: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B848u;
}
