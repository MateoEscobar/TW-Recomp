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

// Function: sub_004B8508
// Address: 0x4b8508 - 0x4b85f0
void sub_004B8508_0x4b8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8508_0x4b8508");
#endif

    switch (ctx->pc) {
        case 0x4b856cu: goto label_4b856c;
        case 0x4b85c8u: goto label_4b85c8;
        case 0x4b85dcu: goto label_4b85dc;
        default: break;
    }

    ctx->pc = 0x4b8508u;

    // 0x4b8508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b850c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8510: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4b8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4b8514: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4b8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4b8518: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b8518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b851c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b8520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8524: 0x24440df8  addiu       $a0, $v0, 0xDF8
    ctx->pc = 0x4b8524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3576));
    // 0x4b8528: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4b8528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b852c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B852Cu;
    {
        const bool branch_taken_0x4b852c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B852Cu;
        // 0x4b8530: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b852c) {
            ctx->pc = 0x4B8560u;
            goto label_4b8560;
        }
    }
    ctx->pc = 0x4B8534u;
    // 0x4b8534: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4b8534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b8538: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4b8538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4b853c: 0xdc460df8  ld          $a2, 0xDF8($v0)
    ctx->pc = 0x4b853cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 3576)));
    // 0x4b8540: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4b8540u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b8544: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x4b8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x4b8548: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4b8548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b854c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4b854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4b8550: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4b8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4b8554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b8554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8558: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4b8558u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4b855c: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4b855cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4b8560:
    // 0x4b8560: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x4b8560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4b8564: 0xc12df2c  jal         func_4B7CB0
    ctx->pc = 0x4B8564u;
    SET_GPR_U32(ctx, 31, 0x4B856Cu);
    ctx->pc = 0x4B8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8564u;
    // 0x4b8568: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7CB0u, 0x4B8564u, 0x4B856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B856Cu;
label_4b856c:
    // 0x4b856c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4b856cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8570: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x4b8570u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x4b8574: 0x24e30490  addiu       $v1, $a3, 0x490
    ctx->pc = 0x4b8574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1168));
    // 0x4b8578: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x4b8578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4b857c: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x4b857cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x4b8580: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x4b8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x4b8584: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x4b8584u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x590498u));
    // 0x4b8588: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4b8588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b858c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x4b858cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b8590: 0xdce50490  ld          $a1, 0x490($a3)
    ctx->pc = 0x4b8590u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 1168)));
    // 0x4b8594: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b8594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b8598: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x4b8598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x4b859c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4b859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4b85a0: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x4b85a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b85a4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B85A4u;
    {
        const bool branch_taken_0x4b85a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B85A4u;
        // 0x4b85a8: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b85a4) {
            ctx->pc = 0x4B85C8u;
            goto label_4b85c8;
        }
    }
    ctx->pc = 0x4B85ACu;
    // 0x4b85ac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b85acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b85b0: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x4b85b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4b85b4: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4b85b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B85B8u;
    {
        const bool branch_taken_0x4b85b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B85B8u;
        // 0x4b85bc: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b85b8) {
            ctx->pc = 0x4B85C8u;
            goto label_4b85c8;
        }
    }
    ctx->pc = 0x4B85C0u;
    // 0x4b85c0: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4B85C0u;
    SET_GPR_U32(ctx, 31, 0x4B85C8u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4B85C0u, 0x4B85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B85C8u;
label_4b85c8:
    // 0x4b85c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4b85c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4b85cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B85CCu;
    {
        const bool branch_taken_0x4b85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B85CCu;
        // 0x4b85d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b85cc) {
            ctx->pc = 0x4B85E0u;
            goto label_4b85e0;
        }
    }
    ctx->pc = 0x4B85D4u;
    // 0x4b85d4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4B85D4u;
    SET_GPR_U32(ctx, 31, 0x4B85DCu);
    ctx->pc = 0x4B85D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B85D4u;
    // 0x4b85d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4B85D4u, 0x4B85DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B85DCu;
label_4b85dc:
    // 0x4b85dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b85dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b85e0:
    // 0x4b85e0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4b85e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b85e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b85e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b85e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B85E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B85E8u;
        // 0x4b85ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B85E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B85F0u;
}
