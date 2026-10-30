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

// Function: sub_00329FD8
// Address: 0x329fd8 - 0x32a0b8
void sub_00329FD8_0x329fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329FD8_0x329fd8");
#endif

    switch (ctx->pc) {
        case 0x32a030u: goto label_32a030;
        case 0x32a048u: goto label_32a048;
        case 0x32a068u: goto label_32a068;
        case 0x32a078u: goto label_32a078;
        default: break;
    }

    ctx->pc = 0x329fd8u;

    // 0x329fd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x329fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x329fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329fe0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x329fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x329fe4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x329fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329fe8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x329fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x329fec: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x329fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
    // 0x329ff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x329ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x329ff4: 0x34847000  ori         $a0, $a0, 0x7000
    ctx->pc = 0x329ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x329ff8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x329ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x329ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a000: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x32a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x32a004: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x32a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x32a008: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32a00c: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x32a00cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32a010: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32A010u;
    {
        const bool branch_taken_0x32a010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A010u;
        // 0x32a014: 0xae62005c  sw          $v0, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a010) {
            ctx->pc = 0x32A01Cu;
            goto label_32a01c;
        }
    }
    ctx->pc = 0x32A018u;
    // 0x32a018: 0xae64005c  sw          $a0, 0x5C($s3)
    ctx->pc = 0x32a018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 4));
label_32a01c:
    // 0x32a01c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x32a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x32a020: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x32A020u;
    {
        const bool branch_taken_0x32a020 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x32A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A020u;
        // 0x32a024: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a020) {
            ctx->pc = 0x32A09Cu;
            goto label_32a09c;
        }
    }
    ctx->pc = 0x32A028u;
    // 0x32a028: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x32a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x32a02c: 0x0  nop
    ctx->pc = 0x32a02cu;
    // NOP
label_32a030:
    // 0x32a030: 0x39180  sll         $s2, $v1, 6
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x32a034: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32a038: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x32a038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x32a03c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32A03Cu;
    {
        const bool branch_taken_0x32a03c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A03Cu;
        // 0x32a040: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a03c) {
            ctx->pc = 0x32A08Cu;
            goto label_32a08c;
        }
    }
    ctx->pc = 0x32A044u;
    // 0x32a044: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x32a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_32a048:
    // 0x32a048: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32a048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a04c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32a050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a054: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32a058: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x32a058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a05c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x32a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x32a060: 0xc0ca7ca  jal         func_329F28
    ctx->pc = 0x32A060u;
    SET_GPR_U32(ctx, 31, 0x32A068u);
    ctx->pc = 0x32A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A060u;
    // 0x32a064: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F28u, 0x32A060u, 0x32A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A068u;
label_32a068:
    // 0x32a068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a06c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a070: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32A070u;
    SET_GPR_U32(ctx, 31, 0x32A078u);
    ctx->pc = 0x32A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A070u;
    // 0x32a074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32A070u, 0x32A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A078u;
label_32a078:
    // 0x32a078: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x32a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x32a07c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x32a07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a080: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x32a080u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x32a084: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x32A084u;
    {
        const bool branch_taken_0x32a084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a084) {
            ctx->pc = 0x32A088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A084u;
            // 0x32a088: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a048;
        }
    }
    ctx->pc = 0x32A08Cu;
label_32a08c:
    // 0x32a08c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x32a08cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a090: 0x463ffe7  bgezl       $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x32A090u;
    {
        const bool branch_taken_0x32a090 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x32a090) {
            ctx->pc = 0x32A094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A090u;
            // 0x32a094: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a030;
        }
    }
    ctx->pc = 0x32A098u;
    // 0x32a098: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32a098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32a09c:
    // 0x32a09c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32a09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a0a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32a0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a0a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a0a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a0a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32a0a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0B0u;
        // 0x32a0b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A0B8u;
}
