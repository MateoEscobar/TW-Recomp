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

// Function: sub_004ACC90
// Address: 0x4acc90 - 0x4acd40
void sub_004ACC90_0x4acc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACC90_0x4acc90");
#endif

    switch (ctx->pc) {
        case 0x4accd4u: goto label_4accd4;
        case 0x4accf0u: goto label_4accf0;
        case 0x4acd24u: goto label_4acd24;
        default: break;
    }

    ctx->pc = 0x4acc90u;

    // 0x4acc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4acc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4acc94: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4acc94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4acc98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4acc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4acc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4acc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4acca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4acca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4acca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4acca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4accac: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4accacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4accb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ACCB0u;
    {
        const bool branch_taken_0x4accb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCB0u;
        // 0x4accb4: 0x58e03  sra         $s1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accb0) {
            ctx->pc = 0x4ACCC0u;
            goto label_4accc0;
        }
    }
    ctx->pc = 0x4ACCB8u;
    // 0x4accb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACCB8u;
    {
        const bool branch_taken_0x4accb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCB8u;
        // 0x4accbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accb8) {
            ctx->pc = 0x4ACCD8u;
            goto label_4accd8;
        }
    }
    ctx->pc = 0x4ACCC0u;
label_4accc0:
    // 0x4accc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4accc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4accc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACCC4u;
    {
        const bool branch_taken_0x4accc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCC4u;
        // 0x4accc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accc4) {
            ctx->pc = 0x4ACCD8u;
            goto label_4accd8;
        }
    }
    ctx->pc = 0x4ACCCCu;
    // 0x4acccc: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ACCCCu;
    SET_GPR_U32(ctx, 31, 0x4ACCD4u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ACCCCu, 0x4ACCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACCD4u;
label_4accd4:
    // 0x4accd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4accd8:
    // 0x4accd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4ACCD8u;
    {
        const bool branch_taken_0x4accd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCD8u;
        // 0x4accdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accd8) {
            ctx->pc = 0x4ACD28u;
            goto label_4acd28;
        }
    }
    ctx->pc = 0x4ACCE0u;
    // 0x4acce0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4acce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4acce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acce8: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4ACCE8u;
    SET_GPR_U32(ctx, 31, 0x4ACCF0u);
    ctx->pc = 0x4ACCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACCE8u;
    // 0x4accec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4ACCE8u, 0x4ACCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACCF0u;
label_4accf0:
    // 0x4accf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4accf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4accf4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACCF4u;
    {
        const bool branch_taken_0x4accf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4ACCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCF4u;
        // 0x4accf8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accf4) {
            ctx->pc = 0x4ACD0Cu;
            goto label_4acd0c;
        }
    }
    ctx->pc = 0x4ACCFCu;
    // 0x4accfc: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4accfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4acd00: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4acd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4acd04: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4acd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4acd08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4acd0c:
    // 0x4acd0c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4acd0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4acd10: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4acd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x4acd14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACD14u;
    {
        const bool branch_taken_0x4acd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD14u;
        // 0x4acd18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd14) {
            ctx->pc = 0x4ACD28u;
            goto label_4acd28;
        }
    }
    ctx->pc = 0x4ACD1Cu;
    // 0x4acd1c: 0xc12b70a  jal         func_4ADC28
    ctx->pc = 0x4ACD1Cu;
    SET_GPR_U32(ctx, 31, 0x4ACD24u);
    ctx->pc = 0x4ACD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACD1Cu;
    // 0x4acd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4ACD1Cu, 0x4ACD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACD24u;
label_4acd24:
    // 0x4acd24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4acd28:
    // 0x4acd28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4acd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acd2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4acd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4acd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acd34: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD34u;
        // 0x4acd38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACD3Cu;
    // 0x4acd3c: 0x0  nop
    ctx->pc = 0x4acd3cu;
    // NOP
    ctx->pc = 0x4acd40u;
}
