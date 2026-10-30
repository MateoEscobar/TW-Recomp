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

// Function: sub_0045D6E8
// Address: 0x45d6e8 - 0x45dee0
void sub_0045D6E8_0x45d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045D6E8_0x45d6e8");
#endif

    switch (ctx->pc) {
        case 0x45d738u: goto label_45d738;
        case 0x45d764u: goto label_45d764;
        case 0x45d7b0u: goto label_45d7b0;
        case 0x45d7d8u: goto label_45d7d8;
        case 0x45d860u: goto label_45d860;
        case 0x45d87cu: goto label_45d87c;
        case 0x45d8bcu: goto label_45d8bc;
        case 0x45d8e0u: goto label_45d8e0;
        case 0x45d938u: goto label_45d938;
        case 0x45d960u: goto label_45d960;
        case 0x45d988u: goto label_45d988;
        case 0x45da00u: goto label_45da00;
        case 0x45da3cu: goto label_45da3c;
        case 0x45da60u: goto label_45da60;
        case 0x45daf8u: goto label_45daf8;
        case 0x45db54u: goto label_45db54;
        case 0x45db78u: goto label_45db78;
        case 0x45dbd4u: goto label_45dbd4;
        case 0x45dc14u: goto label_45dc14;
        case 0x45dc38u: goto label_45dc38;
        case 0x45dc68u: goto label_45dc68;
        case 0x45dcf0u: goto label_45dcf0;
        case 0x45dd3cu: goto label_45dd3c;
        case 0x45dd60u: goto label_45dd60;
        case 0x45dde0u: goto label_45dde0;
        case 0x45de00u: goto label_45de00;
        case 0x45de70u: goto label_45de70;
        default: break;
    }

    ctx->pc = 0x45d6e8u;

    // 0x45d6e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45d6ec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x45d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x45d6f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x45d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x45d6f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x45d6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45d6f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x45d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x45d6fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x45d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x45d700: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x45d704: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x45d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x45d708: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x45d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x45d70c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x45d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x45d710: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x45d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x45d714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45d718: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x45d718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x45d71c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45d720: 0x8cc70028  lw          $a3, 0x28($a2)
    ctx->pc = 0x45d720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x45d724: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x45d724u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45d728: 0x14e301ce  bne         $a3, $v1, . + 4 + (0x1CE << 2)
    ctx->pc = 0x45D728u;
    {
        const bool branch_taken_0x45d728 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x45D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D728u;
        // 0x45d72c: 0x8cd20024  lw          $s2, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d728) {
            ctx->pc = 0x45DE64u;
            goto label_45de64;
        }
    }
    ctx->pc = 0x45D730u;
    // 0x45d730: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45D730u;
    SET_GPR_U32(ctx, 31, 0x45D738u);
    ctx->pc = 0x45D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45D730u;
    // 0x45d734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45D730u, 0x45D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D738u;
label_45d738:
    // 0x45d738: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45d738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45d73c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45d740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45d740u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45d744: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45d744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45d748: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45D748u;
    {
        const bool branch_taken_0x45d748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D748u;
        // 0x45d74c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d748) {
            ctx->pc = 0x45D780u;
            goto label_45d780;
        }
    }
    ctx->pc = 0x45D750u;
    // 0x45d750: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d754: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d758: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d758u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d75c: 0xf  sync
    ctx->pc = 0x45d75cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d760: 0x40f  sync.p
    ctx->pc = 0x45d760u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d764:
    // 0x45d764: 0x0  nop
    ctx->pc = 0x45d764u;
    // NOP
    // 0x45d768: 0x0  nop
    ctx->pc = 0x45d768u;
    // NOP
    // 0x45d76c: 0x0  nop
    ctx->pc = 0x45d76cu;
    // NOP
    // 0x45d770: 0x0  nop
    ctx->pc = 0x45d770u;
    // NOP
    // 0x45d774: 0x0  nop
    ctx->pc = 0x45d774u;
    // NOP
    // 0x45d778: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D778u;
    {
        const bool branch_taken_0x45d778 = (false);
        if (branch_taken_0x45d778) {
            ctx->pc = 0x45D764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d764;
        }
    }
    ctx->pc = 0x45D780u;
label_45d780:
    // 0x45d780: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d784: 0x2a040331  slti        $a0, $s0, 0x331
    ctx->pc = 0x45d784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)817) ? 1 : 0);
    // 0x45d788: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45d78c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d790: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d794: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45D794u;
    {
        const bool branch_taken_0x45d794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D794u;
        // 0x45d798: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d794) {
            ctx->pc = 0x45D7F4u;
            goto label_45d7f4;
        }
    }
    ctx->pc = 0x45D79Cu;
    // 0x45d79c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d7a0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45d7a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45d7a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45d7a8: 0xf  sync
    ctx->pc = 0x45d7a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d7ac: 0x40f  sync.p
    ctx->pc = 0x45d7acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d7b0:
    // 0x45d7b0: 0x0  nop
    ctx->pc = 0x45d7b0u;
    // NOP
    // 0x45d7b4: 0x0  nop
    ctx->pc = 0x45d7b4u;
    // NOP
    // 0x45d7b8: 0x0  nop
    ctx->pc = 0x45d7b8u;
    // NOP
    // 0x45d7bc: 0x0  nop
    ctx->pc = 0x45d7bcu;
    // NOP
    // 0x45d7c0: 0x0  nop
    ctx->pc = 0x45d7c0u;
    // NOP
    // 0x45d7c4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D7C4u;
    {
        const bool branch_taken_0x45d7c4 = (false);
        if (branch_taken_0x45d7c4) {
            ctx->pc = 0x45D7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d7b0;
        }
    }
    ctx->pc = 0x45D7CCu;
    // 0x45d7cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45d7d0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45d7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45d7d4: 0x0  nop
    ctx->pc = 0x45d7d4u;
    // NOP
label_45d7d8:
    // 0x45d7d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45d7dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d7e0: 0x0  nop
    ctx->pc = 0x45d7e0u;
    // NOP
    // 0x45d7e4: 0x0  nop
    ctx->pc = 0x45d7e4u;
    // NOP
    // 0x45d7e8: 0x0  nop
    ctx->pc = 0x45d7e8u;
    // NOP
    // 0x45d7ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D7ECu;
    {
        const bool branch_taken_0x45d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d7ec) {
            ctx->pc = 0x45D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d7d8;
        }
    }
    ctx->pc = 0x45D7F4u;
label_45d7f4:
    // 0x45d7f4: 0x148000ae  bnez        $a0, . + 4 + (0xAE << 2)
    ctx->pc = 0x45D7F4u;
    {
        const bool branch_taken_0x45d7f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x45D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D7F4u;
        // 0x45d7f8: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d7f4) {
            ctx->pc = 0x45DAB0u;
            goto label_45dab0;
        }
    }
    ctx->pc = 0x45D7FCu;
    // 0x45d7fc: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45d7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x45d800: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x45d800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x45d804: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x45d804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x45d808: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x45d808u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45d80c: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x45d80cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x45d810: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x45d810u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45d814: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x45d814u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x45d818: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x45d818u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x45d81c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x45d81cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x45d820: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x45d820u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x45d824: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x45d824u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x45d828: 0x34c6e020  ori         $a2, $a2, 0xE020
    ctx->pc = 0x45d828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57376);
    // 0x45d82c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x45d82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45d830: 0x34e7d400  ori         $a3, $a3, 0xD400
    ctx->pc = 0x45d830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54272);
    // 0x45d834: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x45d834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45d838: 0x354ae010  ori         $t2, $t2, 0xE010
    ctx->pc = 0x45d838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57360);
    // 0x45d83c: 0x3739d480  ori         $t9, $t9, 0xD480
    ctx->pc = 0x45d83cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54400);
    // 0x45d840: 0x3718d420  ori         $t8, $t8, 0xD420
    ctx->pc = 0x45d840u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54304);
    // 0x45d844: 0x3694d080  ori         $s4, $s4, 0xD080
    ctx->pc = 0x45d844u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53376);
    // 0x45d848: 0x3673d020  ori         $s3, $s3, 0xD020
    ctx->pc = 0x45d848u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53280);
    // 0x45d84c: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x45d84cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x45d850: 0x24160cc0  addiu       $s6, $zero, 0xCC0
    ctx->pc = 0x45d850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x45d854: 0x35ced010  ori         $t6, $t6, 0xD010
    ctx->pc = 0x45d854u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53264);
    // 0x45d858: 0x24150330  addiu       $s5, $zero, 0x330
    ctx->pc = 0x45d858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x45d85c: 0x0  nop
    ctx->pc = 0x45d85cu;
    // NOP
label_45d860:
    // 0x45d860: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45d864: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45D868u;
    {
        const bool branch_taken_0x45d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d868) {
            ctx->pc = 0x45D898u;
            goto label_45d898;
        }
    }
    ctx->pc = 0x45D870u;
    // 0x45d870: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x45d870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x45d874: 0xf  sync
    ctx->pc = 0x45d874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d878: 0x40f  sync.p
    ctx->pc = 0x45d878u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d87c:
    // 0x45d87c: 0x0  nop
    ctx->pc = 0x45d87cu;
    // NOP
    // 0x45d880: 0x0  nop
    ctx->pc = 0x45d880u;
    // NOP
    // 0x45d884: 0x0  nop
    ctx->pc = 0x45d884u;
    // NOP
    // 0x45d888: 0x0  nop
    ctx->pc = 0x45d888u;
    // NOP
    // 0x45d88c: 0x0  nop
    ctx->pc = 0x45d88cu;
    // NOP
    // 0x45d890: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D890u;
    {
        const bool branch_taken_0x45d890 = (false);
        if (branch_taken_0x45d890) {
            ctx->pc = 0x45D87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d87c;
        }
    }
    ctx->pc = 0x45D898u;
label_45d898:
    // 0x45d898: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x45d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x45d89c: 0x2603fcd0  addiu       $v1, $s0, -0x330
    ctx->pc = 0x45d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966480));
    // 0x45d8a0: 0x264c0cc0  addiu       $t4, $s2, 0xCC0
    ctx->pc = 0x45d8a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 3264));
    // 0x45d8a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d8a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45D8A8u;
    {
        const bool branch_taken_0x45d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D8A8u;
        // 0x45d8ac: 0x262d3300  addiu       $t5, $s1, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d8a8) {
            ctx->pc = 0x45D8FCu;
            goto label_45d8fc;
        }
    }
    ctx->pc = 0x45D8B0u;
    // 0x45d8b0: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x45d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45d8b4: 0xf  sync
    ctx->pc = 0x45d8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d8b8: 0x40f  sync.p
    ctx->pc = 0x45d8b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d8bc:
    // 0x45d8bc: 0x0  nop
    ctx->pc = 0x45d8bcu;
    // NOP
    // 0x45d8c0: 0x0  nop
    ctx->pc = 0x45d8c0u;
    // NOP
    // 0x45d8c4: 0x0  nop
    ctx->pc = 0x45d8c4u;
    // NOP
    // 0x45d8c8: 0x0  nop
    ctx->pc = 0x45d8c8u;
    // NOP
    // 0x45d8cc: 0x0  nop
    ctx->pc = 0x45d8ccu;
    // NOP
    // 0x45d8d0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D8D0u;
    {
        const bool branch_taken_0x45d8d0 = (false);
        if (branch_taken_0x45d8d0) {
            ctx->pc = 0x45D8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d8bc;
        }
    }
    ctx->pc = 0x45D8D8u;
    // 0x45d8d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45d8dc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45d8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_45d8e0:
    // 0x45d8e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45d8e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d8e8: 0x0  nop
    ctx->pc = 0x45d8e8u;
    // NOP
    // 0x45d8ec: 0x0  nop
    ctx->pc = 0x45d8ecu;
    // NOP
    // 0x45d8f0: 0x0  nop
    ctx->pc = 0x45d8f0u;
    // NOP
    // 0x45d8f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D8F4u;
    {
        const bool branch_taken_0x45d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d8f4) {
            ctx->pc = 0x45D8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d8e0;
        }
    }
    ctx->pc = 0x45D8FCu;
label_45d8fc:
    // 0x45d8fc: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x45d900: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x45d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x45d904: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x45d904u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x45d908: 0xadf20000  sw          $s2, 0x0($t7)
    ctx->pc = 0x45d908u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
    // 0x45d90c: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x45d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x45d910: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x45d910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x45d914: 0xf  sync
    ctx->pc = 0x45d914u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d918: 0x40f  sync.p
    ctx->pc = 0x45d918u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d91c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x45d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x45d920: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d924: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45D924u;
    {
        const bool branch_taken_0x45d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D924u;
        // 0x45d928: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d924) {
            ctx->pc = 0x45D97Cu;
            goto label_45d97c;
        }
    }
    ctx->pc = 0x45D92Cu;
    // 0x45d92c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x45d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45d930: 0xf  sync
    ctx->pc = 0x45d930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d934: 0x40f  sync.p
    ctx->pc = 0x45d934u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45d938:
    // 0x45d938: 0x0  nop
    ctx->pc = 0x45d938u;
    // NOP
    // 0x45d93c: 0x0  nop
    ctx->pc = 0x45d93cu;
    // NOP
    // 0x45d940: 0x0  nop
    ctx->pc = 0x45d940u;
    // NOP
    // 0x45d944: 0x0  nop
    ctx->pc = 0x45d944u;
    // NOP
    // 0x45d948: 0x0  nop
    ctx->pc = 0x45d948u;
    // NOP
    // 0x45d94c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D94Cu;
    {
        const bool branch_taken_0x45d94c = (false);
        if (branch_taken_0x45d94c) {
            ctx->pc = 0x45D938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d938;
        }
    }
    ctx->pc = 0x45D954u;
    // 0x45d954: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45d954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45d958: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45d958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45d95c: 0x0  nop
    ctx->pc = 0x45d95cu;
    // NOP
label_45d960:
    // 0x45d960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45d960u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45d964: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d968: 0x0  nop
    ctx->pc = 0x45d968u;
    // NOP
    // 0x45d96c: 0x0  nop
    ctx->pc = 0x45d96cu;
    // NOP
    // 0x45d970: 0x0  nop
    ctx->pc = 0x45d970u;
    // NOP
    // 0x45d974: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45D974u;
    {
        const bool branch_taken_0x45d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D974u;
        // 0x45d978: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d974) {
            ctx->pc = 0x45D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d960;
        }
    }
    ctx->pc = 0x45D97Cu;
label_45d97c:
    // 0x45d97c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45d980: 0x34420cc0  ori         $v0, $v0, 0xCC0
    ctx->pc = 0x45d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3264);
    // 0x45d984: 0x2405032f  addiu       $a1, $zero, 0x32F
    ctx->pc = 0x45d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 815));
label_45d988:
    // 0x45d988: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x45d988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x45d98c: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x45d98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x45d990: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x45d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d994: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45d998: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x45d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d99c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45d9a0: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x45d9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x45d9a4: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x45d9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x45d9a8: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x45d9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9ac: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x45d9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45d9b4: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x45d9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x45d9b8: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x45d9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x45d9bc: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x45d9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9c0: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x45d9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45d9c8: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x45d9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x45d9cc: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x45d9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x45d9d0: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x45d9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9d4: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x45d9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45d9d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45d9dc: 0x4a1ffea  bgez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x45D9DCu;
    {
        const bool branch_taken_0x45d9dc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x45D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45D9DCu;
        // 0x45d9e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d9dc) {
            ctx->pc = 0x45D988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d988;
        }
    }
    ctx->pc = 0x45D9E4u;
    // 0x45d9e4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45d9e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45d9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45d9ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x45D9ECu;
    {
        const bool branch_taken_0x45d9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d9ec) {
            ctx->pc = 0x45DA20u;
            goto label_45da20;
        }
    }
    ctx->pc = 0x45D9F4u;
    // 0x45d9f4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x45d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x45d9f8: 0xf  sync
    ctx->pc = 0x45d9f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45d9fc: 0x40f  sync.p
    ctx->pc = 0x45d9fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45da00:
    // 0x45da00: 0x0  nop
    ctx->pc = 0x45da00u;
    // NOP
    // 0x45da04: 0x0  nop
    ctx->pc = 0x45da04u;
    // NOP
    // 0x45da08: 0x0  nop
    ctx->pc = 0x45da08u;
    // NOP
    // 0x45da0c: 0x0  nop
    ctx->pc = 0x45da0cu;
    // NOP
    // 0x45da10: 0x0  nop
    ctx->pc = 0x45da10u;
    // NOP
    // 0x45da14: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DA14u;
    {
        const bool branch_taken_0x45da14 = (false);
        if (branch_taken_0x45da14) {
            ctx->pc = 0x45DA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45da00;
        }
    }
    ctx->pc = 0x45DA1Cu;
    // 0x45da1c: 0x0  nop
    ctx->pc = 0x45da1cu;
    // NOP
label_45da20:
    // 0x45da20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x45da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x45da24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45da28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45DA28u;
    {
        const bool branch_taken_0x45da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da28) {
            ctx->pc = 0x45DA7Cu;
            goto label_45da7c;
        }
    }
    ctx->pc = 0x45DA30u;
    // 0x45da30: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x45da30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x45da34: 0xf  sync
    ctx->pc = 0x45da34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45da38: 0x40f  sync.p
    ctx->pc = 0x45da38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45da3c:
    // 0x45da3c: 0x0  nop
    ctx->pc = 0x45da3cu;
    // NOP
    // 0x45da40: 0x0  nop
    ctx->pc = 0x45da40u;
    // NOP
    // 0x45da44: 0x0  nop
    ctx->pc = 0x45da44u;
    // NOP
    // 0x45da48: 0x0  nop
    ctx->pc = 0x45da48u;
    // NOP
    // 0x45da4c: 0x0  nop
    ctx->pc = 0x45da4cu;
    // NOP
    // 0x45da50: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DA50u;
    {
        const bool branch_taken_0x45da50 = (false);
        if (branch_taken_0x45da50) {
            ctx->pc = 0x45DA3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45da3c;
        }
    }
    ctx->pc = 0x45DA58u;
    // 0x45da58: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45da58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45da5c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45da5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_45da60:
    // 0x45da60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45da60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x45da64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45da68: 0x0  nop
    ctx->pc = 0x45da68u;
    // NOP
    // 0x45da6c: 0x0  nop
    ctx->pc = 0x45da6cu;
    // NOP
    // 0x45da70: 0x0  nop
    ctx->pc = 0x45da70u;
    // NOP
    // 0x45da74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DA74u;
    {
        const bool branch_taken_0x45da74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45da74) {
            ctx->pc = 0x45DA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45da60;
        }
    }
    ctx->pc = 0x45DA7Cu;
label_45da7c:
    // 0x45da7c: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x45da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x45da80: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x45da80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x45da84: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x45da84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x45da88: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x45da88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x45da8c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x45da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x45da90: 0xf  sync
    ctx->pc = 0x45da90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45da94: 0x40f  sync.p
    ctx->pc = 0x45da94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45da98: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x45da98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45da9c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x45da9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45daa0: 0x2a020331  slti        $v0, $s0, 0x331
    ctx->pc = 0x45daa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)817) ? 1 : 0);
    // 0x45daa4: 0x1040ff6e  beqz        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x45DAA4u;
    {
        const bool branch_taken_0x45daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DAA4u;
        // 0x45daa8: 0x1a0882d  daddu       $s1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45daa4) {
            ctx->pc = 0x45D860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45d860;
        }
    }
    ctx->pc = 0x45DAACu;
    // 0x45daac: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x45daacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_45dab0:
    // 0x45dab0: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x45DAB0u;
    {
        const bool branch_taken_0x45dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DAB0u;
        // 0x45dab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dab0) {
            ctx->pc = 0x45DDE8u;
            goto label_45dde8;
        }
    }
    ctx->pc = 0x45DAB8u;
    // 0x45dab8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x45dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x45dabc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x45dabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x45dac0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x45dac0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x45dac4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x45dac4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x45dac8: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x45dac8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x45dacc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dad0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45dad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45dad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45dad8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45dadc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45DADCu;
    {
        const bool branch_taken_0x45dadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DADCu;
        // 0x45dae0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dadc) {
            ctx->pc = 0x45DB18u;
            goto label_45db18;
        }
    }
    ctx->pc = 0x45DAE4u;
    // 0x45dae4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45dae8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45dae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45daec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45daecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45daf0: 0xf  sync
    ctx->pc = 0x45daf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45daf4: 0x40f  sync.p
    ctx->pc = 0x45daf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45daf8:
    // 0x45daf8: 0x0  nop
    ctx->pc = 0x45daf8u;
    // NOP
    // 0x45dafc: 0x0  nop
    ctx->pc = 0x45dafcu;
    // NOP
    // 0x45db00: 0x0  nop
    ctx->pc = 0x45db00u;
    // NOP
    // 0x45db04: 0x0  nop
    ctx->pc = 0x45db04u;
    // NOP
    // 0x45db08: 0x0  nop
    ctx->pc = 0x45db08u;
    // NOP
    // 0x45db0c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DB0Cu;
    {
        const bool branch_taken_0x45db0c = (false);
        if (branch_taken_0x45db0c) {
            ctx->pc = 0x45DAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45daf8;
        }
    }
    ctx->pc = 0x45DB14u;
    // 0x45db14: 0x0  nop
    ctx->pc = 0x45db14u;
    // NOP
label_45db18:
    // 0x45db18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45db18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45db1c: 0x4b180  sll         $s6, $a0, 6
    ctx->pc = 0x45db1cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x45db20: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45db24: 0x214a823  subu        $s5, $s0, $s4
    ctx->pc = 0x45db24u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45db28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45db28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45db2c: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x45db2cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x45db30: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x45db30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x45db34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45db34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45db38: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45DB38u;
    {
        const bool branch_taken_0x45db38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DB38u;
        // 0x45db3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45db38) {
            ctx->pc = 0x45DB94u;
            goto label_45db94;
        }
    }
    ctx->pc = 0x45DB40u;
    // 0x45db40: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45db44: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45db48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45db48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45db4c: 0xf  sync
    ctx->pc = 0x45db4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45db50: 0x40f  sync.p
    ctx->pc = 0x45db50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45db54:
    // 0x45db54: 0x0  nop
    ctx->pc = 0x45db54u;
    // NOP
    // 0x45db58: 0x0  nop
    ctx->pc = 0x45db58u;
    // NOP
    // 0x45db5c: 0x0  nop
    ctx->pc = 0x45db5cu;
    // NOP
    // 0x45db60: 0x0  nop
    ctx->pc = 0x45db60u;
    // NOP
    // 0x45db64: 0x0  nop
    ctx->pc = 0x45db64u;
    // NOP
    // 0x45db68: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DB68u;
    {
        const bool branch_taken_0x45db68 = (false);
        if (branch_taken_0x45db68) {
            ctx->pc = 0x45DB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45db54;
        }
    }
    ctx->pc = 0x45DB70u;
    // 0x45db70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45db70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45db74: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45db74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45db78:
    // 0x45db78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45db78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45db7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45db80: 0x0  nop
    ctx->pc = 0x45db80u;
    // NOP
    // 0x45db84: 0x0  nop
    ctx->pc = 0x45db84u;
    // NOP
    // 0x45db88: 0x0  nop
    ctx->pc = 0x45db88u;
    // NOP
    // 0x45db8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DB8Cu;
    {
        const bool branch_taken_0x45db8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45db8c) {
            ctx->pc = 0x45DB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45db78;
        }
    }
    ctx->pc = 0x45DB94u;
label_45db94:
    // 0x45db94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45db94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45db98: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x45db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x45db9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x45db9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x45dba0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45dba4: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x45dba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45dba8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x45dba8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x45dbac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dbb0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45dbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45dbb4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x45dbb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x45dbb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dbbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45dbbcu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45dbc0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45dbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45dbc4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x45dbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x45dbc8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x45dbc8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x45dbcc: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x45DBCCu;
    SET_GPR_U32(ctx, 31, 0x45DBD4u);
    ctx->pc = 0x45DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45DBCCu;
    // 0x45dbd0: 0x3610d420  ori         $s0, $s0, 0xD420 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x45DBCCu, 0x45DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DBD4u;
label_45dbd4:
    // 0x45dbd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45dbd4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45dbd8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dbdc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45dbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45dbe0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45dbe4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45dbe4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45dbe8: 0xf  sync
    ctx->pc = 0x45dbe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dbec: 0x40f  sync.p
    ctx->pc = 0x45dbecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dbf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45dbf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45dbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45dbf8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45DBF8u;
    {
        const bool branch_taken_0x45dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DBF8u;
        // 0x45dbfc: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dbf8) {
            ctx->pc = 0x45DC54u;
            goto label_45dc54;
        }
    }
    ctx->pc = 0x45DC00u;
    // 0x45dc00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dc04: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45dc08: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x45dc08u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x45dc0c: 0xf  sync
    ctx->pc = 0x45dc0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dc10: 0x40f  sync.p
    ctx->pc = 0x45dc10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45dc14:
    // 0x45dc14: 0x0  nop
    ctx->pc = 0x45dc14u;
    // NOP
    // 0x45dc18: 0x0  nop
    ctx->pc = 0x45dc18u;
    // NOP
    // 0x45dc1c: 0x0  nop
    ctx->pc = 0x45dc1cu;
    // NOP
    // 0x45dc20: 0x0  nop
    ctx->pc = 0x45dc20u;
    // NOP
    // 0x45dc24: 0x0  nop
    ctx->pc = 0x45dc24u;
    // NOP
    // 0x45dc28: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DC28u;
    {
        const bool branch_taken_0x45dc28 = (false);
        if (branch_taken_0x45dc28) {
            ctx->pc = 0x45DC14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dc14;
        }
    }
    ctx->pc = 0x45DC30u;
    // 0x45dc30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dc34: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45dc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45dc38:
    // 0x45dc38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45dc3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45dc40: 0x0  nop
    ctx->pc = 0x45dc40u;
    // NOP
    // 0x45dc44: 0x0  nop
    ctx->pc = 0x45dc44u;
    // NOP
    // 0x45dc48: 0x0  nop
    ctx->pc = 0x45dc48u;
    // NOP
    // 0x45dc4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DC4Cu;
    {
        const bool branch_taken_0x45dc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DC4Cu;
        // 0x45dc50: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dc4c) {
            ctx->pc = 0x45DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dc38;
        }
    }
    ctx->pc = 0x45DC54u;
label_45dc54:
    // 0x45dc54: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45dc58: 0x1a80001a  blez        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x45DC58u;
    {
        const bool branch_taken_0x45dc58 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x45DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DC58u;
        // 0x45dc5c: 0x34420cc0  ori         $v0, $v0, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dc58) {
            ctx->pc = 0x45DCC4u;
            goto label_45dcc4;
        }
    }
    ctx->pc = 0x45DC60u;
    // 0x45dc60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x45dc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45dc64: 0x0  nop
    ctx->pc = 0x45dc64u;
    // NOP
label_45dc68:
    // 0x45dc68: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x45dc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x45dc6c: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x45dc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x45dc70: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x45dc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dc74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45dc78: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x45dc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dc7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45dc80: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x45dc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x45dc84: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x45dc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x45dc88: 0xa8500003  swl         $s0, 0x3($v0)
    ctx->pc = 0x45dc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dc8c: 0xb8500000  swr         $s0, 0x0($v0)
    ctx->pc = 0x45dc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dc90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45dc94: 0x88860003  lwl         $a2, 0x3($a0)
    ctx->pc = 0x45dc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x45dc98: 0x98860000  lwr         $a2, 0x0($a0)
    ctx->pc = 0x45dc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x45dc9c: 0xa8460003  swl         $a2, 0x3($v0)
    ctx->pc = 0x45dc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dca0: 0xb8460000  swr         $a2, 0x0($v0)
    ctx->pc = 0x45dca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dca4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45dca8: 0x88970003  lwl         $s7, 0x3($a0)
    ctx->pc = 0x45dca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x45dcac: 0x98970000  lwr         $s7, 0x0($a0)
    ctx->pc = 0x45dcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x45dcb0: 0xa8570003  swl         $s7, 0x3($v0)
    ctx->pc = 0x45dcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dcb4: 0xb8570000  swr         $s7, 0x0($v0)
    ctx->pc = 0x45dcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45dcb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45dcbc: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x45DCBCu;
    {
        const bool branch_taken_0x45dcbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DCBCu;
        // 0x45dcc0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dcbc) {
            ctx->pc = 0x45DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dc68;
        }
    }
    ctx->pc = 0x45DCC4u;
label_45dcc4:
    // 0x45dcc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dcc8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45dcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45dccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45dcd0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45dcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45dcd4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45DCD4u;
    {
        const bool branch_taken_0x45dcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DCD4u;
        // 0x45dcd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dcd4) {
            ctx->pc = 0x45DD10u;
            goto label_45dd10;
        }
    }
    ctx->pc = 0x45DCDCu;
    // 0x45dcdc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45dce0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45dce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45dce4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45dce8: 0xf  sync
    ctx->pc = 0x45dce8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dcec: 0x40f  sync.p
    ctx->pc = 0x45dcecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45dcf0:
    // 0x45dcf0: 0x0  nop
    ctx->pc = 0x45dcf0u;
    // NOP
    // 0x45dcf4: 0x0  nop
    ctx->pc = 0x45dcf4u;
    // NOP
    // 0x45dcf8: 0x0  nop
    ctx->pc = 0x45dcf8u;
    // NOP
    // 0x45dcfc: 0x0  nop
    ctx->pc = 0x45dcfcu;
    // NOP
    // 0x45dd00: 0x0  nop
    ctx->pc = 0x45dd00u;
    // NOP
    // 0x45dd04: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DD04u;
    {
        const bool branch_taken_0x45dd04 = (false);
        if (branch_taken_0x45dd04) {
            ctx->pc = 0x45DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dcf0;
        }
    }
    ctx->pc = 0x45DD0Cu;
    // 0x45dd0c: 0x0  nop
    ctx->pc = 0x45dd0cu;
    // NOP
label_45dd10:
    // 0x45dd10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dd14: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45dd18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45dd1c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45dd20: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45DD20u;
    {
        const bool branch_taken_0x45dd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DD20u;
        // 0x45dd24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dd20) {
            ctx->pc = 0x45DD7Cu;
            goto label_45dd7c;
        }
    }
    ctx->pc = 0x45DD28u;
    // 0x45dd28: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45dd2c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45dd30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45dd30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45dd34: 0xf  sync
    ctx->pc = 0x45dd34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dd38: 0x40f  sync.p
    ctx->pc = 0x45dd38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45dd3c:
    // 0x45dd3c: 0x0  nop
    ctx->pc = 0x45dd3cu;
    // NOP
    // 0x45dd40: 0x0  nop
    ctx->pc = 0x45dd40u;
    // NOP
    // 0x45dd44: 0x0  nop
    ctx->pc = 0x45dd44u;
    // NOP
    // 0x45dd48: 0x0  nop
    ctx->pc = 0x45dd48u;
    // NOP
    // 0x45dd4c: 0x0  nop
    ctx->pc = 0x45dd4cu;
    // NOP
    // 0x45dd50: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DD50u;
    {
        const bool branch_taken_0x45dd50 = (false);
        if (branch_taken_0x45dd50) {
            ctx->pc = 0x45DD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dd3c;
        }
    }
    ctx->pc = 0x45DD58u;
    // 0x45dd58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dd5c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45dd60:
    // 0x45dd60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45dd64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45dd68: 0x0  nop
    ctx->pc = 0x45dd68u;
    // NOP
    // 0x45dd6c: 0x0  nop
    ctx->pc = 0x45dd6cu;
    // NOP
    // 0x45dd70: 0x0  nop
    ctx->pc = 0x45dd70u;
    // NOP
    // 0x45dd74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DD74u;
    {
        const bool branch_taken_0x45dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dd74) {
            ctx->pc = 0x45DD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dd60;
        }
    }
    ctx->pc = 0x45DD7Cu;
label_45dd7c:
    // 0x45dd7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dd80: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45dd84: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45dd88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dd8c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45dd8cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45dd90: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45dd94: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x45dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x45dd98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45dd9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45dd9cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45dda0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45dda4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x45dda4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x45dda8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45ddac: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45ddb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ddb4: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x45ddb4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x45ddb8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45ddbc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45ddbcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45ddc0: 0xf  sync
    ctx->pc = 0x45ddc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ddc4: 0x40f  sync.p
    ctx->pc = 0x45ddc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ddc8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x45ddc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x45ddcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x45ddccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x45ddd0: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x45ddd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x45ddd4: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x45ddd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x45ddd8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x45DDD8u;
    SET_GPR_U32(ctx, 31, 0x45DDE0u);
    ctx->pc = 0x45DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45DDD8u;
    // 0x45dddc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x45DDD8u, 0x45DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DDE0u;
label_45dde0:
    // 0x45dde0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45dde4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x45dde4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45dde8:
    // 0x45dde8: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x45DDE8u;
    {
        const bool branch_taken_0x45dde8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DDE8u;
        // 0x45ddec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dde8) {
            ctx->pc = 0x45DEACu;
            goto label_45deac;
        }
    }
    ctx->pc = 0x45DDF0u;
    // 0x45ddf0: 0x1a00002e  blez        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x45DDF0u;
    {
        const bool branch_taken_0x45ddf0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x45DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DDF0u;
        // 0x45ddf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ddf0) {
            ctx->pc = 0x45DEACu;
            goto label_45deac;
        }
    }
    ctx->pc = 0x45DDF8u;
    // 0x45ddf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ddfc: 0x0  nop
    ctx->pc = 0x45ddfcu;
    // NOP
label_45de00:
    // 0x45de00: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x45de00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x45de04: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x45de04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x45de08: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x45de08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45de10: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x45de10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x45de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x45de18: 0x88570003  lwl         $s7, 0x3($v0)
    ctx->pc = 0x45de18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x45de1c: 0x98570000  lwr         $s7, 0x0($v0)
    ctx->pc = 0x45de1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x45de20: 0xa8970003  swl         $s7, 0x3($a0)
    ctx->pc = 0x45de20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de24: 0xb8970000  swr         $s7, 0x0($a0)
    ctx->pc = 0x45de24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x45de28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x45de2c: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x45de2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x45de30: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x45de30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x45de34: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x45de34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de38: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x45de38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x45de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x45de40: 0x88570003  lwl         $s7, 0x3($v0)
    ctx->pc = 0x45de40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 23) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 23, (int32_t)merged); }
    // 0x45de44: 0x98570000  lwr         $s7, 0x0($v0)
    ctx->pc = 0x45de44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 23) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 23) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 23, merged64); }
    // 0x45de48: 0xa8970003  swl         $s7, 0x3($a0)
    ctx->pc = 0x45de48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de4c: 0xb8970000  swr         $s7, 0x0($a0)
    ctx->pc = 0x45de4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x45de50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x45de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x45de54: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x45DE54u;
    {
        const bool branch_taken_0x45de54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DE54u;
        // 0x45de58: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45de54) {
            ctx->pc = 0x45DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45de00;
        }
    }
    ctx->pc = 0x45DE5Cu;
    // 0x45de5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x45DE5Cu;
    {
        const bool branch_taken_0x45de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DE5Cu;
        // 0x45de60: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45de5c) {
            ctx->pc = 0x45DEB0u;
            goto label_45deb0;
        }
    }
    ctx->pc = 0x45DE64u;
label_45de64:
    // 0x45de64: 0x5a000012  blezl       $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x45DE64u;
    {
        const bool branch_taken_0x45de64 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x45de64) {
            ctx->pc = 0x45DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45DE64u;
            // 0x45de68: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45DEB0u;
            goto label_45deb0;
        }
    }
    ctx->pc = 0x45DE6Cu;
    // 0x45de6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45de6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45de70:
    // 0x45de70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x45de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45de74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45de74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45de78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45de78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x45de7c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x45de7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x45de80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x45de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45de84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45de84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x45de88: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x45de88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x45de8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x45de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45de90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45de90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x45de94: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x45de94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x45de98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x45de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45de9c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x45de9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x45dea0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x45dea4: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x45DEA4u;
    {
        const bool branch_taken_0x45dea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DEA4u;
        // 0x45dea8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45dea4) {
            ctx->pc = 0x45DE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45de70;
        }
    }
    ctx->pc = 0x45DEACu;
label_45deac:
    // 0x45deac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x45deacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45deb0:
    // 0x45deb0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x45deb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45deb4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x45deb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45deb8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x45deb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45debc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45debcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45dec0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x45dec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45dec4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x45dec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45dec8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x45dec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45decc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x45deccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ded0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45ded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ded4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x45ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45ded8: 0x3e00008  jr          $ra
    ctx->pc = 0x45DED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DED8u;
        // 0x45dedc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45DED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45DEE0u;
}
