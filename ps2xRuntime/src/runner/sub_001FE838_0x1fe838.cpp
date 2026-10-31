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

// Function: sub_001FE838
// Address: 0x1fe838 - 0x1fe968
void sub_001FE838_0x1fe838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE838_0x1fe838");
#endif

    switch (ctx->pc) {
        case 0x1fe838u: goto label_1fe838;
        case 0x1fe83cu: goto label_1fe83c;
        case 0x1fe840u: goto label_1fe840;
        case 0x1fe844u: goto label_1fe844;
        case 0x1fe848u: goto label_1fe848;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe850u: goto label_1fe850;
        case 0x1fe854u: goto label_1fe854;
        case 0x1fe858u: goto label_1fe858;
        case 0x1fe85cu: goto label_1fe85c;
        case 0x1fe860u: goto label_1fe860;
        case 0x1fe864u: goto label_1fe864;
        case 0x1fe868u: goto label_1fe868;
        case 0x1fe86cu: goto label_1fe86c;
        case 0x1fe870u: goto label_1fe870;
        case 0x1fe874u: goto label_1fe874;
        case 0x1fe878u: goto label_1fe878;
        case 0x1fe87cu: goto label_1fe87c;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe888u: goto label_1fe888;
        case 0x1fe88cu: goto label_1fe88c;
        case 0x1fe890u: goto label_1fe890;
        case 0x1fe894u: goto label_1fe894;
        case 0x1fe898u: goto label_1fe898;
        case 0x1fe89cu: goto label_1fe89c;
        case 0x1fe8a0u: goto label_1fe8a0;
        case 0x1fe8a4u: goto label_1fe8a4;
        case 0x1fe8a8u: goto label_1fe8a8;
        case 0x1fe8acu: goto label_1fe8ac;
        case 0x1fe8b0u: goto label_1fe8b0;
        case 0x1fe8b4u: goto label_1fe8b4;
        case 0x1fe8b8u: goto label_1fe8b8;
        case 0x1fe8bcu: goto label_1fe8bc;
        case 0x1fe8c0u: goto label_1fe8c0;
        case 0x1fe8c4u: goto label_1fe8c4;
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8dcu: goto label_1fe8dc;
        case 0x1fe8e0u: goto label_1fe8e0;
        case 0x1fe8e4u: goto label_1fe8e4;
        case 0x1fe8e8u: goto label_1fe8e8;
        case 0x1fe8ecu: goto label_1fe8ec;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe8f8u: goto label_1fe8f8;
        case 0x1fe8fcu: goto label_1fe8fc;
        case 0x1fe900u: goto label_1fe900;
        case 0x1fe904u: goto label_1fe904;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe90cu: goto label_1fe90c;
        case 0x1fe910u: goto label_1fe910;
        case 0x1fe914u: goto label_1fe914;
        case 0x1fe918u: goto label_1fe918;
        case 0x1fe91cu: goto label_1fe91c;
        case 0x1fe920u: goto label_1fe920;
        case 0x1fe924u: goto label_1fe924;
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe92cu: goto label_1fe92c;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe934u: goto label_1fe934;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe944u: goto label_1fe944;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe94cu: goto label_1fe94c;
        case 0x1fe950u: goto label_1fe950;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe958u: goto label_1fe958;
        case 0x1fe95cu: goto label_1fe95c;
        case 0x1fe960u: goto label_1fe960;
        case 0x1fe964u: goto label_1fe964;
        default: break;
    }

    ctx->pc = 0x1fe838u;

label_1fe838:
    // 0x1fe838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fe83c:
    // 0x1fe83c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fe840:
    // 0x1fe840: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fe844:
    // 0x1fe844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fe848:
    // 0x1fe848: 0xc06a38c  jal         func_1A8E30
label_1fe84c:
    if (ctx->pc == 0x1FE84Cu) {
        ctx->pc = 0x1FE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE848u;
        // 0x1fe84c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE850u;
        goto label_1fe850;
    }
    ctx->pc = 0x1FE848u;
    SET_GPR_U32(ctx, 31, 0x1FE850u);
    ctx->pc = 0x1FE84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE848u;
    // 0x1fe84c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1FE848u, 0x1FE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE850u;
label_1fe850:
    // 0x1fe850: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x1fe850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1fe854:
    // 0x1fe854: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fe854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fe858:
    // 0x1fe858: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe85c:
    // 0x1fe85c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1fe85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1fe860:
    // 0x1fe860: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1fe860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1fe864:
    // 0x1fe864: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fe864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1fe868:
    // 0x1fe868: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1fe868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1fe86c:
    // 0x1fe86c: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1fe870:
    // 0x1fe870: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fe874:
    // 0x1fe874: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fe874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1fe878:
    // 0x1fe878: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1fe878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1fe87c:
    // 0x1fe87c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fe87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1fe880:
    // 0x1fe880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fe880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fe884:
    // 0x1fe884: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fe884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1fe888:
    // 0x1fe888: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fe888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1fe88c:
    // 0x1fe88c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fe88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fe890:
    // 0x1fe890: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_1fe894:
    // 0x1fe894: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fe894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1fe898:
    // 0x1fe898: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_1fe89c:
    // 0x1fe89c: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1fe89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1fe8a0:
    // 0x1fe8a0: 0x24a58198  addiu       $a1, $a1, -0x7E68
    ctx->pc = 0x1fe8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934936));
label_1fe8a4:
    // 0x1fe8a4: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fe8a8:
    // 0x1fe8a8: 0x250881a0  addiu       $t0, $t0, -0x7E60
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934944));
label_1fe8ac:
    // 0x1fe8ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fe8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1fe8b0:
    // 0x1fe8b0: 0x254a81c8  addiu       $t2, $t2, -0x7E38
    ctx->pc = 0x1fe8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294934984));
label_1fe8b4:
    // 0x1fe8b4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1fe8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe8b8:
    // 0x1fe8b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fe8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe8bc:
    // 0x1fe8bc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fe8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fe8c0:
    // 0x1fe8c0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1fe8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fe8c4:
    // 0x1fe8c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fe8c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8c8:
    // 0x1fe8c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fe8cc:
    // 0x1fe8cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fe8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fe8d0:
    // 0x1fe8d0: 0x40f809  jalr        $v0
label_1fe8d4:
    if (ctx->pc == 0x1FE8D4u) {
        ctx->pc = 0x1FE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D0u;
        // 0x1fe8d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8D8u;
        goto label_1fe8d8;
    }
    ctx->pc = 0x1FE8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE8D8u);
        ctx->pc = 0x1FE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D0u;
        // 0x1fe8d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8D0u, 0x1FE8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE8D8u;
label_1fe8d8:
    // 0x1fe8d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1fe8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1fe8dc:
    // 0x1fe8dc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fe8e0:
    // 0x1fe8e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fe8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fe8e4:
    // 0x1fe8e4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fe8e8:
    // 0x1fe8e8: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1fe8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1fe8ec:
    // 0x1fe8ec: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fe8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fe8f0:
    // 0x1fe8f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fe8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fe8f4:
    // 0x1fe8f4: 0x24c6d7f0  addiu       $a2, $a2, -0x2810
    ctx->pc = 0x1fe8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957040));
label_1fe8f8:
    // 0x1fe8f8: 0x24a5d818  addiu       $a1, $a1, -0x27E8
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957080));
label_1fe8fc:
    // 0x1fe8fc: 0x2484d848  addiu       $a0, $a0, -0x27B8
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957128));
label_1fe900:
    // 0x1fe900: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe904:
    // 0x1fe904: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1fe904u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_1fe908:
    // 0x1fe908: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe90c:
    // 0x1fe90c: 0x26270094  addiu       $a3, $s1, 0x94
    ctx->pc = 0x1fe90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1fe910:
    // 0x1fe910: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fe910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1fe914:
    // 0x1fe914: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fe914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe918:
    // 0x1fe918: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1fe918u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1fe91c:
    // 0x1fe91c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe920:
    // 0x1fe920: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fe920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1fe924:
    // 0x1fe924: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe928:
    // 0x1fe928: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1fe928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1fe92c:
    // 0x1fe92c: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x1fe92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
label_1fe930:
    // 0x1fe930: 0xae250088  sw          $a1, 0x88($s1)
    ctx->pc = 0x1fe930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
label_1fe934:
    // 0x1fe934: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1fe934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1fe938:
    // 0x1fe938: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1fe938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1fe93c:
    // 0x1fe93c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1fe93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1fe940:
    // 0x1fe940: 0x0  nop
    ctx->pc = 0x1fe940u;
    // NOP
label_1fe944:
    // 0x1fe944: 0x0  nop
    ctx->pc = 0x1fe944u;
    // NOP
label_1fe948:
    // 0x1fe948: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
label_1fe94c:
    if (ctx->pc == 0x1FE94Cu) {
        ctx->pc = 0x1FE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE948u;
        // 0x1fe94c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE950u;
        goto label_1fe950;
    }
    ctx->pc = 0x1FE948u;
    {
        const bool branch_taken_0x1fe948 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x1FE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE948u;
        // 0x1fe94c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe948) {
            ctx->pc = 0x1FE938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe938;
        }
    }
    ctx->pc = 0x1FE950u;
label_1fe950:
    // 0x1fe950: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe954:
    // 0x1fe954: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe958:
    // 0x1fe958: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe95c:
    // 0x1fe95c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe960:
    // 0x1fe960: 0x3e00008  jr          $ra
label_1fe964:
    if (ctx->pc == 0x1FE964u) {
        ctx->pc = 0x1FE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE960u;
        // 0x1fe964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE968u;
        goto label_fallthrough_0x1fe960;
    }
    ctx->pc = 0x1FE960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE960u;
        // 0x1fe964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe960:
    ctx->pc = 0x1FE968u;
}
