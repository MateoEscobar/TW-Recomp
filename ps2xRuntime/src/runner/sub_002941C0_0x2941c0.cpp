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

// Function: sub_002941C0
// Address: 0x2941c0 - 0x2942c8
void sub_002941C0_0x2941c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002941C0_0x2941c0");
#endif

    switch (ctx->pc) {
        case 0x294208u: goto label_294208;
        case 0x294230u: goto label_294230;
        case 0x294248u: goto label_294248;
        case 0x294260u: goto label_294260;
        case 0x294274u: goto label_294274;
        default: break;
    }

    ctx->pc = 0x2941c0u;

    // 0x2941c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2941c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2941c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2941c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2941c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2941c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2941cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2941ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2941d0: 0x2453de30  addiu       $s3, $v0, -0x21D0
    ctx->pc = 0x2941d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x2941d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2941d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2941d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2941d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941dc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2941dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2941e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2941e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2941e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2941e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2941ec: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2941ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2941f0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2941f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2941f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2941f8: 0x3c1e006d  lui         $fp, 0x6D
    ctx->pc = 0x2941f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)109 << 16));
    // 0x2941fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2941fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x294200: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x294200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x294204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_294208:
    // 0x294208: 0x8fc3e970  lw          $v1, -0x1690($fp)
    ctx->pc = 0x294208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294961520)));
    // 0x29420c: 0x3282001f  andi        $v0, $s4, 0x1F
    ctx->pc = 0x29420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x294210: 0x561004  sllv        $v0, $s6, $v0
    ctx->pc = 0x294210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 2) & 0x1F));
    // 0x294214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x294214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x294218: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x294218u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29421c: 0x56160019  bnel        $s0, $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x29421Cu;
    {
        const bool branch_taken_0x29421c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x29421c) {
            ctx->pc = 0x294220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29421Cu;
            // 0x294220: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294284u;
            goto label_294284;
        }
    }
    ctx->pc = 0x294224u;
    // 0x294224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294228: 0xc0a6726  jal         func_299C98
    ctx->pc = 0x294228u;
    SET_GPR_U32(ctx, 31, 0x294230u);
    ctx->pc = 0x29422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294228u;
    // 0x29422c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299C98u, 0x294228u, 0x294230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294230u;
label_294230:
    // 0x294230: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294234: 0x56300013  bnel        $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x294234u;
    {
        const bool branch_taken_0x294234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x294234) {
            ctx->pc = 0x294238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294234u;
            // 0x294238: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294284u;
            goto label_294284;
        }
    }
    ctx->pc = 0x29423Cu;
    // 0x29423c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294240: 0xc0a673c  jal         func_299CF0
    ctx->pc = 0x294240u;
    SET_GPR_U32(ctx, 31, 0x294248u);
    ctx->pc = 0x294244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294240u;
    // 0x294244: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299CF0u, 0x294240u, 0x294248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294248u;
label_294248:
    // 0x294248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x294248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29424c: 0x1651000d  bne         $s2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x29424Cu;
    {
        const bool branch_taken_0x29424c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x294250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29424Cu;
        // 0x294250: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29424c) {
            ctx->pc = 0x294284u;
            goto label_294284;
        }
    }
    ctx->pc = 0x294254u;
    // 0x294254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294258: 0xc0a676c  jal         func_299DB0
    ctx->pc = 0x294258u;
    SET_GPR_U32(ctx, 31, 0x294260u);
    ctx->pc = 0x29425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294258u;
    // 0x29425c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299DB0u, 0x294258u, 0x294260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294260u;
label_294260:
    // 0x294260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294264: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x294264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29426c: 0xc088878  jal         func_2221E0
    ctx->pc = 0x29426Cu;
    SET_GPR_U32(ctx, 31, 0x294274u);
    ctx->pc = 0x294270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29426Cu;
    // 0x294270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x29426Cu, 0x294274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294274u;
label_294274:
    // 0x294274: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x294274u;
    {
        const bool branch_taken_0x294274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x294278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294274u;
        // 0x294278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294274) {
            ctx->pc = 0x294290u;
            goto label_294290;
        }
    }
    ctx->pc = 0x29427Cu;
    // 0x29427c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29427Cu;
    {
        const bool branch_taken_0x29427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29427Cu;
        // 0x294280: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29427c) {
            ctx->pc = 0x294298u;
            goto label_294298;
        }
    }
    ctx->pc = 0x294284u;
label_294284:
    // 0x294284: 0x2e820014  sltiu       $v0, $s4, 0x14
    ctx->pc = 0x294284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x294288: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x294288u;
    {
        const bool branch_taken_0x294288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294288u;
        // 0x29428c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294288) {
            ctx->pc = 0x294208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294208;
        }
    }
    ctx->pc = 0x294290u;
label_294290:
    // 0x294290: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x294290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294294: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x294294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_294298:
    // 0x294298: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x294298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29429c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x29429cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2942a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2942a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2942a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2942a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2942a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2942a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2942ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2942acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2942b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2942b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2942b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2942b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2942b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2942b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2942bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2942BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942BCu;
        // 0x2942c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2942BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2942C4u;
    // 0x2942c4: 0x0  nop
    ctx->pc = 0x2942c4u;
    // NOP
    ctx->pc = 0x2942c8u;
}
