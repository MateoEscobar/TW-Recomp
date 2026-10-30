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

// Function: sub_0019F528
// Address: 0x19f528 - 0x19f850
void sub_0019F528_0x19f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F528_0x19f528");
#endif

    switch (ctx->pc) {
        case 0x19f558u: goto label_19f558;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f754u: goto label_19f754;
        case 0x19f814u: goto label_19f814;
        case 0x19f81cu: goto label_19f81c;
        default: break;
    }

    ctx->pc = 0x19f528u;

    // 0x19f528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19f52c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19f530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f534: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19f538: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19f53c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19f540: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x19f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x19f544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f548: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x19f548u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19f54c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x19f54cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x19f550: 0xc067d32  jal         func_19F4C8
    ctx->pc = 0x19F550u;
    SET_GPR_U32(ctx, 31, 0x19F558u);
    ctx->pc = 0x19F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F550u;
    // 0x19f554: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4C8u, 0x19F550u, 0x19F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F558u;
label_19f558:
    // 0x19f558: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x19f55c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x19f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x19f560: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x19f560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x19f564: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f568: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19f568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19f56c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19F56Cu;
    {
        const bool branch_taken_0x19f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F56Cu;
        // 0x19f570: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f56c) {
            ctx->pc = 0x19F610u;
            goto label_19f610;
        }
    }
    ctx->pc = 0x19F574u;
    // 0x19f574: 0x8e420468  lw          $v0, 0x468($s2)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
    // 0x19f578: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F578u;
    {
        const bool branch_taken_0x19f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f578) {
            ctx->pc = 0x19F57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F578u;
            // 0x19f57c: 0xc6400464  lwc1        $f0, 0x464($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F59Cu;
            goto label_19f59c;
        }
    }
    ctx->pc = 0x19F580u;
    // 0x19f580: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19f584: 0xc6410464  lwc1        $f1, 0x464($s2)
    ctx->pc = 0x19f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f588: 0xc454cfcc  lwc1        $f20, -0x3034($v0)
    ctx->pc = 0x19f588u;
    { uint32_t bits = FAST_READ32(0x50CFCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f58c: 0xc6400470  lwc1        $f0, 0x470($s2)
    ctx->pc = 0x19f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f590: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x19f590u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x19f594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19F594u;
    {
        const bool branch_taken_0x19f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F594u;
        // 0x19f598: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f594) {
            ctx->pc = 0x19F5B0u;
            goto label_19f5b0;
        }
    }
    ctx->pc = 0x19F59Cu;
label_19f59c:
    // 0x19f59c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19f5a0: 0xc6410470  lwc1        $f1, 0x470($s2)
    ctx->pc = 0x19f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f5a4: 0xc454cfd0  lwc1        $f20, -0x3030($v0)
    ctx->pc = 0x19f5a4u;
    { uint32_t bits = FAST_READ32(0x50CFD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f5a8: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x19f5a8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19f5ac: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x19f5acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_19f5b0:
    // 0x19f5b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19f5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x19f5b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19f5b8:
    // 0x19f5b8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x19f5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f5bc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x19F5BCu;
    {
        const bool branch_taken_0x19f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5BCu;
        // 0x19f5c0: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5bc) {
            ctx->pc = 0x19F6B4u;
            goto label_19f6b4;
        }
    }
    ctx->pc = 0x19F5C4u;
    // 0x19f5c4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19f5c8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x19f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x19f5cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x19F5CCu;
    SET_GPR_U32(ctx, 31, 0x19F5D4u);
    ctx->pc = 0x19F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5CCu;
    // 0x19f5d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x19F5CCu, 0x19F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5D4u;
label_19f5d4:
    // 0x19f5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5d8: 0x5200fff7  beql        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F5D8u;
    {
        const bool branch_taken_0x19f5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5d8) {
            ctx->pc = 0x19F5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F5D8u;
            // 0x19f5dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f5b8;
        }
    }
    ctx->pc = 0x19F5E0u;
    // 0x19f5e0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x19F5E0u;
    SET_GPR_U32(ctx, 31, 0x19F5E8u);
    ctx->pc = 0x19F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5E0u;
    // 0x19f5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x19F5E0u, 0x19F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5E8u;
label_19f5e8:
    // 0x19f5e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F600u;
            goto label_19f600;
        }
    }
    ctx->pc = 0x19F5F0u;
    // 0x19f5f0: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x19F5F0u;
    SET_GPR_U32(ctx, 31, 0x19F5F8u);
    ctx->pc = 0x19F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5F0u;
    // 0x19f5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x19F5F0u, 0x19F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5F8u;
label_19f5f8:
    // 0x19f5f8: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19F5F8u;
    {
        const bool branch_taken_0x19f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f8) {
            ctx->pc = 0x19F5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f5b8;
        }
    }
    ctx->pc = 0x19F600u;
label_19f600:
    // 0x19f600: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19f604: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19f604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19f608: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x19F608u;
    {
        const bool branch_taken_0x19f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F608u;
        // 0x19f60c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f608) {
            ctx->pc = 0x19F6B4u;
            goto label_19f6b4;
        }
    }
    ctx->pc = 0x19F610u;
label_19f610:
    // 0x19f610: 0x8e420468  lw          $v0, 0x468($s2)
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
    // 0x19f614: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x19F614u;
    {
        const bool branch_taken_0x19f614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F614u;
        // 0x19f618: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f614) {
            ctx->pc = 0x19F828u;
            goto label_19f828;
        }
    }
    ctx->pc = 0x19F61Cu;
    // 0x19f61c: 0xc6410464  lwc1        $f1, 0x464($s2)
    ctx->pc = 0x19f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f620: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x19f624: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x19f628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f62c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19f630: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19f630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19f634: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f634u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f638: 0x0  nop
    ctx->pc = 0x19f638u;
    // NOP
    // 0x19f63c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x19F63Cu;
    {
        const bool branch_taken_0x19f63c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f63c) {
            ctx->pc = 0x19F640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F63Cu;
            // 0x19f640: 0xc6400470  lwc1        $f0, 0x470($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6A4u;
            goto label_19f6a4;
        }
    }
    ctx->pc = 0x19F644u;
    // 0x19f644: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x19f648: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x19f648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x19f64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f650: 0x0  nop
    ctx->pc = 0x19f650u;
    // NOP
    // 0x19f654: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f654u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f658: 0x0  nop
    ctx->pc = 0x19f658u;
    // NOP
    // 0x19f65c: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x19F65Cu;
    {
        const bool branch_taken_0x19f65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f65c) {
            ctx->pc = 0x19F660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F65Cu;
            // 0x19f660: 0xc6400470  lwc1        $f0, 0x470($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6A4u;
            goto label_19f6a4;
        }
    }
    ctx->pc = 0x19F664u;
    // 0x19f664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f66c: 0x0  nop
    ctx->pc = 0x19f66cu;
    // NOP
    // 0x19f670: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f674: 0x0  nop
    ctx->pc = 0x19f674u;
    // NOP
    // 0x19f678: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x19F678u;
    {
        const bool branch_taken_0x19f678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f678) {
            ctx->pc = 0x19F67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F678u;
            // 0x19f67c: 0xc6400470  lwc1        $f0, 0x470($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6A4u;
            goto label_19f6a4;
        }
    }
    ctx->pc = 0x19F680u;
    // 0x19f680: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19f680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19f684: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19f684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19f688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f68c: 0x0  nop
    ctx->pc = 0x19f68cu;
    // NOP
    // 0x19f690: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f694: 0x0  nop
    ctx->pc = 0x19f694u;
    // NOP
    // 0x19f698: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F698u;
    {
        const bool branch_taken_0x19f698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F698u;
        // 0x19f69c: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f698) {
            ctx->pc = 0x19F6A8u;
            goto label_19f6a8;
        }
    }
    ctx->pc = 0x19F6A0u;
    // 0x19f6a0: 0xc6400470  lwc1        $f0, 0x470($s2)
    ctx->pc = 0x19f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f6a4:
    // 0x19f6a4: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x19f6a4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19f6a8:
    // 0x19f6a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19f6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19f6ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19f6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19f6b0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x19f6b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19f6b4:
    // 0x19f6b4: 0x8e42045c  lw          $v0, 0x45C($s2)
    ctx->pc = 0x19f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1116)));
    // 0x19f6b8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x19F6B8u;
    {
        const bool branch_taken_0x19f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B8u;
        // 0x19f6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6b8) {
            ctx->pc = 0x19F748u;
            goto label_19f748;
        }
    }
    ctx->pc = 0x19F6C0u;
    // 0x19f6c0: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F6C0u;
    SET_GPR_U32(ctx, 31, 0x19F6C8u);
    ctx->pc = 0x19F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6C0u;
    // 0x19f6c4: 0x26500480  addiu       $s0, $s2, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F6C0u, 0x19F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6C8u;
label_19f6c8:
    // 0x19f6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19f6d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19f6d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19f6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x19f6dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19f6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f6e4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x19f6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19f6e8: 0xc068818  jal         func_1A2060
    ctx->pc = 0x19F6E8u;
    SET_GPR_U32(ctx, 31, 0x19F6F0u);
    ctx->pc = 0x19F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6E8u;
    // 0x19f6ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x19F6E8u, 0x19F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6F0u;
label_19f6f0:
    // 0x19f6f0: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x19F6F0u;
    SET_GPR_U32(ctx, 31, 0x19F6F8u);
    ctx->pc = 0x19F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6F0u;
    // 0x19f6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x19F6F0u, 0x19F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6F8u;
label_19f6f8:
    // 0x19f6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f6fc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x19f700: 0xae430584  sw          $v1, 0x584($s2)
    ctx->pc = 0x19f700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1412), GPR_U32(ctx, 3));
    // 0x19f704: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x19f708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f70c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19f710: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F710u;
    {
        const bool branch_taken_0x19f710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F710u;
        // 0x19f714: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f710) {
            ctx->pc = 0x19F720u;
            goto label_19f720;
        }
    }
    ctx->pc = 0x19F718u;
    // 0x19f718: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19F718u;
    {
        const bool branch_taken_0x19f718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f718) {
            ctx->pc = 0x19F71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F718u;
            // 0x19f71c: 0xc6410464  lwc1        $f1, 0x464($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F758u;
            goto label_19f758;
        }
    }
    ctx->pc = 0x19F720u;
label_19f720:
    // 0x19f720: 0x3c013d89  lui         $at, 0x3D89
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15753 << 16));
    // 0x19f724: 0x3421374c  ori         $at, $at, 0x374C
    ctx->pc = 0x19f724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14156);
    // 0x19f728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f72c: 0x264204c0  addiu       $v0, $s2, 0x4C0
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
    // 0x19f730: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x19f730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x19f734: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x19f734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x19f738: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f73c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x19f73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x19f740: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F740u;
    {
        const bool branch_taken_0x19f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F740u;
        // 0x19f744: 0xe4410054  swc1        $f1, 0x54($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f740) {
            ctx->pc = 0x19F754u;
            goto label_19f754;
        }
    }
    ctx->pc = 0x19F748u;
label_19f748:
    // 0x19f748: 0x8e450460  lw          $a1, 0x460($s2)
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1120)));
    // 0x19f74c: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x19F74Cu;
    SET_GPR_U32(ctx, 31, 0x19F754u);
    ctx->pc = 0x19F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F74Cu;
    // 0x19f750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x19F74Cu, 0x19F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F754u;
label_19f754:
    // 0x19f754: 0xc6410464  lwc1        $f1, 0x464($s2)
    ctx->pc = 0x19f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f758:
    // 0x19f758: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x19f75c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x19f75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x19f760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f764: 0x0  nop
    ctx->pc = 0x19f764u;
    // NOP
    // 0x19f768: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f768u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f76c: 0x0  nop
    ctx->pc = 0x19f76cu;
    // NOP
    // 0x19f770: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x19F770u;
    {
        const bool branch_taken_0x19f770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F770u;
        // 0x19f774: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f770) {
            ctx->pc = 0x19F7D4u;
            goto label_19f7d4;
        }
    }
    ctx->pc = 0x19F778u;
    // 0x19f778: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x19f77c: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x19f77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x19f780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f784: 0x0  nop
    ctx->pc = 0x19f784u;
    // NOP
    // 0x19f788: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f788u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f78c: 0x0  nop
    ctx->pc = 0x19f78cu;
    // NOP
    // 0x19f790: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x19F790u;
    {
        const bool branch_taken_0x19f790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f790) {
            ctx->pc = 0x19F794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F790u;
            // 0x19f794: 0xc640046c  lwc1        $f0, 0x46C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7D8u;
            goto label_19f7d8;
        }
    }
    ctx->pc = 0x19F798u;
    // 0x19f798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f79c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19f79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f7a0: 0x0  nop
    ctx->pc = 0x19f7a0u;
    // NOP
    // 0x19f7a4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x19f7a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7a8: 0x0  nop
    ctx->pc = 0x19f7a8u;
    // NOP
    // 0x19f7ac: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x19F7ACu;
    {
        const bool branch_taken_0x19f7ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7ac) {
            ctx->pc = 0x19F7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F7ACu;
            // 0x19f7b0: 0xc640046c  lwc1        $f0, 0x46C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7D8u;
            goto label_19f7d8;
        }
    }
    ctx->pc = 0x19F7B4u;
    // 0x19f7b4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19f7b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19f7b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19f7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f7c0: 0x0  nop
    ctx->pc = 0x19f7c0u;
    // NOP
    // 0x19f7c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19f7c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7c8: 0x0  nop
    ctx->pc = 0x19f7c8u;
    // NOP
    // 0x19f7cc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x19F7CCu;
    {
        const bool branch_taken_0x19f7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7cc) {
            ctx->pc = 0x19F7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F7CCu;
            // 0x19f7d0: 0xe7b50010  swc1        $f21, 0x10($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7F8u;
            goto label_19f7f8;
        }
    }
    ctx->pc = 0x19F7D4u;
label_19f7d4:
    // 0x19f7d4: 0xc640046c  lwc1        $f0, 0x46C($s2)
    ctx->pc = 0x19f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f7d8:
    // 0x19f7d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f7dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f7e0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x19f7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x19f7e4: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x19f7e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19f7e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x19f7ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19f7f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0xe661000c  swc1        $f1, 0xC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F804u;
            goto label_19f804;
        }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19f7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19f7fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x19f800: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x19f800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_19f804:
    // 0x19f804: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f80c: 0xc079ce8  jal         func_1E73A0
    ctx->pc = 0x19F80Cu;
    SET_GPR_U32(ctx, 31, 0x19F814u);
    ctx->pc = 0x19F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F80Cu;
    // 0x19f810: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73A0u, 0x19F80Cu, 0x19F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F814u;
label_19f814:
    // 0x19f814: 0xc079d1a  jal         func_1E7468
    ctx->pc = 0x19F814u;
    SET_GPR_U32(ctx, 31, 0x19F81Cu);
    ctx->pc = 0x19F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F814u;
    // 0x19f818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7468u, 0x19F814u, 0x19F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F81Cu;
label_19f81c:
    // 0x19f81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f820: 0xae420580  sw          $v0, 0x580($s2)
    ctx->pc = 0x19f820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1408), GPR_U32(ctx, 2));
    // 0x19f824: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19f828:
    // 0x19f828: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19f828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f82c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19f82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f830: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19f830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f834: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x19f834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f83c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x19f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19f840: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x19f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19f844: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f848: 0x3e00008  jr          $ra
    ctx->pc = 0x19F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F848u;
        // 0x19f84c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F850u;
}
