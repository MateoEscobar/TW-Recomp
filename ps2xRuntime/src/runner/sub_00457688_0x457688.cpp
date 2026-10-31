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

// Function: sub_00457688
// Address: 0x457688 - 0x458320
void sub_00457688_0x457688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457688_0x457688");
#endif

    switch (ctx->pc) {
        case 0x4576f0u: goto label_4576f0;
        case 0x45771cu: goto label_45771c;
        case 0x457768u: goto label_457768;
        case 0x457790u: goto label_457790;
        case 0x4577f0u: goto label_4577f0;
        case 0x457890u: goto label_457890;
        case 0x4578acu: goto label_4578ac;
        case 0x4578f0u: goto label_4578f0;
        case 0x457918u: goto label_457918;
        case 0x457970u: goto label_457970;
        case 0x457998u: goto label_457998;
        case 0x4579f4u: goto label_4579f4;
        case 0x457a18u: goto label_457a18;
        case 0x457a50u: goto label_457a50;
        case 0x457b9cu: goto label_457b9c;
        case 0x457bd4u: goto label_457bd4;
        case 0x457bf8u: goto label_457bf8;
        case 0x457ca0u: goto label_457ca0;
        case 0x457d00u: goto label_457d00;
        case 0x457d28u: goto label_457d28;
        case 0x457db4u: goto label_457db4;
        case 0x457dd8u: goto label_457dd8;
        case 0x457e64u: goto label_457e64;
        case 0x457e88u: goto label_457e88;
        case 0x457ed0u: goto label_457ed0;
        case 0x45802cu: goto label_45802c;
        case 0x458074u: goto label_458074;
        case 0x458098u: goto label_458098;
        case 0x458138u: goto label_458138;
        case 0x458148u: goto label_458148;
        case 0x458208u: goto label_458208;
        case 0x458260u: goto label_458260;
        case 0x458270u: goto label_458270;
        default: break;
    }

    ctx->pc = 0x457688u;

    // 0x457688: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x457688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x45768c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x45768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x457690: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x457690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x457694: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x457694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457698: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x457698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x45769c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45769cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4576a0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4576a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x4576a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4576a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4576a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4576a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x4576ac: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4576acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x4576b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4576b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4576b4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4576b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x4576b8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x4576b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x4576bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4576bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4576c0: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x4576c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x4576c4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4576c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4576c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4576c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4576cc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x4576ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x4576d0: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x4576d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4576d4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4576d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4576d8: 0x8d120004  lw          $s2, 0x4($t0)
    ctx->pc = 0x4576d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4576dc: 0x8d11001c  lw          $s1, 0x1C($t0)
    ctx->pc = 0x4576dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x4576e0: 0x14a302bb  bne         $a1, $v1, . + 4 + (0x2BB << 2)
    ctx->pc = 0x4576E0u;
    {
        const bool branch_taken_0x4576e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4576E0u;
        // 0x4576e4: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4576e0) {
            ctx->pc = 0x4581D0u;
            goto label_4581d0;
        }
    }
    ctx->pc = 0x4576E8u;
    // 0x4576e8: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x4576E8u;
    SET_GPR_U32(ctx, 31, 0x4576F0u);
    ctx->pc = 0x4576ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4576E8u;
    // 0x4576ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x4576E8u, 0x4576F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4576F0u;
label_4576f0:
    // 0x4576f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4576f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4576f4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4576f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4576f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4576f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4576fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4576fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x457700: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x457700u;
    {
        const bool branch_taken_0x457700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x457704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457700u;
        // 0x457704: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457700) {
            ctx->pc = 0x457738u;
            goto label_457738;
        }
    }
    ctx->pc = 0x457708u;
    // 0x457708: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x457708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45770c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457710u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x457714: 0xf  sync
    ctx->pc = 0x457714u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457718: 0x40f  sync.p
    ctx->pc = 0x457718u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45771c:
    // 0x45771c: 0x0  nop
    ctx->pc = 0x45771cu;
    // NOP
    // 0x457720: 0x0  nop
    ctx->pc = 0x457720u;
    // NOP
    // 0x457724: 0x0  nop
    ctx->pc = 0x457724u;
    // NOP
    // 0x457728: 0x0  nop
    ctx->pc = 0x457728u;
    // NOP
    // 0x45772c: 0x0  nop
    ctx->pc = 0x45772cu;
    // NOP
    // 0x457730: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457730u;
    {
        const bool branch_taken_0x457730 = (false);
        if (branch_taken_0x457730) {
            ctx->pc = 0x45771Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45771c;
        }
    }
    ctx->pc = 0x457738u;
label_457738:
    // 0x457738: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45773c: 0x2a0500b8  slti        $a1, $s0, 0xB8
    ctx->pc = 0x45773cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x457740: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x457744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457744u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x457748: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45774c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45774Cu;
    {
        const bool branch_taken_0x45774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x457750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45774Cu;
        // 0x457750: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45774c) {
            ctx->pc = 0x4577ACu;
            goto label_4577ac;
        }
    }
    ctx->pc = 0x457754u;
    // 0x457754: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x457754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x457758: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45775c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45775cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x457760: 0xf  sync
    ctx->pc = 0x457760u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457764: 0x40f  sync.p
    ctx->pc = 0x457764u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457768:
    // 0x457768: 0x0  nop
    ctx->pc = 0x457768u;
    // NOP
    // 0x45776c: 0x0  nop
    ctx->pc = 0x45776cu;
    // NOP
    // 0x457770: 0x0  nop
    ctx->pc = 0x457770u;
    // NOP
    // 0x457774: 0x0  nop
    ctx->pc = 0x457774u;
    // NOP
    // 0x457778: 0x0  nop
    ctx->pc = 0x457778u;
    // NOP
    // 0x45777c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45777Cu;
    {
        const bool branch_taken_0x45777c = (false);
        if (branch_taken_0x45777c) {
            ctx->pc = 0x457768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457768;
        }
    }
    ctx->pc = 0x457784u;
    // 0x457784: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457788: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45778c: 0x0  nop
    ctx->pc = 0x45778cu;
    // NOP
label_457790:
    // 0x457790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457790u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x457794: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457798: 0x0  nop
    ctx->pc = 0x457798u;
    // NOP
    // 0x45779c: 0x0  nop
    ctx->pc = 0x45779cu;
    // NOP
    // 0x4577a0: 0x0  nop
    ctx->pc = 0x4577a0u;
    // NOP
    // 0x4577a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4577A4u;
    {
        const bool branch_taken_0x4577a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4577a4) {
            ctx->pc = 0x457790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457790;
        }
    }
    ctx->pc = 0x4577ACu;
label_4577ac:
    // 0x4577ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x4577acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x4577b0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4577b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4577b4: 0x34423f50  ori         $v0, $v0, 0x3F50
    ctx->pc = 0x4577b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16208);
    // 0x4577b8: 0x34843f60  ori         $a0, $a0, 0x3F60
    ctx->pc = 0x4577b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16224);
    // 0x4577bc: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x4577bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4577c0: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x4577c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4577c4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4577c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4577c8: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x4577c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4577cc: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x4577ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4577d0: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x4577d0u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 7));
    // 0x4577d4: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x4577d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4577d8: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x4577d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4577dc: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4577dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4577e0: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x4577e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4577e4: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x4577e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4577e8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x4577e8u;
    runtime->Store32(rdram, ctx, 0x70003F68u, GPR_U32(ctx, 7));
    // 0x4577ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4577ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4577f0:
    // 0x4577f0: 0x42000039  di
    ctx->pc = 0x4577f0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4577f4: 0x40f  sync.p
    ctx->pc = 0x4577f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4577f8: 0x40066000  mfc0        $a2, Status
    ctx->pc = 0x4577f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_status);
    // 0x4577fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4577fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x457800: 0x0  nop
    ctx->pc = 0x457800u;
    // NOP
    // 0x457804: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457804u;
    {
        const bool branch_taken_0x457804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x457804) {
            ctx->pc = 0x4577F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4577f0;
        }
    }
    ctx->pc = 0x45780Cu;
    // 0x45780c: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x45780cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x457810: 0x48c7a800  ctc2.ni     $a3, $vi21
    ctx->pc = 0x457810u;
    { uint32_t tmp = GPR_U32(ctx, 7); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x457814: 0x4a0002ff  vnop
    ctx->pc = 0x457814u;
    // NOP operation, no action needed for VU0
    // 0x457818: 0x4a0002ff  vnop
    ctx->pc = 0x457818u;
    // NOP operation, no action needed for VU0
    // 0x45781c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x45781cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457820: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x457820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x457824: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x457824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x457828: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x457828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45782c: 0x42000038  ei
    ctx->pc = 0x45782cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x457830: 0x14a00109  bnez        $a1, . + 4 + (0x109 << 2)
    ctx->pc = 0x457830u;
    {
        const bool branch_taken_0x457830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x457834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457830u;
        // 0x457834: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x457830) {
            ctx->pc = 0x457C58u;
            goto label_457c58;
        }
    }
    ctx->pc = 0x457838u;
    // 0x457838: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x457838u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x45783c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x45783cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x457840: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x457840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x457844: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x457844u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x457848: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x457848u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45784c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x45784cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x457850: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x457850u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x457854: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x457854u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x457858: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x457858u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x45785c: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x45785cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x457860: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x457860u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x457864: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x457864u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x457868: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x457868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45786c: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x45786cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x457870: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x457870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x457874: 0x358ce010  ori         $t4, $t4, 0xE010
    ctx->pc = 0x457874u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57360);
    // 0x457878: 0x3718d480  ori         $t8, $t8, 0xD480
    ctx->pc = 0x457878u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54400);
    // 0x45787c: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x45787cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x457880: 0x35ced420  ori         $t6, $t6, 0xD420
    ctx->pc = 0x457880u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)54304);
    // 0x457884: 0x37ded080  ori         $fp, $fp, 0xD080
    ctx->pc = 0x457884u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53376);
    // 0x457888: 0x36f7d020  ori         $s7, $s7, 0xD020
    ctx->pc = 0x457888u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53280);
    // 0x45788c: 0x36d6d010  ori         $s6, $s6, 0xD010
    ctx->pc = 0x45788cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)53264);
label_457890:
    // 0x457890: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x457890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x457894: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x457898u;
    {
        const bool branch_taken_0x457898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457898) {
            ctx->pc = 0x4578C8u;
            goto label_4578c8;
        }
    }
    ctx->pc = 0x4578A0u;
    // 0x4578a0: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x4578a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x4578a4: 0xf  sync
    ctx->pc = 0x4578a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4578a8: 0x40f  sync.p
    ctx->pc = 0x4578a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4578ac:
    // 0x4578ac: 0x0  nop
    ctx->pc = 0x4578acu;
    // NOP
    // 0x4578b0: 0x0  nop
    ctx->pc = 0x4578b0u;
    // NOP
    // 0x4578b4: 0x0  nop
    ctx->pc = 0x4578b4u;
    // NOP
    // 0x4578b8: 0x0  nop
    ctx->pc = 0x4578b8u;
    // NOP
    // 0x4578bc: 0x0  nop
    ctx->pc = 0x4578bcu;
    // NOP
    // 0x4578c0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4578C0u;
    {
        const bool branch_taken_0x4578c0 = (false);
        if (branch_taken_0x4578c0) {
            ctx->pc = 0x4578ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4578ac;
        }
    }
    ctx->pc = 0x4578C8u;
label_4578c8:
    // 0x4578c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4578c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4578cc: 0x2615ff48  addiu       $s5, $s0, -0xB8
    ctx->pc = 0x4578ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967112));
    // 0x4578d0: 0x26500b80  addiu       $s0, $s2, 0xB80
    ctx->pc = 0x4578d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2944));
    // 0x4578d4: 0x26742e00  addiu       $s4, $s3, 0x2E00
    ctx->pc = 0x4578d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 11776));
    // 0x4578d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4578d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4578dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4578DCu;
    {
        const bool branch_taken_0x4578dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4578E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4578DCu;
        // 0x4578e0: 0x263905c0  addiu       $t9, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4578dc) {
            ctx->pc = 0x457934u;
            goto label_457934;
        }
    }
    ctx->pc = 0x4578E4u;
    // 0x4578e4: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4578e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x4578e8: 0xf  sync
    ctx->pc = 0x4578e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4578ec: 0x40f  sync.p
    ctx->pc = 0x4578ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4578f0:
    // 0x4578f0: 0x0  nop
    ctx->pc = 0x4578f0u;
    // NOP
    // 0x4578f4: 0x0  nop
    ctx->pc = 0x4578f4u;
    // NOP
    // 0x4578f8: 0x0  nop
    ctx->pc = 0x4578f8u;
    // NOP
    // 0x4578fc: 0x0  nop
    ctx->pc = 0x4578fcu;
    // NOP
    // 0x457900: 0x0  nop
    ctx->pc = 0x457900u;
    // NOP
    // 0x457904: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457904u;
    {
        const bool branch_taken_0x457904 = (false);
        if (branch_taken_0x457904) {
            ctx->pc = 0x4578F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4578f0;
        }
    }
    ctx->pc = 0x45790Cu;
    // 0x45790c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45790cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457910: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x457910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x457914: 0x0  nop
    ctx->pc = 0x457914u;
    // NOP
label_457918:
    // 0x457918: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45791c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457920: 0x0  nop
    ctx->pc = 0x457920u;
    // NOP
    // 0x457924: 0x0  nop
    ctx->pc = 0x457924u;
    // NOP
    // 0x457928: 0x0  nop
    ctx->pc = 0x457928u;
    // NOP
    // 0x45792c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45792Cu;
    {
        const bool branch_taken_0x45792c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45792c) {
            ctx->pc = 0x457918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457918;
        }
    }
    ctx->pc = 0x457934u;
label_457934:
    // 0x457934: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x457934u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x457938: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x457938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x45793c: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x45793cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x457940: 0xadf10000  sw          $s1, 0x0($t7)
    ctx->pc = 0x457940u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 17));
    // 0x457944: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x457944u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x457948: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x457948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45794c: 0xf  sync
    ctx->pc = 0x45794cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457950: 0x40f  sync.p
    ctx->pc = 0x457950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457954: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x457954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x457958: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45795c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45795Cu;
    {
        const bool branch_taken_0x45795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45795c) {
            ctx->pc = 0x4579B4u;
            goto label_4579b4;
        }
    }
    ctx->pc = 0x457964u;
    // 0x457964: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x457964u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x457968: 0xf  sync
    ctx->pc = 0x457968u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45796c: 0x40f  sync.p
    ctx->pc = 0x45796cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457970:
    // 0x457970: 0x0  nop
    ctx->pc = 0x457970u;
    // NOP
    // 0x457974: 0x0  nop
    ctx->pc = 0x457974u;
    // NOP
    // 0x457978: 0x0  nop
    ctx->pc = 0x457978u;
    // NOP
    // 0x45797c: 0x0  nop
    ctx->pc = 0x45797cu;
    // NOP
    // 0x457980: 0x0  nop
    ctx->pc = 0x457980u;
    // NOP
    // 0x457984: 0x0  nop
    ctx->pc = 0x457984u;
    // NOP
    // 0x457988: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x457988u;
    {
        const bool branch_taken_0x457988 = (false);
        if (branch_taken_0x457988) {
            ctx->pc = 0x457970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457970;
        }
    }
    ctx->pc = 0x457990u;
    // 0x457990: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x457990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457994: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x457994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_457998:
    // 0x457998: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457998u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45799c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45799cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4579a0: 0x0  nop
    ctx->pc = 0x4579a0u;
    // NOP
    // 0x4579a4: 0x0  nop
    ctx->pc = 0x4579a4u;
    // NOP
    // 0x4579a8: 0x0  nop
    ctx->pc = 0x4579a8u;
    // NOP
    // 0x4579ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4579ACu;
    {
        const bool branch_taken_0x4579ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4579ac) {
            ctx->pc = 0x457998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457998;
        }
    }
    ctx->pc = 0x4579B4u;
label_4579b4:
    // 0x4579b4: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x4579b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x4579b8: 0x240305c0  addiu       $v1, $zero, 0x5C0
    ctx->pc = 0x4579b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x4579bc: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x4579bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x4579c0: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x4579c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x4579c4: 0xadf20000  sw          $s2, 0x0($t7)
    ctx->pc = 0x4579c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
    // 0x4579c8: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x4579c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x4579cc: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x4579ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x4579d0: 0xf  sync
    ctx->pc = 0x4579d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4579d4: 0x40f  sync.p
    ctx->pc = 0x4579d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4579d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4579d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4579dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4579dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4579e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4579E0u;
    {
        const bool branch_taken_0x4579e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4579E0u;
        // 0x4579e4: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4579e0) {
            ctx->pc = 0x457A38u;
            goto label_457a38;
        }
    }
    ctx->pc = 0x4579E8u;
    // 0x4579e8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4579e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x4579ec: 0xf  sync
    ctx->pc = 0x4579ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4579f0: 0x40f  sync.p
    ctx->pc = 0x4579f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4579f4:
    // 0x4579f4: 0x0  nop
    ctx->pc = 0x4579f4u;
    // NOP
    // 0x4579f8: 0x0  nop
    ctx->pc = 0x4579f8u;
    // NOP
    // 0x4579fc: 0x0  nop
    ctx->pc = 0x4579fcu;
    // NOP
    // 0x457a00: 0x0  nop
    ctx->pc = 0x457a00u;
    // NOP
    // 0x457a04: 0x0  nop
    ctx->pc = 0x457a04u;
    // NOP
    // 0x457a08: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457A08u;
    {
        const bool branch_taken_0x457a08 = (false);
        if (branch_taken_0x457a08) {
            ctx->pc = 0x4579F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4579f4;
        }
    }
    ctx->pc = 0x457A10u;
    // 0x457a10: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x457a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457a14: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x457a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_457a18:
    // 0x457a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457a18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x457a1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457a20: 0x0  nop
    ctx->pc = 0x457a20u;
    // NOP
    // 0x457a24: 0x0  nop
    ctx->pc = 0x457a24u;
    // NOP
    // 0x457a28: 0x0  nop
    ctx->pc = 0x457a28u;
    // NOP
    // 0x457a2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457A2Cu;
    {
        const bool branch_taken_0x457a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457a2c) {
            ctx->pc = 0x457A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457a18;
        }
    }
    ctx->pc = 0x457A34u;
    // 0x457a34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x457a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_457a38:
    // 0x457a38: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x457a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x457a3c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x457a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x457a40: 0x348405c0  ori         $a0, $a0, 0x5C0
    ctx->pc = 0x457a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1472);
    // 0x457a44: 0x34631140  ori         $v1, $v1, 0x1140
    ctx->pc = 0x457a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4416);
    // 0x457a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x457a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457a4c: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x457a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_457a50:
    // 0x457a50: 0x42000039  di
    ctx->pc = 0x457a50u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x457a54: 0x40f  sync.p
    ctx->pc = 0x457a54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457a58: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x457a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x457a5c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x457a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x457a60: 0x0  nop
    ctx->pc = 0x457a60u;
    // NOP
    // 0x457a64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457A64u;
    {
        const bool branch_taken_0x457a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457a64) {
            ctx->pc = 0x457A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457a50;
        }
    }
    ctx->pc = 0x457A6Cu;
    // 0x457a6c: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x457a6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x457a70: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x457a70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x457a74: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x457a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x457a78: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x457a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x457a7c: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x457a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x457a80: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x457a80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x457a84: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x457a84u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x457a88: 0xd8940020  lqc2        $vf20, 0x20($a0)
    ctx->pc = 0x457a88u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x457a8c: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x457a8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x457a90: 0xd89b0030  lqc2        $vf27, 0x30($a0)
    ctx->pc = 0x457a90u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x457a94: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x457a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x457a98: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x457a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x457a9c: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x457a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x457aa0: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x457aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x457aa4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x457aa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457aa8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x457aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x457aac: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x457aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x457ab0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x457ab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x457ab4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x457ab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457ab8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x457ab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x457abc: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x457abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x457ac0: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x457ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x457ac4: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x457ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x457ac8: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x457ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x457acc: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x457accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x457ad0: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x457ad0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x457ad4: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x457ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x457ad8: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x457ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x457adc: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x457adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x457ae0: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x457ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x457ae4: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x457ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x457ae8: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x457ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x457aec: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x457aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x457af0: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x457af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x457af4: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x457af4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x457af8: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x457af8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x457afc: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x457afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x457b00: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x457b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x457b04: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x457b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x457b08: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x457b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x457b0c: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x457b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x457b10: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x457b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x457b14: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x457b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x457b18: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x457b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x457b1c: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x457b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x457b20: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x457b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x457b24: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x457b24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x457b28: 0xf8680010  sqc2        $vf8, 0x10($v1)
    ctx->pc = 0x457b28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x457b2c: 0xf8690020  sqc2        $vf9, 0x20($v1)
    ctx->pc = 0x457b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x457b30: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x457b30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x457b34: 0xf86e0040  sqc2        $vf14, 0x40($v1)
    ctx->pc = 0x457b34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x457b38: 0xf86f0050  sqc2        $vf15, 0x50($v1)
    ctx->pc = 0x457b38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x457b3c: 0xf8700060  sqc2        $vf16, 0x60($v1)
    ctx->pc = 0x457b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x457b40: 0xf8710070  sqc2        $vf17, 0x70($v1)
    ctx->pc = 0x457b40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x457b44: 0xf8750080  sqc2        $vf21, 0x80($v1)
    ctx->pc = 0x457b44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x457b48: 0xf8760090  sqc2        $vf22, 0x90($v1)
    ctx->pc = 0x457b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x457b4c: 0xf87700a0  sqc2        $vf23, 0xA0($v1)
    ctx->pc = 0x457b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x457b50: 0xf87800b0  sqc2        $vf24, 0xB0($v1)
    ctx->pc = 0x457b50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x457b54: 0xf87c00c0  sqc2        $vf28, 0xC0($v1)
    ctx->pc = 0x457b54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x457b58: 0xf87d00d0  sqc2        $vf29, 0xD0($v1)
    ctx->pc = 0x457b58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x457b5c: 0xf87e00e0  sqc2        $vf30, 0xE0($v1)
    ctx->pc = 0x457b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x457b60: 0xf87f00f0  sqc2        $vf31, 0xF0($v1)
    ctx->pc = 0x457b60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x457b64: 0x42000038  ei
    ctx->pc = 0x457b64u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x457b68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x457b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x457b6c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x457b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x457b70: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x457b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x457b74: 0x28e200b8  slti        $v0, $a3, 0xB8
    ctx->pc = 0x457b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x457b78: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x457B78u;
    {
        const bool branch_taken_0x457b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x457B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457B78u;
        // 0x457b7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457b78) {
            ctx->pc = 0x457A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457a50;
        }
    }
    ctx->pc = 0x457B80u;
    // 0x457b80: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x457b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x457b84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457b88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x457B88u;
    {
        const bool branch_taken_0x457b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457b88) {
            ctx->pc = 0x457BB8u;
            goto label_457bb8;
        }
    }
    ctx->pc = 0x457B90u;
    // 0x457b90: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x457b90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x457b94: 0xf  sync
    ctx->pc = 0x457b94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457b98: 0x40f  sync.p
    ctx->pc = 0x457b98u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457b9c:
    // 0x457b9c: 0x0  nop
    ctx->pc = 0x457b9cu;
    // NOP
    // 0x457ba0: 0x0  nop
    ctx->pc = 0x457ba0u;
    // NOP
    // 0x457ba4: 0x0  nop
    ctx->pc = 0x457ba4u;
    // NOP
    // 0x457ba8: 0x0  nop
    ctx->pc = 0x457ba8u;
    // NOP
    // 0x457bac: 0x0  nop
    ctx->pc = 0x457bacu;
    // NOP
    // 0x457bb0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457BB0u;
    {
        const bool branch_taken_0x457bb0 = (false);
        if (branch_taken_0x457bb0) {
            ctx->pc = 0x457B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457b9c;
        }
    }
    ctx->pc = 0x457BB8u;
label_457bb8:
    // 0x457bb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x457bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x457bbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457bc0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x457BC0u;
    {
        const bool branch_taken_0x457bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457bc0) {
            ctx->pc = 0x457C14u;
            goto label_457c14;
        }
    }
    ctx->pc = 0x457BC8u;
    // 0x457bc8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x457bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x457bcc: 0xf  sync
    ctx->pc = 0x457bccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457bd0: 0x40f  sync.p
    ctx->pc = 0x457bd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457bd4:
    // 0x457bd4: 0x0  nop
    ctx->pc = 0x457bd4u;
    // NOP
    // 0x457bd8: 0x0  nop
    ctx->pc = 0x457bd8u;
    // NOP
    // 0x457bdc: 0x0  nop
    ctx->pc = 0x457bdcu;
    // NOP
    // 0x457be0: 0x0  nop
    ctx->pc = 0x457be0u;
    // NOP
    // 0x457be4: 0x0  nop
    ctx->pc = 0x457be4u;
    // NOP
    // 0x457be8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457BE8u;
    {
        const bool branch_taken_0x457be8 = (false);
        if (branch_taken_0x457be8) {
            ctx->pc = 0x457BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457bd4;
        }
    }
    ctx->pc = 0x457BF0u;
    // 0x457bf0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x457bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457bf4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x457bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_457bf8:
    // 0x457bf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x457bfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457c00: 0x0  nop
    ctx->pc = 0x457c00u;
    // NOP
    // 0x457c04: 0x0  nop
    ctx->pc = 0x457c04u;
    // NOP
    // 0x457c08: 0x0  nop
    ctx->pc = 0x457c08u;
    // NOP
    // 0x457c0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457C0Cu;
    {
        const bool branch_taken_0x457c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457c0c) {
            ctx->pc = 0x457BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457bf8;
        }
    }
    ctx->pc = 0x457C14u;
label_457c14:
    // 0x457c14: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x457c14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x457c18: 0x24051140  addiu       $a1, $zero, 0x1140
    ctx->pc = 0x457c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x457c1c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x457c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x457c20: 0x240702e0  addiu       $a3, $zero, 0x2E0
    ctx->pc = 0x457c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x457c24: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x457c24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x457c28: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x457c28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x457c2c: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x457c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x457c30: 0xf  sync
    ctx->pc = 0x457c30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457c34: 0x40f  sync.p
    ctx->pc = 0x457c34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457c38: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x457c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457c3c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x457c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457c40: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x457c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457c44: 0x2a0200b8  slti        $v0, $s0, 0xB8
    ctx->pc = 0x457c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x457c48: 0x1040ff11  beqz        $v0, . + 4 + (-0xEF << 2)
    ctx->pc = 0x457C48u;
    {
        const bool branch_taken_0x457c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x457C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457C48u;
        // 0x457c4c: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457c48) {
            ctx->pc = 0x457890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457890;
        }
    }
    ctx->pc = 0x457C50u;
    // 0x457c50: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x457c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x457c54: 0x0  nop
    ctx->pc = 0x457c54u;
    // NOP
label_457c58:
    // 0x457c58: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x457C58u;
    {
        const bool branch_taken_0x457c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x457C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457C58u;
        // 0x457c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457c58) {
            ctx->pc = 0x458120u;
            goto label_458120;
        }
    }
    ctx->pc = 0x457C60u;
    // 0x457c60: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x457c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x457c64: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x457c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x457c68: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x457c68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x457c6c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x457c6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x457c70: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x457c70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x457c74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457c78: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x457c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x457c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x457c80: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x457c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x457c84: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x457C84u;
    {
        const bool branch_taken_0x457c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x457C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457C84u;
        // 0x457c88: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457c84) {
            ctx->pc = 0x457CC0u;
            goto label_457cc0;
        }
    }
    ctx->pc = 0x457C8Cu;
    // 0x457c8c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x457c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x457c90: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457c94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457c94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x457c98: 0xf  sync
    ctx->pc = 0x457c98u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457c9c: 0x40f  sync.p
    ctx->pc = 0x457c9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457ca0:
    // 0x457ca0: 0x0  nop
    ctx->pc = 0x457ca0u;
    // NOP
    // 0x457ca4: 0x0  nop
    ctx->pc = 0x457ca4u;
    // NOP
    // 0x457ca8: 0x0  nop
    ctx->pc = 0x457ca8u;
    // NOP
    // 0x457cac: 0x0  nop
    ctx->pc = 0x457cacu;
    // NOP
    // 0x457cb0: 0x0  nop
    ctx->pc = 0x457cb0u;
    // NOP
    // 0x457cb4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457CB4u;
    {
        const bool branch_taken_0x457cb4 = (false);
        if (branch_taken_0x457cb4) {
            ctx->pc = 0x457CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457ca0;
        }
    }
    ctx->pc = 0x457CBCu;
    // 0x457cbc: 0x0  nop
    ctx->pc = 0x457cbcu;
    // NOP
label_457cc0:
    // 0x457cc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457cc4: 0x46a00  sll         $t5, $a0, 8
    ctx->pc = 0x457cc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x457cc8: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x457cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x457ccc: 0x2086023  subu        $t4, $s0, $t0
    ctx->pc = 0x457cccu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x457cd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x457cd4: 0x857c3  sra         $t2, $t0, 31
    ctx->pc = 0x457cd4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 31));
    // 0x457cd8: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x457cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x457cdc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x457cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x457ce0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x457CE0u;
    {
        const bool branch_taken_0x457ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x457CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457CE0u;
        // 0x457ce4: 0x45980  sll         $t3, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457ce0) {
            ctx->pc = 0x457D44u;
            goto label_457d44;
        }
    }
    ctx->pc = 0x457CE8u;
    // 0x457ce8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457cec: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x457cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x457cf0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457cf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457cf4u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x457cf8: 0xf  sync
    ctx->pc = 0x457cf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457cfc: 0x40f  sync.p
    ctx->pc = 0x457cfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457d00:
    // 0x457d00: 0x0  nop
    ctx->pc = 0x457d00u;
    // NOP
    // 0x457d04: 0x0  nop
    ctx->pc = 0x457d04u;
    // NOP
    // 0x457d08: 0x0  nop
    ctx->pc = 0x457d08u;
    // NOP
    // 0x457d0c: 0x0  nop
    ctx->pc = 0x457d0cu;
    // NOP
    // 0x457d10: 0x0  nop
    ctx->pc = 0x457d10u;
    // NOP
    // 0x457d14: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457D14u;
    {
        const bool branch_taken_0x457d14 = (false);
        if (branch_taken_0x457d14) {
            ctx->pc = 0x457D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457d00;
        }
    }
    ctx->pc = 0x457D1Cu;
    // 0x457d1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457d20: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x457d24: 0x0  nop
    ctx->pc = 0x457d24u;
    // NOP
label_457d28:
    // 0x457d28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457d28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x457d2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457d30: 0x0  nop
    ctx->pc = 0x457d30u;
    // NOP
    // 0x457d34: 0x0  nop
    ctx->pc = 0x457d34u;
    // NOP
    // 0x457d38: 0x0  nop
    ctx->pc = 0x457d38u;
    // NOP
    // 0x457d3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457D3Cu;
    {
        const bool branch_taken_0x457d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457d3c) {
            ctx->pc = 0x457D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457d28;
        }
    }
    ctx->pc = 0x457D44u;
label_457d44:
    // 0x457d44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457d48: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x457d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x457d4c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x457d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x457d50: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x457d50u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x457d54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457d58: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x457d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x457d5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457d60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x457d60u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x457d64: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x457d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x457d68: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x457d68u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x457d6c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x457d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457d70: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x457d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x457d74: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x457d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x457d78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x457d78u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x457d7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457d80: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x457d84: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x457d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x457d88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x457d88u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x457d8c: 0xf  sync
    ctx->pc = 0x457d8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457d90: 0x40f  sync.p
    ctx->pc = 0x457d90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457d94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x457d98: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457d9c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x457D9Cu;
    {
        const bool branch_taken_0x457d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x457DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457D9Cu;
        // 0x457da0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457d9c) {
            ctx->pc = 0x457DF4u;
            goto label_457df4;
        }
    }
    ctx->pc = 0x457DA4u;
    // 0x457da4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457da8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x457da8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x457dac: 0xf  sync
    ctx->pc = 0x457dacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457db0: 0x40f  sync.p
    ctx->pc = 0x457db0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457db4:
    // 0x457db4: 0x0  nop
    ctx->pc = 0x457db4u;
    // NOP
    // 0x457db8: 0x0  nop
    ctx->pc = 0x457db8u;
    // NOP
    // 0x457dbc: 0x0  nop
    ctx->pc = 0x457dbcu;
    // NOP
    // 0x457dc0: 0x0  nop
    ctx->pc = 0x457dc0u;
    // NOP
    // 0x457dc4: 0x0  nop
    ctx->pc = 0x457dc4u;
    // NOP
    // 0x457dc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457DC8u;
    {
        const bool branch_taken_0x457dc8 = (false);
        if (branch_taken_0x457dc8) {
            ctx->pc = 0x457DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457db4;
        }
    }
    ctx->pc = 0x457DD0u;
    // 0x457dd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457dd4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_457dd8:
    // 0x457dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x457ddc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457de0: 0x0  nop
    ctx->pc = 0x457de0u;
    // NOP
    // 0x457de4: 0x0  nop
    ctx->pc = 0x457de4u;
    // NOP
    // 0x457de8: 0x0  nop
    ctx->pc = 0x457de8u;
    // NOP
    // 0x457dec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457DECu;
    {
        const bool branch_taken_0x457dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457dec) {
            ctx->pc = 0x457DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457dd8;
        }
    }
    ctx->pc = 0x457DF4u;
label_457df4:
    // 0x457df4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457df8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x457df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x457dfc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x457dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x457e00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457e04: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x457e04u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x457e08: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x457e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x457e0c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x457e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x457e10: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x457e10u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x457e14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457e18: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x457e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x457e1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457e20: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x457e20u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x457e24: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x457e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x457e28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x457e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x457e2c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x457e2cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x457e30: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x457e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x457e34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x457e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x457e38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x457e38u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x457e3c: 0xf  sync
    ctx->pc = 0x457e3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457e40: 0x40f  sync.p
    ctx->pc = 0x457e40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457e44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x457e48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457e4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x457E4Cu;
    {
        const bool branch_taken_0x457e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x457E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457E4Cu;
        // 0x457e50: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457e4c) {
            ctx->pc = 0x457EA4u;
            goto label_457ea4;
        }
    }
    ctx->pc = 0x457E54u;
    // 0x457e54: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457e58: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x457e58u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x457e5c: 0xf  sync
    ctx->pc = 0x457e5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457e60: 0x40f  sync.p
    ctx->pc = 0x457e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457e64:
    // 0x457e64: 0x0  nop
    ctx->pc = 0x457e64u;
    // NOP
    // 0x457e68: 0x0  nop
    ctx->pc = 0x457e68u;
    // NOP
    // 0x457e6c: 0x0  nop
    ctx->pc = 0x457e6cu;
    // NOP
    // 0x457e70: 0x0  nop
    ctx->pc = 0x457e70u;
    // NOP
    // 0x457e74: 0x0  nop
    ctx->pc = 0x457e74u;
    // NOP
    // 0x457e78: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457E78u;
    {
        const bool branch_taken_0x457e78 = (false);
        if (branch_taken_0x457e78) {
            ctx->pc = 0x457E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457e64;
        }
    }
    ctx->pc = 0x457E80u;
    // 0x457e80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457e84: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_457e88:
    // 0x457e88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457e88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x457e8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457e90: 0x0  nop
    ctx->pc = 0x457e90u;
    // NOP
    // 0x457e94: 0x0  nop
    ctx->pc = 0x457e94u;
    // NOP
    // 0x457e98: 0x0  nop
    ctx->pc = 0x457e98u;
    // NOP
    // 0x457e9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457E9Cu;
    {
        const bool branch_taken_0x457e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457e9c) {
            ctx->pc = 0x457E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457e88;
        }
    }
    ctx->pc = 0x457EA4u;
label_457ea4:
    // 0x457ea4: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x457ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x457ea8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x457ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x457eac: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x457eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x457eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x457eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457eb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x457eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x457eb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x457eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x457ebc: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x457ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x457ec0: 0x1900004f  blez        $t0, . + 4 + (0x4F << 2)
    ctx->pc = 0x457EC0u;
    {
        const bool branch_taken_0x457ec0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x457EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457EC0u;
        // 0x457ec4: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457ec0) {
            ctx->pc = 0x458000u;
            goto label_458000;
        }
    }
    ctx->pc = 0x457EC8u;
    // 0x457ec8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x457ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x457ecc: 0x0  nop
    ctx->pc = 0x457eccu;
    // NOP
label_457ed0:
    // 0x457ed0: 0x42000039  di
    ctx->pc = 0x457ed0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x457ed4: 0x40f  sync.p
    ctx->pc = 0x457ed4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457ed8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x457ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x457edc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x457edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x457ee0: 0x0  nop
    ctx->pc = 0x457ee0u;
    // NOP
    // 0x457ee4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x457EE4u;
    {
        const bool branch_taken_0x457ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x457ee4) {
            ctx->pc = 0x457ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457ed0;
        }
    }
    ctx->pc = 0x457EECu;
    // 0x457eec: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x457eecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x457ef0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x457ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x457ef4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x457ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x457ef8: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x457ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x457efc: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x457efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x457f00: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x457f00u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x457f04: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x457f04u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x457f08: 0xd8940020  lqc2        $vf20, 0x20($a0)
    ctx->pc = 0x457f08u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x457f0c: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x457f0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x457f10: 0xd89b0030  lqc2        $vf27, 0x30($a0)
    ctx->pc = 0x457f10u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x457f14: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x457f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x457f18: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x457f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x457f1c: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x457f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x457f20: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x457f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x457f24: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x457f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457f28: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x457f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x457f2c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x457f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x457f30: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x457f30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x457f34: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x457f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457f38: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x457f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x457f3c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x457f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x457f40: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x457f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x457f44: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x457f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x457f48: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x457f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x457f4c: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x457f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x457f50: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x457f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x457f54: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x457f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x457f58: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x457f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x457f5c: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x457f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x457f60: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x457f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x457f64: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x457f64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x457f68: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x457f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x457f6c: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x457f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x457f70: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x457f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x457f74: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x457f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x457f78: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x457f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x457f7c: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x457f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x457f80: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x457f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x457f84: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x457f84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x457f88: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x457f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x457f8c: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x457f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x457f90: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x457f90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x457f94: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x457f94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x457f98: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x457f98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x457f9c: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x457f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x457fa0: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x457fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x457fa4: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x457fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x457fa8: 0xf8680010  sqc2        $vf8, 0x10($v1)
    ctx->pc = 0x457fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x457fac: 0xf8690020  sqc2        $vf9, 0x20($v1)
    ctx->pc = 0x457facu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x457fb0: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x457fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x457fb4: 0xf86e0040  sqc2        $vf14, 0x40($v1)
    ctx->pc = 0x457fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x457fb8: 0xf86f0050  sqc2        $vf15, 0x50($v1)
    ctx->pc = 0x457fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x457fbc: 0xf8700060  sqc2        $vf16, 0x60($v1)
    ctx->pc = 0x457fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x457fc0: 0xf8710070  sqc2        $vf17, 0x70($v1)
    ctx->pc = 0x457fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x457fc4: 0xf8750080  sqc2        $vf21, 0x80($v1)
    ctx->pc = 0x457fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x457fc8: 0xf8760090  sqc2        $vf22, 0x90($v1)
    ctx->pc = 0x457fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x457fcc: 0xf87700a0  sqc2        $vf23, 0xA0($v1)
    ctx->pc = 0x457fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x457fd0: 0xf87800b0  sqc2        $vf24, 0xB0($v1)
    ctx->pc = 0x457fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x457fd4: 0xf87c00c0  sqc2        $vf28, 0xC0($v1)
    ctx->pc = 0x457fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x457fd8: 0xf87d00d0  sqc2        $vf29, 0xD0($v1)
    ctx->pc = 0x457fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x457fdc: 0xf87e00e0  sqc2        $vf30, 0xE0($v1)
    ctx->pc = 0x457fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x457fe0: 0xf87f00f0  sqc2        $vf31, 0xF0($v1)
    ctx->pc = 0x457fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x457fe4: 0x42000038  ei
    ctx->pc = 0x457fe4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x457fe8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x457fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x457fec: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x457fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x457ff0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x457ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x457ff4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x457ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x457ff8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x457FF8u;
    {
        const bool branch_taken_0x457ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x457FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457FF8u;
        // 0x457ffc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457ff8) {
            ctx->pc = 0x457ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457ed0;
        }
    }
    ctx->pc = 0x458000u;
label_458000:
    // 0x458000: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458004: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x458004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x458008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458008u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45800c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x458010: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x458010u;
    {
        const bool branch_taken_0x458010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x458014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458010u;
        // 0x458014: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458010) {
            ctx->pc = 0x458048u;
            goto label_458048;
        }
    }
    ctx->pc = 0x458018u;
    // 0x458018: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x458018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45801c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458020: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458020u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x458024: 0xf  sync
    ctx->pc = 0x458024u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458028: 0x40f  sync.p
    ctx->pc = 0x458028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45802c:
    // 0x45802c: 0x0  nop
    ctx->pc = 0x45802cu;
    // NOP
    // 0x458030: 0x0  nop
    ctx->pc = 0x458030u;
    // NOP
    // 0x458034: 0x0  nop
    ctx->pc = 0x458034u;
    // NOP
    // 0x458038: 0x0  nop
    ctx->pc = 0x458038u;
    // NOP
    // 0x45803c: 0x0  nop
    ctx->pc = 0x45803cu;
    // NOP
    // 0x458040: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458040u;
    {
        const bool branch_taken_0x458040 = (false);
        if (branch_taken_0x458040) {
            ctx->pc = 0x45802Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45802c;
        }
    }
    ctx->pc = 0x458048u;
label_458048:
    // 0x458048: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45804c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x458050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458050u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x458054: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x458054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x458058: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x458058u;
    {
        const bool branch_taken_0x458058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458058u;
        // 0x45805c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458058) {
            ctx->pc = 0x4580B4u;
            goto label_4580b4;
        }
    }
    ctx->pc = 0x458060u;
    // 0x458060: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x458060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458064: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458068: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458068u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45806c: 0xf  sync
    ctx->pc = 0x45806cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458070: 0x40f  sync.p
    ctx->pc = 0x458070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458074:
    // 0x458074: 0x0  nop
    ctx->pc = 0x458074u;
    // NOP
    // 0x458078: 0x0  nop
    ctx->pc = 0x458078u;
    // NOP
    // 0x45807c: 0x0  nop
    ctx->pc = 0x45807cu;
    // NOP
    // 0x458080: 0x0  nop
    ctx->pc = 0x458080u;
    // NOP
    // 0x458084: 0x0  nop
    ctx->pc = 0x458084u;
    // NOP
    // 0x458088: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458088u;
    {
        const bool branch_taken_0x458088 = (false);
        if (branch_taken_0x458088) {
            ctx->pc = 0x458074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458074;
        }
    }
    ctx->pc = 0x458090u;
    // 0x458090: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458094: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458098:
    // 0x458098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458098u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45809c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4580a0: 0x0  nop
    ctx->pc = 0x4580a0u;
    // NOP
    // 0x4580a4: 0x0  nop
    ctx->pc = 0x4580a4u;
    // NOP
    // 0x4580a8: 0x0  nop
    ctx->pc = 0x4580a8u;
    // NOP
    // 0x4580ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4580ACu;
    {
        const bool branch_taken_0x4580ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4580ac) {
            ctx->pc = 0x458098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458098;
        }
    }
    ctx->pc = 0x4580B4u;
label_4580b4:
    // 0x4580b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4580b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4580b8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x4580b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4580bc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x4580bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x4580c0: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x4580c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
    // 0x4580c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4580c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4580c8: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x4580c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4580cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4580ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4580d0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x4580d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x4580d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4580d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4580d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4580d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4580dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4580dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x4580e0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x4580e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x4580e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4580e8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x4580e8u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x4580ec: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x4580ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x4580f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4580f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4580f4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4580f4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x4580f8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4580f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4580fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4580fcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458100: 0xf  sync
    ctx->pc = 0x458100u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458104: 0x40f  sync.p
    ctx->pc = 0x458104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458108: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x458108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x45810c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x45810cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x458110: 0x26d9821  addu        $s3, $s3, $t5
    ctx->pc = 0x458110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x458114: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x458114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x458118: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x458118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45811c: 0x0  nop
    ctx->pc = 0x45811cu;
    // NOP
label_458120:
    // 0x458120: 0x1a000073  blez        $s0, . + 4 + (0x73 << 2)
    ctx->pc = 0x458120u;
    {
        const bool branch_taken_0x458120 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x458124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458120u;
        // 0x458124: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458120) {
            ctx->pc = 0x4582F0u;
            goto label_4582f0;
        }
    }
    ctx->pc = 0x458128u;
    // 0x458128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x458128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45812c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45812cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x458130: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x458130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x458134: 0x0  nop
    ctx->pc = 0x458134u;
    // NOP
label_458138:
    // 0x458138: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x458138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45813c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x458140: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x458140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458144: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x458144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_458148:
    // 0x458148: 0x42000039  di
    ctx->pc = 0x458148u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45814c: 0x40f  sync.p
    ctx->pc = 0x45814cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458150: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x458150u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x458154: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x458154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x458158: 0x0  nop
    ctx->pc = 0x458158u;
    // NOP
    // 0x45815c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45815Cu;
    {
        const bool branch_taken_0x45815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45815c) {
            ctx->pc = 0x458148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458148;
        }
    }
    ctx->pc = 0x458164u;
    // 0x458164: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x458164u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458168: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x458168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45816c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x45816cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x458170: 0xda460000  lqc2        $vf6, 0x0($s2)
    ctx->pc = 0x458170u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x458174: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x458174u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458178: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x458178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45817c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x45817cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x458180: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x458180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x458184: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x458184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458188: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x458188u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45818c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x45818cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x458190: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x458190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x458194: 0xfa670000  sqc2        $vf7, 0x0($s3)
    ctx->pc = 0x458194u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x458198: 0xfa680010  sqc2        $vf8, 0x10($s3)
    ctx->pc = 0x458198u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x45819c: 0xfa690020  sqc2        $vf9, 0x20($s3)
    ctx->pc = 0x45819cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x4581a0: 0xfa6a0030  sqc2        $vf10, 0x30($s3)
    ctx->pc = 0x4581a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x4581a4: 0x42000038  ei
    ctx->pc = 0x4581a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4581a8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4581a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4581ac: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4581acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4581b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4581b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4581b4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4581b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4581b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4581b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4581bc: 0x14e0ffde  bnez        $a3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4581BCu;
    {
        const bool branch_taken_0x4581bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4581BCu;
        // 0x4581c0: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4581bc) {
            ctx->pc = 0x458138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458138;
        }
    }
    ctx->pc = 0x4581C4u;
    // 0x4581c4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4581C4u;
    {
        const bool branch_taken_0x4581c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4581C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4581C4u;
        // 0x4581c8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4581c4) {
            ctx->pc = 0x4582F4u;
            goto label_4582f4;
        }
    }
    ctx->pc = 0x4581CCu;
    // 0x4581cc: 0x0  nop
    ctx->pc = 0x4581ccu;
    // NOP
label_4581d0:
    // 0x4581d0: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x4581d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4581d4: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x4581d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4581d8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4581d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4581dc: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x4581dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4581e0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x4581e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4581e4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4581e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4581e8: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x4581e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4581ec: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x4581ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4581f0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x4581f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4581f4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x4581f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4581f8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x4581f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4581fc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x4581fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x458200: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x458200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x458204: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x458204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_458208:
    // 0x458208: 0x42000039  di
    ctx->pc = 0x458208u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45820c: 0x40f  sync.p
    ctx->pc = 0x45820cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458210: 0x40076000  mfc0        $a3, Status
    ctx->pc = 0x458210u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_status);
    // 0x458214: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x458214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x458218: 0x0  nop
    ctx->pc = 0x458218u;
    // NOP
    // 0x45821c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45821Cu;
    {
        const bool branch_taken_0x45821c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45821c) {
            ctx->pc = 0x458208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458208;
        }
    }
    ctx->pc = 0x458224u;
    // 0x458224: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x458224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x458228: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x458228u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45822c: 0x4a0002ff  vnop
    ctx->pc = 0x45822cu;
    // NOP operation, no action needed for VU0
    // 0x458230: 0x4a0002ff  vnop
    ctx->pc = 0x458230u;
    // NOP operation, no action needed for VU0
    // 0x458234: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x458234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458238: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x458238u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45823c: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x45823cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x458240: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x458240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458244: 0x42000038  ei
    ctx->pc = 0x458244u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x458248: 0x1a000029  blez        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x458248u;
    {
        const bool branch_taken_0x458248 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x45824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458248u;
        // 0x45824c: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458248) {
            ctx->pc = 0x4582F0u;
            goto label_4582f0;
        }
    }
    ctx->pc = 0x458250u;
    // 0x458250: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x458250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458254: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x458254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x458258: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x458258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45825c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x45825cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_458260:
    // 0x458260: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x458260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x458264: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x458264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x458268: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x458268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45826c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x45826cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_458270:
    // 0x458270: 0x42000039  di
    ctx->pc = 0x458270u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x458274: 0x40f  sync.p
    ctx->pc = 0x458274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458278: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x458278u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45827c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x458280: 0x0  nop
    ctx->pc = 0x458280u;
    // NOP
    // 0x458284: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458284u;
    {
        const bool branch_taken_0x458284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458284) {
            ctx->pc = 0x458270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458270;
        }
    }
    ctx->pc = 0x45828Cu;
    // 0x45828c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x45828cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x458290: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x458290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x458294: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x458294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x458298: 0xda460000  lqc2        $vf6, 0x0($s2)
    ctx->pc = 0x458298u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45829c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x45829cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4582a0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x4582a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x4582a4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x4582a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x4582a8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x4582a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4582ac: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x4582acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4582b0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x4582b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x4582b4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x4582b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x4582b8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x4582b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4582bc: 0xfa670000  sqc2        $vf7, 0x0($s3)
    ctx->pc = 0x4582bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x4582c0: 0xfa680010  sqc2        $vf8, 0x10($s3)
    ctx->pc = 0x4582c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x4582c4: 0xfa690020  sqc2        $vf9, 0x20($s3)
    ctx->pc = 0x4582c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x4582c8: 0xfa6a0030  sqc2        $vf10, 0x30($s3)
    ctx->pc = 0x4582c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x4582cc: 0x42000038  ei
    ctx->pc = 0x4582ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4582d0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4582d4: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x4582d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x4582d8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4582d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4582dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4582dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4582e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4582e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4582e4: 0x14e0ffde  bnez        $a3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4582E4u;
    {
        const bool branch_taken_0x4582e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4582E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4582E4u;
        // 0x4582e8: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4582e4) {
            ctx->pc = 0x458260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458260;
        }
    }
    ctx->pc = 0x4582ECu;
    // 0x4582ec: 0x0  nop
    ctx->pc = 0x4582ecu;
    // NOP
label_4582f0:
    // 0x4582f0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4582f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4582f4:
    // 0x4582f4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4582f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4582f8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4582f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4582fc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4582fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458300: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x458300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x458304: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x458304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x458308: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x458308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45830c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x45830cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x458310: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x458310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x458314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x458314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458318: 0x3e00008  jr          $ra
    ctx->pc = 0x458318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458318u;
        // 0x45831c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458320u;
}
