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

// Function: sub_00441048
// Address: 0x441048 - 0x441138
void sub_00441048_0x441048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441048_0x441048");
#endif

    switch (ctx->pc) {
        case 0x4410a0u: goto label_4410a0;
        case 0x4410c8u: goto label_4410c8;
        case 0x4410e4u: goto label_4410e4;
        default: break;
    }

    ctx->pc = 0x441048u;

    // 0x441048: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x441048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x44104c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x44104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x441050: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x441050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x441054: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x441054u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441058: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x441058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x44105c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x44105cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441060: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x441060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x441064: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x441064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441068: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x441068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x44106c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x44106cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441070: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x441070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x441074: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x441074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441078: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x441078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x44107c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x44107cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441080: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x441080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x441084: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x441084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441088: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x441088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x44108c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x44108cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x441090: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x441090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x441094: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x441094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x441098: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x441098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x44109c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x44109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4410a0:
    // 0x4410a0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4410a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4410a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4410a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4410a8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4410a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4410ac: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4410acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4410b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4410b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4410b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4410b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4410b8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x4410b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4410bc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4410bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4410c0: 0xc11024e  jal         func_440938
    ctx->pc = 0x4410C0u;
    SET_GPR_U32(ctx, 31, 0x4410C8u);
    ctx->pc = 0x4410C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4410C0u;
    // 0x4410c4: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440938u, 0x4410C0u, 0x4410C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4410C8u;
label_4410c8:
    // 0x4410c8: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x4410c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4410cc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4410CCu;
    {
        const bool branch_taken_0x4410cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4410D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4410CCu;
        // 0x4410d0: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4410cc) {
            ctx->pc = 0x441100u;
            goto label_441100;
        }
    }
    ctx->pc = 0x4410D4u;
    // 0x4410d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4410D4u;
    {
        const bool branch_taken_0x4410d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4410D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4410D4u;
        // 0x4410d8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4410d4) {
            ctx->pc = 0x441100u;
            goto label_441100;
        }
    }
    ctx->pc = 0x4410DCu;
    // 0x4410dc: 0xc10f7b8  jal         func_43DEE0
    ctx->pc = 0x4410DCu;
    SET_GPR_U32(ctx, 31, 0x4410E4u);
    ctx->pc = 0x4410E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4410DCu;
    // 0x4410e0: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DEE0u, 0x4410DCu, 0x4410E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4410E4u;
label_4410e4:
    // 0x4410e4: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x4410e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x4410e8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4410E8u;
    {
        const bool branch_taken_0x4410e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4410e8) {
            ctx->pc = 0x4410ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4410E8u;
            // 0x4410ec: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4410F0u;
            goto label_4410f0;
        }
    }
    ctx->pc = 0x4410F0u;
label_4410f0:
    // 0x4410f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4410f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4410f4: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x4410f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x4410f8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4410F8u;
    {
        const bool branch_taken_0x4410f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4410FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4410F8u;
        // 0x4410fc: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4410f8) {
            ctx->pc = 0x4410A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4410a0;
        }
    }
    ctx->pc = 0x441100u;
label_441100:
    // 0x441100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x441100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441104: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x441104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x441108: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x441108u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44110c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x44110cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x441110: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x441110u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x441114: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x441114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x441118: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x441118u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44111c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x44111cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x441120: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x441120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x441124: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x441124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x441128: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x441128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44112c: 0x3e00008  jr          $ra
    ctx->pc = 0x44112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44112Cu;
        // 0x441130: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x441134u;
    // 0x441134: 0x0  nop
    ctx->pc = 0x441134u;
    // NOP
    ctx->pc = 0x441138u;
}
