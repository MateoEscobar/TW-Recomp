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

// Function: sub_00166220
// Address: 0x166220 - 0x166308
void sub_00166220_0x166220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166220_0x166220");
#endif

    switch (ctx->pc) {
        case 0x166260u: goto label_166260;
        case 0x166268u: goto label_166268;
        case 0x166270u: goto label_166270;
        case 0x166288u: goto label_166288;
        case 0x166298u: goto label_166298;
        case 0x1662a8u: goto label_1662a8;
        default: break;
    }

    ctx->pc = 0x166220u;

    // 0x166220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x166220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x166224: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x166224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x166228: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x166228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16622c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16622cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166230: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x166230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x166234: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x166238: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x166238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16623c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16623cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166240: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x166240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x166244: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x166244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166248: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x166248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16624c: 0x3c160001  lui         $s6, 0x1
    ctx->pc = 0x16624cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1 << 16));
    // 0x166250: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x166250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x166254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166258: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x166258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x16625c: 0x0  nop
    ctx->pc = 0x16625cu;
    // NOP
label_166260:
    // 0x166260: 0xc137866  jal         func_4DE198
    ctx->pc = 0x166260u;
    SET_GPR_U32(ctx, 31, 0x166268u);
    ctx->pc = 0x166264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166260u;
    // 0x166264: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x166260u, 0x166268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166268u;
label_166268:
    // 0x166268: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166268u;
    SET_GPR_U32(ctx, 31, 0x166270u);
    ctx->pc = 0x16626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166268u;
    // 0x16626c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166268u, 0x166270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166270u;
label_166270:
    // 0x166270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166274: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x166274u;
    {
        const bool branch_taken_0x166274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166274) {
            ctx->pc = 0x166278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166274u;
            // 0x166278: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1662BCu;
            goto label_1662bc;
        }
    }
    ctx->pc = 0x16627Cu;
    // 0x16627c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166280: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x166280u;
    SET_GPR_U32(ctx, 31, 0x166288u);
    ctx->pc = 0x166284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166280u;
    // 0x166284: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x166280u, 0x166288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166288u;
label_166288:
    // 0x166288: 0x5051000c  beql        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x166288u;
    {
        const bool branch_taken_0x166288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x166288) {
            ctx->pc = 0x16628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166288u;
            // 0x16628c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1662BCu;
            goto label_1662bc;
        }
    }
    ctx->pc = 0x166290u;
    // 0x166290: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x166290u;
    SET_GPR_U32(ctx, 31, 0x166298u);
    ctx->pc = 0x166294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166290u;
    // 0x166294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x166290u, 0x166298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166298u;
label_166298:
    // 0x166298: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x166298u;
    {
        const bool branch_taken_0x166298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x166298) {
            ctx->pc = 0x16629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166298u;
            // 0x16629c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1662BCu;
            goto label_1662bc;
        }
    }
    ctx->pc = 0x1662A0u;
    // 0x1662a0: 0xc089f66  jal         func_227D98
    ctx->pc = 0x1662A0u;
    SET_GPR_U32(ctx, 31, 0x1662A8u);
    ctx->pc = 0x1662A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662A0u;
    // 0x1662a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x1662A0u, 0x1662A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662A8u;
label_1662a8:
    // 0x1662a8: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1662A8u;
    {
        const bool branch_taken_0x1662a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1662ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A8u;
        // 0x1662ac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662a8) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1662B0u;
    // 0x1662b0: 0x2a403  sra         $s4, $v0, 16
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1662b4: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_1662b8:
    // 0x1662b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1662b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1662bc:
    // 0x1662bc: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1662bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1662c0: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1662C0u;
    {
        const bool branch_taken_0x1662c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1662c0) {
            ctx->pc = 0x1662C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1662C0u;
            // 0x1662c4: 0x26a40048  addiu       $a0, $s5, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166260;
        }
    }
    ctx->pc = 0x1662C8u;
    // 0x1662c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1662c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1662ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1662d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1662d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1662d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1662d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1662d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1662d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1662dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1662dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1662e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1662e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1662e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1662e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1662e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1662e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1662ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1662ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ECu;
        // 0x1662f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1662ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1662F4u;
    // 0x1662f4: 0x0  nop
    ctx->pc = 0x1662f4u;
    // NOP
    // 0x1662f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1662f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1662fc: 0x0  nop
    ctx->pc = 0x1662fcu;
    // NOP
    // 0x166300: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x166300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x166304: 0x0  nop
    ctx->pc = 0x166304u;
    // NOP
    ctx->pc = 0x166308u;
}
