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

// Function: sub_002131F0
// Address: 0x2131f0 - 0x213290
void sub_002131F0_0x2131f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002131F0_0x2131f0");
#endif

    switch (ctx->pc) {
        case 0x2131f0u: goto label_2131f0;
        case 0x2131f4u: goto label_2131f4;
        case 0x2131f8u: goto label_2131f8;
        case 0x2131fcu: goto label_2131fc;
        case 0x213200u: goto label_213200;
        case 0x213204u: goto label_213204;
        case 0x213208u: goto label_213208;
        case 0x21320cu: goto label_21320c;
        case 0x213210u: goto label_213210;
        case 0x213214u: goto label_213214;
        case 0x213218u: goto label_213218;
        case 0x21321cu: goto label_21321c;
        case 0x213220u: goto label_213220;
        case 0x213224u: goto label_213224;
        case 0x213228u: goto label_213228;
        case 0x21322cu: goto label_21322c;
        case 0x213230u: goto label_213230;
        case 0x213234u: goto label_213234;
        case 0x213238u: goto label_213238;
        case 0x21323cu: goto label_21323c;
        case 0x213240u: goto label_213240;
        case 0x213244u: goto label_213244;
        case 0x213248u: goto label_213248;
        case 0x21324cu: goto label_21324c;
        case 0x213250u: goto label_213250;
        case 0x213254u: goto label_213254;
        case 0x213258u: goto label_213258;
        case 0x21325cu: goto label_21325c;
        case 0x213260u: goto label_213260;
        case 0x213264u: goto label_213264;
        case 0x213268u: goto label_213268;
        case 0x21326cu: goto label_21326c;
        case 0x213270u: goto label_213270;
        case 0x213274u: goto label_213274;
        case 0x213278u: goto label_213278;
        case 0x21327cu: goto label_21327c;
        case 0x213280u: goto label_213280;
        case 0x213284u: goto label_213284;
        case 0x213288u: goto label_213288;
        case 0x21328cu: goto label_21328c;
        default: break;
    }

    ctx->pc = 0x2131f0u;

label_2131f0:
    // 0x2131f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2131f4:
    // 0x2131f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2131f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2131f8:
    // 0x2131f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2131f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2131fc:
    // 0x2131fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2131fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_213200:
    // 0x213200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_213204:
    // 0x213204: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x213204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_213208:
    // 0x213208: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x213208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_21320c:
    // 0x21320c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_213210:
    // 0x213210: 0xc0836f8  jal         func_20DBE0
label_213214:
    if (ctx->pc == 0x213214u) {
        ctx->pc = 0x213214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213210u;
        // 0x213214: 0x26114150  addiu       $s1, $s0, 0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213218u;
        goto label_213218;
    }
    ctx->pc = 0x213210u;
    SET_GPR_U32(ctx, 31, 0x213218u);
    ctx->pc = 0x213214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213210u;
    // 0x213214: 0x26114150  addiu       $s1, $s0, 0x4150 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DBE0u, 0x213210u, 0x213218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213218u;
label_213218:
    // 0x213218: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21321c:
    // 0x21321c: 0xae004130  sw          $zero, 0x4130($s0)
    ctx->pc = 0x21321cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16688), GPR_U32(ctx, 0));
label_213220:
    // 0x213220: 0x26041ef0  addiu       $a0, $s0, 0x1EF0
    ctx->pc = 0x213220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_213224:
    // 0x213224: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x213224u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_213228:
    // 0x213228: 0xc069ae0  jal         func_1A6B80
label_21322c:
    if (ctx->pc == 0x21322Cu) {
        ctx->pc = 0x21322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213228u;
        // 0x21322c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213230u;
        goto label_213230;
    }
    ctx->pc = 0x213228u;
    SET_GPR_U32(ctx, 31, 0x213230u);
    ctx->pc = 0x21322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213228u;
    // 0x21322c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B80u, 0x213228u, 0x213230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213230u;
label_213230:
    // 0x213230: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x213230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_213234:
    // 0x213234: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
label_213238:
    if (ctx->pc == 0x213238u) {
        ctx->pc = 0x213238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213234u;
        // 0x213238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21323Cu;
        goto label_21323c;
    }
    ctx->pc = 0x213234u;
    {
        const bool branch_taken_0x213234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x213238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213234u;
        // 0x213238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213234) {
            ctx->pc = 0x213248u;
            goto label_213248;
        }
    }
    ctx->pc = 0x21323Cu;
label_21323c:
    // 0x21323c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_213240:
    // 0x213240: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x213240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213244:
    // 0x213244: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x213244u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_213248:
    // 0x213248: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_21324c:
    if (ctx->pc == 0x21324Cu) {
        ctx->pc = 0x21324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213248u;
        // 0x21324c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213250u;
        goto label_213250;
    }
    ctx->pc = 0x213248u;
    {
        const bool branch_taken_0x213248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213248) {
            ctx->pc = 0x21324Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213248u;
            // 0x21324c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213268u;
            goto label_213268;
        }
    }
    ctx->pc = 0x213250u;
label_213250:
    // 0x213250: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x213250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_213254:
    // 0x213254: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x213254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_213258:
    // 0x213258: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_21325c:
    // 0x21325c: 0x60f809  jalr        $v1
label_213260:
    if (ctx->pc == 0x213260u) {
        ctx->pc = 0x213260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21325Cu;
        // 0x213260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213264u;
        goto label_213264;
    }
    ctx->pc = 0x21325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x213264u);
        ctx->pc = 0x213260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21325Cu;
        // 0x213260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21325Cu, 0x213264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213264u;
label_213264:
    // 0x213264: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x213264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_213268:
    // 0x213268: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x213268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_21326c:
    // 0x21326c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_213270:
    if (ctx->pc == 0x213270u) {
        ctx->pc = 0x213270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21326Cu;
        // 0x213270: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213274u;
        goto label_213274;
    }
    ctx->pc = 0x21326Cu;
    {
        const bool branch_taken_0x21326c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21326Cu;
        // 0x213270: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21326c) {
            ctx->pc = 0x213230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213230;
        }
    }
    ctx->pc = 0x213274u;
label_213274:
    // 0x213274: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x213274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_213278:
    // 0x213278: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x213278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21327c:
    // 0x21327c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21327cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_213280:
    // 0x213280: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x213280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213284:
    // 0x213284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_213288:
    // 0x213288: 0x3e00008  jr          $ra
label_21328c:
    if (ctx->pc == 0x21328Cu) {
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213288u;
        // 0x21328c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213290u;
        goto label_fallthrough_0x213288;
    }
    ctx->pc = 0x213288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213288u;
        // 0x21328c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x213288:
    ctx->pc = 0x213290u;
}
