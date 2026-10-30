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

// Function: sub_001B8320
// Address: 0x1b8320 - 0x1b8428
void sub_001B8320_0x1b8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8320_0x1b8320");
#endif

    switch (ctx->pc) {
        case 0x1b8340u: goto label_1b8340;
        case 0x1b834cu: goto label_1b834c;
        case 0x1b836cu: goto label_1b836c;
        case 0x1b8380u: goto label_1b8380;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b8394u: goto label_1b8394;
        default: break;
    }

    ctx->pc = 0x1b8320u;

    // 0x1b8320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b8324: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b8328: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b8328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b832c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b832cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8330: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b8330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b8334: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x1b8334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1b8338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b833c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8340:
    // 0x1b8340: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1b8340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1b8344: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1B8344u;
    SET_GPR_U32(ctx, 31, 0x1B834Cu);
    ctx->pc = 0x1B8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8344u;
    // 0x1b8348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1B8344u, 0x1B834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B834Cu;
label_1b834c:
    // 0x1b834c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B834Cu;
    {
        const bool branch_taken_0x1b834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B834Cu;
        // 0x1b8350: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b834c) {
            ctx->pc = 0x1B8408u;
            goto label_1b8408;
        }
    }
    ctx->pc = 0x1B8354u;
    // 0x1b8354: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1b8354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b8358: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B8358u;
    {
        const bool branch_taken_0x1b8358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8358u;
        // 0x1b835c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8358) {
            ctx->pc = 0x1B8340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8340;
        }
    }
    ctx->pc = 0x1B8360u;
    // 0x1b8360: 0x8e25046c  lw          $a1, 0x46C($s1)
    ctx->pc = 0x1b8360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1b8364: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1B8364u;
    SET_GPR_U32(ctx, 31, 0x1B836Cu);
    ctx->pc = 0x1B8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8364u;
    // 0x1b8368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1B8364u, 0x1B836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B836Cu;
label_1b836c:
    // 0x1b836c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B836Cu;
    {
        const bool branch_taken_0x1b836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B836Cu;
        // 0x1b8370: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b836c) {
            ctx->pc = 0x1B8408u;
            goto label_1b8408;
        }
    }
    ctx->pc = 0x1B8374u;
    // 0x1b8374: 0x8e25046c  lw          $a1, 0x46C($s1)
    ctx->pc = 0x1b8374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1b8378: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1B8378u;
    SET_GPR_U32(ctx, 31, 0x1B8380u);
    ctx->pc = 0x1B837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8378u;
    // 0x1b837c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1B8378u, 0x1B8380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8380u;
label_1b8380:
    // 0x1b8380: 0xc060b58  jal         func_182D60
    ctx->pc = 0x1B8380u;
    SET_GPR_U32(ctx, 31, 0x1B8388u);
    ctx->pc = 0x1B8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8380u;
    // 0x1b8384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1B8380u, 0x1B8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8388u;
label_1b8388:
    // 0x1b8388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b838c: 0xc06078e  jal         func_181E38
    ctx->pc = 0x1B838Cu;
    SET_GPR_U32(ctx, 31, 0x1B8394u);
    ctx->pc = 0x1B8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B838Cu;
    // 0x1b8390: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1B838Cu, 0x1B8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8394u;
label_1b8394:
    // 0x1b8394: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1b8394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b8398: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1b8398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b839c: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1b839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b83a0: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1b83a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b83a4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1b83a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83a8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1b83a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83ac: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1b83acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83b0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1b83b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b83b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b83b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b83b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b83bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b83c0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1b83c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b83c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b83c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b83c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b83c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b83cc: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x1b83ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b83d0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1b83d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1b83d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b83d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b83d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b83d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b83dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b83dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b83e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b83e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b83e4: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x1b83e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b83e8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b83e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b83ec: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1b83ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b83f0: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1b83f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b83f4: 0xb22304d3  sdl         $v1, 0x4D3($s1)
    ctx->pc = 0x1b83f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83f8: 0xb62304cc  sdr         $v1, 0x4CC($s1)
    ctx->pc = 0x1b83f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b83fc: 0xe6230494  swc1        $f3, 0x494($s1)
    ctx->pc = 0x1b83fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1172), bits); }
    // 0x1b8400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8400u;
    {
        const bool branch_taken_0x1b8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8400u;
        // 0x1b8404: 0xe6230490  swc1        $f3, 0x490($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8400) {
            ctx->pc = 0x1B840Cu;
            goto label_1b840c;
        }
    }
    ctx->pc = 0x1B8408u;
label_1b8408:
    // 0x1b8408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b840c:
    // 0x1b840c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8410: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b8410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8414: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b8414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b841c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B841Cu;
        // 0x1b8420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8424u;
    // 0x1b8424: 0x0  nop
    ctx->pc = 0x1b8424u;
    // NOP
    ctx->pc = 0x1b8428u;
}
