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

// Function: sub_004AF140
// Address: 0x4af140 - 0x4af250
void sub_004AF140_0x4af140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF140_0x4af140");
#endif

    switch (ctx->pc) {
        case 0x4af1d0u: goto label_4af1d0;
        case 0x4af1f8u: goto label_4af1f8;
        default: break;
    }

    ctx->pc = 0x4af140u;

    // 0x4af140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4af140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4af144: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4af144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4af148: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4af148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4af14c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4af14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4af150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4af150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af154: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4af154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4af158: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4af158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af15c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4af15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4af160: 0x79603  sra         $s2, $a3, 24
    ctx->pc = 0x4af160u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 24));
    // 0x4af164: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4af164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4af168: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4af168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af16c: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AF16Cu;
    {
        const bool branch_taken_0x4af16c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x4AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF16Cu;
        // 0x4af170: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af16c) {
            ctx->pc = 0x4AF18Cu;
            goto label_4af18c;
        }
    }
    ctx->pc = 0x4AF174u;
    // 0x4af174: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4af174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af17c: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4af17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4af180: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4af180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4af184: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4AF184u;
    {
        const bool branch_taken_0x4af184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF184u;
        // 0x4af188: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af184) {
            ctx->pc = 0x4AF230u;
            goto label_4af230;
        }
    }
    ctx->pc = 0x4AF18Cu;
label_4af18c:
    // 0x4af18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af190: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af194: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF194u;
    {
        const bool branch_taken_0x4af194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF194u;
        // 0x4af198: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af194) {
            ctx->pc = 0x4AF1A8u;
            goto label_4af1a8;
        }
    }
    ctx->pc = 0x4AF19Cu;
    // 0x4af19c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AF1A0u;
    {
        const bool branch_taken_0x4af1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1A0u;
        // 0x4af1a4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1a0) {
            ctx->pc = 0x4AF1D4u;
            goto label_4af1d4;
        }
    }
    ctx->pc = 0x4AF1A8u;
label_4af1a8:
    // 0x4af1a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4af1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af1ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF1ACu;
    {
        const bool branch_taken_0x4af1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1ACu;
        // 0x4af1b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1ac) {
            ctx->pc = 0x4AF1D4u;
            goto label_4af1d4;
        }
    }
    ctx->pc = 0x4AF1B4u;
    // 0x4af1b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4af1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af1b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4af1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4af1bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4af1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4af1c0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF1C0u;
    {
        const bool branch_taken_0x4af1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1C0u;
        // 0x4af1c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1c0) {
            ctx->pc = 0x4AF1D4u;
            goto label_4af1d4;
        }
    }
    ctx->pc = 0x4AF1C8u;
    // 0x4af1c8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AF1C8u;
    SET_GPR_U32(ctx, 31, 0x4AF1D0u);
    ctx->pc = 0x4AF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF1C8u;
    // 0x4af1cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AF1C8u, 0x4AF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1D0u;
label_4af1d0:
    // 0x4af1d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4af1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4af1d4:
    // 0x4af1d4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF1D4u;
    {
        const bool branch_taken_0x4af1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1D4u;
        // 0x4af1d8: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1d4) {
            ctx->pc = 0x4AF220u;
            goto label_4af220;
        }
    }
    ctx->pc = 0x4AF1DCu;
    // 0x4af1dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af1e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4af1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4af1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4af1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af1ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4af1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af1f0: 0xc12ca4e  jal         func_4B2938
    ctx->pc = 0x4AF1F0u;
    SET_GPR_U32(ctx, 31, 0x4AF1F8u);
    ctx->pc = 0x4AF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF1F0u;
    // 0x4af1f4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2938u, 0x4AF1F0u, 0x4AF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1F8u;
label_4af1f8:
    // 0x4af1f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF1F8u;
    {
        const bool branch_taken_0x4af1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1F8u;
        // 0x4af1fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1f8) {
            ctx->pc = 0x4AF220u;
            goto label_4af220;
        }
    }
    ctx->pc = 0x4AF200u;
    // 0x4af200: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4af200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4af204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af208: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF208u;
    {
        const bool branch_taken_0x4af208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4af208) {
            ctx->pc = 0x4AF20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF208u;
            // 0x4af20c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF224u;
            goto label_4af224;
        }
    }
    ctx->pc = 0x4AF210u;
    // 0x4af210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af214: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af218: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4af218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4af21c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4af21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4af220:
    // 0x4af220: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4af220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4af224:
    // 0x4af224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af228: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x4af228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4af22c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4af22cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4af230:
    // 0x4af230: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4af230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4af234: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4af234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af238: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4af238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af23c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4af23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4af240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af244: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF244u;
        // 0x4af248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF24Cu;
    // 0x4af24c: 0x0  nop
    ctx->pc = 0x4af24cu;
    // NOP
    ctx->pc = 0x4af250u;
}
