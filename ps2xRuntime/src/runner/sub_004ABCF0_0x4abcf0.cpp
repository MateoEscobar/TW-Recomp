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

// Function: sub_004ABCF0
// Address: 0x4abcf0 - 0x4abf70
void sub_004ABCF0_0x4abcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABCF0_0x4abcf0");
#endif

    switch (ctx->pc) {
        case 0x4abd4cu: goto label_4abd4c;
        case 0x4abd64u: goto label_4abd64;
        case 0x4abdfcu: goto label_4abdfc;
        case 0x4abe20u: goto label_4abe20;
        case 0x4abed8u: goto label_4abed8;
        case 0x4abefcu: goto label_4abefc;
        case 0x4abf04u: goto label_4abf04;
        case 0x4abf18u: goto label_4abf18;
        case 0x4abf2cu: goto label_4abf2c;
        default: break;
    }

    ctx->pc = 0x4abcf0u;

    // 0x4abcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4abcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4abcf4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4abcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4abcf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4abcfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4abcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4abd00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4abd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4abd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abd08: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4abd0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABD0Cu;
    {
        const bool branch_taken_0x4abd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD0Cu;
        // 0x4abd10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd0c) {
            ctx->pc = 0x4ABD24u;
            goto label_4abd24;
        }
    }
    ctx->pc = 0x4ABD14u;
    // 0x4abd14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4abd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4abd18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4abd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4ABD1Cu;
    {
        const bool branch_taken_0x4abd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD1Cu;
        // 0x4abd20: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd1c) {
            ctx->pc = 0x4ABD50u;
            goto label_4abd50;
        }
    }
    ctx->pc = 0x4ABD24u;
label_4abd24:
    // 0x4abd24: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4abd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4abd28: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4ABD28u;
    {
        const bool branch_taken_0x4abd28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD28u;
        // 0x4abd2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd28) {
            ctx->pc = 0x4ABD50u;
            goto label_4abd50;
        }
    }
    ctx->pc = 0x4ABD30u;
    // 0x4abd30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4abd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4abd34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4abd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4abd38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4abd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4abd3c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ABD3Cu;
    {
        const bool branch_taken_0x4abd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4ABD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD3Cu;
        // 0x4abd40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd3c) {
            ctx->pc = 0x4ABD50u;
            goto label_4abd50;
        }
    }
    ctx->pc = 0x4ABD44u;
    // 0x4abd44: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ABD44u;
    SET_GPR_U32(ctx, 31, 0x4ABD4Cu);
    ctx->pc = 0x4ABD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABD44u;
    // 0x4abd48: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ABD44u, 0x4ABD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABD4Cu;
label_4abd4c:
    // 0x4abd4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4abd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abd50:
    // 0x4abd50: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4ABD50u;
    {
        const bool branch_taken_0x4abd50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd50) {
            ctx->pc = 0x4ABD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABD50u;
            // 0x4abd54: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD58u;
    // 0x4abd58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abd5c: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4ABD5Cu;
    SET_GPR_U32(ctx, 31, 0x4ABD64u);
    ctx->pc = 0x4ABD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABD5Cu;
    // 0x4abd60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4ABD5Cu, 0x4ABD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABD64u;
label_4abd64:
    // 0x4abd64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4abd64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4abd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4abd6c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ABD6Cu;
    {
        const bool branch_taken_0x4abd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4abd6c) {
            ctx->pc = 0x4ABD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABD6Cu;
            // 0x4abd70: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABD88u;
            goto label_4abd88;
        }
    }
    ctx->pc = 0x4ABD74u;
    // 0x4abd74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4abd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abd78: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4abd7c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4abd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4abd80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ABD80u;
    {
        const bool branch_taken_0x4abd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD80u;
        // 0x4abd84: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd80) {
            ctx->pc = 0x4ABD94u;
            goto label_4abd94;
        }
    }
    ctx->pc = 0x4ABD88u;
label_4abd88:
    // 0x4abd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4abd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4abd8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4ABD8Cu;
    {
        const bool branch_taken_0x4abd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD8Cu;
        // 0x4abd90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd8c) {
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD94u;
label_4abd94:
    // 0x4abd94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4abd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4abd98:
    // 0x4abd98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4abd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4abd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abda0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4abda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4abda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abda8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABDA8u;
        // 0x4abdac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABDB0u;
    // 0x4abdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4abdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4abdb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4abdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4abdb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4abdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4abdbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4abdbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4abdc4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4abdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abdc8: 0x90a2001a  lbu         $v0, 0x1A($a1)
    ctx->pc = 0x4abdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x4abdcc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4ABDCCu;
    {
        const bool branch_taken_0x4abdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABDCCu;
        // 0x4abdd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abdcc) {
            ctx->pc = 0x4ABE54u;
            goto label_4abe54;
        }
    }
    ctx->pc = 0x4ABDD4u;
    // 0x4abdd4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4abdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4abdd8: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4ABDD8u;
    {
        const bool branch_taken_0x4abdd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abdd8) {
            ctx->pc = 0x4ABDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABDD8u;
            // 0x4abddc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABE04u;
            goto label_4abe04;
        }
    }
    ctx->pc = 0x4ABDE0u;
    // 0x4abde0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4abde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4abde4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4abde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4abde8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4abde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4abdec: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABDECu;
    {
        const bool branch_taken_0x4abdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4abdec) {
            ctx->pc = 0x4ABDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABDECu;
            // 0x4abdf0: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABE04u;
            goto label_4abe04;
        }
    }
    ctx->pc = 0x4ABDF4u;
    // 0x4abdf4: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ABDF4u;
    SET_GPR_U32(ctx, 31, 0x4ABDFCu);
    ctx->pc = 0x4ABDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABDF4u;
    // 0x4abdf8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ABDF4u, 0x4ABDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABDFCu;
label_4abdfc:
    // 0x4abdfc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4abdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abe00: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x4abe00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4abe04:
    // 0x4abe04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4abe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4abe08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4abe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4abe0c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4abe0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4abe10: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4ABE10u;
    {
        const bool branch_taken_0x4abe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abe10) {
            ctx->pc = 0x4ABE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABE10u;
            // 0x4abe14: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABE34u;
            goto label_4abe34;
        }
    }
    ctx->pc = 0x4ABE18u;
    // 0x4abe18: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4ABE18u;
    SET_GPR_U32(ctx, 31, 0x4ABE20u);
    ctx->pc = 0x4ABE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABE18u;
    // 0x4abe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4ABE18u, 0x4ABE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABE20u;
label_4abe20:
    // 0x4abe20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4abe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4abe24: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ABE24u;
    {
        const bool branch_taken_0x4abe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4ABE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE24u;
        // 0x4abe28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe24) {
            ctx->pc = 0x4ABE34u;
            goto label_4abe34;
        }
    }
    ctx->pc = 0x4ABE2Cu;
    // 0x4abe2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4abe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4abe30: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x4abe30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4abe34:
    // 0x4abe34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4abe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4abe38: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ABE38u;
    {
        const bool branch_taken_0x4abe38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4ABE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE38u;
        // 0x4abe3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe38) {
            ctx->pc = 0x4ABE54u;
            goto label_4abe54;
        }
    }
    ctx->pc = 0x4ABE40u;
    // 0x4abe40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4abe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abe44: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abe44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4abe48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4abe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4abe4c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4abe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4abe50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4abe50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4abe54:
    // 0x4abe54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4abe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abe58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4abe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abe5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4abe5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abe60: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE60u;
        // 0x4abe64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABE68u;
    // 0x4abe68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4abe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4abe6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4abe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4abe70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4abe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4abe74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4abe74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4abe7c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4abe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4abe80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4abe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe84: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4abe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4abe88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4abe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4abe8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4abe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4abe90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4abe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe94: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abe94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4abe98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABE98u;
    {
        const bool branch_taken_0x4abe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE98u;
        // 0x4abe9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe98) {
            ctx->pc = 0x4ABEB0u;
            goto label_4abeb0;
        }
    }
    ctx->pc = 0x4ABEA0u;
    // 0x4abea0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4abea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4abea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4abea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abea8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4ABEA8u;
    {
        const bool branch_taken_0x4abea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEA8u;
        // 0x4abeac: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abea8) {
            ctx->pc = 0x4ABEDCu;
            goto label_4abedc;
        }
    }
    ctx->pc = 0x4ABEB0u;
label_4abeb0:
    // 0x4abeb0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4abeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4abeb4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4ABEB4u;
    {
        const bool branch_taken_0x4abeb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEB4u;
        // 0x4abeb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abeb4) {
            ctx->pc = 0x4ABEDCu;
            goto label_4abedc;
        }
    }
    ctx->pc = 0x4ABEBCu;
    // 0x4abebc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4abebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4abec0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4abec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4abec4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4abec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4abec8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ABEC8u;
    {
        const bool branch_taken_0x4abec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4ABECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEC8u;
        // 0x4abecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abec8) {
            ctx->pc = 0x4ABEDCu;
            goto label_4abedc;
        }
    }
    ctx->pc = 0x4ABED0u;
    // 0x4abed0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ABED0u;
    SET_GPR_U32(ctx, 31, 0x4ABED8u);
    ctx->pc = 0x4ABED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABED0u;
    // 0x4abed4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ABED0u, 0x4ABED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABED8u;
label_4abed8:
    // 0x4abed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4abed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abedc:
    // 0x4abedc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4ABEDCu;
    {
        const bool branch_taken_0x4abedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEDCu;
        // 0x4abee0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abedc) {
            ctx->pc = 0x4ABF48u;
            goto label_4abf48;
        }
    }
    ctx->pc = 0x4ABEE4u;
    // 0x4abee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4abee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abee8: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4ABEE8u;
    {
        const bool branch_taken_0x4abee8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x4ABEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEE8u;
        // 0x4abeec: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abee8) {
            ctx->pc = 0x4ABF14u;
            goto label_4abf14;
        }
    }
    ctx->pc = 0x4ABEF0u;
    // 0x4abef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4abef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abef4: 0xc12be12  jal         func_4AF848
    ctx->pc = 0x4ABEF4u;
    SET_GPR_U32(ctx, 31, 0x4ABEFCu);
    ctx->pc = 0x4ABEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABEF4u;
    // 0x4abef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF848u, 0x4ABEF4u, 0x4ABEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABEFCu;
label_4abefc:
    // 0x4abefc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4ABEFCu;
    {
        const bool branch_taken_0x4abefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEFCu;
        // 0x4abf00: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abefc) {
            ctx->pc = 0x4ABF48u;
            goto label_4abf48;
        }
    }
    ctx->pc = 0x4ABF04u;
label_4abf04:
    // 0x4abf04: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4abf08: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4abf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4abf0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4ABF0Cu;
    {
        const bool branch_taken_0x4abf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF0Cu;
        // 0x4abf10: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf0c) {
            ctx->pc = 0x4ABF48u;
            goto label_4abf48;
        }
    }
    ctx->pc = 0x4ABF14u;
label_4abf14:
    // 0x4abf14: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x4abf14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4abf18:
    // 0x4abf18: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4abf18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4abf1c: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x4ABF1Cu;
    {
        const bool branch_taken_0x4abf1c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4ABF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF1Cu;
        // 0x4abf20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf1c) {
            ctx->pc = 0x4ABF4Cu;
            goto label_4abf4c;
        }
    }
    ctx->pc = 0x4ABF24u;
    // 0x4abf24: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4ABF24u;
    SET_GPR_U32(ctx, 31, 0x4ABF2Cu);
    ctx->pc = 0x4ABF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABF24u;
    // 0x4abf28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4ABF24u, 0x4ABF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABF2Cu;
label_4abf2c:
    // 0x4abf2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4abf2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abf30: 0x5074fff4  beql        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x4ABF30u;
    {
        const bool branch_taken_0x4abf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x4abf30) {
            ctx->pc = 0x4ABF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABF30u;
            // 0x4abf34: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abf04;
        }
    }
    ctx->pc = 0x4ABF38u;
    // 0x4abf38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4abf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4abf3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4abf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4abf40: 0x1473fff5  bne         $v1, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x4ABF40u;
    {
        const bool branch_taken_0x4abf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x4ABF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF40u;
        // 0x4abf44: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf40) {
            ctx->pc = 0x4ABF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abf18;
        }
    }
    ctx->pc = 0x4ABF48u;
label_4abf48:
    // 0x4abf48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4abf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4abf4c:
    // 0x4abf4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4abf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4abf50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4abf50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4abf54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4abf54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4abf58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4abf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abf5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4abf5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4abf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abf64: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF64u;
        // 0x4abf68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABF6Cu;
    // 0x4abf6c: 0x0  nop
    ctx->pc = 0x4abf6cu;
    // NOP
    ctx->pc = 0x4abf70u;
}
