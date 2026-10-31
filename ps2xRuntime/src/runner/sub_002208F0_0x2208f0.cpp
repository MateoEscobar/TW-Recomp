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

// Function: sub_002208F0
// Address: 0x2208f0 - 0x220ac8
void sub_002208F0_0x2208f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002208F0_0x2208f0");
#endif

    switch (ctx->pc) {
        case 0x220950u: goto label_220950;
        case 0x220964u: goto label_220964;
        case 0x220994u: goto label_220994;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209e8u: goto label_2209e8;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a28u: goto label_220a28;
        case 0x220a64u: goto label_220a64;
        case 0x220a80u: goto label_220a80;
        default: break;
    }

    ctx->pc = 0x2208f0u;

    // 0x2208f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2208f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2208f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2208f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2208f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2208f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2208fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220900: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x220900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x220904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x220904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220908: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x220908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x22090c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x22090cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220910: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x220910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x220914: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x220914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x220918: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x220918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x22091c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220920: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x220920u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x220924: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x220924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x220928: 0x92220199  lbu         $v0, 0x199($s1)
    ctx->pc = 0x220928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 409)));
    // 0x22092c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x22092Cu;
    {
        const bool branch_taken_0x22092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22092Cu;
        // 0x220930: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22092c) {
            ctx->pc = 0x220A90u;
            goto label_220a90;
        }
    }
    ctx->pc = 0x220934u;
    // 0x220934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x220938: 0x8e2503b4  lw          $a1, 0x3B4($s1)
    ctx->pc = 0x220938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x22093c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x22093cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x220940: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220944: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x220944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220948: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x220948u;
    SET_GPR_U32(ctx, 31, 0x220950u);
    ctx->pc = 0x22094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220948u;
    // 0x22094c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x220948u, 0x220950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220950u;
label_220950:
    // 0x220950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220954: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x220954u;
    {
        const bool branch_taken_0x220954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x220958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220954u;
        // 0x220958: 0x8e64aa84  lw          $a0, -0x557C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220954) {
            ctx->pc = 0x220A90u;
            goto label_220a90;
        }
    }
    ctx->pc = 0x22095Cu;
    // 0x22095c: 0xc044382  jal         func_110E08
    ctx->pc = 0x22095Cu;
    SET_GPR_U32(ctx, 31, 0x220964u);
    ctx->pc = 0x220960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22095Cu;
    // 0x220960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E08u, 0x22095Cu, 0x220964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220964u;
label_220964:
    // 0x220964: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x220964u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x220968: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x220968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22096c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x220970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220974: 0x0  nop
    ctx->pc = 0x220974u;
    // NOP
    // 0x220978: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x220978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x22097c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22097cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220980: 0x0  nop
    ctx->pc = 0x220980u;
    // NOP
    // 0x220984: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x220984u;
    {
        const bool branch_taken_0x220984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220984u;
        // 0x220988: 0x3c140066  lui         $s4, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220984) {
            ctx->pc = 0x2209D8u;
            goto label_2209d8;
        }
    }
    ctx->pc = 0x22098Cu;
    // 0x22098c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x22098Cu;
    SET_GPR_U32(ctx, 31, 0x220994u);
    ctx->pc = 0x220990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22098Cu;
    // 0x220990: 0x2684ff40  addiu       $a0, $s4, -0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x22098Cu, 0x220994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220994u;
label_220994:
    // 0x220994: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x220994u;
    {
        const bool branch_taken_0x220994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220994u;
        // 0x220998: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220994) {
            ctx->pc = 0x2209DCu;
            goto label_2209dc;
        }
    }
    ctx->pc = 0x22099Cu;
    // 0x22099c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209a0: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2209A0u;
    SET_GPR_U32(ctx, 31, 0x2209A8u);
    ctx->pc = 0x2209A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209A0u;
    // 0x2209a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2209A0u, 0x2209A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209A8u;
label_2209a8:
    // 0x2209a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2209ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2209acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2209b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2209b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2209b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2209bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209c0: 0xc087900  jal         func_21E400
    ctx->pc = 0x2209C0u;
    SET_GPR_U32(ctx, 31, 0x2209C8u);
    ctx->pc = 0x2209C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209C0u;
    // 0x2209c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x2209C0u, 0x2209C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209C8u;
label_2209c8:
    // 0x2209c8: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2209cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2209ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2209D0u;
    {
        const bool branch_taken_0x2209d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D0u;
        // 0x2209d4: 0xae83ff40  sw          $v1, -0xC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209d0) {
            ctx->pc = 0x220A94u;
            goto label_220a94;
        }
    }
    ctx->pc = 0x2209D8u;
label_2209d8:
    // 0x2209d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_2209dc:
    // 0x2209dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2209dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209e0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2209E0u;
    SET_GPR_U32(ctx, 31, 0x2209E8u);
    ctx->pc = 0x2209E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209E0u;
    // 0x2209e4: 0x2484ff48  addiu       $a0, $a0, -0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2209E0u, 0x2209E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209E8u;
label_2209e8:
    // 0x2209e8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2209E8u;
    {
        const bool branch_taken_0x2209e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E8u;
        // 0x2209ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209e8) {
            ctx->pc = 0x220A94u;
            goto label_220a94;
        }
    }
    ctx->pc = 0x2209F0u;
    // 0x2209f0: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x2209f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2209f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209f8: 0x8e2503b4  lw          $a1, 0x3B4($s1)
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x2209fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2209fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220a00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x220a04: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x220A04u;
    SET_GPR_U32(ctx, 31, 0x220A0Cu);
    ctx->pc = 0x220A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A04u;
    // 0x220a08: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x220A04u, 0x220A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A0Cu;
label_220a0c:
    // 0x220a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a10: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x220A10u;
    {
        const bool branch_taken_0x220a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x8e64aa84  lw          $a0, -0x557C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a10) {
            ctx->pc = 0x220A3Cu;
            goto label_220a3c;
        }
    }
    ctx->pc = 0x220A18u;
    // 0x220a18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x220a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a1c: 0x8e2503b4  lw          $a1, 0x3B4($s1)
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x220a20: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x220A20u;
    SET_GPR_U32(ctx, 31, 0x220A28u);
    ctx->pc = 0x220A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A20u;
    // 0x220a24: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x220A20u, 0x220A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A28u;
label_220a28:
    // 0x220a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a2c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x220A2Cu;
    {
        const bool branch_taken_0x220a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A2Cu;
        // 0x220a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a2c) {
            ctx->pc = 0x220A94u;
            goto label_220a94;
        }
    }
    ctx->pc = 0x220A34u;
    // 0x220a34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x220a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x220a38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_220a3c:
    // 0x220a3c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x220a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220a44: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x220a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220a48: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x220a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x220a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x220a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220a50: 0x0  nop
    ctx->pc = 0x220a50u;
    // NOP
    // 0x220a54: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x220A54u;
    {
        const bool branch_taken_0x220a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a54) {
            ctx->pc = 0x220A90u;
            goto label_220a90;
        }
    }
    ctx->pc = 0x220A5Cu;
    // 0x220a5c: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x220A5Cu;
    SET_GPR_U32(ctx, 31, 0x220A64u);
    ctx->pc = 0x220A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A5Cu;
    // 0x220a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x220A5Cu, 0x220A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A64u;
label_220a64:
    // 0x220a64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220a64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a78: 0xc087900  jal         func_21E400
    ctx->pc = 0x220A78u;
    SET_GPR_U32(ctx, 31, 0x220A80u);
    ctx->pc = 0x220A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A78u;
    // 0x220a7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x220A78u, 0x220A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x220a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x220a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x220a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220A88u;
    {
        const bool branch_taken_0x220a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A88u;
        // 0x220a8c: 0xae83ff48  sw          $v1, -0xB8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a88) {
            ctx->pc = 0x220A94u;
            goto label_220a94;
        }
    }
    ctx->pc = 0x220A90u;
label_220a90:
    // 0x220a90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220a94:
    // 0x220a94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x220a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220a98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x220a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220a9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x220a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220aa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x220aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220aa4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x220aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220aa8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x220aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220aac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x220aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ab4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x220ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x220ab8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x220ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220abc: 0x3e00008  jr          $ra
    ctx->pc = 0x220ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220AC4u;
    // 0x220ac4: 0x0  nop
    ctx->pc = 0x220ac4u;
    // NOP
    ctx->pc = 0x220ac8u;
}
