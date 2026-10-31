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

// Function: sub_00451188
// Address: 0x451188 - 0x451260
void sub_00451188_0x451188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451188_0x451188");
#endif

    switch (ctx->pc) {
        case 0x4511d0u: goto label_4511d0;
        case 0x4511e4u: goto label_4511e4;
        default: break;
    }

    ctx->pc = 0x451188u;

    // 0x451188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x451188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45118c: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x45118cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x451190: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x451190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x451194: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x451194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x451198: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x451198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x45119c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x45119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4511a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4511a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4511a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4511a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4511a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4511a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4511ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4511acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4511b0: 0x8c93004c  lw          $s3, 0x4C($a0)
    ctx->pc = 0x4511b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4511b4: 0xde7000c8  ld          $s0, 0xC8($s3)
    ctx->pc = 0x4511b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x4511b8: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4511B8u;
    {
        const bool branch_taken_0x4511b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4511BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4511B8u;
        // 0x4511bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4511b8) {
            ctx->pc = 0x451228u;
            goto label_451228;
        }
    }
    ctx->pc = 0x4511C0u;
    // 0x4511c0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x4511c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4511c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4511c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4511c8: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4511C8u;
    SET_GPR_U32(ctx, 31, 0x4511D0u);
    ctx->pc = 0x4511CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4511C8u;
    // 0x4511cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4511C8u, 0x4511D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4511D0u;
label_4511d0:
    // 0x4511d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4511D0u;
    {
        const bool branch_taken_0x4511d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4511D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4511D0u;
        // 0x4511d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4511d0) {
            ctx->pc = 0x451234u;
            goto label_451234;
        }
    }
    ctx->pc = 0x4511D8u;
    // 0x4511d8: 0x92260050  lbu         $a2, 0x50($s1)
    ctx->pc = 0x4511d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x4511dc: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x4511DCu;
    SET_GPR_U32(ctx, 31, 0x4511E4u);
    ctx->pc = 0x4511E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4511DCu;
    // 0x4511e0: 0x266500d0  addiu       $a1, $s3, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x4511DCu, 0x4511E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4511E4u;
label_4511e4:
    // 0x4511e4: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x4511e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x4511e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4511e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4511ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4511ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4511f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4511F0u;
    {
        const bool branch_taken_0x4511f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4511F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4511F0u;
        // 0x4511f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4511f0) {
            ctx->pc = 0x451204u;
            goto label_451204;
        }
    }
    ctx->pc = 0x4511F8u;
    // 0x4511f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4511f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4511fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4511FCu;
    {
        const bool branch_taken_0x4511fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4511FCu;
        // 0x451200: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4511fc) {
            ctx->pc = 0x451208u;
            goto label_451208;
        }
    }
    ctx->pc = 0x451204u;
label_451204:
    // 0x451204: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x451204u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_451208:
    // 0x451208: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x451208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x45120c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x45120cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x451210: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x451210u;
    {
        const bool branch_taken_0x451210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451210) {
            ctx->pc = 0x451214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451210u;
            // 0x451214: 0xfe7000c8  sd          $s0, 0xC8($s3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 19), 200), GPR_U64(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451238u;
            goto label_451238;
        }
    }
    ctx->pc = 0x451218u;
    // 0x451218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x451218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x45121c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x45121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x451220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x451220u;
    {
        const bool branch_taken_0x451220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451220u;
        // 0x451224: 0xaf828a28  sw          $v0, -0x75D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451220) {
            ctx->pc = 0x451234u;
            goto label_451234;
        }
    }
    ctx->pc = 0x451228u;
label_451228:
    // 0x451228: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x451228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x45122c: 0xfe6000d0  sd          $zero, 0xD0($s3)
    ctx->pc = 0x45122cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 208), GPR_U64(ctx, 0));
    // 0x451230: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x451230u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_451234:
    // 0x451234: 0xfe7000c8  sd          $s0, 0xC8($s3)
    ctx->pc = 0x451234u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 200), GPR_U64(ctx, 16));
label_451238:
    // 0x451238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45123c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x45123cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451240: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x451240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x451244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451248: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x451248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45124c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45124cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451250: 0x3e00008  jr          $ra
    ctx->pc = 0x451250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451250u;
        // 0x451254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451258u;
    // 0x451258: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x451258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45125c: 0x0  nop
    ctx->pc = 0x45125cu;
    // NOP
    ctx->pc = 0x451260u;
}
