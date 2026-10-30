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

// Function: sub_0032DD48
// Address: 0x32dd48 - 0x32de40
void sub_0032DD48_0x32dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DD48_0x32dd48");
#endif

    switch (ctx->pc) {
        case 0x32dd8cu: goto label_32dd8c;
        case 0x32dd98u: goto label_32dd98;
        case 0x32dda0u: goto label_32dda0;
        case 0x32ddc8u: goto label_32ddc8;
        case 0x32dddcu: goto label_32dddc;
        case 0x32de14u: goto label_32de14;
        default: break;
    }

    ctx->pc = 0x32dd48u;

    // 0x32dd48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32dd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32dd4c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32dd50: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32dd54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd58: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32dd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32dd5c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32dd60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32dd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32dd64: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x32dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x32dd68: 0x2414007d  addiu       $s4, $zero, 0x7D
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x32dd6c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x32dd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x32dd70: 0x2415003b  addiu       $s5, $zero, 0x3B
    ctx->pc = 0x32dd70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x32dd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32dd78: 0x2416002c  addiu       $s6, $zero, 0x2C
    ctx->pc = 0x32dd78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32dd7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32dd80: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x32dd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x32dd84: 0xc0cb72c  jal         func_32DCB0
    ctx->pc = 0x32DD84u;
    SET_GPR_U32(ctx, 31, 0x32DD8Cu);
    ctx->pc = 0x32DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD84u;
    // 0x32dd88: 0x8e130028  lw          $s3, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCB0u, 0x32DD84u, 0x32DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD8Cu;
label_32dd8c:
    // 0x32dd8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32DD8Cu;
    {
        const bool branch_taken_0x32dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD8Cu;
        // 0x32dd90: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd8c) {
            ctx->pc = 0x32DDCCu;
            goto label_32ddcc;
        }
    }
    ctx->pc = 0x32DD94u;
    // 0x32dd94: 0x0  nop
    ctx->pc = 0x32dd94u;
    // NOP
label_32dd98:
    // 0x32dd98: 0xc0cb72c  jal         func_32DCB0
    ctx->pc = 0x32DD98u;
    SET_GPR_U32(ctx, 31, 0x32DDA0u);
    ctx->pc = 0x32DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DD98u;
    // 0x32dd9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCB0u, 0x32DD98u, 0x32DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDA0u;
label_32dda0:
    // 0x32dda0: 0x232001a  div         $zero, $s1, $s2
    ctx->pc = 0x32dda0u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32dda4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DDA4u;
    {
        const bool branch_taken_0x32dda4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dda4) {
            ctx->pc = 0x32DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DDA4u;
            // 0x32dda8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DDACu;
            goto label_32ddac;
        }
    }
    ctx->pc = 0x32DDACu;
label_32ddac:
    // 0x32ddac: 0x1010  mfhi        $v0
    ctx->pc = 0x32ddacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32ddb0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32DDB0u;
    {
        const bool branch_taken_0x32ddb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ddb0) {
            ctx->pc = 0x32DDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DDB0u;
            // 0x32ddb4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DDCCu;
            goto label_32ddcc;
        }
    }
    ctx->pc = 0x32DDB8u;
    // 0x32ddb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32ddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ddbc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x32ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32ddc0: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32DDC0u;
    SET_GPR_U32(ctx, 31, 0x32DDC8u);
    ctx->pc = 0x32DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DDC0u;
    // 0x32ddc4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32DDC0u, 0x32DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDC8u;
label_32ddc8:
    // 0x32ddc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32ddcc:
    // 0x32ddcc: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DDCCu;
    {
        const bool branch_taken_0x32ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x32DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDCCu;
        // 0x32ddd0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddcc) {
            ctx->pc = 0x32DDF4u;
            goto label_32ddf4;
        }
    }
    ctx->pc = 0x32DDD4u;
    // 0x32ddd4: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DDD4u;
    SET_GPR_U32(ctx, 31, 0x32DDDCu);
    ctx->pc = 0x32DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DDD4u;
    // 0x32ddd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DDD4u, 0x32DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDDCu;
label_32dddc:
    // 0x32dddc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32dde0: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DDE0u;
    {
        const bool branch_taken_0x32dde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x32dde0) {
            ctx->pc = 0x32DDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DDE0u;
            // 0x32dde4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DDF4u;
            goto label_32ddf4;
        }
    }
    ctx->pc = 0x32DDE8u;
    // 0x32dde8: 0x1454ffeb  bne         $v0, $s4, . + 4 + (-0x15 << 2)
    ctx->pc = 0x32DDE8u;
    {
        const bool branch_taken_0x32dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x32DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDE8u;
        // 0x32ddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dde8) {
            ctx->pc = 0x32DD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dd98;
        }
    }
    ctx->pc = 0x32DDF0u;
    // 0x32ddf0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x32ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_32ddf4:
    // 0x32ddf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32ddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ddf8: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x32ddf8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32ddfc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x32ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32de00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DE00u;
    {
        const bool branch_taken_0x32de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32de00) {
            ctx->pc = 0x32DE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DE00u;
            // 0x32de04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DE08u;
            goto label_32de08;
        }
    }
    ctx->pc = 0x32DE08u;
label_32de08:
    // 0x32de08: 0x3010  mfhi        $a2
    ctx->pc = 0x32de08u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32de0c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32DE0Cu;
    SET_GPR_U32(ctx, 31, 0x32DE14u);
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32DE0Cu, 0x32DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE14u;
label_32de14:
    // 0x32de14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32de14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de18: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32de18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32de1c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32de1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32de20: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32de20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32de24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32de24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32de28: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32de28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32de2c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x32de2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32de30: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x32de30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32de34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32de34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32de38: 0x3e00008  jr          $ra
    ctx->pc = 0x32DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE38u;
        // 0x32de3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DE40u;
}
