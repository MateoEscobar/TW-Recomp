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

// Function: sub_0045B3F0
// Address: 0x45b3f0 - 0x45c6b8
void sub_0045B3F0_0x45b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B3F0_0x45b3f0");
#endif

    switch (ctx->pc) {
        case 0x45b470u: goto label_45b470;
        case 0x45b49cu: goto label_45b49c;
        case 0x45b4e8u: goto label_45b4e8;
        case 0x45b510u: goto label_45b510;
        case 0x45b5c4u: goto label_45b5c4;
        case 0x45b6d0u: goto label_45b6d0;
        case 0x45b768u: goto label_45b768;
        case 0x45b784u: goto label_45b784;
        case 0x45b7d0u: goto label_45b7d0;
        case 0x45b7f8u: goto label_45b7f8;
        case 0x45b850u: goto label_45b850;
        case 0x45b878u: goto label_45b878;
        case 0x45b8d4u: goto label_45b8d4;
        case 0x45b8f8u: goto label_45b8f8;
        case 0x45b954u: goto label_45b954;
        case 0x45b978u: goto label_45b978;
        case 0x45b9b8u: goto label_45b9b8;
        case 0x45b9e8u: goto label_45b9e8;
        case 0x45bb58u: goto label_45bb58;
        case 0x45bb94u: goto label_45bb94;
        case 0x45bbb8u: goto label_45bbb8;
        case 0x45bc70u: goto label_45bc70;
        case 0x45bcd4u: goto label_45bcd4;
        case 0x45bcf8u: goto label_45bcf8;
        case 0x45bd94u: goto label_45bd94;
        case 0x45bdb8u: goto label_45bdb8;
        case 0x45be48u: goto label_45be48;
        case 0x45be70u: goto label_45be70;
        case 0x45befcu: goto label_45befc;
        case 0x45bf20u: goto label_45bf20;
        case 0x45bf68u: goto label_45bf68;
        case 0x45bf98u: goto label_45bf98;
        case 0x45c11cu: goto label_45c11c;
        case 0x45c164u: goto label_45c164;
        case 0x45c188u: goto label_45c188;
        case 0x45c238u: goto label_45c238;
        case 0x45c268u: goto label_45c268;
        case 0x45c3f4u: goto label_45c3f4;
        case 0x45c500u: goto label_45c500;
        case 0x45c558u: goto label_45c558;
        case 0x45c578u: goto label_45c578;
        default: break;
    }

    ctx->pc = 0x45b3f0u;

    // 0x45b3f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x45b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x45b3f4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x45b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x45b3f8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x45b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x45b3fc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x45b3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b400: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x45b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x45b404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x45b404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b408: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x45b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x45b40c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x45b40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b410: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x45b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x45b414: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x45b414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b418: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x45b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x45b41c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x45b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x45b420: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x45b424: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x45b424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x45b428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x45b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x45b42c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x45b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45b430: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x45b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x45b434: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x45b434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x45b438: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x45b438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x45b43c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x45b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x45b440: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x45b440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x45b444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x45b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x45b448: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x45b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x45b44c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x45b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x45b450: 0x8c970000  lw          $s7, 0x0($a0)
    ctx->pc = 0x45b450u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45b454: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45b458: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x45b458u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45b45c: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x45b45cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x45b460: 0x148203c7  bne         $a0, $v0, . + 4 + (0x3C7 << 2)
    ctx->pc = 0x45B460u;
    {
        const bool branch_taken_0x45b460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x45B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B460u;
        // 0x45b464: 0x8e15001c  lw          $s5, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b460) {
            ctx->pc = 0x45C380u;
            goto label_45c380;
        }
    }
    ctx->pc = 0x45B468u;
    // 0x45b468: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45B468u;
    SET_GPR_U32(ctx, 31, 0x45B470u);
    ctx->pc = 0x45B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45B468u;
    // 0x45b46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45B468u, 0x45B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B470u;
label_45b470:
    // 0x45b470: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45b474: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45b478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45b478u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45b47c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45b480: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45B480u;
    {
        const bool branch_taken_0x45b480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B480u;
        // 0x45b484: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b480) {
            ctx->pc = 0x45B4B8u;
            goto label_45b4b8;
        }
    }
    ctx->pc = 0x45B488u;
    // 0x45b488: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45b48c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45b48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45b490: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45b490u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45b494: 0xf  sync
    ctx->pc = 0x45b494u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b498: 0x40f  sync.p
    ctx->pc = 0x45b498u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b49c:
    // 0x45b49c: 0x0  nop
    ctx->pc = 0x45b49cu;
    // NOP
    // 0x45b4a0: 0x0  nop
    ctx->pc = 0x45b4a0u;
    // NOP
    // 0x45b4a4: 0x0  nop
    ctx->pc = 0x45b4a4u;
    // NOP
    // 0x45b4a8: 0x0  nop
    ctx->pc = 0x45b4a8u;
    // NOP
    // 0x45b4ac: 0x0  nop
    ctx->pc = 0x45b4acu;
    // NOP
    // 0x45b4b0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B4B0u;
    {
        const bool branch_taken_0x45b4b0 = (false);
        if (branch_taken_0x45b4b0) {
            ctx->pc = 0x45B49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b49c;
        }
    }
    ctx->pc = 0x45B4B8u;
label_45b4b8:
    // 0x45b4b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b4bc: 0x2a4800b0  slti        $t0, $s2, 0xB0
    ctx->pc = 0x45b4bcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x45b4c0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45b4c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b4c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b4cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45B4CCu;
    {
        const bool branch_taken_0x45b4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B4CCu;
        // 0x45b4d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b4cc) {
            ctx->pc = 0x45B52Cu;
            goto label_45b52c;
        }
    }
    ctx->pc = 0x45B4D4u;
    // 0x45b4d4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45b4d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45b4dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45b4dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45b4e0: 0xf  sync
    ctx->pc = 0x45b4e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b4e4: 0x40f  sync.p
    ctx->pc = 0x45b4e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b4e8:
    // 0x45b4e8: 0x0  nop
    ctx->pc = 0x45b4e8u;
    // NOP
    // 0x45b4ec: 0x0  nop
    ctx->pc = 0x45b4ecu;
    // NOP
    // 0x45b4f0: 0x0  nop
    ctx->pc = 0x45b4f0u;
    // NOP
    // 0x45b4f4: 0x0  nop
    ctx->pc = 0x45b4f4u;
    // NOP
    // 0x45b4f8: 0x0  nop
    ctx->pc = 0x45b4f8u;
    // NOP
    // 0x45b4fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B4FCu;
    {
        const bool branch_taken_0x45b4fc = (false);
        if (branch_taken_0x45b4fc) {
            ctx->pc = 0x45B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b4e8;
        }
    }
    ctx->pc = 0x45B504u;
    // 0x45b504: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b508: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45b50c: 0x0  nop
    ctx->pc = 0x45b50cu;
    // NOP
label_45b510:
    // 0x45b510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b510u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b514: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b518: 0x0  nop
    ctx->pc = 0x45b518u;
    // NOP
    // 0x45b51c: 0x0  nop
    ctx->pc = 0x45b51cu;
    // NOP
    // 0x45b520: 0x0  nop
    ctx->pc = 0x45b520u;
    // NOP
    // 0x45b524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B524u;
    {
        const bool branch_taken_0x45b524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b524) {
            ctx->pc = 0x45B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b510;
        }
    }
    ctx->pc = 0x45B52Cu;
label_45b52c:
    // 0x45b52c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45b530: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x45b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b534: 0x34633f60  ori         $v1, $v1, 0x3F60
    ctx->pc = 0x45b534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16224);
    // 0x45b538: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x45b538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x45b53c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x45b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x45b540: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x45b540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x45b544: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45b544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x45b548: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x45b548u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x45b54c: 0x34e73f40  ori         $a3, $a3, 0x3F40
    ctx->pc = 0x45b54cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16192);
    // 0x45b550: 0x34c63f50  ori         $a2, $a2, 0x3F50
    ctx->pc = 0x45b550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16208);
    // 0x45b554: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x45b554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b558: 0x37183fa0  ori         $t8, $t8, 0x3FA0
    ctx->pc = 0x45b558u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)16288);
    // 0x45b55c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45b55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x45b560: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x45b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b564: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x45b564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x45b568: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x45b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45b56c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x45b56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
    // 0x45b570: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b574: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45b578: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x45b578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45b57c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x45b57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45b580: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x45b580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F40u, bits); }
    // 0x45b584: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b588: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x45b588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45b58c: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x45b58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F44u, bits); }
    // 0x45b590: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x45b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x45b594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45b598: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x45b598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F48u, bits); }
    // 0x45b59c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x45b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b5a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x45b5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45b5a4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x45b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F50u, bits); }
    // 0x45b5a8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x45b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b5ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x45b5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45b5b0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x45b5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F54u, bits); }
    // 0x45b5b4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x45b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b5b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x45b5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45b5bc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x45b5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F58u, bits); }
    // 0x45b5c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45b5c4:
    // 0x45b5c4: 0x42000039  di
    ctx->pc = 0x45b5c4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b5c8: 0x40f  sync.p
    ctx->pc = 0x45b5c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b5cc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45b5d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45b5d4: 0x0  nop
    ctx->pc = 0x45b5d4u;
    // NOP
    // 0x45b5d8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B5D8u;
    {
        const bool branch_taken_0x45b5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b5d8) {
            ctx->pc = 0x45B5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b5c4;
        }
    }
    ctx->pc = 0x45B5E0u;
    // 0x45b5e0: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x45b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x45b5e4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45b5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45b5e8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b5e8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b5ec: 0x4a0002ff  vnop
    ctx->pc = 0x45b5ecu;
    // NOP operation, no action needed for VU0
    // 0x45b5f0: 0x4a0002ff  vnop
    ctx->pc = 0x45b5f0u;
    // NOP operation, no action needed for VU0
    // 0x45b5f4: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x45b5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b5f8: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x45b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x45b5fc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45b5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45b600: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b600u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b604: 0x4a0002ff  vnop
    ctx->pc = 0x45b604u;
    // NOP operation, no action needed for VU0
    // 0x45b608: 0x4a0002ff  vnop
    ctx->pc = 0x45b608u;
    // NOP operation, no action needed for VU0
    // 0x45b60c: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x45b60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b610: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x45b610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x45b614: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45b614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45b618: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b618u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b61c: 0x4a0002ff  vnop
    ctx->pc = 0x45b61cu;
    // NOP operation, no action needed for VU0
    // 0x45b620: 0x4a0002ff  vnop
    ctx->pc = 0x45b620u;
    // NOP operation, no action needed for VU0
    // 0x45b624: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x45b624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45b628: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x45b628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x45b62c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45b62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45b630: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b630u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b634: 0x4a0002ff  vnop
    ctx->pc = 0x45b634u;
    // NOP operation, no action needed for VU0
    // 0x45b638: 0x4a0002ff  vnop
    ctx->pc = 0x45b638u;
    // NOP operation, no action needed for VU0
    // 0x45b63c: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x45b63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45b640: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x45b640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x45b644: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x45b644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x45b648: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b648u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b64c: 0x4a0002ff  vnop
    ctx->pc = 0x45b64cu;
    // NOP operation, no action needed for VU0
    // 0x45b650: 0x4a0002ff  vnop
    ctx->pc = 0x45b650u;
    // NOP operation, no action needed for VU0
    // 0x45b654: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x45b654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45b658: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x45b658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x45b65c: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x45b65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x45b660: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b660u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b664: 0x4a0002ff  vnop
    ctx->pc = 0x45b664u;
    // NOP operation, no action needed for VU0
    // 0x45b668: 0x4a0002ff  vnop
    ctx->pc = 0x45b668u;
    // NOP operation, no action needed for VU0
    // 0x45b66c: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x45b66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45b670: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x45b670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x45b674: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x45b674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x45b678: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b678u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b67c: 0x4a0002ff  vnop
    ctx->pc = 0x45b67cu;
    // NOP operation, no action needed for VU0
    // 0x45b680: 0x4a0002ff  vnop
    ctx->pc = 0x45b680u;
    // NOP operation, no action needed for VU0
    // 0x45b684: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x45b684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45b688: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x45b688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x45b68c: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x45b68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x45b690: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b690u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b694: 0x4a0002ff  vnop
    ctx->pc = 0x45b694u;
    // NOP operation, no action needed for VU0
    // 0x45b698: 0x4a0002ff  vnop
    ctx->pc = 0x45b698u;
    // NOP operation, no action needed for VU0
    // 0x45b69c: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x45b69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45b6a0: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x45b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x45b6a4: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x45b6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x45b6a8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b6a8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b6ac: 0x4a0002ff  vnop
    ctx->pc = 0x45b6acu;
    // NOP operation, no action needed for VU0
    // 0x45b6b0: 0x4a0002ff  vnop
    ctx->pc = 0x45b6b0u;
    // NOP operation, no action needed for VU0
    // 0x45b6b4: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x45b6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45b6b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x45b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x45b6bc: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45b6bcu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45b6c0: 0x4a0002ff  vnop
    ctx->pc = 0x45b6c0u;
    // NOP operation, no action needed for VU0
    // 0x45b6c4: 0x4a0002ff  vnop
    ctx->pc = 0x45b6c4u;
    // NOP operation, no action needed for VU0
    // 0x45b6c8: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x45b6c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45b6cc: 0x42000038  ei
    ctx->pc = 0x45b6ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_45b6d0:
    // 0x45b6d0: 0x42000039  di
    ctx->pc = 0x45b6d0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b6d4: 0x40f  sync.p
    ctx->pc = 0x45b6d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b6d8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x45b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
    // 0x45b6dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x45b6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x45b6e0: 0x0  nop
    ctx->pc = 0x45b6e0u;
    // NOP
    // 0x45b6e4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B6E4u;
    {
        const bool branch_taken_0x45b6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b6e4) {
            ctx->pc = 0x45B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b6d0;
        }
    }
    ctx->pc = 0x45B6ECu;
    // 0x45b6ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45b6f0: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x45b6f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x45b6f4: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x45b6f4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45b6f8: 0xd84f0000  lqc2        $vf15, 0x0($v0)
    ctx->pc = 0x45b6f8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45b6fc: 0x42000038  ei
    ctx->pc = 0x45b6fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45b700: 0x15000149  bnez        $t0, . + 4 + (0x149 << 2)
    ctx->pc = 0x45B700u;
    {
        const bool branch_taken_0x45b700 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B700u;
        // 0x45b704: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b700) {
            ctx->pc = 0x45BC28u;
            goto label_45bc28;
        }
    }
    ctx->pc = 0x45B708u;
    // 0x45b708: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x45b708u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x45b70c: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x45b70cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x45b710: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x45b710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x45b714: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x45b714u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45b718: 0xafae0058  sw          $t6, 0x58($sp)
    ctx->pc = 0x45b718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 14));
    // 0x45b71c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45b71cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x45b720: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x45b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x45b724: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x45b724u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x45b728: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x45b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x45b72c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x45b72cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x45b730: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45b734: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x45b734u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x45b738: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x45b738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x45b73c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x45b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x45b740: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x45b740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x45b744: 0x3631d000  ori         $s1, $s1, 0xD000
    ctx->pc = 0x45b744u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)53248);
    // 0x45b748: 0x354ae020  ori         $t2, $t2, 0xE020
    ctx->pc = 0x45b748u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57376);
    // 0x45b74c: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x45b74cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45b750: 0x3529d400  ori         $t1, $t1, 0xD400
    ctx->pc = 0x45b750u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)54272);
    // 0x45b754: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x45b754u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45b758: 0x35ade010  ori         $t5, $t5, 0xE010
    ctx->pc = 0x45b758u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)57360);
    // 0x45b75c: 0x3610d480  ori         $s0, $s0, 0xD480
    ctx->pc = 0x45b75cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54400);
    // 0x45b760: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x45b760u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x45b764: 0x35ced420  ori         $t6, $t6, 0xD420
    ctx->pc = 0x45b764u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)54304);
label_45b768:
    // 0x45b768: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x45b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x45b76c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b770: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45B770u;
    {
        const bool branch_taken_0x45b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b770) {
            ctx->pc = 0x45B7A0u;
            goto label_45b7a0;
        }
    }
    ctx->pc = 0x45B778u;
    // 0x45b778: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x45b778u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x45b77c: 0xf  sync
    ctx->pc = 0x45b77cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b780: 0x40f  sync.p
    ctx->pc = 0x45b780u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b784:
    // 0x45b784: 0x0  nop
    ctx->pc = 0x45b784u;
    // NOP
    // 0x45b788: 0x0  nop
    ctx->pc = 0x45b788u;
    // NOP
    // 0x45b78c: 0x0  nop
    ctx->pc = 0x45b78cu;
    // NOP
    // 0x45b790: 0x0  nop
    ctx->pc = 0x45b790u;
    // NOP
    // 0x45b794: 0x0  nop
    ctx->pc = 0x45b794u;
    // NOP
    // 0x45b798: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B798u;
    {
        const bool branch_taken_0x45b798 = (false);
        if (branch_taken_0x45b798) {
            ctx->pc = 0x45B784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b784;
        }
    }
    ctx->pc = 0x45B7A0u;
label_45b7a0:
    // 0x45b7a0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45b7a4: 0x2652ff50  addiu       $s2, $s2, -0xB0
    ctx->pc = 0x45b7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967120));
    // 0x45b7a8: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x45b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x45b7ac: 0x26fe2c00  addiu       $fp, $s7, 0x2C00
    ctx->pc = 0x45b7acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 11264));
    // 0x45b7b0: 0x26d20b00  addiu       $s2, $s6, 0xB00
    ctx->pc = 0x45b7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 2816));
    // 0x45b7b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b7b8: 0x267902c0  addiu       $t9, $s3, 0x2C0
    ctx->pc = 0x45b7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x45b7bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45B7BCu;
    {
        const bool branch_taken_0x45b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B7BCu;
        // 0x45b7c0: 0x26b40580  addiu       $s4, $s5, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b7bc) {
            ctx->pc = 0x45B814u;
            goto label_45b814;
        }
    }
    ctx->pc = 0x45B7C4u;
    // 0x45b7c4: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45b7c8: 0xf  sync
    ctx->pc = 0x45b7c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b7cc: 0x40f  sync.p
    ctx->pc = 0x45b7ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b7d0:
    // 0x45b7d0: 0x0  nop
    ctx->pc = 0x45b7d0u;
    // NOP
    // 0x45b7d4: 0x0  nop
    ctx->pc = 0x45b7d4u;
    // NOP
    // 0x45b7d8: 0x0  nop
    ctx->pc = 0x45b7d8u;
    // NOP
    // 0x45b7dc: 0x0  nop
    ctx->pc = 0x45b7dcu;
    // NOP
    // 0x45b7e0: 0x0  nop
    ctx->pc = 0x45b7e0u;
    // NOP
    // 0x45b7e4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B7E4u;
    {
        const bool branch_taken_0x45b7e4 = (false);
        if (branch_taken_0x45b7e4) {
            ctx->pc = 0x45B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b7d0;
        }
    }
    ctx->pc = 0x45B7ECu;
    // 0x45b7ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b7f0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45b7f4: 0x0  nop
    ctx->pc = 0x45b7f4u;
    // NOP
label_45b7f8:
    // 0x45b7f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b7fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b800: 0x0  nop
    ctx->pc = 0x45b800u;
    // NOP
    // 0x45b804: 0x0  nop
    ctx->pc = 0x45b804u;
    // NOP
    // 0x45b808: 0x0  nop
    ctx->pc = 0x45b808u;
    // NOP
    // 0x45b80c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B80Cu;
    {
        const bool branch_taken_0x45b80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b80c) {
            ctx->pc = 0x45B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b7f8;
        }
    }
    ctx->pc = 0x45B814u;
label_45b814:
    // 0x45b814: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45b814u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x45b818: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x45b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x45b81c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x45b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x45b820: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x45b820u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x45b824: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x45b824u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x45b828: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x45b828u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x45b82c: 0xf  sync
    ctx->pc = 0x45b82cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b830: 0x40f  sync.p
    ctx->pc = 0x45b830u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b834: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45b838: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b83c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45B83Cu;
    {
        const bool branch_taken_0x45b83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b83c) {
            ctx->pc = 0x45B894u;
            goto label_45b894;
        }
    }
    ctx->pc = 0x45B844u;
    // 0x45b844: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45b844u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45b848: 0xf  sync
    ctx->pc = 0x45b848u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b84c: 0x40f  sync.p
    ctx->pc = 0x45b84cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b850:
    // 0x45b850: 0x0  nop
    ctx->pc = 0x45b850u;
    // NOP
    // 0x45b854: 0x0  nop
    ctx->pc = 0x45b854u;
    // NOP
    // 0x45b858: 0x0  nop
    ctx->pc = 0x45b858u;
    // NOP
    // 0x45b85c: 0x0  nop
    ctx->pc = 0x45b85cu;
    // NOP
    // 0x45b860: 0x0  nop
    ctx->pc = 0x45b860u;
    // NOP
    // 0x45b864: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B864u;
    {
        const bool branch_taken_0x45b864 = (false);
        if (branch_taken_0x45b864) {
            ctx->pc = 0x45B850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b850;
        }
    }
    ctx->pc = 0x45B86Cu;
    // 0x45b86c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b870: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45b874: 0x0  nop
    ctx->pc = 0x45b874u;
    // NOP
label_45b878:
    // 0x45b878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b878u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b87c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b880: 0x0  nop
    ctx->pc = 0x45b880u;
    // NOP
    // 0x45b884: 0x0  nop
    ctx->pc = 0x45b884u;
    // NOP
    // 0x45b888: 0x0  nop
    ctx->pc = 0x45b888u;
    // NOP
    // 0x45b88c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B88Cu;
    {
        const bool branch_taken_0x45b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b88c) {
            ctx->pc = 0x45B878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b878;
        }
    }
    ctx->pc = 0x45B894u;
label_45b894:
    // 0x45b894: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45b894u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x45b898: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x45b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x45b89c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x45b8a0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x45b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x45b8a4: 0xadf50000  sw          $s5, 0x0($t7)
    ctx->pc = 0x45b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
    // 0x45b8a8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x45b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x45b8ac: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x45b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x45b8b0: 0xf  sync
    ctx->pc = 0x45b8b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b8b4: 0x40f  sync.p
    ctx->pc = 0x45b8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b8b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45b8bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b8c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45B8C0u;
    {
        const bool branch_taken_0x45b8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8c0) {
            ctx->pc = 0x45B914u;
            goto label_45b914;
        }
    }
    ctx->pc = 0x45B8C8u;
    // 0x45b8c8: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45b8cc: 0xf  sync
    ctx->pc = 0x45b8ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b8d0: 0x40f  sync.p
    ctx->pc = 0x45b8d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b8d4:
    // 0x45b8d4: 0x0  nop
    ctx->pc = 0x45b8d4u;
    // NOP
    // 0x45b8d8: 0x0  nop
    ctx->pc = 0x45b8d8u;
    // NOP
    // 0x45b8dc: 0x0  nop
    ctx->pc = 0x45b8dcu;
    // NOP
    // 0x45b8e0: 0x0  nop
    ctx->pc = 0x45b8e0u;
    // NOP
    // 0x45b8e4: 0x0  nop
    ctx->pc = 0x45b8e4u;
    // NOP
    // 0x45b8e8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B8E8u;
    {
        const bool branch_taken_0x45b8e8 = (false);
        if (branch_taken_0x45b8e8) {
            ctx->pc = 0x45B8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b8d4;
        }
    }
    ctx->pc = 0x45B8F0u;
    // 0x45b8f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b8f4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45b8f8:
    // 0x45b8f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b8fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b900: 0x0  nop
    ctx->pc = 0x45b900u;
    // NOP
    // 0x45b904: 0x0  nop
    ctx->pc = 0x45b904u;
    // NOP
    // 0x45b908: 0x0  nop
    ctx->pc = 0x45b908u;
    // NOP
    // 0x45b90c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B90Cu;
    {
        const bool branch_taken_0x45b90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b90c) {
            ctx->pc = 0x45B8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b8f8;
        }
    }
    ctx->pc = 0x45B914u;
label_45b914:
    // 0x45b914: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45b914u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x45b918: 0x24020840  addiu       $v0, $zero, 0x840
    ctx->pc = 0x45b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x45b91c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x45b920: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x45b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x45b924: 0xadf60000  sw          $s6, 0x0($t7)
    ctx->pc = 0x45b924u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 22));
    // 0x45b928: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x45b928u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x45b92c: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x45b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x45b930: 0xf  sync
    ctx->pc = 0x45b930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b934: 0x40f  sync.p
    ctx->pc = 0x45b934u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b938: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45b93c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b940: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45B940u;
    {
        const bool branch_taken_0x45b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B940u;
        // 0x45b944: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b940) {
            ctx->pc = 0x45B994u;
            goto label_45b994;
        }
    }
    ctx->pc = 0x45B948u;
    // 0x45b948: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45b948u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45b94c: 0xf  sync
    ctx->pc = 0x45b94cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b950: 0x40f  sync.p
    ctx->pc = 0x45b950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45b954:
    // 0x45b954: 0x0  nop
    ctx->pc = 0x45b954u;
    // NOP
    // 0x45b958: 0x0  nop
    ctx->pc = 0x45b958u;
    // NOP
    // 0x45b95c: 0x0  nop
    ctx->pc = 0x45b95cu;
    // NOP
    // 0x45b960: 0x0  nop
    ctx->pc = 0x45b960u;
    // NOP
    // 0x45b964: 0x0  nop
    ctx->pc = 0x45b964u;
    // NOP
    // 0x45b968: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B968u;
    {
        const bool branch_taken_0x45b968 = (false);
        if (branch_taken_0x45b968) {
            ctx->pc = 0x45B954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b954;
        }
    }
    ctx->pc = 0x45B970u;
    // 0x45b970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45b974: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45b978:
    // 0x45b978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45b978u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45b97c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45b980: 0x0  nop
    ctx->pc = 0x45b980u;
    // NOP
    // 0x45b984: 0x0  nop
    ctx->pc = 0x45b984u;
    // NOP
    // 0x45b988: 0x0  nop
    ctx->pc = 0x45b988u;
    // NOP
    // 0x45b98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B98Cu;
    {
        const bool branch_taken_0x45b98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45B98Cu;
        // 0x45b990: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b98c) {
            ctx->pc = 0x45B978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B994u;
label_45b994:
    // 0x45b994: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x45b994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x45b998: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45b998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45b99c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x45b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x45b9a0: 0x350802c0  ori         $t0, $t0, 0x2C0
    ctx->pc = 0x45b9a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)704);
    // 0x45b9a4: 0x34c60840  ori         $a2, $a2, 0x840
    ctx->pc = 0x45b9a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2112);
    // 0x45b9a8: 0x34841340  ori         $a0, $a0, 0x1340
    ctx->pc = 0x45b9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4928);
    // 0x45b9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45b9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b9b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x45b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x45b9b4: 0x0  nop
    ctx->pc = 0x45b9b4u;
    // NOP
label_45b9b8:
    // 0x45b9b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x45b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b9bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45b9c0: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x45b9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x45b9c4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b9c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45b9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45b9cc: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x45b9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x45b9d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x45b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45b9d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45b9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45b9d8: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x45b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x45b9dc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45b9e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45b9e4: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x45b9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_45b9e8:
    // 0x45b9e8: 0x42000039  di
    ctx->pc = 0x45b9e8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45b9ec: 0x40f  sync.p
    ctx->pc = 0x45b9ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45b9f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45b9f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x45b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x45b9f8: 0x0  nop
    ctx->pc = 0x45b9f8u;
    // NOP
    // 0x45b9fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45B9FCu;
    {
        const bool branch_taken_0x45b9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b9fc) {
            ctx->pc = 0x45B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b9e8;
        }
    }
    ctx->pc = 0x45BA04u;
    // 0x45ba04: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x45ba04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x45ba08: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45ba08u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ba0c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45ba0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba10: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45ba10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ba14: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45ba14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45ba18: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45ba18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45ba1c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45ba1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45ba20: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45ba20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45ba24: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45ba24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45ba28: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45ba28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45ba2c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45ba2cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45ba30: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45ba30u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ba34: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45ba34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45ba38: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45ba38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45ba3c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45ba3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45ba40: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45ba40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45ba44: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45ba44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45ba48: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45ba48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45ba4c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45ba4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba50: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45ba50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45ba54: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45ba54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45ba58: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45ba58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba5c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45ba5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba60: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45ba60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba64: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45ba64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ba68: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x45ba68u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45ba6c: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x45ba6cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x45ba70: 0xd90e0000  lqc2        $vf14, 0x0($t0)
    ctx->pc = 0x45ba70u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45ba74: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45ba74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba78: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x45ba78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45ba7c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x45ba7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45ba80: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x45ba80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45ba84: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x45ba84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba88: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x45ba88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45ba8c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x45ba8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba90: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x45ba90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x45ba94: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x45ba94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45ba98: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x45ba98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45ba9c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45ba9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45baa0: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x45baa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45baa4: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45baa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45baa8: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x45baa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45baac: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45baacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bab0: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x45bab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45bab4: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45bab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bab8: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x45bab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45babc: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x45babcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bac0: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x45bac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x45bac4: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x45bac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bac8: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x45bac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x45bacc: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x45baccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bad0: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x45bad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x45bad4: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x45bad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bad8: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x45bad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x45badc: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x45badcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45bae0: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x45bae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45bae4: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x45bae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45bae8: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x45bae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45baec: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x45baecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x45baf0: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x45baf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x45baf4: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x45baf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x45baf8: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x45baf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x45bafc: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x45bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45bb00: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x45bb00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45bb04: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x45bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45bb08: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x45bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45bb0c: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x45bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x45bb10: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x45bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x45bb14: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x45bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x45bb18: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x45bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x45bb1c: 0x42000038  ei
    ctx->pc = 0x45bb1cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45bb20: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x45bb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x45bb24: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x45bb24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x45bb28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x45bb2c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x45bb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x45bb30: 0x28e200b0  slti        $v0, $a3, 0xB0
    ctx->pc = 0x45bb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x45bb34: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x45BB34u;
    {
        const bool branch_taken_0x45bb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BB34u;
        // 0x45bb38: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bb34) {
            ctx->pc = 0x45B9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b9b8;
        }
    }
    ctx->pc = 0x45BB3Cu;
    // 0x45bb3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x45bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x45bb40: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bb44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x45BB44u;
    {
        const bool branch_taken_0x45bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb44) {
            ctx->pc = 0x45BB78u;
            goto label_45bb78;
        }
    }
    ctx->pc = 0x45BB4Cu;
    // 0x45bb4c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x45bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x45bb50: 0xf  sync
    ctx->pc = 0x45bb50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bb54: 0x40f  sync.p
    ctx->pc = 0x45bb54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45bb58:
    // 0x45bb58: 0x0  nop
    ctx->pc = 0x45bb58u;
    // NOP
    // 0x45bb5c: 0x0  nop
    ctx->pc = 0x45bb5cu;
    // NOP
    // 0x45bb60: 0x0  nop
    ctx->pc = 0x45bb60u;
    // NOP
    // 0x45bb64: 0x0  nop
    ctx->pc = 0x45bb64u;
    // NOP
    // 0x45bb68: 0x0  nop
    ctx->pc = 0x45bb68u;
    // NOP
    // 0x45bb6c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BB6Cu;
    {
        const bool branch_taken_0x45bb6c = (false);
        if (branch_taken_0x45bb6c) {
            ctx->pc = 0x45BB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bb58;
        }
    }
    ctx->pc = 0x45BB74u;
    // 0x45bb74: 0x0  nop
    ctx->pc = 0x45bb74u;
    // NOP
label_45bb78:
    // 0x45bb78: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45bb7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bb80: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45BB80u;
    {
        const bool branch_taken_0x45bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb80) {
            ctx->pc = 0x45BBD4u;
            goto label_45bbd4;
        }
    }
    ctx->pc = 0x45BB88u;
    // 0x45bb88: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45bb8c: 0xf  sync
    ctx->pc = 0x45bb8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bb90: 0x40f  sync.p
    ctx->pc = 0x45bb90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45bb94:
    // 0x45bb94: 0x0  nop
    ctx->pc = 0x45bb94u;
    // NOP
    // 0x45bb98: 0x0  nop
    ctx->pc = 0x45bb98u;
    // NOP
    // 0x45bb9c: 0x0  nop
    ctx->pc = 0x45bb9cu;
    // NOP
    // 0x45bba0: 0x0  nop
    ctx->pc = 0x45bba0u;
    // NOP
    // 0x45bba4: 0x0  nop
    ctx->pc = 0x45bba4u;
    // NOP
    // 0x45bba8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BBA8u;
    {
        const bool branch_taken_0x45bba8 = (false);
        if (branch_taken_0x45bba8) {
            ctx->pc = 0x45BB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bb94;
        }
    }
    ctx->pc = 0x45BBB0u;
    // 0x45bbb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bbb4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45bbb8:
    // 0x45bbb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45bbbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bbc0: 0x0  nop
    ctx->pc = 0x45bbc0u;
    // NOP
    // 0x45bbc4: 0x0  nop
    ctx->pc = 0x45bbc4u;
    // NOP
    // 0x45bbc8: 0x0  nop
    ctx->pc = 0x45bbc8u;
    // NOP
    // 0x45bbcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BBCCu;
    {
        const bool branch_taken_0x45bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bbcc) {
            ctx->pc = 0x45BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bbb8;
        }
    }
    ctx->pc = 0x45BBD4u;
label_45bbd4:
    // 0x45bbd4: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x45bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x45bbd8: 0x24021340  addiu       $v0, $zero, 0x1340
    ctx->pc = 0x45bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x45bbdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bbe0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x45bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x45bbe4: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x45bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x45bbe8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45bbec: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x45bbecu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 23)); // MMIO: 0x10000000
    // 0x45bbf0: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x45bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x45bbf4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x45bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x45bbf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45bbfc: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x45bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x45bc00: 0xf  sync
    ctx->pc = 0x45bc00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bc04: 0x40f  sync.p
    ctx->pc = 0x45bc04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bc08: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x45bc08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc0c: 0x8fb2005c  lw          $s2, 0x5C($sp)
    ctx->pc = 0x45bc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x45bc10: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x45bc10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc14: 0x320982d  daddu       $s3, $t9, $zero
    ctx->pc = 0x45bc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc18: 0x2a4200b0  slti        $v0, $s2, 0xB0
    ctx->pc = 0x45bc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x45bc1c: 0x1040fed2  beqz        $v0, . + 4 + (-0x12E << 2)
    ctx->pc = 0x45BC1Cu;
    {
        const bool branch_taken_0x45bc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BC1Cu;
        // 0x45bc20: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bc1c) {
            ctx->pc = 0x45B768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b768;
        }
    }
    ctx->pc = 0x45BC24u;
    // 0x45bc24: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x45bc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_45bc28:
    // 0x45bc28: 0x1440017d  bnez        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x45BC28u;
    {
        const bool branch_taken_0x45bc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BC28u;
        // 0x45bc2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bc28) {
            ctx->pc = 0x45C220u;
            goto label_45c220;
        }
    }
    ctx->pc = 0x45BC30u;
    // 0x45bc30: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x45bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x45bc34: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x45bc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x45bc38: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x45bc38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x45bc3c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x45bc3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x45bc40: 0x44880  sll         $t1, $a0, 2
    ctx->pc = 0x45bc40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x45bc44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bc48: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45bc4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45bc50: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45bc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45bc54: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45BC54u;
    {
        const bool branch_taken_0x45bc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BC54u;
        // 0x45bc58: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bc54) {
            ctx->pc = 0x45BC90u;
            goto label_45bc90;
        }
    }
    ctx->pc = 0x45BC5Cu;
    // 0x45bc5c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45bc60: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45bc64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45bc64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45bc68: 0xf  sync
    ctx->pc = 0x45bc68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bc6c: 0x40f  sync.p
    ctx->pc = 0x45bc6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45bc70:
    // 0x45bc70: 0x0  nop
    ctx->pc = 0x45bc70u;
    // NOP
    // 0x45bc74: 0x0  nop
    ctx->pc = 0x45bc74u;
    // NOP
    // 0x45bc78: 0x0  nop
    ctx->pc = 0x45bc78u;
    // NOP
    // 0x45bc7c: 0x0  nop
    ctx->pc = 0x45bc7cu;
    // NOP
    // 0x45bc80: 0x0  nop
    ctx->pc = 0x45bc80u;
    // NOP
    // 0x45bc84: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BC84u;
    {
        const bool branch_taken_0x45bc84 = (false);
        if (branch_taken_0x45bc84) {
            ctx->pc = 0x45BC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bc70;
        }
    }
    ctx->pc = 0x45BC8Cu;
    // 0x45bc8c: 0x0  nop
    ctx->pc = 0x45bc8cu;
    // NOP
label_45bc90:
    // 0x45bc90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bc94: 0x47200  sll         $t6, $a0, 8
    ctx->pc = 0x45bc94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x45bc98: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45bc9c: 0x2497823  subu        $t7, $s2, $t1
    ctx->pc = 0x45bc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x45bca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x45bca4: 0x252a0003  addiu       $t2, $t1, 0x3
    ctx->pc = 0x45bca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x45bca8: 0x967c3  sra         $t4, $t1, 31
    ctx->pc = 0x45bca8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 31));
    // 0x45bcac: 0x45900  sll         $t3, $a0, 4
    ctx->pc = 0x45bcacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x45bcb0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45bcb4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x45BCB4u;
    {
        const bool branch_taken_0x45bcb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BCB4u;
        // 0x45bcb8: 0x46980  sll         $t5, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bcb4) {
            ctx->pc = 0x45BD14u;
            goto label_45bd14;
        }
    }
    ctx->pc = 0x45BCBCu;
    // 0x45bcbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bcc0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45bcc4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45bcc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45bcc8u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45bccc: 0xf  sync
    ctx->pc = 0x45bcccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bcd0: 0x40f  sync.p
    ctx->pc = 0x45bcd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45bcd4:
    // 0x45bcd4: 0x0  nop
    ctx->pc = 0x45bcd4u;
    // NOP
    // 0x45bcd8: 0x0  nop
    ctx->pc = 0x45bcd8u;
    // NOP
    // 0x45bcdc: 0x0  nop
    ctx->pc = 0x45bcdcu;
    // NOP
    // 0x45bce0: 0x0  nop
    ctx->pc = 0x45bce0u;
    // NOP
    // 0x45bce4: 0x0  nop
    ctx->pc = 0x45bce4u;
    // NOP
    // 0x45bce8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BCE8u;
    {
        const bool branch_taken_0x45bce8 = (false);
        if (branch_taken_0x45bce8) {
            ctx->pc = 0x45BCD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bcd4;
        }
    }
    ctx->pc = 0x45BCF0u;
    // 0x45bcf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bcf4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45bcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45bcf8:
    // 0x45bcf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45bcfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bd00: 0x0  nop
    ctx->pc = 0x45bd00u;
    // NOP
    // 0x45bd04: 0x0  nop
    ctx->pc = 0x45bd04u;
    // NOP
    // 0x45bd08: 0x0  nop
    ctx->pc = 0x45bd08u;
    // NOP
    // 0x45bd0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BD0Cu;
    {
        const bool branch_taken_0x45bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bd0c) {
            ctx->pc = 0x45BCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bcf8;
        }
    }
    ctx->pc = 0x45BD14u;
label_45bd14:
    // 0x45bd14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bd18: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x45bd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45bd1c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45bd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45bd20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x45bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45bd24: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x45bd24u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45bd28: 0x89202a  slt         $a0, $a0, $t1
    ctx->pc = 0x45bd28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x45bd2c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x45bd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bd30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bd34: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45bd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45bd38: 0x124280b  movn        $a1, $t1, $a0
    ctx->pc = 0x45bd38u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    // 0x45bd3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bd40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45bd40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45bd44: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45bd48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45bd4c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x45bd4cu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x45bd50: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x45bd50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x45bd54: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x45bd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x45bd58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bd5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x45bd5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45bd60: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45bd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45bd64: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45bd68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45bd68u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45bd6c: 0xf  sync
    ctx->pc = 0x45bd6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bd70: 0x40f  sync.p
    ctx->pc = 0x45bd70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bd74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45bd78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bd7c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45BD7Cu;
    {
        const bool branch_taken_0x45bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BD7Cu;
        // 0x45bd80: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bd7c) {
            ctx->pc = 0x45BDD4u;
            goto label_45bdd4;
        }
    }
    ctx->pc = 0x45BD84u;
    // 0x45bd84: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45bd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45bd88: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x45bd88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45bd8c: 0xf  sync
    ctx->pc = 0x45bd8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bd90: 0x40f  sync.p
    ctx->pc = 0x45bd90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45bd94:
    // 0x45bd94: 0x0  nop
    ctx->pc = 0x45bd94u;
    // NOP
    // 0x45bd98: 0x0  nop
    ctx->pc = 0x45bd98u;
    // NOP
    // 0x45bd9c: 0x0  nop
    ctx->pc = 0x45bd9cu;
    // NOP
    // 0x45bda0: 0x0  nop
    ctx->pc = 0x45bda0u;
    // NOP
    // 0x45bda4: 0x0  nop
    ctx->pc = 0x45bda4u;
    // NOP
    // 0x45bda8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BDA8u;
    {
        const bool branch_taken_0x45bda8 = (false);
        if (branch_taken_0x45bda8) {
            ctx->pc = 0x45BD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bd94;
        }
    }
    ctx->pc = 0x45BDB0u;
    // 0x45bdb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bdb4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45bdb8:
    // 0x45bdb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45bdbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bdc0: 0x0  nop
    ctx->pc = 0x45bdc0u;
    // NOP
    // 0x45bdc4: 0x0  nop
    ctx->pc = 0x45bdc4u;
    // NOP
    // 0x45bdc8: 0x0  nop
    ctx->pc = 0x45bdc8u;
    // NOP
    // 0x45bdcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BDCCu;
    {
        const bool branch_taken_0x45bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bdcc) {
            ctx->pc = 0x45BDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bdb8;
        }
    }
    ctx->pc = 0x45BDD4u;
label_45bdd4:
    // 0x45bdd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bdd8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45bddc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45bde0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45bde0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45bde4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bde8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45bde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45bdec: 0x240402c0  addiu       $a0, $zero, 0x2C0
    ctx->pc = 0x45bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x45bdf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45bdf4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45bdf4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45bdf8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45bdfc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45be00: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x45be00u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x45be04: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x45be04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x45be08: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x45be08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x45be0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45be10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45be10u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45be14: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45be14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45be18: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45be1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45be1cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45be20: 0xf  sync
    ctx->pc = 0x45be20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45be24: 0x40f  sync.p
    ctx->pc = 0x45be24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45be28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45be2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45be30: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45BE30u;
    {
        const bool branch_taken_0x45be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BE30u;
        // 0x45be34: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45be30) {
            ctx->pc = 0x45BE8Cu;
            goto label_45be8c;
        }
    }
    ctx->pc = 0x45BE38u;
    // 0x45be38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45be3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45be3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45be40: 0xf  sync
    ctx->pc = 0x45be40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45be44: 0x40f  sync.p
    ctx->pc = 0x45be44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45be48:
    // 0x45be48: 0x0  nop
    ctx->pc = 0x45be48u;
    // NOP
    // 0x45be4c: 0x0  nop
    ctx->pc = 0x45be4cu;
    // NOP
    // 0x45be50: 0x0  nop
    ctx->pc = 0x45be50u;
    // NOP
    // 0x45be54: 0x0  nop
    ctx->pc = 0x45be54u;
    // NOP
    // 0x45be58: 0x0  nop
    ctx->pc = 0x45be58u;
    // NOP
    // 0x45be5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BE5Cu;
    {
        const bool branch_taken_0x45be5c = (false);
        if (branch_taken_0x45be5c) {
            ctx->pc = 0x45BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45be48;
        }
    }
    ctx->pc = 0x45BE64u;
    // 0x45be64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45be64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45be68: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45be6c: 0x0  nop
    ctx->pc = 0x45be6cu;
    // NOP
label_45be70:
    // 0x45be70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45be70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45be74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45be78: 0x0  nop
    ctx->pc = 0x45be78u;
    // NOP
    // 0x45be7c: 0x0  nop
    ctx->pc = 0x45be7cu;
    // NOP
    // 0x45be80: 0x0  nop
    ctx->pc = 0x45be80u;
    // NOP
    // 0x45be84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BE84u;
    {
        const bool branch_taken_0x45be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45be84) {
            ctx->pc = 0x45BE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45be70;
        }
    }
    ctx->pc = 0x45BE8Cu;
label_45be8c:
    // 0x45be8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45be90: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45be94: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45be98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45be98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45be9c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45be9cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45bea0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45bea4: 0x24040840  addiu       $a0, $zero, 0x840
    ctx->pc = 0x45bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x45bea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45beac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45beacu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45beb0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45beb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45beb8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x45beb8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x45bebc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x45bebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x45bec0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45bec4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x45bec4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x45bec8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45bec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45becc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45bed0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45bed0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45bed4: 0xf  sync
    ctx->pc = 0x45bed4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bed8: 0x40f  sync.p
    ctx->pc = 0x45bed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bedc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45bee0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bee4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45BEE4u;
    {
        const bool branch_taken_0x45bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BEE4u;
        // 0x45bee8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bee4) {
            ctx->pc = 0x45BF3Cu;
            goto label_45bf3c;
        }
    }
    ctx->pc = 0x45BEECu;
    // 0x45beec: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45bef0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45bef0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45bef4: 0xf  sync
    ctx->pc = 0x45bef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bef8: 0x40f  sync.p
    ctx->pc = 0x45bef8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45befc:
    // 0x45befc: 0x0  nop
    ctx->pc = 0x45befcu;
    // NOP
    // 0x45bf00: 0x0  nop
    ctx->pc = 0x45bf00u;
    // NOP
    // 0x45bf04: 0x0  nop
    ctx->pc = 0x45bf04u;
    // NOP
    // 0x45bf08: 0x0  nop
    ctx->pc = 0x45bf08u;
    // NOP
    // 0x45bf0c: 0x0  nop
    ctx->pc = 0x45bf0cu;
    // NOP
    // 0x45bf10: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BF10u;
    {
        const bool branch_taken_0x45bf10 = (false);
        if (branch_taken_0x45bf10) {
            ctx->pc = 0x45BEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45befc;
        }
    }
    ctx->pc = 0x45BF18u;
    // 0x45bf18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45bf1c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45bf20:
    // 0x45bf20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45bf24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45bf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45bf28: 0x0  nop
    ctx->pc = 0x45bf28u;
    // NOP
    // 0x45bf2c: 0x0  nop
    ctx->pc = 0x45bf2cu;
    // NOP
    // 0x45bf30: 0x0  nop
    ctx->pc = 0x45bf30u;
    // NOP
    // 0x45bf34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BF34u;
    {
        const bool branch_taken_0x45bf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bf34) {
            ctx->pc = 0x45BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bf20;
        }
    }
    ctx->pc = 0x45BF3Cu;
label_45bf3c:
    // 0x45bf3c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x45bf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf40: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x45bf40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf44: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf48: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x45bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf4c: 0x350802c0  ori         $t0, $t0, 0x2C0
    ctx->pc = 0x45bf4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)704);
    // 0x45bf50: 0x34c60840  ori         $a2, $a2, 0x840
    ctx->pc = 0x45bf50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2112);
    // 0x45bf54: 0x34841340  ori         $a0, $a0, 0x1340
    ctx->pc = 0x45bf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4928);
    // 0x45bf58: 0x19200065  blez        $t1, . + 4 + (0x65 << 2)
    ctx->pc = 0x45BF58u;
    {
        const bool branch_taken_0x45bf58 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x45BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45BF58u;
        // 0x45bf5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bf58) {
            ctx->pc = 0x45C0F0u;
            goto label_45c0f0;
        }
    }
    ctx->pc = 0x45BF60u;
    // 0x45bf60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x45bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x45bf64: 0x0  nop
    ctx->pc = 0x45bf64u;
    // NOP
label_45bf68:
    // 0x45bf68: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x45bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45bf6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf70: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x45bf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x45bf74: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45bf78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf7c: 0xe4213fa4  swc1        $f1, 0x3FA4($at)
    ctx->pc = 0x45bf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA4u, bits); }
    // 0x45bf80: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x45bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45bf84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf88: 0xe4203fa8  swc1        $f0, 0x3FA8($at)
    ctx->pc = 0x45bf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x45bf8c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45bf90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45bf94: 0xe4213fac  swc1        $f1, 0x3FAC($at)
    ctx->pc = 0x45bf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FACu, bits); }
label_45bf98:
    // 0x45bf98: 0x42000039  di
    ctx->pc = 0x45bf98u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45bf9c: 0x40f  sync.p
    ctx->pc = 0x45bf9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45bfa0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45bfa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x45bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x45bfa8: 0x0  nop
    ctx->pc = 0x45bfa8u;
    // NOP
    // 0x45bfac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45BFACu;
    {
        const bool branch_taken_0x45bfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bfac) {
            ctx->pc = 0x45BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bf98;
        }
    }
    ctx->pc = 0x45BFB4u;
    // 0x45bfb4: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x45bfb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x45bfb8: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45bfb8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45bfbc: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45bfbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45bfc0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45bfc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45bfc4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45bfc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45bfc8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45bfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45bfcc: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45bfccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45bfd0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45bfd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45bfd4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45bfd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45bfd8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45bfd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45bfdc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45bfdcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45bfe0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45bfe0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45bfe4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45bfe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45bfe8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45bfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45bfec: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45bfecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45bff0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45bff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45bff4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45bff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45bff8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45bff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45bffc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45bffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c000: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45c000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45c004: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45c004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c008: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45c008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c00c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45c00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c010: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45c010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c014: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45c014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c018: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x45c018u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45c01c: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x45c01cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x45c020: 0xd90e0000  lqc2        $vf14, 0x0($t0)
    ctx->pc = 0x45c020u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45c024: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45c024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c028: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x45c028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45c02c: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x45c02cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c030: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x45c030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c034: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x45c034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c038: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x45c038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45c03c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x45c03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c040: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x45c040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x45c044: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x45c044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c048: 0x4be7468f  vmsubw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x45c048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45c04c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c050: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x45c050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c054: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c058: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x45c058u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c05c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c05cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c060: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x45c060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c064: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c068: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x45c068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c06c: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x45c06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c070: 0x4be3d70b  vmaddw.xyzw $vf28, $vf26, $vf3w
    ctx->pc = 0x45c070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x45c074: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x45c074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c078: 0x4be3d74b  vmaddw.xyzw $vf29, $vf26, $vf3w
    ctx->pc = 0x45c078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x45c07c: 0x4be2c9be  vmulaz.xyzw $ACC, $vf25, $vf2z
    ctx->pc = 0x45c07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c080: 0x4be2d78b  vmaddw.xyzw $vf30, $vf26, $vf2w
    ctx->pc = 0x45c080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x45c084: 0x4be3c9be  vmulaz.xyzw $ACC, $vf25, $vf3z
    ctx->pc = 0x45c084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c088: 0x4be2d7cb  vmaddw.xyzw $vf31, $vf26, $vf2w
    ctx->pc = 0x45c088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x45c08c: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x45c08cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c090: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x45c090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c094: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x45c094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c098: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x45c098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c09c: 0x4bfbe728  vadd.xyzw   $vf28, $vf28, $vf27
    ctx->pc = 0x45c09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x45c0a0: 0x4bfbef68  vadd.xyzw   $vf29, $vf29, $vf27
    ctx->pc = 0x45c0a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x45c0a4: 0x4bfbf7a8  vadd.xyzw   $vf30, $vf30, $vf27
    ctx->pc = 0x45c0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x45c0a8: 0x4bfbffe8  vadd.xyzw   $vf31, $vf31, $vf27
    ctx->pc = 0x45c0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x45c0ac: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x45c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45c0b0: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x45c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45c0b4: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x45c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45c0b8: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x45c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45c0bc: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x45c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x45c0c0: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x45c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x45c0c4: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x45c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x45c0c8: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x45c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x45c0cc: 0x42000038  ei
    ctx->pc = 0x45c0ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c0d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x45c0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x45c0d4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x45c0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x45c0d8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x45c0dc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x45c0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x45c0e0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x45c0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x45c0e4: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x45C0E4u;
    {
        const bool branch_taken_0x45c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C0E4u;
        // 0x45c0e8: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c0e4) {
            ctx->pc = 0x45BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bf68;
        }
    }
    ctx->pc = 0x45C0ECu;
    // 0x45c0ec: 0x0  nop
    ctx->pc = 0x45c0ecu;
    // NOP
label_45c0f0:
    // 0x45c0f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c0f4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45c0f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45c0fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45c0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45c100: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45C100u;
    {
        const bool branch_taken_0x45c100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C100u;
        // 0x45c104: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c100) {
            ctx->pc = 0x45C138u;
            goto label_45c138;
        }
    }
    ctx->pc = 0x45C108u;
    // 0x45c108: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45c10c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45c110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45c110u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45c114: 0xf  sync
    ctx->pc = 0x45c114u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c118: 0x40f  sync.p
    ctx->pc = 0x45c118u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c11c:
    // 0x45c11c: 0x0  nop
    ctx->pc = 0x45c11cu;
    // NOP
    // 0x45c120: 0x0  nop
    ctx->pc = 0x45c120u;
    // NOP
    // 0x45c124: 0x0  nop
    ctx->pc = 0x45c124u;
    // NOP
    // 0x45c128: 0x0  nop
    ctx->pc = 0x45c128u;
    // NOP
    // 0x45c12c: 0x0  nop
    ctx->pc = 0x45c12cu;
    // NOP
    // 0x45c130: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C130u;
    {
        const bool branch_taken_0x45c130 = (false);
        if (branch_taken_0x45c130) {
            ctx->pc = 0x45C11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c11c;
        }
    }
    ctx->pc = 0x45C138u;
label_45c138:
    // 0x45c138: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c13c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45c140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45c140u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45c144: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45c144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45c148: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45C148u;
    {
        const bool branch_taken_0x45c148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C148u;
        // 0x45c14c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c148) {
            ctx->pc = 0x45C1A4u;
            goto label_45c1a4;
        }
    }
    ctx->pc = 0x45C150u;
    // 0x45c150: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45c154: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45c158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45c158u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45c15c: 0xf  sync
    ctx->pc = 0x45c15cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c160: 0x40f  sync.p
    ctx->pc = 0x45c160u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c164:
    // 0x45c164: 0x0  nop
    ctx->pc = 0x45c164u;
    // NOP
    // 0x45c168: 0x0  nop
    ctx->pc = 0x45c168u;
    // NOP
    // 0x45c16c: 0x0  nop
    ctx->pc = 0x45c16cu;
    // NOP
    // 0x45c170: 0x0  nop
    ctx->pc = 0x45c170u;
    // NOP
    // 0x45c174: 0x0  nop
    ctx->pc = 0x45c174u;
    // NOP
    // 0x45c178: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C178u;
    {
        const bool branch_taken_0x45c178 = (false);
        if (branch_taken_0x45c178) {
            ctx->pc = 0x45C164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c164;
        }
    }
    ctx->pc = 0x45C180u;
    // 0x45c180: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c184: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45c184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45c188:
    // 0x45c188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45c188u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45c18c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c190: 0x0  nop
    ctx->pc = 0x45c190u;
    // NOP
    // 0x45c194: 0x0  nop
    ctx->pc = 0x45c194u;
    // NOP
    // 0x45c198: 0x0  nop
    ctx->pc = 0x45c198u;
    // NOP
    // 0x45c19c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C19Cu;
    {
        const bool branch_taken_0x45c19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c19c) {
            ctx->pc = 0x45C188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c188;
        }
    }
    ctx->pc = 0x45C1A4u;
label_45c1a4:
    // 0x45c1a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c1a8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45c1ac: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45c1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45c1b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45c1b0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45c1b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c1b8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45c1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45c1bc: 0x24041340  addiu       $a0, $zero, 0x1340
    ctx->pc = 0x45c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x45c1c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c1c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45c1c4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45c1c8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45c1cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c1d0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x45c1d0u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 23)); // MMIO: 0x10000000
    // 0x45c1d4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45c1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45c1d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c1dc: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x45c1dcu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 11)); // MMIO: 0x10000000
    // 0x45c1e0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45c1e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45c1e4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45c1e8: 0xf  sync
    ctx->pc = 0x45c1e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c1ec: 0x40f  sync.p
    ctx->pc = 0x45c1ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c1f0: 0x2cdb021  addu        $s6, $s6, $t5
    ctx->pc = 0x45c1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x45c1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45c1f8: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x45c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x45c1fc: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x45c1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x45c200: 0x2eeb821  addu        $s7, $s7, $t6
    ctx->pc = 0x45c200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 14)));
    // 0x45c204: 0x122500b  movn        $t2, $t1, $v0
    ctx->pc = 0x45c204u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 9));
    // 0x45c208: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x45c208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x45c20c: 0xa1083  sra         $v0, $t2, 2
    ctx->pc = 0x45c20cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 2));
    // 0x45c210: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x45c210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c214: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45c214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45c218: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x45c218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x45c21c: 0x0  nop
    ctx->pc = 0x45c21cu;
    // NOP
label_45c220:
    // 0x45c220: 0x5a400119  blezl       $s2, . + 4 + (0x119 << 2)
    ctx->pc = 0x45C220u;
    {
        const bool branch_taken_0x45c220 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x45c220) {
            ctx->pc = 0x45C224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45C220u;
            // 0x45c224: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45C688u;
            goto label_45c688;
        }
    }
    ctx->pc = 0x45C228u;
    // 0x45c228: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x45c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x45c22c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x45c22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c230: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x45c234: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45c234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_45c238:
    // 0x45c238: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x45c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c23c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45c23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45c240: 0xe4203fa0  swc1        $f0, 0x3FA0($at)
    ctx->pc = 0x45c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA0u, bits); }
    // 0x45c244: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x45c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45c24c: 0xe4213fa8  swc1        $f1, 0x3FA8($at)
    ctx->pc = 0x45c24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003FA8u, bits); }
    // 0x45c250: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x45c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45c254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45c258: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x45c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x45c25c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x45c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c260: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45c260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45c264: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x45c264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
label_45c268:
    // 0x45c268: 0x42000039  di
    ctx->pc = 0x45c268u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c26c: 0x40f  sync.p
    ctx->pc = 0x45c26cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c270: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45c274: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45c274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45c278: 0x0  nop
    ctx->pc = 0x45c278u;
    // NOP
    // 0x45c27c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C27Cu;
    {
        const bool branch_taken_0x45c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c27c) {
            ctx->pc = 0x45C268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c268;
        }
    }
    ctx->pc = 0x45C284u;
    // 0x45c284: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c288: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x45c288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x45c28c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45c28cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c290: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45c290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c294: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45c294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c298: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45c298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45c29c: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45c29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45c2a0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45c2a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c2a4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45c2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45c2a8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45c2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45c2ac: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45c2acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c2b0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45c2b0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c2b4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45c2b4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c2b8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45c2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c2bc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45c2bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45c2c0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45c2c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45c2c4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45c2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45c2c8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45c2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c2cc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45c2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45c2d0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45c2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c2d4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45c2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45c2d8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45c2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c2dc: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45c2dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c2e0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45c2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c2e4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45c2e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c2e8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45c2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c2ec: 0xdad40000  lqc2        $vf20, 0x0($s6)
    ctx->pc = 0x45c2ecu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x45c2f0: 0xd84e0000  lqc2        $vf14, 0x0($v0)
    ctx->pc = 0x45c2f0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45c2f4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45c2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c2f8: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x45c2f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45c2fc: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x45c2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c300: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x45c300u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c304: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x45c304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c308: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x45c308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45c30c: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c310: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x45c310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c314: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c318: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x45c318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c31c: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c320: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x45c320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c324: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c328: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x45c328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c32c: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x45c32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c330: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x45c330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c334: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x45c334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c338: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x45c338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c33c: 0xfaf50000  sqc2        $vf21, 0x0($s7)
    ctx->pc = 0x45c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45c340: 0xfaf60010  sqc2        $vf22, 0x10($s7)
    ctx->pc = 0x45c340u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45c344: 0xfaf70020  sqc2        $vf23, 0x20($s7)
    ctx->pc = 0x45c344u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45c348: 0xfaf80030  sqc2        $vf24, 0x30($s7)
    ctx->pc = 0x45c348u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45c34c: 0x42000038  ei
    ctx->pc = 0x45c34cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c350: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45c354: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x45c354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x45c358: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x45c358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x45c35c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x45c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x45c360: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x45c360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x45c364: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x45c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x45c368: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45c368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45c36c: 0x14e0ffb2  bnez        $a3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x45C36Cu;
    {
        const bool branch_taken_0x45c36c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C36Cu;
        // 0x45c370: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c36c) {
            ctx->pc = 0x45C238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c238;
        }
    }
    ctx->pc = 0x45C374u;
    // 0x45c374: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x45C374u;
    {
        const bool branch_taken_0x45c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C374u;
        // 0x45c378: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c374) {
            ctx->pc = 0x45C688u;
            goto label_45c688;
        }
    }
    ctx->pc = 0x45C37Cu;
    // 0x45c37c: 0x0  nop
    ctx->pc = 0x45c37cu;
    // NOP
label_45c380:
    // 0x45c380: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x45c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c384: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x45c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c388: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x45c388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x45c38c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x45c38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x45c390: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x45c390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x45c394: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x45c394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x45c398: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x45c398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x45c39c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x45c39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x45c3a0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x45c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45c3a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45c3a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x45c3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x45c3ac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c3b0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x45c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c3b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x45c3b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x45c3b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x45c3b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45c3bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x45c3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x45c3c0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x45c3c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45c3c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x45c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45c3c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45c3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45c3cc: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x45c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45c3d0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x45c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c3d4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x45c3d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x45c3d8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x45c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c3dc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x45c3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x45c3e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x45c3e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45c3e4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x45c3e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45c3e8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x45c3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45c3ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x45c3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45c3f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45c3f4:
    // 0x45c3f4: 0x42000039  di
    ctx->pc = 0x45c3f4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c3f8: 0x40f  sync.p
    ctx->pc = 0x45c3f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c3fc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45c400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45c400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45c404: 0x0  nop
    ctx->pc = 0x45c404u;
    // NOP
    // 0x45c408: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C408u;
    {
        const bool branch_taken_0x45c408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c408) {
            ctx->pc = 0x45C3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c3f4;
        }
    }
    ctx->pc = 0x45C410u;
    // 0x45c410: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x45c410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x45c414: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45c414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45c418: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c418u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c41c: 0x4a0002ff  vnop
    ctx->pc = 0x45c41cu;
    // NOP operation, no action needed for VU0
    // 0x45c420: 0x4a0002ff  vnop
    ctx->pc = 0x45c420u;
    // NOP operation, no action needed for VU0
    // 0x45c424: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x45c424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45c428: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x45c428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x45c42c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45c42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45c430: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c430u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c434: 0x4a0002ff  vnop
    ctx->pc = 0x45c434u;
    // NOP operation, no action needed for VU0
    // 0x45c438: 0x4a0002ff  vnop
    ctx->pc = 0x45c438u;
    // NOP operation, no action needed for VU0
    // 0x45c43c: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x45c43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45c440: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x45c440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x45c444: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45c444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45c448: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c448u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c44c: 0x4a0002ff  vnop
    ctx->pc = 0x45c44cu;
    // NOP operation, no action needed for VU0
    // 0x45c450: 0x4a0002ff  vnop
    ctx->pc = 0x45c450u;
    // NOP operation, no action needed for VU0
    // 0x45c454: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x45c454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45c458: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x45c458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x45c45c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x45c45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45c460: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c460u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c464: 0x4a0002ff  vnop
    ctx->pc = 0x45c464u;
    // NOP operation, no action needed for VU0
    // 0x45c468: 0x4a0002ff  vnop
    ctx->pc = 0x45c468u;
    // NOP operation, no action needed for VU0
    // 0x45c46c: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x45c46cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45c470: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x45c470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x45c474: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x45c474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x45c478: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c478u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c47c: 0x4a0002ff  vnop
    ctx->pc = 0x45c47cu;
    // NOP operation, no action needed for VU0
    // 0x45c480: 0x4a0002ff  vnop
    ctx->pc = 0x45c480u;
    // NOP operation, no action needed for VU0
    // 0x45c484: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x45c484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45c488: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x45c488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x45c48c: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x45c48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x45c490: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c490u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c494: 0x4a0002ff  vnop
    ctx->pc = 0x45c494u;
    // NOP operation, no action needed for VU0
    // 0x45c498: 0x4a0002ff  vnop
    ctx->pc = 0x45c498u;
    // NOP operation, no action needed for VU0
    // 0x45c49c: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x45c49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45c4a0: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x45c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x45c4a4: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x45c4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x45c4a8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c4a8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c4ac: 0x4a0002ff  vnop
    ctx->pc = 0x45c4acu;
    // NOP operation, no action needed for VU0
    // 0x45c4b0: 0x4a0002ff  vnop
    ctx->pc = 0x45c4b0u;
    // NOP operation, no action needed for VU0
    // 0x45c4b4: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x45c4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45c4b8: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x45c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x45c4bc: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x45c4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x45c4c0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c4c0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c4c4: 0x4a0002ff  vnop
    ctx->pc = 0x45c4c4u;
    // NOP operation, no action needed for VU0
    // 0x45c4c8: 0x4a0002ff  vnop
    ctx->pc = 0x45c4c8u;
    // NOP operation, no action needed for VU0
    // 0x45c4cc: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x45c4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45c4d0: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x45c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x45c4d4: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x45c4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x45c4d8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c4d8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c4dc: 0x4a0002ff  vnop
    ctx->pc = 0x45c4dcu;
    // NOP operation, no action needed for VU0
    // 0x45c4e0: 0x4a0002ff  vnop
    ctx->pc = 0x45c4e0u;
    // NOP operation, no action needed for VU0
    // 0x45c4e4: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x45c4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45c4e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x45c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x45c4ec: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45c4ecu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c4f0: 0x4a0002ff  vnop
    ctx->pc = 0x45c4f0u;
    // NOP operation, no action needed for VU0
    // 0x45c4f4: 0x4a0002ff  vnop
    ctx->pc = 0x45c4f4u;
    // NOP operation, no action needed for VU0
    // 0x45c4f8: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x45c4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45c4fc: 0x42000038  ei
    ctx->pc = 0x45c4fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_45c500:
    // 0x45c500: 0x42000039  di
    ctx->pc = 0x45c500u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c504: 0x40f  sync.p
    ctx->pc = 0x45c504u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c508: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45c50c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45c50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45c510: 0x0  nop
    ctx->pc = 0x45c510u;
    // NOP
    // 0x45c514: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C514u;
    {
        const bool branch_taken_0x45c514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c514) {
            ctx->pc = 0x45C500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c500;
        }
    }
    ctx->pc = 0x45C51Cu;
    // 0x45c51c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x45c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45c520: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x45c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45c524: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x45c524u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c528: 0xd8690000  lqc2        $vf9, 0x0($v1)
    ctx->pc = 0x45c528u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45c52c: 0xd84f0000  lqc2        $vf15, 0x0($v0)
    ctx->pc = 0x45c52cu;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45c530: 0x42000038  ei
    ctx->pc = 0x45c530u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c534: 0x1a400054  blez        $s2, . + 4 + (0x54 << 2)
    ctx->pc = 0x45C534u;
    {
        const bool branch_taken_0x45c534 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x45C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C534u;
        // 0x45c538: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c534) {
            ctx->pc = 0x45C688u;
            goto label_45c688;
        }
    }
    ctx->pc = 0x45C53Cu;
    // 0x45c53c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45c53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c540: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x45c540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x45c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x45c548: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45c548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x45c54c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x45c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45c550: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45c550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45c554: 0x0  nop
    ctx->pc = 0x45c554u;
    // NOP
label_45c558:
    // 0x45c558: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x45c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c55c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x45c55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x45c560: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x45c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c564: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x45c564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x45c568: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x45c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c56c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x45c56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x45c570: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x45c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c574: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x45c574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_45c578:
    // 0x45c578: 0x42000039  di
    ctx->pc = 0x45c578u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c57c: 0x40f  sync.p
    ctx->pc = 0x45c57cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c580: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45c584: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45c588: 0x0  nop
    ctx->pc = 0x45c588u;
    // NOP
    // 0x45c58c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C58Cu;
    {
        const bool branch_taken_0x45c58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c58c) {
            ctx->pc = 0x45C578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c578;
        }
    }
    ctx->pc = 0x45C594u;
    // 0x45c594: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x45c594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45c598: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45c598u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c59c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45c59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c5a0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45c5a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c5a4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45c5a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45c5a8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45c5a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45c5ac: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45c5acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c5b0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45c5b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45c5b4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45c5b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45c5b8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45c5b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c5bc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45c5bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c5c0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45c5c0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c5c4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45c5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c5c8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45c5c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45c5cc: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45c5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45c5d0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45c5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45c5d4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45c5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c5d8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45c5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45c5dc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45c5dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c5e0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45c5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45c5e4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45c5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c5e8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45c5e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c5ec: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45c5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c5f0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45c5f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c5f4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45c5f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c5f8: 0xdad40000  lqc2        $vf20, 0x0($s6)
    ctx->pc = 0x45c5f8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x45c5fc: 0xd8ce0000  lqc2        $vf14, 0x0($a2)
    ctx->pc = 0x45c5fcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x45c600: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45c600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c604: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x45c604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45c608: 0x4bee78a8  vadd.xyzw   $vf2, $vf15, $vf14
    ctx->pc = 0x45c608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45c60c: 0x4bee78ec  vsub.xyzw   $vf3, $vf15, $vf14
    ctx->pc = 0x45c60cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45c610: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x45c610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c614: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x45c614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45c618: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c61c: 0x4be39d49  vmaddy.xyzw $vf21, $vf19, $vf3y
    ctx->pc = 0x45c61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c620: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c624: 0x4be39d89  vmaddy.xyzw $vf22, $vf19, $vf3y
    ctx->pc = 0x45c624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c628: 0x4be291bc  vmulax.xyzw $ACC, $vf18, $vf2x
    ctx->pc = 0x45c628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c62c: 0x4be29dc9  vmaddy.xyzw $vf23, $vf19, $vf2y
    ctx->pc = 0x45c62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c630: 0x4be391bc  vmulax.xyzw $ACC, $vf18, $vf3x
    ctx->pc = 0x45c630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45c634: 0x4be29e09  vmaddy.xyzw $vf24, $vf19, $vf2y
    ctx->pc = 0x45c634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c638: 0x4bf4ad68  vadd.xyzw   $vf21, $vf21, $vf20
    ctx->pc = 0x45c638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45c63c: 0x4bf4b5a8  vadd.xyzw   $vf22, $vf22, $vf20
    ctx->pc = 0x45c63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[22], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45c640: 0x4bf4bde8  vadd.xyzw   $vf23, $vf23, $vf20
    ctx->pc = 0x45c640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45c644: 0x4bf4c628  vadd.xyzw   $vf24, $vf24, $vf20
    ctx->pc = 0x45c644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45c648: 0xfaf50000  sqc2        $vf21, 0x0($s7)
    ctx->pc = 0x45c648u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45c64c: 0xfaf60010  sqc2        $vf22, 0x10($s7)
    ctx->pc = 0x45c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45c650: 0xfaf70020  sqc2        $vf23, 0x20($s7)
    ctx->pc = 0x45c650u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45c654: 0xfaf80030  sqc2        $vf24, 0x30($s7)
    ctx->pc = 0x45c654u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45c658: 0x42000038  ei
    ctx->pc = 0x45c658u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c65c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45c660: 0x2e4b821  addu        $s7, $s7, $a0
    ctx->pc = 0x45c660u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x45c664: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x45c664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x45c668: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x45c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x45c66c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x45c66cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x45c670: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x45c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x45c674: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45c674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45c678: 0x14e0ffb7  bnez        $a3, . + 4 + (-0x49 << 2)
    ctx->pc = 0x45C678u;
    {
        const bool branch_taken_0x45c678 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C678u;
        // 0x45c67c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c678) {
            ctx->pc = 0x45C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c558;
        }
    }
    ctx->pc = 0x45C680u;
    // 0x45c680: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x45c680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x45c684: 0x0  nop
    ctx->pc = 0x45c684u;
    // NOP
label_45c688:
    // 0x45c688: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x45c688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x45c68c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x45c68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x45c690: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x45c690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45c694: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x45c694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45c698: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x45c698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45c69c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x45c69cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45c6a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45c6a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45c6a4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x45c6a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45c6a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x45c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x45C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C6ACu;
        // 0x45c6b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C6B4u;
    // 0x45c6b4: 0x0  nop
    ctx->pc = 0x45c6b4u;
    // NOP
    ctx->pc = 0x45c6b8u;
}
