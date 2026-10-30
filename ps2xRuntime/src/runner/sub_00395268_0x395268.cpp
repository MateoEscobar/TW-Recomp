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

// Function: sub_00395268
// Address: 0x395268 - 0x3952f8
void sub_00395268_0x395268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395268_0x395268");
#endif

    switch (ctx->pc) {
        case 0x395268u: goto label_395268;
        case 0x39526cu: goto label_39526c;
        case 0x395270u: goto label_395270;
        case 0x395274u: goto label_395274;
        case 0x395278u: goto label_395278;
        case 0x39527cu: goto label_39527c;
        case 0x395280u: goto label_395280;
        case 0x395284u: goto label_395284;
        case 0x395288u: goto label_395288;
        case 0x39528cu: goto label_39528c;
        case 0x395290u: goto label_395290;
        case 0x395294u: goto label_395294;
        case 0x395298u: goto label_395298;
        case 0x39529cu: goto label_39529c;
        case 0x3952a0u: goto label_3952a0;
        case 0x3952a4u: goto label_3952a4;
        case 0x3952a8u: goto label_3952a8;
        case 0x3952acu: goto label_3952ac;
        case 0x3952b0u: goto label_3952b0;
        case 0x3952b4u: goto label_3952b4;
        case 0x3952b8u: goto label_3952b8;
        case 0x3952bcu: goto label_3952bc;
        case 0x3952c0u: goto label_3952c0;
        case 0x3952c4u: goto label_3952c4;
        case 0x3952c8u: goto label_3952c8;
        case 0x3952ccu: goto label_3952cc;
        case 0x3952d0u: goto label_3952d0;
        case 0x3952d4u: goto label_3952d4;
        case 0x3952d8u: goto label_3952d8;
        case 0x3952dcu: goto label_3952dc;
        case 0x3952e0u: goto label_3952e0;
        case 0x3952e4u: goto label_3952e4;
        case 0x3952e8u: goto label_3952e8;
        case 0x3952ecu: goto label_3952ec;
        case 0x3952f0u: goto label_3952f0;
        case 0x3952f4u: goto label_3952f4;
        default: break;
    }

    ctx->pc = 0x395268u;

label_395268:
    // 0x395268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39526c:
    // 0x39526c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x39526cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_395270:
    // 0x395270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x395270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_395274:
    // 0x395274: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x395274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_395278:
    // 0x395278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39527c:
    // 0x39527c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395280:
    // 0x395280: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x395280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_395284:
    // 0x395284: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_395288:
    if (ctx->pc == 0x395288u) {
        ctx->pc = 0x395288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395284u;
        // 0x395288: 0xa6050110  sh          $a1, 0x110($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39528Cu;
        goto label_39528c;
    }
    ctx->pc = 0x395284u;
    {
        const bool branch_taken_0x395284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x395288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395284u;
        // 0x395288: 0xa6050110  sh          $a1, 0x110($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395284) {
            ctx->pc = 0x3952E8u;
            goto label_3952e8;
        }
    }
    ctx->pc = 0x39528Cu;
label_39528c:
    // 0x39528c: 0x8e080118  lw          $t0, 0x118($s0)
    ctx->pc = 0x39528cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_395290:
    // 0x395290: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_395294:
    if (ctx->pc == 0x395294u) {
        ctx->pc = 0x395294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395290u;
        // 0x395294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395298u;
        goto label_395298;
    }
    ctx->pc = 0x395290u;
    {
        const bool branch_taken_0x395290 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x395294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395290u;
        // 0x395294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395290) {
            ctx->pc = 0x3952E8u;
            goto label_3952e8;
        }
    }
    ctx->pc = 0x395298u;
label_395298:
    // 0x395298: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x395298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_39529c:
    // 0x39529c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39529cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3952a0:
    // 0x3952a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3952a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3952a4:
    // 0x3952a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3952a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3952a8:
    // 0x3952a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3952ac:
    // 0x3952ac: 0x40f809  jalr        $v0
label_3952b0:
    if (ctx->pc == 0x3952B0u) {
        ctx->pc = 0x3952B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ACu;
        // 0x3952b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952B4u;
        goto label_3952b4;
    }
    ctx->pc = 0x3952ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3952B4u);
        ctx->pc = 0x3952B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ACu;
        // 0x3952b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3952ACu, 0x3952B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3952B4u;
label_3952b4:
    // 0x3952b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3952b8:
    if (ctx->pc == 0x3952B8u) {
        ctx->pc = 0x3952B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952B4u;
        // 0x3952b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952BCu;
        goto label_3952bc;
    }
    ctx->pc = 0x3952B4u;
    {
        const bool branch_taken_0x3952b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952B4u;
        // 0x3952b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952b4) {
            ctx->pc = 0x3952E8u;
            goto label_3952e8;
        }
    }
    ctx->pc = 0x3952BCu;
label_3952bc:
    // 0x3952bc: 0x8e080118  lw          $t0, 0x118($s0)
    ctx->pc = 0x3952bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_3952c0:
    // 0x3952c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3952c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3952c4:
    // 0x3952c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3952c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3952c8:
    // 0x3952c8: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x3952c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_3952cc:
    // 0x3952cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3952ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3952d0:
    // 0x3952d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3952d4:
    // 0x3952d4: 0x40f809  jalr        $v0
label_3952d8:
    if (ctx->pc == 0x3952D8u) {
        ctx->pc = 0x3952D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952D4u;
        // 0x3952d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952DCu;
        goto label_3952dc;
    }
    ctx->pc = 0x3952D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3952DCu);
        ctx->pc = 0x3952D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952D4u;
        // 0x3952d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3952D4u, 0x3952DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3952DCu;
label_3952dc:
    // 0x3952dc: 0x94430032  lhu         $v1, 0x32($v0)
    ctx->pc = 0x3952dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_3952e0:
    // 0x3952e0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3952e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_3952e4:
    // 0x3952e4: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x3952e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
label_3952e8:
    // 0x3952e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3952e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3952ec:
    // 0x3952ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3952ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3952f0:
    // 0x3952f0: 0x3e00008  jr          $ra
label_3952f4:
    if (ctx->pc == 0x3952F4u) {
        ctx->pc = 0x3952F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952F0u;
        // 0x3952f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952F8u;
        goto label_fallthrough_0x3952f0;
    }
    ctx->pc = 0x3952F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3952F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952F0u;
        // 0x3952f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3952F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3952f0:
    ctx->pc = 0x3952F8u;
}
