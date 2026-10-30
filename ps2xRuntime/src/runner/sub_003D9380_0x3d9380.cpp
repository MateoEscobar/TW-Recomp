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

// Function: sub_003D9380
// Address: 0x3d9380 - 0x3d9418
void sub_003D9380_0x3d9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9380_0x3d9380");
#endif

    switch (ctx->pc) {
        case 0x3d9380u: goto label_3d9380;
        case 0x3d9384u: goto label_3d9384;
        case 0x3d9388u: goto label_3d9388;
        case 0x3d938cu: goto label_3d938c;
        case 0x3d9390u: goto label_3d9390;
        case 0x3d9394u: goto label_3d9394;
        case 0x3d9398u: goto label_3d9398;
        case 0x3d939cu: goto label_3d939c;
        case 0x3d93a0u: goto label_3d93a0;
        case 0x3d93a4u: goto label_3d93a4;
        case 0x3d93a8u: goto label_3d93a8;
        case 0x3d93acu: goto label_3d93ac;
        case 0x3d93b0u: goto label_3d93b0;
        case 0x3d93b4u: goto label_3d93b4;
        case 0x3d93b8u: goto label_3d93b8;
        case 0x3d93bcu: goto label_3d93bc;
        case 0x3d93c0u: goto label_3d93c0;
        case 0x3d93c4u: goto label_3d93c4;
        case 0x3d93c8u: goto label_3d93c8;
        case 0x3d93ccu: goto label_3d93cc;
        case 0x3d93d0u: goto label_3d93d0;
        case 0x3d93d4u: goto label_3d93d4;
        case 0x3d93d8u: goto label_3d93d8;
        case 0x3d93dcu: goto label_3d93dc;
        case 0x3d93e0u: goto label_3d93e0;
        case 0x3d93e4u: goto label_3d93e4;
        case 0x3d93e8u: goto label_3d93e8;
        case 0x3d93ecu: goto label_3d93ec;
        case 0x3d93f0u: goto label_3d93f0;
        case 0x3d93f4u: goto label_3d93f4;
        case 0x3d93f8u: goto label_3d93f8;
        case 0x3d93fcu: goto label_3d93fc;
        case 0x3d9400u: goto label_3d9400;
        case 0x3d9404u: goto label_3d9404;
        case 0x3d9408u: goto label_3d9408;
        case 0x3d940cu: goto label_3d940c;
        case 0x3d9410u: goto label_3d9410;
        case 0x3d9414u: goto label_3d9414;
        default: break;
    }

    ctx->pc = 0x3d9380u;

label_3d9380:
    // 0x3d9380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d9384:
    // 0x3d9384: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d9384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d9388:
    // 0x3d9388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d938c:
    // 0x3d938c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9390:
    // 0x3d9390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d9394:
    // 0x3d9394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9398:
    // 0x3d9398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d9398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d939c:
    // 0x3d939c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d93a0:
    // 0x3d93a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d93a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d93a4:
    // 0x3d93a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d93a8:
    // 0x3d93a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d93a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d93ac:
    // 0x3d93ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d93b0:
    // 0x3d93b0: 0x40f809  jalr        $v0
label_3d93b4:
    if (ctx->pc == 0x3D93B4u) {
        ctx->pc = 0x3D93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93B0u;
        // 0x3d93b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D93B8u;
        goto label_3d93b8;
    }
    ctx->pc = 0x3D93B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D93B8u);
        ctx->pc = 0x3D93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93B0u;
        // 0x3d93b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D93B0u, 0x3D93B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D93B8u;
label_3d93b8:
    // 0x3d93b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d93b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d93bc:
    // 0x3d93bc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3d93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d93c0:
    // 0x3d93c0: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_3d93c4:
    if (ctx->pc == 0x3D93C4u) {
        ctx->pc = 0x3D93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93C0u;
        // 0x3d93c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D93C8u;
        goto label_3d93c8;
    }
    ctx->pc = 0x3D93C0u;
    {
        const bool branch_taken_0x3d93c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93C0u;
        // 0x3d93c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93c0) {
            ctx->pc = 0x3D9400u;
            goto label_3d9400;
        }
    }
    ctx->pc = 0x3D93C8u;
label_3d93c8:
    // 0x3d93c8: 0xc0ea146  jal         func_3A8518
label_3d93cc:
    if (ctx->pc == 0x3D93CCu) {
        ctx->pc = 0x3D93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93C8u;
        // 0x3d93cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D93D0u;
        goto label_3d93d0;
    }
    ctx->pc = 0x3D93C8u;
    SET_GPR_U32(ctx, 31, 0x3D93D0u);
    ctx->pc = 0x3D93CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D93C8u;
    // 0x3d93cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D93C8u, 0x3D93D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D93D0u;
label_3d93d0:
    // 0x3d93d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3d93d4:
    if (ctx->pc == 0x3D93D4u) {
        ctx->pc = 0x3D93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93D0u;
        // 0x3d93d4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D93D8u;
        goto label_3d93d8;
    }
    ctx->pc = 0x3D93D0u;
    {
        const bool branch_taken_0x3d93d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d93d0) {
            ctx->pc = 0x3D93D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D93D0u;
            // 0x3d93d4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D93ECu;
            goto label_3d93ec;
        }
    }
    ctx->pc = 0x3D93D8u;
label_3d93d8:
    // 0x3d93d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d93dc:
    // 0x3d93dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3d93e0:
    // 0x3d93e0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d93e4:
    // 0x3d93e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d93e8:
    if (ctx->pc == 0x3D93E8u) {
        ctx->pc = 0x3D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93E4u;
        // 0x3d93e8: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D93ECu;
        goto label_3d93ec;
    }
    ctx->pc = 0x3D93E4u;
    {
        const bool branch_taken_0x3d93e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93E4u;
        // 0x3d93e8: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93e4) {
            ctx->pc = 0x3D93F8u;
            goto label_3d93f8;
        }
    }
    ctx->pc = 0x3D93ECu;
label_3d93ec:
    // 0x3d93ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d93f0:
    // 0x3d93f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d93f4:
    // 0x3d93f4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3d93f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3d93f8:
    // 0x3d93f8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d93fc:
    // 0x3d93fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d93fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9400:
    // 0x3d9400: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d9400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9404:
    // 0x3d9404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d9404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9408:
    // 0x3d9408: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d9408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d940c:
    // 0x3d940c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9410:
    // 0x3d9410: 0x3e00008  jr          $ra
label_3d9414:
    if (ctx->pc == 0x3D9414u) {
        ctx->pc = 0x3D9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9410u;
        // 0x3d9414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9418u;
        goto label_fallthrough_0x3d9410;
    }
    ctx->pc = 0x3D9410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9410u;
        // 0x3d9414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9410:
    ctx->pc = 0x3D9418u;
}
