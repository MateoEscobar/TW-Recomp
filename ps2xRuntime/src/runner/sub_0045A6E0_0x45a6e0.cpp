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

// Function: sub_0045A6E0
// Address: 0x45a6e0 - 0x45b3f0
void sub_0045A6E0_0x45a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A6E0_0x45a6e0");
#endif

    switch (ctx->pc) {
        case 0x45a74cu: goto label_45a74c;
        case 0x45a778u: goto label_45a778;
        case 0x45a7c8u: goto label_45a7c8;
        case 0x45a7f0u: goto label_45a7f0;
        case 0x45a868u: goto label_45a868;
        case 0x45a918u: goto label_45a918;
        case 0x45a934u: goto label_45a934;
        case 0x45a978u: goto label_45a978;
        case 0x45a9a0u: goto label_45a9a0;
        case 0x45a9f8u: goto label_45a9f8;
        case 0x45aa20u: goto label_45aa20;
        case 0x45aa7cu: goto label_45aa7c;
        case 0x45aaa0u: goto label_45aaa0;
        case 0x45aad8u: goto label_45aad8;
        case 0x45ac34u: goto label_45ac34;
        case 0x45ac6cu: goto label_45ac6c;
        case 0x45ac90u: goto label_45ac90;
        case 0x45ad38u: goto label_45ad38;
        case 0x45ad98u: goto label_45ad98;
        case 0x45adc0u: goto label_45adc0;
        case 0x45ae4cu: goto label_45ae4c;
        case 0x45ae70u: goto label_45ae70;
        case 0x45aefcu: goto label_45aefc;
        case 0x45af20u: goto label_45af20;
        case 0x45af68u: goto label_45af68;
        case 0x45b0d4u: goto label_45b0d4;
        case 0x45b11cu: goto label_45b11c;
        case 0x45b140u: goto label_45b140;
        case 0x45b1e0u: goto label_45b1e0;
        case 0x45b1f0u: goto label_45b1f0;
        case 0x45b2c4u: goto label_45b2c4;
        case 0x45b330u: goto label_45b330;
        case 0x45b340u: goto label_45b340;
        default: break;
    }

    ctx->pc = 0x45a6e0u;

    // 0x45a6e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x45a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x45a6e4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x45a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x45a6e8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x45a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x45a6ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x45a6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a6f0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x45a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x45a6f4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x45a6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a6f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x45a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x45a6fc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x45a6fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a700: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x45a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x45a704: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x45a704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a708: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x45a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x45a70c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x45a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x45a710: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45a714: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x45a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x45a718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x45a71c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x45a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45a720: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x45a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x45a724: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x45a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x45a728: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x45a728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x45a72c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x45a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x45a730: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x45a730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x45a734: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x45a734u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45a738: 0x8e12001c  lw          $s2, 0x1C($s0)
    ctx->pc = 0x45a738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x45a73c: 0x146202ce  bne         $v1, $v0, . + 4 + (0x2CE << 2)
    ctx->pc = 0x45A73Cu;
    {
        const bool branch_taken_0x45a73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x45A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A73Cu;
        // 0x45a740: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a73c) {
            ctx->pc = 0x45B278u;
            goto label_45b278;
        }
    }
    ctx->pc = 0x45A744u;
    // 0x45a744: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45A744u;
    SET_GPR_U32(ctx, 31, 0x45A74Cu);
    ctx->pc = 0x45A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45A744u;
    // 0x45a748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45A744u, 0x45A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A74Cu;
label_45a74c:
    // 0x45a74c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a750: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45a754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45a754u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45a758: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45a758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45a75c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45A75Cu;
    {
        const bool branch_taken_0x45a75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A75Cu;
        // 0x45a760: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a75c) {
            ctx->pc = 0x45A798u;
            goto label_45a798;
        }
    }
    ctx->pc = 0x45A764u;
    // 0x45a764: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45a768: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45a76c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a76cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45a770: 0xf  sync
    ctx->pc = 0x45a770u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a774: 0x40f  sync.p
    ctx->pc = 0x45a774u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a778:
    // 0x45a778: 0x0  nop
    ctx->pc = 0x45a778u;
    // NOP
    // 0x45a77c: 0x0  nop
    ctx->pc = 0x45a77cu;
    // NOP
    // 0x45a780: 0x0  nop
    ctx->pc = 0x45a780u;
    // NOP
    // 0x45a784: 0x0  nop
    ctx->pc = 0x45a784u;
    // NOP
    // 0x45a788: 0x0  nop
    ctx->pc = 0x45a788u;
    // NOP
    // 0x45a78c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A78Cu;
    {
        const bool branch_taken_0x45a78c = (false);
        if (branch_taken_0x45a78c) {
            ctx->pc = 0x45A778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a778;
        }
    }
    ctx->pc = 0x45A794u;
    // 0x45a794: 0x0  nop
    ctx->pc = 0x45a794u;
    // NOP
label_45a798:
    // 0x45a798: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45a798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45a79c: 0x2a2600b8  slti        $a2, $s1, 0xB8
    ctx->pc = 0x45a79cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x45a7a0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45a7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45a7a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45a7a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a7ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45A7ACu;
    {
        const bool branch_taken_0x45a7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A7ACu;
        // 0x45a7b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a7ac) {
            ctx->pc = 0x45A80Cu;
            goto label_45a80c;
        }
    }
    ctx->pc = 0x45A7B4u;
    // 0x45a7b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45a7b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45a7bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a7bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45a7c0: 0xf  sync
    ctx->pc = 0x45a7c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a7c4: 0x40f  sync.p
    ctx->pc = 0x45a7c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a7c8:
    // 0x45a7c8: 0x0  nop
    ctx->pc = 0x45a7c8u;
    // NOP
    // 0x45a7cc: 0x0  nop
    ctx->pc = 0x45a7ccu;
    // NOP
    // 0x45a7d0: 0x0  nop
    ctx->pc = 0x45a7d0u;
    // NOP
    // 0x45a7d4: 0x0  nop
    ctx->pc = 0x45a7d4u;
    // NOP
    // 0x45a7d8: 0x0  nop
    ctx->pc = 0x45a7d8u;
    // NOP
    // 0x45a7dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A7DCu;
    {
        const bool branch_taken_0x45a7dc = (false);
        if (branch_taken_0x45a7dc) {
            ctx->pc = 0x45A7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a7c8;
        }
    }
    ctx->pc = 0x45A7E4u;
    // 0x45a7e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45a7e8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45a7ec: 0x0  nop
    ctx->pc = 0x45a7ecu;
    // NOP
label_45a7f0:
    // 0x45a7f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45a7f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a7f8: 0x0  nop
    ctx->pc = 0x45a7f8u;
    // NOP
    // 0x45a7fc: 0x0  nop
    ctx->pc = 0x45a7fcu;
    // NOP
    // 0x45a800: 0x0  nop
    ctx->pc = 0x45a800u;
    // NOP
    // 0x45a804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A804u;
    {
        const bool branch_taken_0x45a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a804) {
            ctx->pc = 0x45A7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a7f0;
        }
    }
    ctx->pc = 0x45A80Cu;
label_45a80c:
    // 0x45a80c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45a810: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x45a810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x45a814: 0x34843f50  ori         $a0, $a0, 0x3F50
    ctx->pc = 0x45a814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16208);
    // 0x45a818: 0x34a53f60  ori         $a1, $a1, 0x3F60
    ctx->pc = 0x45a818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16224);
    // 0x45a81c: 0x6aa70007  ldl         $a3, 0x7($s5)
    ctx->pc = 0x45a81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x45a820: 0x6ea70000  ldr         $a3, 0x0($s5)
    ctx->pc = 0x45a820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x45a824: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x45a824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x45a828: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x45a828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a82c: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x45a82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a830: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x45a830u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 8));
    // 0x45a834: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x45a834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x45a838: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x45a838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x45a83c: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x45a83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45a840: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x45a840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a844: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x45a844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a848: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x45a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x45a84c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x45a84cu;
    runtime->Store32(rdram, ctx, 0x70003F68u, GPR_U32(ctx, 7));
    // 0x45a850: 0x34423f90  ori         $v0, $v0, 0x3F90
    ctx->pc = 0x45a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16272);
    // 0x45a854: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x45a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45a858: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x45a858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x45a85c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x45a85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F90u, bits); }
    // 0x45a860: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x45a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45a864: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x45a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F94u, bits); }
label_45a868:
    // 0x45a868: 0x42000039  di
    ctx->pc = 0x45a868u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45a86c: 0x40f  sync.p
    ctx->pc = 0x45a86cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a870: 0x40076000  mfc0        $a3, Status
    ctx->pc = 0x45a870u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_status);
    // 0x45a874: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x45a874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x45a878: 0x0  nop
    ctx->pc = 0x45a878u;
    // NOP
    // 0x45a87c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A87Cu;
    {
        const bool branch_taken_0x45a87c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a87c) {
            ctx->pc = 0x45A868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a868;
        }
    }
    ctx->pc = 0x45A884u;
    // 0x45a884: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x45a884u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x45a888: 0x48c8a800  ctc2.ni     $t0, $vi21
    ctx->pc = 0x45a888u;
    { uint32_t tmp = GPR_U32(ctx, 8); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a88c: 0x4a0002ff  vnop
    ctx->pc = 0x45a88cu;
    // NOP operation, no action needed for VU0
    // 0x45a890: 0x4a0002ff  vnop
    ctx->pc = 0x45a890u;
    // NOP operation, no action needed for VU0
    // 0x45a894: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x45a894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45a898: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x45a898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x45a89c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x45a89cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a8a0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x45a8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a8a4: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x45a8a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a8a8: 0x4be00569  vmadd.xyzw  $vf21, $vf0, $vf0
    ctx->pc = 0x45a8a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45a8ac: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x45a8acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x45a8b0: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x45a8b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a8b4: 0x42000038  ei
    ctx->pc = 0x45a8b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a8b8: 0x14c0010d  bnez        $a2, . + 4 + (0x10D << 2)
    ctx->pc = 0x45A8B8u;
    {
        const bool branch_taken_0x45a8b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A8B8u;
        // 0x45a8bc: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a8b8) {
            ctx->pc = 0x45ACF0u;
            goto label_45acf0;
        }
    }
    ctx->pc = 0x45A8C0u;
    // 0x45a8c0: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x45a8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8c4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x45a8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x45a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8cc: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x45a8ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8d0: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x45a8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8d4: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x45a8d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8d8: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x45a8d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8dc: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x45a8dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8e0: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x45a8e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8e4: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x45a8e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x45a8e8: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x45a8e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x45a8ec: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x45a8ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x45a8f0: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x45a8f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45a8f4: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x45a8f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x45a8f8: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x45a8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45a8fc: 0x358ce010  ori         $t4, $t4, 0xE010
    ctx->pc = 0x45a8fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57360);
    // 0x45a900: 0x3610d480  ori         $s0, $s0, 0xD480
    ctx->pc = 0x45a900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54400);
    // 0x45a904: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x45a904u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x45a908: 0x35ced420  ori         $t6, $t6, 0xD420
    ctx->pc = 0x45a908u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)54304);
    // 0x45a90c: 0x37ded080  ori         $fp, $fp, 0xD080
    ctx->pc = 0x45a90cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53376);
    // 0x45a910: 0x36f7d020  ori         $s7, $s7, 0xD020
    ctx->pc = 0x45a910u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53280);
    // 0x45a914: 0x36d6d010  ori         $s6, $s6, 0xD010
    ctx->pc = 0x45a914u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)53264);
label_45a918:
    // 0x45a918: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x45a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x45a91c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45A920u;
    {
        const bool branch_taken_0x45a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a920) {
            ctx->pc = 0x45A950u;
            goto label_45a950;
        }
    }
    ctx->pc = 0x45A928u;
    // 0x45a928: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x45a928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x45a92c: 0xf  sync
    ctx->pc = 0x45a92cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a930: 0x40f  sync.p
    ctx->pc = 0x45a930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a934:
    // 0x45a934: 0x0  nop
    ctx->pc = 0x45a934u;
    // NOP
    // 0x45a938: 0x0  nop
    ctx->pc = 0x45a938u;
    // NOP
    // 0x45a93c: 0x0  nop
    ctx->pc = 0x45a93cu;
    // NOP
    // 0x45a940: 0x0  nop
    ctx->pc = 0x45a940u;
    // NOP
    // 0x45a944: 0x0  nop
    ctx->pc = 0x45a944u;
    // NOP
    // 0x45a948: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A948u;
    {
        const bool branch_taken_0x45a948 = (false);
        if (branch_taken_0x45a948) {
            ctx->pc = 0x45A934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a934;
        }
    }
    ctx->pc = 0x45A950u;
label_45a950:
    // 0x45a950: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x45a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45a954: 0x2635ff48  addiu       $s5, $s1, -0xB8
    ctx->pc = 0x45a954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967112));
    // 0x45a958: 0x26710b80  addiu       $s1, $s3, 0xB80
    ctx->pc = 0x45a958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2944));
    // 0x45a95c: 0x26992e00  addiu       $t9, $s4, 0x2E00
    ctx->pc = 0x45a95cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 11776));
    // 0x45a960: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a964: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45A964u;
    {
        const bool branch_taken_0x45a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A964u;
        // 0x45a968: 0x265805c0  addiu       $t8, $s2, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a964) {
            ctx->pc = 0x45A9BCu;
            goto label_45a9bc;
        }
    }
    ctx->pc = 0x45A96Cu;
    // 0x45a96c: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x45a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45a970: 0xf  sync
    ctx->pc = 0x45a970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a974: 0x40f  sync.p
    ctx->pc = 0x45a974u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a978:
    // 0x45a978: 0x0  nop
    ctx->pc = 0x45a978u;
    // NOP
    // 0x45a97c: 0x0  nop
    ctx->pc = 0x45a97cu;
    // NOP
    // 0x45a980: 0x0  nop
    ctx->pc = 0x45a980u;
    // NOP
    // 0x45a984: 0x0  nop
    ctx->pc = 0x45a984u;
    // NOP
    // 0x45a988: 0x0  nop
    ctx->pc = 0x45a988u;
    // NOP
    // 0x45a98c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A98Cu;
    {
        const bool branch_taken_0x45a98c = (false);
        if (branch_taken_0x45a98c) {
            ctx->pc = 0x45A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a978;
        }
    }
    ctx->pc = 0x45A994u;
    // 0x45a994: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45a994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45a998: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45a998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45a99c: 0x0  nop
    ctx->pc = 0x45a99cu;
    // NOP
label_45a9a0:
    // 0x45a9a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45a9a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a9a8: 0x0  nop
    ctx->pc = 0x45a9a8u;
    // NOP
    // 0x45a9ac: 0x0  nop
    ctx->pc = 0x45a9acu;
    // NOP
    // 0x45a9b0: 0x0  nop
    ctx->pc = 0x45a9b0u;
    // NOP
    // 0x45a9b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A9B4u;
    {
        const bool branch_taken_0x45a9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a9b4) {
            ctx->pc = 0x45A9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a9a0;
        }
    }
    ctx->pc = 0x45A9BCu;
label_45a9bc:
    // 0x45a9bc: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x45a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x45a9c0: 0x2409005c  addiu       $t1, $zero, 0x5C
    ctx->pc = 0x45a9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x45a9c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x45a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x45a9c8: 0xadf20000  sw          $s2, 0x0($t7)
    ctx->pc = 0x45a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
    // 0x45a9cc: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x45a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x45a9d0: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x45a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45a9d4: 0xf  sync
    ctx->pc = 0x45a9d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a9d8: 0x40f  sync.p
    ctx->pc = 0x45a9d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a9dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x45a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45a9e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a9e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45A9E4u;
    {
        const bool branch_taken_0x45a9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a9e4) {
            ctx->pc = 0x45AA3Cu;
            goto label_45aa3c;
        }
    }
    ctx->pc = 0x45A9ECu;
    // 0x45a9ec: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x45a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45a9f0: 0xf  sync
    ctx->pc = 0x45a9f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a9f4: 0x40f  sync.p
    ctx->pc = 0x45a9f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a9f8:
    // 0x45a9f8: 0x0  nop
    ctx->pc = 0x45a9f8u;
    // NOP
    // 0x45a9fc: 0x0  nop
    ctx->pc = 0x45a9fcu;
    // NOP
    // 0x45aa00: 0x0  nop
    ctx->pc = 0x45aa00u;
    // NOP
    // 0x45aa04: 0x0  nop
    ctx->pc = 0x45aa04u;
    // NOP
    // 0x45aa08: 0x0  nop
    ctx->pc = 0x45aa08u;
    // NOP
    // 0x45aa0c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AA0Cu;
    {
        const bool branch_taken_0x45aa0c = (false);
        if (branch_taken_0x45aa0c) {
            ctx->pc = 0x45A9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a9f8;
        }
    }
    ctx->pc = 0x45AA14u;
    // 0x45aa14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45aa18: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45aa18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45aa1c: 0x0  nop
    ctx->pc = 0x45aa1cu;
    // NOP
label_45aa20:
    // 0x45aa20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45aa24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45aa28: 0x0  nop
    ctx->pc = 0x45aa28u;
    // NOP
    // 0x45aa2c: 0x0  nop
    ctx->pc = 0x45aa2cu;
    // NOP
    // 0x45aa30: 0x0  nop
    ctx->pc = 0x45aa30u;
    // NOP
    // 0x45aa34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AA34u;
    {
        const bool branch_taken_0x45aa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45aa34) {
            ctx->pc = 0x45AA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aa20;
        }
    }
    ctx->pc = 0x45AA3Cu;
label_45aa3c:
    // 0x45aa3c: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x45aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x45aa40: 0x240205c0  addiu       $v0, $zero, 0x5C0
    ctx->pc = 0x45aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x45aa44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x45aa48: 0x240300b8  addiu       $v1, $zero, 0xB8
    ctx->pc = 0x45aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x45aa4c: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x45aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x45aa50: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x45aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x45aa54: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x45aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45aa58: 0xf  sync
    ctx->pc = 0x45aa58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aa5c: 0x40f  sync.p
    ctx->pc = 0x45aa5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aa60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x45aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45aa64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45aa68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45AA68u;
    {
        const bool branch_taken_0x45aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AA68u;
        // 0x45aa6c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45aa68) {
            ctx->pc = 0x45AAC0u;
            goto label_45aac0;
        }
    }
    ctx->pc = 0x45AA70u;
    // 0x45aa70: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x45aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45aa74: 0xf  sync
    ctx->pc = 0x45aa74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aa78: 0x40f  sync.p
    ctx->pc = 0x45aa78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45aa7c:
    // 0x45aa7c: 0x0  nop
    ctx->pc = 0x45aa7cu;
    // NOP
    // 0x45aa80: 0x0  nop
    ctx->pc = 0x45aa80u;
    // NOP
    // 0x45aa84: 0x0  nop
    ctx->pc = 0x45aa84u;
    // NOP
    // 0x45aa88: 0x0  nop
    ctx->pc = 0x45aa88u;
    // NOP
    // 0x45aa8c: 0x0  nop
    ctx->pc = 0x45aa8cu;
    // NOP
    // 0x45aa90: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AA90u;
    {
        const bool branch_taken_0x45aa90 = (false);
        if (branch_taken_0x45aa90) {
            ctx->pc = 0x45AA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aa7c;
        }
    }
    ctx->pc = 0x45AA98u;
    // 0x45aa98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45aa9c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45aa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_45aaa0:
    // 0x45aaa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45aaa4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45aaa8: 0x0  nop
    ctx->pc = 0x45aaa8u;
    // NOP
    // 0x45aaac: 0x0  nop
    ctx->pc = 0x45aaacu;
    // NOP
    // 0x45aab0: 0x0  nop
    ctx->pc = 0x45aab0u;
    // NOP
    // 0x45aab4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AAB4u;
    {
        const bool branch_taken_0x45aab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45aab4) {
            ctx->pc = 0x45AAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aaa0;
        }
    }
    ctx->pc = 0x45AABCu;
    // 0x45aabc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_45aac0:
    // 0x45aac0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45aac4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x45aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x45aac8: 0x348405c0  ori         $a0, $a0, 0x5C0
    ctx->pc = 0x45aac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1472);
    // 0x45aacc: 0x34631140  ori         $v1, $v1, 0x1140
    ctx->pc = 0x45aaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4416);
    // 0x45aad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45aad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45aad4: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x45aad4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_45aad8:
    // 0x45aad8: 0x42000039  di
    ctx->pc = 0x45aad8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45aadc: 0x40f  sync.p
    ctx->pc = 0x45aadcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aae0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45aae4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x45aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x45aae8: 0x0  nop
    ctx->pc = 0x45aae8u;
    // NOP
    // 0x45aaec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AAECu;
    {
        const bool branch_taken_0x45aaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45aaec) {
            ctx->pc = 0x45AAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aad8;
        }
    }
    ctx->pc = 0x45AAF4u;
    // 0x45aaf4: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x45aaf4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x45aaf8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x45aaf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45aafc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x45aafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45ab00: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x45ab00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45ab04: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x45ab04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45ab08: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x45ab08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45ab0c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x45ab0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45ab10: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x45ab10u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45ab14: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x45ab14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45ab18: 0xd8940020  lqc2        $vf20, 0x20($a0)
    ctx->pc = 0x45ab18u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45ab1c: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x45ab1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x45ab20: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x45ab20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x45ab24: 0xd89b0030  lqc2        $vf27, 0x30($a0)
    ctx->pc = 0x45ab24u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45ab28: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x45ab28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x45ab2c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x45ab2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45ab30: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x45ab30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45ab34: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x45ab34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x45ab38: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x45ab38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45ab3c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x45ab3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ab40: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x45ab40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45ab44: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x45ab44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45ab48: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x45ab48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45ab4c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x45ab4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ab50: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x45ab50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45ab54: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x45ab54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45ab58: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x45ab58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45ab5c: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x45ab5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45ab60: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x45ab60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45ab64: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x45ab64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45ab68: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x45ab68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45ab6c: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x45ab6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45ab70: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x45ab70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45ab74: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x45ab74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45ab78: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x45ab78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45ab7c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x45ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45ab80: 0xf8680010  sqc2        $vf8, 0x10($v1)
    ctx->pc = 0x45ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45ab84: 0xf8690020  sqc2        $vf9, 0x20($v1)
    ctx->pc = 0x45ab84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45ab88: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45ab8c: 0xf86e0040  sqc2        $vf14, 0x40($v1)
    ctx->pc = 0x45ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x45ab90: 0xf86f0050  sqc2        $vf15, 0x50($v1)
    ctx->pc = 0x45ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x45ab94: 0xf8700060  sqc2        $vf16, 0x60($v1)
    ctx->pc = 0x45ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x45ab98: 0xf8710070  sqc2        $vf17, 0x70($v1)
    ctx->pc = 0x45ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x45ab9c: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x45ab9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45aba0: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x45aba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45aba4: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x45aba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45aba8: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x45aba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45abac: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x45abacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45abb0: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x45abb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45abb4: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x45abb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45abb8: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x45abb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45abbc: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x45abbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45abc0: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x45abc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45abc4: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x45abc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45abc8: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x45abc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45abcc: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x45abccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45abd0: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x45abd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45abd4: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x45abd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45abd8: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x45abd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45abdc: 0xf8670080  sqc2        $vf7, 0x80($v1)
    ctx->pc = 0x45abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45abe0: 0xf8680090  sqc2        $vf8, 0x90($v1)
    ctx->pc = 0x45abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45abe4: 0xf86900a0  sqc2        $vf9, 0xA0($v1)
    ctx->pc = 0x45abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45abe8: 0xf86a00b0  sqc2        $vf10, 0xB0($v1)
    ctx->pc = 0x45abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45abec: 0xf86e00c0  sqc2        $vf14, 0xC0($v1)
    ctx->pc = 0x45abecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x45abf0: 0xf86f00d0  sqc2        $vf15, 0xD0($v1)
    ctx->pc = 0x45abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x45abf4: 0xf87000e0  sqc2        $vf16, 0xE0($v1)
    ctx->pc = 0x45abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x45abf8: 0xf87100f0  sqc2        $vf17, 0xF0($v1)
    ctx->pc = 0x45abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x45abfc: 0x42000038  ei
    ctx->pc = 0x45abfcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45ac00: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x45ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x45ac04: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x45ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x45ac08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x45ac08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x45ac0c: 0x28e200b8  slti        $v0, $a3, 0xB8
    ctx->pc = 0x45ac0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x45ac10: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x45AC10u;
    {
        const bool branch_taken_0x45ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AC10u;
        // 0x45ac14: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ac10) {
            ctx->pc = 0x45AAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aad8;
        }
    }
    ctx->pc = 0x45AC18u;
    // 0x45ac18: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x45ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x45ac1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ac20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45AC20u;
    {
        const bool branch_taken_0x45ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ac20) {
            ctx->pc = 0x45AC50u;
            goto label_45ac50;
        }
    }
    ctx->pc = 0x45AC28u;
    // 0x45ac28: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x45ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x45ac2c: 0xf  sync
    ctx->pc = 0x45ac2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ac30: 0x40f  sync.p
    ctx->pc = 0x45ac30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ac34:
    // 0x45ac34: 0x0  nop
    ctx->pc = 0x45ac34u;
    // NOP
    // 0x45ac38: 0x0  nop
    ctx->pc = 0x45ac38u;
    // NOP
    // 0x45ac3c: 0x0  nop
    ctx->pc = 0x45ac3cu;
    // NOP
    // 0x45ac40: 0x0  nop
    ctx->pc = 0x45ac40u;
    // NOP
    // 0x45ac44: 0x0  nop
    ctx->pc = 0x45ac44u;
    // NOP
    // 0x45ac48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AC48u;
    {
        const bool branch_taken_0x45ac48 = (false);
        if (branch_taken_0x45ac48) {
            ctx->pc = 0x45AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ac34;
        }
    }
    ctx->pc = 0x45AC50u;
label_45ac50:
    // 0x45ac50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x45ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45ac54: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ac54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ac58: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45AC58u;
    {
        const bool branch_taken_0x45ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ac58) {
            ctx->pc = 0x45ACACu;
            goto label_45acac;
        }
    }
    ctx->pc = 0x45AC60u;
    // 0x45ac60: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x45ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45ac64: 0xf  sync
    ctx->pc = 0x45ac64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ac68: 0x40f  sync.p
    ctx->pc = 0x45ac68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ac6c:
    // 0x45ac6c: 0x0  nop
    ctx->pc = 0x45ac6cu;
    // NOP
    // 0x45ac70: 0x0  nop
    ctx->pc = 0x45ac70u;
    // NOP
    // 0x45ac74: 0x0  nop
    ctx->pc = 0x45ac74u;
    // NOP
    // 0x45ac78: 0x0  nop
    ctx->pc = 0x45ac78u;
    // NOP
    // 0x45ac7c: 0x0  nop
    ctx->pc = 0x45ac7cu;
    // NOP
    // 0x45ac80: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AC80u;
    {
        const bool branch_taken_0x45ac80 = (false);
        if (branch_taken_0x45ac80) {
            ctx->pc = 0x45AC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ac6c;
        }
    }
    ctx->pc = 0x45AC88u;
    // 0x45ac88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45ac8c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45ac8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_45ac90:
    // 0x45ac90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45ac94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ac98: 0x0  nop
    ctx->pc = 0x45ac98u;
    // NOP
    // 0x45ac9c: 0x0  nop
    ctx->pc = 0x45ac9cu;
    // NOP
    // 0x45aca0: 0x0  nop
    ctx->pc = 0x45aca0u;
    // NOP
    // 0x45aca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45ACA4u;
    {
        const bool branch_taken_0x45aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45aca4) {
            ctx->pc = 0x45AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ac90;
        }
    }
    ctx->pc = 0x45ACACu;
label_45acac:
    // 0x45acac: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x45acacu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x45acb0: 0x24041140  addiu       $a0, $zero, 0x1140
    ctx->pc = 0x45acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x45acb4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x45acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x45acb8: 0x240502e0  addiu       $a1, $zero, 0x2E0
    ctx->pc = 0x45acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x45acbc: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x45acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x45acc0: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x45acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x45acc4: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x45acc8: 0xf  sync
    ctx->pc = 0x45acc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45accc: 0x40f  sync.p
    ctx->pc = 0x45acccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45acd0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x45acd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acd4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x45acd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acd8: 0x320a02d  daddu       $s4, $t9, $zero
    ctx->pc = 0x45acd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acdc: 0x2a2200b8  slti        $v0, $s1, 0xB8
    ctx->pc = 0x45acdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x45ace0: 0x1040ff0d  beqz        $v0, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x45ACE0u;
    {
        const bool branch_taken_0x45ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45ACE0u;
        // 0x45ace4: 0x300902d  daddu       $s2, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ace0) {
            ctx->pc = 0x45A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a918;
        }
    }
    ctx->pc = 0x45ACE8u;
    // 0x45ace8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x45ace8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x45acec: 0x0  nop
    ctx->pc = 0x45acecu;
    // NOP
label_45acf0:
    // 0x45acf0: 0x14400135  bnez        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x45ACF0u;
    {
        const bool branch_taken_0x45acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45ACF0u;
        // 0x45acf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45acf0) {
            ctx->pc = 0x45B1C8u;
            goto label_45b1c8;
        }
    }
    ctx->pc = 0x45ACF8u;
    // 0x45acf8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x45acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x45acfc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x45acfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x45ad00: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x45ad00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x45ad04: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x45ad04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x45ad08: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x45ad08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x45ad0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ad10: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45ad14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45ad18: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45ad18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45ad1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45AD1Cu;
    {
        const bool branch_taken_0x45ad1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AD1Cu;
        // 0x45ad20: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ad1c) {
            ctx->pc = 0x45AD58u;
            goto label_45ad58;
        }
    }
    ctx->pc = 0x45AD24u;
    // 0x45ad24: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45ad28: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45ad2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45ad2cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45ad30: 0xf  sync
    ctx->pc = 0x45ad30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ad34: 0x40f  sync.p
    ctx->pc = 0x45ad34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ad38:
    // 0x45ad38: 0x0  nop
    ctx->pc = 0x45ad38u;
    // NOP
    // 0x45ad3c: 0x0  nop
    ctx->pc = 0x45ad3cu;
    // NOP
    // 0x45ad40: 0x0  nop
    ctx->pc = 0x45ad40u;
    // NOP
    // 0x45ad44: 0x0  nop
    ctx->pc = 0x45ad44u;
    // NOP
    // 0x45ad48: 0x0  nop
    ctx->pc = 0x45ad48u;
    // NOP
    // 0x45ad4c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AD4Cu;
    {
        const bool branch_taken_0x45ad4c = (false);
        if (branch_taken_0x45ad4c) {
            ctx->pc = 0x45AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ad38;
        }
    }
    ctx->pc = 0x45AD54u;
    // 0x45ad54: 0x0  nop
    ctx->pc = 0x45ad54u;
    // NOP
label_45ad58:
    // 0x45ad58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ad5c: 0x46a00  sll         $t5, $a0, 8
    ctx->pc = 0x45ad5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x45ad60: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45ad64: 0x2286023  subu        $t4, $s1, $t0
    ctx->pc = 0x45ad64u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x45ad68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x45ad6c: 0x857c3  sra         $t2, $t0, 31
    ctx->pc = 0x45ad6cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 31));
    // 0x45ad70: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x45ad70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x45ad74: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45ad78: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x45AD78u;
    {
        const bool branch_taken_0x45ad78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AD78u;
        // 0x45ad7c: 0x45980  sll         $t3, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ad78) {
            ctx->pc = 0x45ADDCu;
            goto label_45addc;
        }
    }
    ctx->pc = 0x45AD80u;
    // 0x45ad80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ad84: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45ad88: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45ad8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45ad8cu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45ad90: 0xf  sync
    ctx->pc = 0x45ad90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ad94: 0x40f  sync.p
    ctx->pc = 0x45ad94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ad98:
    // 0x45ad98: 0x0  nop
    ctx->pc = 0x45ad98u;
    // NOP
    // 0x45ad9c: 0x0  nop
    ctx->pc = 0x45ad9cu;
    // NOP
    // 0x45ada0: 0x0  nop
    ctx->pc = 0x45ada0u;
    // NOP
    // 0x45ada4: 0x0  nop
    ctx->pc = 0x45ada4u;
    // NOP
    // 0x45ada8: 0x0  nop
    ctx->pc = 0x45ada8u;
    // NOP
    // 0x45adac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45ADACu;
    {
        const bool branch_taken_0x45adac = (false);
        if (branch_taken_0x45adac) {
            ctx->pc = 0x45AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ad98;
        }
    }
    ctx->pc = 0x45ADB4u;
    // 0x45adb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45adb8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45adbc: 0x0  nop
    ctx->pc = 0x45adbcu;
    // NOP
label_45adc0:
    // 0x45adc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45adc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45adc8: 0x0  nop
    ctx->pc = 0x45adc8u;
    // NOP
    // 0x45adcc: 0x0  nop
    ctx->pc = 0x45adccu;
    // NOP
    // 0x45add0: 0x0  nop
    ctx->pc = 0x45add0u;
    // NOP
    // 0x45add4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45ADD4u;
    {
        const bool branch_taken_0x45add4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45add4) {
            ctx->pc = 0x45ADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45adc0;
        }
    }
    ctx->pc = 0x45ADDCu;
label_45addc:
    // 0x45addc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ade0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45ade4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45ade8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45ade8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45adec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45adf0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45adf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45adf8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45adf8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45adfc: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45adfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45ae00: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x45ae00u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x45ae04: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45ae08: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x45ae08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x45ae0c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x45ae0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x45ae10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45ae10u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45ae14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45ae18: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45ae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45ae1c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45ae20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45ae20u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45ae24: 0xf  sync
    ctx->pc = 0x45ae24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ae28: 0x40f  sync.p
    ctx->pc = 0x45ae28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ae2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45ae30: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ae34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45AE34u;
    {
        const bool branch_taken_0x45ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AE34u;
        // 0x45ae38: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ae34) {
            ctx->pc = 0x45AE8Cu;
            goto label_45ae8c;
        }
    }
    ctx->pc = 0x45AE3Cu;
    // 0x45ae3c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45ae40: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45ae40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45ae44: 0xf  sync
    ctx->pc = 0x45ae44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ae48: 0x40f  sync.p
    ctx->pc = 0x45ae48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ae4c:
    // 0x45ae4c: 0x0  nop
    ctx->pc = 0x45ae4cu;
    // NOP
    // 0x45ae50: 0x0  nop
    ctx->pc = 0x45ae50u;
    // NOP
    // 0x45ae54: 0x0  nop
    ctx->pc = 0x45ae54u;
    // NOP
    // 0x45ae58: 0x0  nop
    ctx->pc = 0x45ae58u;
    // NOP
    // 0x45ae5c: 0x0  nop
    ctx->pc = 0x45ae5cu;
    // NOP
    // 0x45ae60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AE60u;
    {
        const bool branch_taken_0x45ae60 = (false);
        if (branch_taken_0x45ae60) {
            ctx->pc = 0x45AE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ae4c;
        }
    }
    ctx->pc = 0x45AE68u;
    // 0x45ae68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45ae6c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45ae70:
    // 0x45ae70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45ae74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ae78: 0x0  nop
    ctx->pc = 0x45ae78u;
    // NOP
    // 0x45ae7c: 0x0  nop
    ctx->pc = 0x45ae7cu;
    // NOP
    // 0x45ae80: 0x0  nop
    ctx->pc = 0x45ae80u;
    // NOP
    // 0x45ae84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AE84u;
    {
        const bool branch_taken_0x45ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ae84) {
            ctx->pc = 0x45AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ae70;
        }
    }
    ctx->pc = 0x45AE8Cu;
label_45ae8c:
    // 0x45ae8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ae90: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45ae94: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45ae98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45ae9c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45ae9cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45aea0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45aea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45aea4: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x45aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x45aea8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45aea8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45aeac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45aeb0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45aeb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45aeb8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x45aeb8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x45aebc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x45aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x45aec0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45aec4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x45aec4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x45aec8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45aec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45aecc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45aed0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45aed0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45aed4: 0xf  sync
    ctx->pc = 0x45aed4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aed8: 0x40f  sync.p
    ctx->pc = 0x45aed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aedc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45aee0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45aee4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45AEE4u;
    {
        const bool branch_taken_0x45aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AEE4u;
        // 0x45aee8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45aee4) {
            ctx->pc = 0x45AF3Cu;
            goto label_45af3c;
        }
    }
    ctx->pc = 0x45AEECu;
    // 0x45aeec: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45aef0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45aef0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45aef4: 0xf  sync
    ctx->pc = 0x45aef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45aef8: 0x40f  sync.p
    ctx->pc = 0x45aef8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45aefc:
    // 0x45aefc: 0x0  nop
    ctx->pc = 0x45aefcu;
    // NOP
    // 0x45af00: 0x0  nop
    ctx->pc = 0x45af00u;
    // NOP
    // 0x45af04: 0x0  nop
    ctx->pc = 0x45af04u;
    // NOP
    // 0x45af08: 0x0  nop
    ctx->pc = 0x45af08u;
    // NOP
    // 0x45af0c: 0x0  nop
    ctx->pc = 0x45af0cu;
    // NOP
    // 0x45af10: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AF10u;
    {
        const bool branch_taken_0x45af10 = (false);
        if (branch_taken_0x45af10) {
            ctx->pc = 0x45AEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45aefc;
        }
    }
    ctx->pc = 0x45AF18u;
    // 0x45af18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45af1c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45af20:
    // 0x45af20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45af20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45af24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45af28: 0x0  nop
    ctx->pc = 0x45af28u;
    // NOP
    // 0x45af2c: 0x0  nop
    ctx->pc = 0x45af2cu;
    // NOP
    // 0x45af30: 0x0  nop
    ctx->pc = 0x45af30u;
    // NOP
    // 0x45af34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AF34u;
    {
        const bool branch_taken_0x45af34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45af34) {
            ctx->pc = 0x45AF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45af20;
        }
    }
    ctx->pc = 0x45AF3Cu;
label_45af3c:
    // 0x45af3c: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x45af3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x45af40: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x45af40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x45af44: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x45af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x45af48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45af48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45af4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45af50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x45af50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x45af54: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x45af54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x45af58: 0x19000053  blez        $t0, . + 4 + (0x53 << 2)
    ctx->pc = 0x45AF58u;
    {
        const bool branch_taken_0x45af58 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x45AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45AF58u;
        // 0x45af5c: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45af58) {
            ctx->pc = 0x45B0A8u;
            goto label_45b0a8;
        }
    }
    ctx->pc = 0x45AF60u;
    // 0x45af60: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x45af60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x45af64: 0x0  nop
    ctx->pc = 0x45af64u;
    // NOP
label_45af68:
    // 0x45af68: 0x42000039  di
    ctx->pc = 0x45af68u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45af6c: 0x40f  sync.p
    ctx->pc = 0x45af6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45af70: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45af74: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x45af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x45af78: 0x0  nop
    ctx->pc = 0x45af78u;
    // NOP
    // 0x45af7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45AF7Cu;
    {
        const bool branch_taken_0x45af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45af7c) {
            ctx->pc = 0x45AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45af68;
        }
    }
    ctx->pc = 0x45AF84u;
    // 0x45af84: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x45af84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x45af88: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x45af88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45af8c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x45af8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45af90: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x45af90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45af94: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x45af94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45af98: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x45af98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45af9c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x45af9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45afa0: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x45afa0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45afa4: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x45afa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45afa8: 0xd8940020  lqc2        $vf20, 0x20($a0)
    ctx->pc = 0x45afa8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45afac: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x45afacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x45afb0: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x45afb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x45afb4: 0xd89b0030  lqc2        $vf27, 0x30($a0)
    ctx->pc = 0x45afb4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45afb8: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x45afb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x45afbc: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x45afbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45afc0: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x45afc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45afc4: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x45afc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x45afc8: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x45afc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45afcc: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x45afccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45afd0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x45afd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45afd4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x45afd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45afd8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x45afd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45afdc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x45afdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45afe0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x45afe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45afe4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x45afe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45afe8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x45afe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45afec: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x45afecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45aff0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x45aff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45aff4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x45aff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45aff8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x45aff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45affc: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x45affcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45b000: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x45b000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45b004: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x45b004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45b008: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x45b008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45b00c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x45b00cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45b010: 0xf8680010  sqc2        $vf8, 0x10($v1)
    ctx->pc = 0x45b010u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45b014: 0xf8690020  sqc2        $vf9, 0x20($v1)
    ctx->pc = 0x45b014u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45b018: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45b018u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45b01c: 0xf86e0040  sqc2        $vf14, 0x40($v1)
    ctx->pc = 0x45b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x45b020: 0xf86f0050  sqc2        $vf15, 0x50($v1)
    ctx->pc = 0x45b020u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x45b024: 0xf8700060  sqc2        $vf16, 0x60($v1)
    ctx->pc = 0x45b024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x45b028: 0xf8710070  sqc2        $vf17, 0x70($v1)
    ctx->pc = 0x45b028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x45b02c: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x45b02cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b030: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x45b030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b034: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x45b034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b038: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x45b038u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b03c: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x45b03cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b040: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x45b040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b044: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x45b044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b048: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x45b048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b04c: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x45b04cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45b050: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x45b050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45b054: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x45b054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45b058: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x45b058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45b05c: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x45b05cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x45b060: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x45b060u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x45b064: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x45b064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45b068: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x45b068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45b06c: 0xf8670080  sqc2        $vf7, 0x80($v1)
    ctx->pc = 0x45b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45b070: 0xf8680090  sqc2        $vf8, 0x90($v1)
    ctx->pc = 0x45b070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45b074: 0xf86900a0  sqc2        $vf9, 0xA0($v1)
    ctx->pc = 0x45b074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45b078: 0xf86a00b0  sqc2        $vf10, 0xB0($v1)
    ctx->pc = 0x45b078u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45b07c: 0xf86e00c0  sqc2        $vf14, 0xC0($v1)
    ctx->pc = 0x45b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x45b080: 0xf86f00d0  sqc2        $vf15, 0xD0($v1)
    ctx->pc = 0x45b080u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x45b084: 0xf87000e0  sqc2        $vf16, 0xE0($v1)
    ctx->pc = 0x45b084u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x45b088: 0xf87100f0  sqc2        $vf17, 0xF0($v1)
    ctx->pc = 0x45b088u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x45b08c: 0x42000038  ei
    ctx->pc = 0x45b08cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45b090: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x45b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x45b094: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x45b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x45b098: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x45b098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x45b09c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x45b09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x45b0a0: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x45B0A0u;
    {
        const bool branch_taken_0x45b0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B0A0u;
        // 0x45b0a4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b0a0) {
            ctx->pc = 0x45AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45af68;
        }
    }
    ctx->pc = 0x45B0A8u;
label_45b0a8:
    // 0x45b0a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b0ac: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45b0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45b0b4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45b0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45b0b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45B0B8u;
    {
        const bool branch_taken_0x45b0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B0B8u;
        // 0x45b0bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b0b8) {
            ctx->pc = 0x45B0F0u;
            goto label_45b0f0;
        }
    }
    ctx->pc = 0x45B0C0u;
    // 0x45b0c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45b0c4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45b0c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45b0c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45b0cc: 0xf  sync
    ctx->pc = 0x45b0ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b0d0: 0x40f  sync.p
    ctx->pc = 0x45b0d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b0d4:
    // 0x45b0d4: 0x0  nop
    ctx->pc = 0x45b0d4u;
    // NOP
    // 0x45b0d8: 0x0  nop
    ctx->pc = 0x45b0d8u;
    // NOP
    // 0x45b0dc: 0x0  nop
    ctx->pc = 0x45b0dcu;
    // NOP
    // 0x45b0e0: 0x0  nop
    ctx->pc = 0x45b0e0u;
    // NOP
    // 0x45b0e4: 0x0  nop
    ctx->pc = 0x45b0e4u;
    // NOP
    // 0x45b0e8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B0E8u;
    {
        const bool branch_taken_0x45b0e8 = (false);
        if (branch_taken_0x45b0e8) {
            ctx->pc = 0x45B0D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b0d4;
        }
    }
    ctx->pc = 0x45B0F0u;
label_45b0f0:
    // 0x45b0f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b0f4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45b0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45b0f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45b0fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45b100: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45B100u;
    {
        const bool branch_taken_0x45b100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B100u;
        // 0x45b104: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b100) {
            ctx->pc = 0x45B15Cu;
            goto label_45b15c;
        }
    }
    ctx->pc = 0x45B108u;
    // 0x45b108: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45b10c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45b110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45b110u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45b114: 0xf  sync
    ctx->pc = 0x45b114u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b118: 0x40f  sync.p
    ctx->pc = 0x45b118u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b11c:
    // 0x45b11c: 0x0  nop
    ctx->pc = 0x45b11cu;
    // NOP
    // 0x45b120: 0x0  nop
    ctx->pc = 0x45b120u;
    // NOP
    // 0x45b124: 0x0  nop
    ctx->pc = 0x45b124u;
    // NOP
    // 0x45b128: 0x0  nop
    ctx->pc = 0x45b128u;
    // NOP
    // 0x45b12c: 0x0  nop
    ctx->pc = 0x45b12cu;
    // NOP
    // 0x45b130: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B130u;
    {
        const bool branch_taken_0x45b130 = (false);
        if (branch_taken_0x45b130) {
            ctx->pc = 0x45B11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b11c;
        }
    }
    ctx->pc = 0x45B138u;
    // 0x45b138: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b13c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45b140:
    // 0x45b140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b140u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b144: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b148: 0x0  nop
    ctx->pc = 0x45b148u;
    // NOP
    // 0x45b14c: 0x0  nop
    ctx->pc = 0x45b14cu;
    // NOP
    // 0x45b150: 0x0  nop
    ctx->pc = 0x45b150u;
    // NOP
    // 0x45b154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B154u;
    {
        const bool branch_taken_0x45b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b154) {
            ctx->pc = 0x45B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b140;
        }
    }
    ctx->pc = 0x45B15Cu;
label_45b15c:
    // 0x45b15c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b160: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45b164: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45b168: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x45b168u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
    // 0x45b16c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45b16cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45b170: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x45b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x45b174: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b178: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45b178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45b17c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x45b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x45b180: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b184: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45b184u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45b188: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45b18c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b190: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x45b190u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x45b194: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45b198: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b19c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x45b19cu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x45b1a0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45b1a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45b1a4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45b1a8: 0xf  sync
    ctx->pc = 0x45b1a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b1ac: 0x40f  sync.p
    ctx->pc = 0x45b1acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b1b0: 0x26b9821  addu        $s3, $s3, $t3
    ctx->pc = 0x45b1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x45b1b4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x45b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x45b1b8: 0x28da021  addu        $s4, $s4, $t5
    ctx->pc = 0x45b1b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x45b1bc: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x45b1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x45b1c0: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x45b1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b1c4: 0x0  nop
    ctx->pc = 0x45b1c4u;
    // NOP
label_45b1c8:
    // 0x45b1c8: 0x1a20007d  blez        $s1, . + 4 + (0x7D << 2)
    ctx->pc = 0x45B1C8u;
    {
        const bool branch_taken_0x45b1c8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x45B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B1C8u;
        // 0x45b1cc: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b1c8) {
            ctx->pc = 0x45B3C0u;
            goto label_45b3c0;
        }
    }
    ctx->pc = 0x45B1D0u;
    // 0x45b1d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45b1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b1d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x45b1d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x45b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x45b1dc: 0x0  nop
    ctx->pc = 0x45b1dcu;
    // NOP
label_45b1e0:
    // 0x45b1e0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x45b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b1e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45b1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45b1e8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x45b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b1ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45b1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45b1f0:
    // 0x45b1f0: 0x42000039  di
    ctx->pc = 0x45b1f0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b1f4: 0x40f  sync.p
    ctx->pc = 0x45b1f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b1f8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45b1fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45b200: 0x0  nop
    ctx->pc = 0x45b200u;
    // NOP
    // 0x45b204: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B204u;
    {
        const bool branch_taken_0x45b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b204) {
            ctx->pc = 0x45B1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b1f0;
        }
    }
    ctx->pc = 0x45B20Cu;
    // 0x45b20c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x45b20cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b210: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x45b210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45b214: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x45b214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45b218: 0xda660000  lqc2        $vf6, 0x0($s3)
    ctx->pc = 0x45b218u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x45b21c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x45b21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45b220: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x45b220u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b224: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x45b224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b228: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x45b228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b22c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x45b22cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b230: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x45b230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b234: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x45b234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b238: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x45b238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b23c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x45b23cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b240: 0xfa870000  sqc2        $vf7, 0x0($s4)
    ctx->pc = 0x45b240u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45b244: 0xfa880010  sqc2        $vf8, 0x10($s4)
    ctx->pc = 0x45b244u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45b248: 0xfa890020  sqc2        $vf9, 0x20($s4)
    ctx->pc = 0x45b248u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45b24c: 0xfa8a0030  sqc2        $vf10, 0x30($s4)
    ctx->pc = 0x45b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45b250: 0x42000038  ei
    ctx->pc = 0x45b250u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45b254: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x45b254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x45b258: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x45b258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x45b25c: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x45b25cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45b260: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x45b260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x45b264: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45b264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45b268: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x45B268u;
    {
        const bool branch_taken_0x45b268 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B268u;
        // 0x45b26c: 0x2699821  addu        $s3, $s3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b268) {
            ctx->pc = 0x45B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b1e0;
        }
    }
    ctx->pc = 0x45B270u;
    // 0x45b270: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x45B270u;
    {
        const bool branch_taken_0x45b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B270u;
        // 0x45b274: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b270) {
            ctx->pc = 0x45B3C4u;
            goto label_45b3c4;
        }
    }
    ctx->pc = 0x45B278u;
label_45b278:
    // 0x45b278: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x45b278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x45b27c: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x45b27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x45b280: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x45b280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x45b284: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x45b284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45b288: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x45b288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45b28c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x45b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x45b290: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x45b290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x45b294: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x45b294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x45b298: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x45b298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45b29c: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x45b29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45b2a0: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x45b2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45b2a4: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x45b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x45b2a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x45b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45b2ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45b2b0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x45b2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b2b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x45b2b8: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x45b2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b2bc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x45b2bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45b2c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x45b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45b2c4:
    // 0x45b2c4: 0x42000039  di
    ctx->pc = 0x45b2c4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b2c8: 0x40f  sync.p
    ctx->pc = 0x45b2c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b2cc: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x45b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x45b2d0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x45b2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x45b2d4: 0x0  nop
    ctx->pc = 0x45b2d4u;
    // NOP
    // 0x45b2d8: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B2D8u;
    {
        const bool branch_taken_0x45b2d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b2d8) {
            ctx->pc = 0x45B2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b2c4;
        }
    }
    ctx->pc = 0x45B2E0u;
    // 0x45b2e0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x45b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x45b2e4: 0x48c6a800  ctc2.ni     $a2, $vi21
    ctx->pc = 0x45b2e4u;
    { uint32_t tmp = GPR_U32(ctx, 6); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b2e8: 0x4a0002ff  vnop
    ctx->pc = 0x45b2e8u;
    // NOP operation, no action needed for VU0
    // 0x45b2ec: 0x4a0002ff  vnop
    ctx->pc = 0x45b2ecu;
    // NOP operation, no action needed for VU0
    // 0x45b2f0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x45b2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45b2f4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x45b2f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45b2f8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x45b2f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b2fc: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x45b2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45b300: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x45b300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45b304: 0x4be00569  vmadd.xyzw  $vf21, $vf0, $vf0
    ctx->pc = 0x45b304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45b308: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x45b308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x45b30c: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x45b30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45b310: 0x42000038  ei
    ctx->pc = 0x45b310u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45b314: 0x1a20002b  blez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x45B314u;
    {
        const bool branch_taken_0x45b314 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x45B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B314u;
        // 0x45b318: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b314) {
            ctx->pc = 0x45B3C4u;
            goto label_45b3c4;
        }
    }
    ctx->pc = 0x45B31Cu;
    // 0x45b31c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x45b31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x45b320: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45b320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x45b324: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x45b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45b328: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x45b328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x45b32c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45b32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45b330:
    // 0x45b330: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x45b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b334: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x45b334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x45b338: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x45b338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b33c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x45b33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_45b340:
    // 0x45b340: 0x42000039  di
    ctx->pc = 0x45b340u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b344: 0x40f  sync.p
    ctx->pc = 0x45b344u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b348: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45b34c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45b350: 0x0  nop
    ctx->pc = 0x45b350u;
    // NOP
    // 0x45b354: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B354u;
    {
        const bool branch_taken_0x45b354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b354) {
            ctx->pc = 0x45B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b340;
        }
    }
    ctx->pc = 0x45B35Cu;
    // 0x45b35c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x45b35cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45b360: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x45b360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45b364: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x45b364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45b368: 0xda660000  lqc2        $vf6, 0x0($s3)
    ctx->pc = 0x45b368u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x45b36c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x45b36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45b370: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x45b370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b374: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x45b374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b378: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x45b378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b37c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x45b37cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b380: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x45b380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45b384: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x45b384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45b388: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x45b388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45b38c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x45b38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b390: 0xfa870000  sqc2        $vf7, 0x0($s4)
    ctx->pc = 0x45b390u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x45b394: 0xfa880010  sqc2        $vf8, 0x10($s4)
    ctx->pc = 0x45b394u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45b398: 0xfa890020  sqc2        $vf9, 0x20($s4)
    ctx->pc = 0x45b398u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x45b39c: 0xfa8a0030  sqc2        $vf10, 0x30($s4)
    ctx->pc = 0x45b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45b3a0: 0x42000038  ei
    ctx->pc = 0x45b3a0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45b3a4: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x45b3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x45b3a8: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x45b3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x45b3ac: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x45b3acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45b3b0: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x45b3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x45b3b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45b3b8: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x45B3B8u;
    {
        const bool branch_taken_0x45b3b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B3B8u;
        // 0x45b3bc: 0x2699821  addu        $s3, $s3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b3b8) {
            ctx->pc = 0x45B330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b330;
        }
    }
    ctx->pc = 0x45B3C0u;
label_45b3c0:
    // 0x45b3c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x45b3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_45b3c4:
    // 0x45b3c4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x45b3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x45b3c8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x45b3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45b3cc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x45b3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45b3d0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x45b3d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45b3d4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x45b3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45b3d8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x45b3d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45b3dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45b3dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45b3e0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x45b3e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45b3e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45b3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x45B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B3E8u;
        // 0x45b3ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B3F0u;
}
