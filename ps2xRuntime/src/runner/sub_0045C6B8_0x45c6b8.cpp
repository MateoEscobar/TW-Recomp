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

// Function: sub_0045C6B8
// Address: 0x45c6b8 - 0x45ceb0
void sub_0045C6B8_0x45c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C6B8_0x45c6b8");
#endif

    switch (ctx->pc) {
        case 0x45c708u: goto label_45c708;
        case 0x45c734u: goto label_45c734;
        case 0x45c780u: goto label_45c780;
        case 0x45c7a8u: goto label_45c7a8;
        case 0x45c7c8u: goto label_45c7c8;
        case 0x45c860u: goto label_45c860;
        case 0x45c87cu: goto label_45c87c;
        case 0x45c8bcu: goto label_45c8bc;
        case 0x45c8e0u: goto label_45c8e0;
        case 0x45c934u: goto label_45c934;
        case 0x45c958u: goto label_45c958;
        case 0x45c988u: goto label_45c988;
        case 0x45ca14u: goto label_45ca14;
        case 0x45ca4cu: goto label_45ca4c;
        case 0x45ca70u: goto label_45ca70;
        case 0x45caf0u: goto label_45caf0;
        case 0x45cb40u: goto label_45cb40;
        case 0x45cb68u: goto label_45cb68;
        case 0x45cbf0u: goto label_45cbf0;
        case 0x45cc18u: goto label_45cc18;
        case 0x45cc50u: goto label_45cc50;
        case 0x45ccecu: goto label_45ccec;
        case 0x45cd34u: goto label_45cd34;
        case 0x45cd58u: goto label_45cd58;
        case 0x45cdccu: goto label_45cdcc;
        case 0x45ce10u: goto label_45ce10;
        default: break;
    }

    ctx->pc = 0x45c6b8u;

    // 0x45c6b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x45c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x45c6bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x45c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x45c6c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x45c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x45c6c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x45c6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6c8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x45c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x45c6cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x45c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x45c6d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x45c6d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x45c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x45c6d8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x45c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x45c6dc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x45c6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x45c6e0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x45c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x45c6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45c6e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x45c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45c6ec: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x45c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x45c6f0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x45c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45c6f4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x45c6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45c6f8: 0x14a601b3  bne         $a1, $a2, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x45C6F8u;
    {
        const bool branch_taken_0x45c6f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x45C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C6F8u;
        // 0x45c6fc: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c6f8) {
            ctx->pc = 0x45CDC8u;
            goto label_45cdc8;
        }
    }
    ctx->pc = 0x45C700u;
    // 0x45c700: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45C700u;
    SET_GPR_U32(ctx, 31, 0x45C708u);
    ctx->pc = 0x45C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45C700u;
    // 0x45c704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45C700u, 0x45C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C708u;
label_45c708:
    // 0x45c708: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45c70c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45c710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45c710u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45c714: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45c714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45c718: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45C718u;
    {
        const bool branch_taken_0x45c718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C718u;
        // 0x45c71c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c718) {
            ctx->pc = 0x45C750u;
            goto label_45c750;
        }
    }
    ctx->pc = 0x45C720u;
    // 0x45c720: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45c720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45c724: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45c728: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45c728u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45c72c: 0xf  sync
    ctx->pc = 0x45c72cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c730: 0x40f  sync.p
    ctx->pc = 0x45c730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c734:
    // 0x45c734: 0x0  nop
    ctx->pc = 0x45c734u;
    // NOP
    // 0x45c738: 0x0  nop
    ctx->pc = 0x45c738u;
    // NOP
    // 0x45c73c: 0x0  nop
    ctx->pc = 0x45c73cu;
    // NOP
    // 0x45c740: 0x0  nop
    ctx->pc = 0x45c740u;
    // NOP
    // 0x45c744: 0x0  nop
    ctx->pc = 0x45c744u;
    // NOP
    // 0x45c748: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C748u;
    {
        const bool branch_taken_0x45c748 = (false);
        if (branch_taken_0x45c748) {
            ctx->pc = 0x45C734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c734;
        }
    }
    ctx->pc = 0x45C750u;
label_45c750:
    // 0x45c750: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c754: 0x2a24007f  slti        $a0, $s1, 0x7F
    ctx->pc = 0x45c754u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x45c758: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45c758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45c75c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45c760: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c764: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45C764u;
    {
        const bool branch_taken_0x45c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C764u;
        // 0x45c768: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c764) {
            ctx->pc = 0x45C7C4u;
            goto label_45c7c4;
        }
    }
    ctx->pc = 0x45C76Cu;
    // 0x45c76c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45c770: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45c774: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45c774u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45c778: 0xf  sync
    ctx->pc = 0x45c778u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c77c: 0x40f  sync.p
    ctx->pc = 0x45c77cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c780:
    // 0x45c780: 0x0  nop
    ctx->pc = 0x45c780u;
    // NOP
    // 0x45c784: 0x0  nop
    ctx->pc = 0x45c784u;
    // NOP
    // 0x45c788: 0x0  nop
    ctx->pc = 0x45c788u;
    // NOP
    // 0x45c78c: 0x0  nop
    ctx->pc = 0x45c78cu;
    // NOP
    // 0x45c790: 0x0  nop
    ctx->pc = 0x45c790u;
    // NOP
    // 0x45c794: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C794u;
    {
        const bool branch_taken_0x45c794 = (false);
        if (branch_taken_0x45c794) {
            ctx->pc = 0x45C780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c780;
        }
    }
    ctx->pc = 0x45C79Cu;
    // 0x45c79c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c7a0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45c7a4: 0x0  nop
    ctx->pc = 0x45c7a4u;
    // NOP
label_45c7a8:
    // 0x45c7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45c7ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c7b0: 0x0  nop
    ctx->pc = 0x45c7b0u;
    // NOP
    // 0x45c7b4: 0x0  nop
    ctx->pc = 0x45c7b4u;
    // NOP
    // 0x45c7b8: 0x0  nop
    ctx->pc = 0x45c7b8u;
    // NOP
    // 0x45c7bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C7BCu;
    {
        const bool branch_taken_0x45c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c7bc) {
            ctx->pc = 0x45C7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c7a8;
        }
    }
    ctx->pc = 0x45C7C4u;
label_45c7c4:
    // 0x45c7c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45c7c8:
    // 0x45c7c8: 0x42000039  di
    ctx->pc = 0x45c7c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c7cc: 0x40f  sync.p
    ctx->pc = 0x45c7ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c7d0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45c7d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45c7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45c7d8: 0x0  nop
    ctx->pc = 0x45c7d8u;
    // NOP
    // 0x45c7dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C7DCu;
    {
        const bool branch_taken_0x45c7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c7dc) {
            ctx->pc = 0x45C7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c7c8;
        }
    }
    ctx->pc = 0x45C7E4u;
    // 0x45c7e4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x45c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x45c7e8: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x45c7e8u;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45c7ec: 0x4a0002ff  vnop
    ctx->pc = 0x45c7ecu;
    // NOP operation, no action needed for VU0
    // 0x45c7f0: 0x4a0002ff  vnop
    ctx->pc = 0x45c7f0u;
    // NOP operation, no action needed for VU0
    // 0x45c7f4: 0x42000038  ei
    ctx->pc = 0x45c7f4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c7f8: 0x148000b1  bnez        $a0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x45C7F8u;
    {
        const bool branch_taken_0x45c7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c7f8) {
            ctx->pc = 0x45CAC0u;
            goto label_45cac0;
        }
    }
    ctx->pc = 0x45C800u;
    // 0x45c800: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x45c800u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45c804: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x45c804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x45c808: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x45c808u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x45c80c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x45c80cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x45c810: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x45c810u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x45c814: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x45c814u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x45c818: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x45c818u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x45c81c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x45c81cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x45c820: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x45c820u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x45c824: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x45c824u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45c828: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x45c828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x45c82c: 0x34a5e020  ori         $a1, $a1, 0xE020
    ctx->pc = 0x45c82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57376);
    // 0x45c830: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x45c830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45c834: 0x3508d400  ori         $t0, $t0, 0xD400
    ctx->pc = 0x45c834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54272);
    // 0x45c838: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x45c838u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45c83c: 0x356be010  ori         $t3, $t3, 0xE010
    ctx->pc = 0x45c83cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57360);
    // 0x45c840: 0x36d6d480  ori         $s6, $s6, 0xD480
    ctx->pc = 0x45c840u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54400);
    // 0x45c844: 0x36b5d410  ori         $s5, $s5, 0xD410
    ctx->pc = 0x45c844u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54288);
    // 0x45c848: 0x3694d420  ori         $s4, $s4, 0xD420
    ctx->pc = 0x45c848u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)54304);
    // 0x45c84c: 0x241701fc  addiu       $s7, $zero, 0x1FC
    ctx->pc = 0x45c84cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x45c850: 0x3673d080  ori         $s3, $s3, 0xD080
    ctx->pc = 0x45c850u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53376);
    // 0x45c854: 0x3739d020  ori         $t9, $t9, 0xD020
    ctx->pc = 0x45c854u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53280);
    // 0x45c858: 0x241e1fc0  addiu       $fp, $zero, 0x1FC0
    ctx->pc = 0x45c858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x45c85c: 0x3718d010  ori         $t8, $t8, 0xD010
    ctx->pc = 0x45c85cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53264);
label_45c860:
    // 0x45c860: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x45c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x45c864: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45C868u;
    {
        const bool branch_taken_0x45c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c868) {
            ctx->pc = 0x45C898u;
            goto label_45c898;
        }
    }
    ctx->pc = 0x45C870u;
    // 0x45c870: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x45c870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x45c874: 0xf  sync
    ctx->pc = 0x45c874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c878: 0x40f  sync.p
    ctx->pc = 0x45c878u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c87c:
    // 0x45c87c: 0x0  nop
    ctx->pc = 0x45c87cu;
    // NOP
    // 0x45c880: 0x0  nop
    ctx->pc = 0x45c880u;
    // NOP
    // 0x45c884: 0x0  nop
    ctx->pc = 0x45c884u;
    // NOP
    // 0x45c888: 0x0  nop
    ctx->pc = 0x45c888u;
    // NOP
    // 0x45c88c: 0x0  nop
    ctx->pc = 0x45c88cu;
    // NOP
    // 0x45c890: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C890u;
    {
        const bool branch_taken_0x45c890 = (false);
        if (branch_taken_0x45c890) {
            ctx->pc = 0x45C87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c87c;
        }
    }
    ctx->pc = 0x45C898u;
label_45c898:
    // 0x45c898: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45c89c: 0x262fff81  addiu       $t7, $s1, -0x7F
    ctx->pc = 0x45c89cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967169));
    // 0x45c8a0: 0x260d1fc0  addiu       $t5, $s0, 0x1FC0
    ctx->pc = 0x45c8a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x45c8a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c8a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45C8A8u;
    {
        const bool branch_taken_0x45c8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C8A8u;
        // 0x45c8ac: 0x264e1fc0  addiu       $t6, $s2, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 8128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c8a8) {
            ctx->pc = 0x45C8FCu;
            goto label_45c8fc;
        }
    }
    ctx->pc = 0x45C8B0u;
    // 0x45c8b0: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45c8b4: 0xf  sync
    ctx->pc = 0x45c8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c8b8: 0x40f  sync.p
    ctx->pc = 0x45c8b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c8bc:
    // 0x45c8bc: 0x0  nop
    ctx->pc = 0x45c8bcu;
    // NOP
    // 0x45c8c0: 0x0  nop
    ctx->pc = 0x45c8c0u;
    // NOP
    // 0x45c8c4: 0x0  nop
    ctx->pc = 0x45c8c4u;
    // NOP
    // 0x45c8c8: 0x0  nop
    ctx->pc = 0x45c8c8u;
    // NOP
    // 0x45c8cc: 0x0  nop
    ctx->pc = 0x45c8ccu;
    // NOP
    // 0x45c8d0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C8D0u;
    {
        const bool branch_taken_0x45c8d0 = (false);
        if (branch_taken_0x45c8d0) {
            ctx->pc = 0x45C8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c8bc;
        }
    }
    ctx->pc = 0x45C8D8u;
    // 0x45c8d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c8dc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45c8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45c8e0:
    // 0x45c8e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45c8e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c8e8: 0x0  nop
    ctx->pc = 0x45c8e8u;
    // NOP
    // 0x45c8ec: 0x0  nop
    ctx->pc = 0x45c8ecu;
    // NOP
    // 0x45c8f0: 0x0  nop
    ctx->pc = 0x45c8f0u;
    // NOP
    // 0x45c8f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C8F4u;
    {
        const bool branch_taken_0x45c8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c8f4) {
            ctx->pc = 0x45C8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c8e0;
        }
    }
    ctx->pc = 0x45C8FCu;
label_45c8fc:
    // 0x45c8fc: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x45c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x45c900: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x45c900u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x45c904: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x45c904u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x45c908: 0xae970000  sw          $s7, 0x0($s4)
    ctx->pc = 0x45c908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 23));
    // 0x45c90c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x45c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x45c910: 0xf  sync
    ctx->pc = 0x45c910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c914: 0x40f  sync.p
    ctx->pc = 0x45c914u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c918: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45c91c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c920: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x45C920u;
    {
        const bool branch_taken_0x45c920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45C920u;
        // 0x45c924: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c920) {
            ctx->pc = 0x45C978u;
            goto label_45c978;
        }
    }
    ctx->pc = 0x45C928u;
    // 0x45c928: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45c928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45c92c: 0xf  sync
    ctx->pc = 0x45c92cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c930: 0x40f  sync.p
    ctx->pc = 0x45c930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45c934:
    // 0x45c934: 0x0  nop
    ctx->pc = 0x45c934u;
    // NOP
    // 0x45c938: 0x0  nop
    ctx->pc = 0x45c938u;
    // NOP
    // 0x45c93c: 0x0  nop
    ctx->pc = 0x45c93cu;
    // NOP
    // 0x45c940: 0x0  nop
    ctx->pc = 0x45c940u;
    // NOP
    // 0x45c944: 0x0  nop
    ctx->pc = 0x45c944u;
    // NOP
    // 0x45c948: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C948u;
    {
        const bool branch_taken_0x45c948 = (false);
        if (branch_taken_0x45c948) {
            ctx->pc = 0x45C934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c934;
        }
    }
    ctx->pc = 0x45C950u;
    // 0x45c950: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45c950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45c954: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45c958:
    // 0x45c958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45c958u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45c95c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45c960: 0x0  nop
    ctx->pc = 0x45c960u;
    // NOP
    // 0x45c964: 0x0  nop
    ctx->pc = 0x45c964u;
    // NOP
    // 0x45c968: 0x0  nop
    ctx->pc = 0x45c968u;
    // NOP
    // 0x45c96c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C96Cu;
    {
        const bool branch_taken_0x45c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c96c) {
            ctx->pc = 0x45C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c958;
        }
    }
    ctx->pc = 0x45C974u;
    // 0x45c974: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45c974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_45c978:
    // 0x45c978: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45c978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45c97c: 0x34631fc0  ori         $v1, $v1, 0x1FC0
    ctx->pc = 0x45c97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8128);
    // 0x45c980: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x45c980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x45c984: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x45c984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_45c988:
    // 0x45c988: 0x42000039  di
    ctx->pc = 0x45c988u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45c98c: 0x40f  sync.p
    ctx->pc = 0x45c98cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45c990: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45c994: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x45c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x45c998: 0x0  nop
    ctx->pc = 0x45c998u;
    // NOP
    // 0x45c99c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45C99Cu;
    {
        const bool branch_taken_0x45c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c99c) {
            ctx->pc = 0x45C988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c988;
        }
    }
    ctx->pc = 0x45C9A4u;
    // 0x45c9a4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x45c9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45c9a8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x45c9a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45c9ac: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x45c9acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45c9b0: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x45c9b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45c9b4: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x45c9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45c9b8: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x45c9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45c9bc: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45c9bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45c9c0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45c9c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45c9c4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45c9c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45c9c8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45c9c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45c9cc: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45c9ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45c9d0: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45c9d4: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x45c9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45c9d8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x45c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45c9dc: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x45c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45c9e0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x45c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x45c9e4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x45c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x45c9e8: 0x42000038  ei
    ctx->pc = 0x45c9e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45c9ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45c9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45c9f0: 0x4e1ffe5  bgez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45C9F0u;
    {
        const bool branch_taken_0x45c9f0 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x45c9f0) {
            ctx->pc = 0x45C988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c988;
        }
    }
    ctx->pc = 0x45C9F8u;
    // 0x45c9f8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x45c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x45c9fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ca00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45CA00u;
    {
        const bool branch_taken_0x45ca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ca00) {
            ctx->pc = 0x45CA30u;
            goto label_45ca30;
        }
    }
    ctx->pc = 0x45CA08u;
    // 0x45ca08: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x45ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x45ca0c: 0xf  sync
    ctx->pc = 0x45ca0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ca10: 0x40f  sync.p
    ctx->pc = 0x45ca10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ca14:
    // 0x45ca14: 0x0  nop
    ctx->pc = 0x45ca14u;
    // NOP
    // 0x45ca18: 0x0  nop
    ctx->pc = 0x45ca18u;
    // NOP
    // 0x45ca1c: 0x0  nop
    ctx->pc = 0x45ca1cu;
    // NOP
    // 0x45ca20: 0x0  nop
    ctx->pc = 0x45ca20u;
    // NOP
    // 0x45ca24: 0x0  nop
    ctx->pc = 0x45ca24u;
    // NOP
    // 0x45ca28: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CA28u;
    {
        const bool branch_taken_0x45ca28 = (false);
        if (branch_taken_0x45ca28) {
            ctx->pc = 0x45CA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ca14;
        }
    }
    ctx->pc = 0x45CA30u;
label_45ca30:
    // 0x45ca30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45ca34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ca38: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45CA38u;
    {
        const bool branch_taken_0x45ca38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ca38) {
            ctx->pc = 0x45CA8Cu;
            goto label_45ca8c;
        }
    }
    ctx->pc = 0x45CA40u;
    // 0x45ca40: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x45ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x45ca44: 0xf  sync
    ctx->pc = 0x45ca44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ca48: 0x40f  sync.p
    ctx->pc = 0x45ca48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ca4c:
    // 0x45ca4c: 0x0  nop
    ctx->pc = 0x45ca4cu;
    // NOP
    // 0x45ca50: 0x0  nop
    ctx->pc = 0x45ca50u;
    // NOP
    // 0x45ca54: 0x0  nop
    ctx->pc = 0x45ca54u;
    // NOP
    // 0x45ca58: 0x0  nop
    ctx->pc = 0x45ca58u;
    // NOP
    // 0x45ca5c: 0x0  nop
    ctx->pc = 0x45ca5cu;
    // NOP
    // 0x45ca60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CA60u;
    {
        const bool branch_taken_0x45ca60 = (false);
        if (branch_taken_0x45ca60) {
            ctx->pc = 0x45CA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ca4c;
        }
    }
    ctx->pc = 0x45CA68u;
    // 0x45ca68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45ca6c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45ca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45ca70:
    // 0x45ca70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45ca74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45ca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45ca78: 0x0  nop
    ctx->pc = 0x45ca78u;
    // NOP
    // 0x45ca7c: 0x0  nop
    ctx->pc = 0x45ca7cu;
    // NOP
    // 0x45ca80: 0x0  nop
    ctx->pc = 0x45ca80u;
    // NOP
    // 0x45ca84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CA84u;
    {
        const bool branch_taken_0x45ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ca84) {
            ctx->pc = 0x45CA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ca70;
        }
    }
    ctx->pc = 0x45CA8Cu;
label_45ca8c:
    // 0x45ca8c: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x45ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x45ca90: 0xae7e0000  sw          $fp, 0x0($s3)
    ctx->pc = 0x45ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 30));
    // 0x45ca94: 0xaf120000  sw          $s2, 0x0($t8)
    ctx->pc = 0x45ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 18));
    // 0x45ca98: 0xaf370000  sw          $s7, 0x0($t9)
    ctx->pc = 0x45ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 23));
    // 0x45ca9c: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x45ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x45caa0: 0xf  sync
    ctx->pc = 0x45caa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45caa4: 0x40f  sync.p
    ctx->pc = 0x45caa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45caa8: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x45caa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45caac: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x45caacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cab0: 0x2a22007f  slti        $v0, $s1, 0x7F
    ctx->pc = 0x45cab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x45cab4: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x45CAB4u;
    {
        const bool branch_taken_0x45cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CAB4u;
        // 0x45cab8: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cab4) {
            ctx->pc = 0x45C860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c860;
        }
    }
    ctx->pc = 0x45CABCu;
    // 0x45cabc: 0x0  nop
    ctx->pc = 0x45cabcu;
    // NOP
label_45cac0:
    // 0x45cac0: 0x122000ef  beqz        $s1, . + 4 + (0xEF << 2)
    ctx->pc = 0x45CAC0u;
    {
        const bool branch_taken_0x45cac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CAC0u;
        // 0x45cac4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cac0) {
            ctx->pc = 0x45CE80u;
            goto label_45ce80;
        }
    }
    ctx->pc = 0x45CAC8u;
    // 0x45cac8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45cac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45cacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45caccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x45cad0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45cad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45cad4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45CAD4u;
    {
        const bool branch_taken_0x45cad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CAD4u;
        // 0x45cad8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cad4) {
            ctx->pc = 0x45CB10u;
            goto label_45cb10;
        }
    }
    ctx->pc = 0x45CADCu;
    // 0x45cadc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45cae0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cae4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cae4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cae8: 0xf  sync
    ctx->pc = 0x45cae8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45caec: 0x40f  sync.p
    ctx->pc = 0x45caecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45caf0:
    // 0x45caf0: 0x0  nop
    ctx->pc = 0x45caf0u;
    // NOP
    // 0x45caf4: 0x0  nop
    ctx->pc = 0x45caf4u;
    // NOP
    // 0x45caf8: 0x0  nop
    ctx->pc = 0x45caf8u;
    // NOP
    // 0x45cafc: 0x0  nop
    ctx->pc = 0x45cafcu;
    // NOP
    // 0x45cb00: 0x0  nop
    ctx->pc = 0x45cb00u;
    // NOP
    // 0x45cb04: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CB04u;
    {
        const bool branch_taken_0x45cb04 = (false);
        if (branch_taken_0x45cb04) {
            ctx->pc = 0x45CAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45caf0;
        }
    }
    ctx->pc = 0x45CB0Cu;
    // 0x45cb0c: 0x0  nop
    ctx->pc = 0x45cb0cu;
    // NOP
label_45cb10:
    // 0x45cb10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cb14: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x45cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45cb18: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45cb1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cb20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cb24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45CB24u;
    {
        const bool branch_taken_0x45cb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CB24u;
        // 0x45cb28: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cb24) {
            ctx->pc = 0x45CB84u;
            goto label_45cb84;
        }
    }
    ctx->pc = 0x45CB2Cu;
    // 0x45cb2c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45cb30: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cb34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cb34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cb38: 0xf  sync
    ctx->pc = 0x45cb38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cb3c: 0x40f  sync.p
    ctx->pc = 0x45cb3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45cb40:
    // 0x45cb40: 0x0  nop
    ctx->pc = 0x45cb40u;
    // NOP
    // 0x45cb44: 0x0  nop
    ctx->pc = 0x45cb44u;
    // NOP
    // 0x45cb48: 0x0  nop
    ctx->pc = 0x45cb48u;
    // NOP
    // 0x45cb4c: 0x0  nop
    ctx->pc = 0x45cb4cu;
    // NOP
    // 0x45cb50: 0x0  nop
    ctx->pc = 0x45cb50u;
    // NOP
    // 0x45cb54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CB54u;
    {
        const bool branch_taken_0x45cb54 = (false);
        if (branch_taken_0x45cb54) {
            ctx->pc = 0x45CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cb40;
        }
    }
    ctx->pc = 0x45CB5Cu;
    // 0x45cb5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cb60: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45cb64: 0x0  nop
    ctx->pc = 0x45cb64u;
    // NOP
label_45cb68:
    // 0x45cb68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cb6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cb70: 0x0  nop
    ctx->pc = 0x45cb70u;
    // NOP
    // 0x45cb74: 0x0  nop
    ctx->pc = 0x45cb74u;
    // NOP
    // 0x45cb78: 0x0  nop
    ctx->pc = 0x45cb78u;
    // NOP
    // 0x45cb7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CB7Cu;
    {
        const bool branch_taken_0x45cb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cb7c) {
            ctx->pc = 0x45CB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cb68;
        }
    }
    ctx->pc = 0x45CB84u;
label_45cb84:
    // 0x45cb84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cb88: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45cb8c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45cb90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cb94: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45cb94u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45cb98: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45cb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45cb9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45cb9cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45cba0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cba4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45cba8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cbac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x45cbacu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x45cbb0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x45cbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x45cbb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45cbb8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x45cbb8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45cbbc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45cbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45cbc0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45cbc4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45cbc4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45cbc8: 0xf  sync
    ctx->pc = 0x45cbc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cbcc: 0x40f  sync.p
    ctx->pc = 0x45cbccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cbd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45cbd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cbd8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45CBD8u;
    {
        const bool branch_taken_0x45cbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CBD8u;
        // 0x45cbdc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cbd8) {
            ctx->pc = 0x45CC34u;
            goto label_45cc34;
        }
    }
    ctx->pc = 0x45CBE0u;
    // 0x45cbe0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cbe4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45cbe4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45cbe8: 0xf  sync
    ctx->pc = 0x45cbe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cbec: 0x40f  sync.p
    ctx->pc = 0x45cbecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45cbf0:
    // 0x45cbf0: 0x0  nop
    ctx->pc = 0x45cbf0u;
    // NOP
    // 0x45cbf4: 0x0  nop
    ctx->pc = 0x45cbf4u;
    // NOP
    // 0x45cbf8: 0x0  nop
    ctx->pc = 0x45cbf8u;
    // NOP
    // 0x45cbfc: 0x0  nop
    ctx->pc = 0x45cbfcu;
    // NOP
    // 0x45cc00: 0x0  nop
    ctx->pc = 0x45cc00u;
    // NOP
    // 0x45cc04: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CC04u;
    {
        const bool branch_taken_0x45cc04 = (false);
        if (branch_taken_0x45cc04) {
            ctx->pc = 0x45CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cbf0;
        }
    }
    ctx->pc = 0x45CC0Cu;
    // 0x45cc0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cc10: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45cc14: 0x0  nop
    ctx->pc = 0x45cc14u;
    // NOP
label_45cc18:
    // 0x45cc18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cc1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cc20: 0x0  nop
    ctx->pc = 0x45cc20u;
    // NOP
    // 0x45cc24: 0x0  nop
    ctx->pc = 0x45cc24u;
    // NOP
    // 0x45cc28: 0x0  nop
    ctx->pc = 0x45cc28u;
    // NOP
    // 0x45cc2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CC2Cu;
    {
        const bool branch_taken_0x45cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cc2c) {
            ctx->pc = 0x45CC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cc18;
        }
    }
    ctx->pc = 0x45CC34u;
label_45cc34:
    // 0x45cc34: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45cc38: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x45cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45cc3c: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x45CC3Cu;
    {
        const bool branch_taken_0x45cc3c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x45CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CC3Cu;
        // 0x45cc40: 0x34631fc0  ori         $v1, $v1, 0x1FC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cc3c) {
            ctx->pc = 0x45CCC0u;
            goto label_45ccc0;
        }
    }
    ctx->pc = 0x45CC44u;
    // 0x45cc44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45cc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cc48: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x45cc4c: 0x0  nop
    ctx->pc = 0x45cc4cu;
    // NOP
label_45cc50:
    // 0x45cc50: 0x42000039  di
    ctx->pc = 0x45cc50u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45cc54: 0x40f  sync.p
    ctx->pc = 0x45cc54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cc58: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45cc5c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45cc60: 0x0  nop
    ctx->pc = 0x45cc60u;
    // NOP
    // 0x45cc64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CC64u;
    {
        const bool branch_taken_0x45cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cc64) {
            ctx->pc = 0x45CC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cc50;
        }
    }
    ctx->pc = 0x45CC6Cu;
    // 0x45cc6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x45cc6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45cc70: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x45cc70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45cc74: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x45cc74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x45cc78: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x45cc78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x45cc7c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x45cc7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45cc80: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x45cc80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45cc84: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45cc84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45cc88: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45cc88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45cc8c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45cc8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45cc90: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45cc90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45cc94: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45cc94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45cc98: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x45cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45cc9c: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x45cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45cca0: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x45cca0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45cca4: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x45cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45cca8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x45cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x45ccac: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x45ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x45ccb0: 0x42000038  ei
    ctx->pc = 0x45ccb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45ccb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45ccb8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45CCB8u;
    {
        const bool branch_taken_0x45ccb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ccb8) {
            ctx->pc = 0x45CC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cc50;
        }
    }
    ctx->pc = 0x45CCC0u;
label_45ccc0:
    // 0x45ccc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45ccc4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45ccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45ccc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45cccc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45ccd0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45CCD0u;
    {
        const bool branch_taken_0x45ccd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CCD0u;
        // 0x45ccd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ccd0) {
            ctx->pc = 0x45CD08u;
            goto label_45cd08;
        }
    }
    ctx->pc = 0x45CCD8u;
    // 0x45ccd8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45ccdc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cce0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cce0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cce4: 0xf  sync
    ctx->pc = 0x45cce4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cce8: 0x40f  sync.p
    ctx->pc = 0x45cce8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45ccec:
    // 0x45ccec: 0x0  nop
    ctx->pc = 0x45ccecu;
    // NOP
    // 0x45ccf0: 0x0  nop
    ctx->pc = 0x45ccf0u;
    // NOP
    // 0x45ccf4: 0x0  nop
    ctx->pc = 0x45ccf4u;
    // NOP
    // 0x45ccf8: 0x0  nop
    ctx->pc = 0x45ccf8u;
    // NOP
    // 0x45ccfc: 0x0  nop
    ctx->pc = 0x45ccfcu;
    // NOP
    // 0x45cd00: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CD00u;
    {
        const bool branch_taken_0x45cd00 = (false);
        if (branch_taken_0x45cd00) {
            ctx->pc = 0x45CCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ccec;
        }
    }
    ctx->pc = 0x45CD08u;
label_45cd08:
    // 0x45cd08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cd0c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45cd10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45cd14: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45cd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45cd18: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45CD18u;
    {
        const bool branch_taken_0x45cd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CD18u;
        // 0x45cd1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cd18) {
            ctx->pc = 0x45CD74u;
            goto label_45cd74;
        }
    }
    ctx->pc = 0x45CD20u;
    // 0x45cd20: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45cd24: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45cd28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45cd28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45cd2c: 0xf  sync
    ctx->pc = 0x45cd2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cd30: 0x40f  sync.p
    ctx->pc = 0x45cd30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45cd34:
    // 0x45cd34: 0x0  nop
    ctx->pc = 0x45cd34u;
    // NOP
    // 0x45cd38: 0x0  nop
    ctx->pc = 0x45cd38u;
    // NOP
    // 0x45cd3c: 0x0  nop
    ctx->pc = 0x45cd3cu;
    // NOP
    // 0x45cd40: 0x0  nop
    ctx->pc = 0x45cd40u;
    // NOP
    // 0x45cd44: 0x0  nop
    ctx->pc = 0x45cd44u;
    // NOP
    // 0x45cd48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CD48u;
    {
        const bool branch_taken_0x45cd48 = (false);
        if (branch_taken_0x45cd48) {
            ctx->pc = 0x45CD34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cd34;
        }
    }
    ctx->pc = 0x45CD50u;
    // 0x45cd50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cd54: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45cd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45cd58:
    // 0x45cd58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45cd5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45cd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45cd60: 0x0  nop
    ctx->pc = 0x45cd60u;
    // NOP
    // 0x45cd64: 0x0  nop
    ctx->pc = 0x45cd64u;
    // NOP
    // 0x45cd68: 0x0  nop
    ctx->pc = 0x45cd68u;
    // NOP
    // 0x45cd6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CD6Cu;
    {
        const bool branch_taken_0x45cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cd6c) {
            ctx->pc = 0x45CD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cd58;
        }
    }
    ctx->pc = 0x45CD74u;
label_45cd74:
    // 0x45cd74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cd78: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45cd7c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45cd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45cd80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cd84: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45cd84u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45cd88: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45cd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45cd8c: 0x24041fc0  addiu       $a0, $zero, 0x1FC0
    ctx->pc = 0x45cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x45cd90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cd94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45cd94u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45cd98: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45cd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45cd9c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x45cd9cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x45cda0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45cda4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45cda8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45cdac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x45cdacu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x45cdb0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45cdb4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45cdb4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45cdb8: 0xf  sync
    ctx->pc = 0x45cdb8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cdbc: 0x40f  sync.p
    ctx->pc = 0x45cdbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cdc0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x45CDC0u;
    {
        const bool branch_taken_0x45cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CDC0u;
        // 0x45cdc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cdc0) {
            ctx->pc = 0x45CE84u;
            goto label_45ce84;
        }
    }
    ctx->pc = 0x45CDC8u;
label_45cdc8:
    // 0x45cdc8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x45cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_45cdcc:
    // 0x45cdcc: 0x42000039  di
    ctx->pc = 0x45cdccu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45cdd0: 0x40f  sync.p
    ctx->pc = 0x45cdd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45cdd4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45cdd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45cdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45cddc: 0x0  nop
    ctx->pc = 0x45cddcu;
    // NOP
    // 0x45cde0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CDE0u;
    {
        const bool branch_taken_0x45cde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cde0) {
            ctx->pc = 0x45CDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cdcc;
        }
    }
    ctx->pc = 0x45CDE8u;
    // 0x45cde8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x45cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x45cdec: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x45cdecu;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45cdf0: 0x4a0002ff  vnop
    ctx->pc = 0x45cdf0u;
    // NOP operation, no action needed for VU0
    // 0x45cdf4: 0x4a0002ff  vnop
    ctx->pc = 0x45cdf4u;
    // NOP operation, no action needed for VU0
    // 0x45cdf8: 0x42000038  ei
    ctx->pc = 0x45cdf8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45cdfc: 0x5a200021  blezl       $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x45CDFCu;
    {
        const bool branch_taken_0x45cdfc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x45cdfc) {
            ctx->pc = 0x45CE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45CDFCu;
            // 0x45ce00: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45CE84u;
            goto label_45ce84;
        }
    }
    ctx->pc = 0x45CE04u;
    // 0x45ce04: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x45ce04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ce08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45ce08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ce0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_45ce10:
    // 0x45ce10: 0x42000039  di
    ctx->pc = 0x45ce10u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45ce14: 0x40f  sync.p
    ctx->pc = 0x45ce14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45ce18: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45ce1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45ce20: 0x0  nop
    ctx->pc = 0x45ce20u;
    // NOP
    // 0x45ce24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45CE24u;
    {
        const bool branch_taken_0x45ce24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ce24) {
            ctx->pc = 0x45CE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ce10;
        }
    }
    ctx->pc = 0x45CE2Cu;
    // 0x45ce2c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x45ce2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45ce30: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x45ce30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x45ce34: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x45ce34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x45ce38: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x45ce38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x45ce3c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x45ce3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45ce40: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x45ce40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45ce44: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x45ce44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45ce48: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x45ce48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45ce4c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x45ce4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45ce50: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x45ce50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45ce54: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x45ce54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45ce58: 0xfa4a0030  sqc2        $vf10, 0x30($s2)
    ctx->pc = 0x45ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x45ce5c: 0xfa4b0020  sqc2        $vf11, 0x20($s2)
    ctx->pc = 0x45ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x45ce60: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x45ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x45ce64: 0xfa4d0010  sqc2        $vf13, 0x10($s2)
    ctx->pc = 0x45ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x45ce68: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x45ce68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x45ce6c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x45ce6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x45ce70: 0x42000038  ei
    ctx->pc = 0x45ce70u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45ce74: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45ce74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45ce78: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45CE78u;
    {
        const bool branch_taken_0x45ce78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ce78) {
            ctx->pc = 0x45CE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ce10;
        }
    }
    ctx->pc = 0x45CE80u;
label_45ce80:
    // 0x45ce80: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x45ce80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45ce84:
    // 0x45ce84: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x45ce84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45ce88: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x45ce88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45ce8c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x45ce8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ce90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45ce90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ce94: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x45ce94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ce98: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x45ce98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ce9c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x45ce9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45cea0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x45cea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45cea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45cea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x45CEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45CEA8u;
        // 0x45ceac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45CEB0u;
}
