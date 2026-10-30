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

// Function: sub_00463A90
// Address: 0x463a90 - 0x463b70
void sub_00463A90_0x463a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463A90_0x463a90");
#endif

    switch (ctx->pc) {
        case 0x463ad8u: goto label_463ad8;
        case 0x463ae8u: goto label_463ae8;
        case 0x463afcu: goto label_463afc;
        default: break;
    }

    ctx->pc = 0x463a90u;

    // 0x463a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x463a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x463a94: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x463a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x463a98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x463a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x463a9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x463a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463aa0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x463aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x463aa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x463aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463aa8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x463aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x463aac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x463aacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463ab0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x463ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x463ab4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x463ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x463ab8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x463ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x463abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x463ac0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x463ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x463ac4: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x463AC4u;
    {
        const bool branch_taken_0x463ac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x463AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463AC4u;
        // 0x463ac8: 0x8e950010  lw          $s5, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ac4) {
            ctx->pc = 0x463B40u;
            goto label_463b40;
        }
    }
    ctx->pc = 0x463ACCu;
    // 0x463acc: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x463accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x463ad0: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x463ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x463ad4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x463ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_463ad8:
    // 0x463ad8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x463ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x463adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463ae0: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x463AE0u;
    SET_GPR_U32(ctx, 31, 0x463AE8u);
    ctx->pc = 0x463AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x463AE0u;
    // 0x463ae4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x463AE0u, 0x463AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463AE8u;
label_463ae8:
    // 0x463ae8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x463AE8u;
    {
        const bool branch_taken_0x463ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x463AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463AE8u;
        // 0x463aec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ae8) {
            ctx->pc = 0x463B04u;
            goto label_463b04;
        }
    }
    ctx->pc = 0x463AF0u;
    // 0x463af0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x463af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463af4: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x463AF4u;
    SET_GPR_U32(ctx, 31, 0x463AFCu);
    ctx->pc = 0x463AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x463AF4u;
    // 0x463af8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x463AF4u, 0x463AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463AFCu;
label_463afc:
    // 0x463afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x463AFCu;
    {
        const bool branch_taken_0x463afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x463B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463AFCu;
        // 0x463b00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463afc) {
            ctx->pc = 0x463B0Cu;
            goto label_463b0c;
        }
    }
    ctx->pc = 0x463B04u;
label_463b04:
    // 0x463b04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x463B04u;
    {
        const bool branch_taken_0x463b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463B04u;
        // 0x463b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463b04) {
            ctx->pc = 0x463B44u;
            goto label_463b44;
        }
    }
    ctx->pc = 0x463B0Cu;
label_463b0c:
    // 0x463b0c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x463B0Cu;
    {
        const bool branch_taken_0x463b0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x463b0c) {
            ctx->pc = 0x463B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x463B0Cu;
            // 0x463b10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x463B14u;
            goto label_463b14;
        }
    }
    ctx->pc = 0x463B14u;
label_463b14:
    // 0x463b14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x463b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x463b18: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x463b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x463b1c: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x463b1cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x463b20: 0x1012  mflo        $v0
    ctx->pc = 0x463b20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x463b24: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x463b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x463b28: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x463b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x463b2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x463b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x463b30: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x463b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x463b34: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x463b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x463b38: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x463B38u;
    {
        const bool branch_taken_0x463b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x463B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463B38u;
        // 0x463b3c: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463b38) {
            ctx->pc = 0x463AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_463ad8;
        }
    }
    ctx->pc = 0x463B40u;
label_463b40:
    // 0x463b40: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x463b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_463b44:
    // 0x463b44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x463b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x463b48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x463b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x463b4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x463b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x463b50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x463b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x463b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x463b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x463b58: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x463b58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x463b5c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x463b5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x463b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x463b64: 0x3e00008  jr          $ra
    ctx->pc = 0x463B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463B64u;
        // 0x463b68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463B6Cu;
    // 0x463b6c: 0x0  nop
    ctx->pc = 0x463b6cu;
    // NOP
    ctx->pc = 0x463b70u;
}
