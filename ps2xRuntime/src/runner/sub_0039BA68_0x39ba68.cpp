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

// Function: sub_0039BA68
// Address: 0x39ba68 - 0x39bb18
void sub_0039BA68_0x39ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA68_0x39ba68");
#endif

    switch (ctx->pc) {
        case 0x39ba68u: goto label_39ba68;
        case 0x39ba6cu: goto label_39ba6c;
        case 0x39ba70u: goto label_39ba70;
        case 0x39ba74u: goto label_39ba74;
        case 0x39ba78u: goto label_39ba78;
        case 0x39ba7cu: goto label_39ba7c;
        case 0x39ba80u: goto label_39ba80;
        case 0x39ba84u: goto label_39ba84;
        case 0x39ba88u: goto label_39ba88;
        case 0x39ba8cu: goto label_39ba8c;
        case 0x39ba90u: goto label_39ba90;
        case 0x39ba94u: goto label_39ba94;
        case 0x39ba98u: goto label_39ba98;
        case 0x39ba9cu: goto label_39ba9c;
        case 0x39baa0u: goto label_39baa0;
        case 0x39baa4u: goto label_39baa4;
        case 0x39baa8u: goto label_39baa8;
        case 0x39baacu: goto label_39baac;
        case 0x39bab0u: goto label_39bab0;
        case 0x39bab4u: goto label_39bab4;
        case 0x39bab8u: goto label_39bab8;
        case 0x39babcu: goto label_39babc;
        case 0x39bac0u: goto label_39bac0;
        case 0x39bac4u: goto label_39bac4;
        case 0x39bac8u: goto label_39bac8;
        case 0x39baccu: goto label_39bacc;
        case 0x39bad0u: goto label_39bad0;
        case 0x39bad4u: goto label_39bad4;
        case 0x39bad8u: goto label_39bad8;
        case 0x39badcu: goto label_39badc;
        case 0x39bae0u: goto label_39bae0;
        case 0x39bae4u: goto label_39bae4;
        case 0x39bae8u: goto label_39bae8;
        case 0x39baecu: goto label_39baec;
        case 0x39baf0u: goto label_39baf0;
        case 0x39baf4u: goto label_39baf4;
        case 0x39baf8u: goto label_39baf8;
        case 0x39bafcu: goto label_39bafc;
        case 0x39bb00u: goto label_39bb00;
        case 0x39bb04u: goto label_39bb04;
        case 0x39bb08u: goto label_39bb08;
        case 0x39bb0cu: goto label_39bb0c;
        case 0x39bb10u: goto label_39bb10;
        case 0x39bb14u: goto label_39bb14;
        default: break;
    }

    ctx->pc = 0x39ba68u;

label_39ba68:
    // 0x39ba68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39ba6c:
    // 0x39ba6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39ba70:
    // 0x39ba70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39ba74:
    // 0x39ba74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ba74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ba78:
    // 0x39ba78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39ba7c:
    // 0x39ba7c: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x39ba7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_39ba80:
    // 0x39ba80: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x39ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_39ba84:
    // 0x39ba84: 0x60f809  jalr        $v1
label_39ba88:
    if (ctx->pc == 0x39BA88u) {
        ctx->pc = 0x39BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA84u;
        // 0x39ba88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA8Cu;
        goto label_39ba8c;
    }
    ctx->pc = 0x39BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39BA8Cu);
        ctx->pc = 0x39BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA84u;
        // 0x39ba88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA84u, 0x39BA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BA8Cu;
label_39ba8c:
    // 0x39ba8c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x39ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ba90:
    // 0x39ba90: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x39ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_39ba94:
    // 0x39ba94: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x39ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_39ba98:
    // 0x39ba98: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x39ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_39ba9c:
    // 0x39ba9c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_39baa0:
    if (ctx->pc == 0x39BAA0u) {
        ctx->pc = 0x39BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA9Cu;
        // 0x39baa0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAA4u;
        goto label_39baa4;
    }
    ctx->pc = 0x39BA9Cu;
    {
        const bool branch_taken_0x39ba9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA9Cu;
        // 0x39baa0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba9c) {
            ctx->pc = 0x39BAF8u;
            goto label_39baf8;
        }
    }
    ctx->pc = 0x39BAA4u;
label_39baa4:
    // 0x39baa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39baa8:
    // 0x39baa8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39baa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39baac:
    // 0x39baac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39bab0:
    // 0x39bab0: 0x40f809  jalr        $v0
label_39bab4:
    if (ctx->pc == 0x39BAB4u) {
        ctx->pc = 0x39BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAB0u;
        // 0x39bab4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAB8u;
        goto label_39bab8;
    }
    ctx->pc = 0x39BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BAB8u);
        ctx->pc = 0x39BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAB0u;
        // 0x39bab4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BAB0u, 0x39BAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BAB8u;
label_39bab8:
    // 0x39bab8: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x39bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_39babc:
    // 0x39babc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x39babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39bac0:
    // 0x39bac0: 0x40f809  jalr        $v0
label_39bac4:
    if (ctx->pc == 0x39BAC4u) {
        ctx->pc = 0x39BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAC0u;
        // 0x39bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAC8u;
        goto label_39bac8;
    }
    ctx->pc = 0x39BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BAC8u);
        ctx->pc = 0x39BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAC0u;
        // 0x39bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BAC0u, 0x39BAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BAC8u;
label_39bac8:
    // 0x39bac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39bacc:
    // 0x39bacc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_39bad0:
    if (ctx->pc == 0x39BAD0u) {
        ctx->pc = 0x39BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BACCu;
        // 0x39bad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAD4u;
        goto label_39bad4;
    }
    ctx->pc = 0x39BACCu;
    {
        const bool branch_taken_0x39bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BACCu;
        // 0x39bad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bacc) {
            ctx->pc = 0x39BAF8u;
            goto label_39baf8;
        }
    }
    ctx->pc = 0x39BAD4u;
label_39bad4:
    // 0x39bad4: 0xc0e858c  jal         func_3A1630
label_39bad8:
    if (ctx->pc == 0x39BAD8u) {
        ctx->pc = 0x39BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAD4u;
        // 0x39bad8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BADCu;
        goto label_39badc;
    }
    ctx->pc = 0x39BAD4u;
    SET_GPR_U32(ctx, 31, 0x39BADCu);
    ctx->pc = 0x39BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAD4u;
    // 0x39bad8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x39BAD4u, 0x39BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BADCu;
label_39badc:
    // 0x39badc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39bae0:
    // 0x39bae0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x39bae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_39bae4:
    // 0x39bae4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x39bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_39bae8:
    // 0x39bae8: 0x60f809  jalr        $v1
label_39baec:
    if (ctx->pc == 0x39BAECu) {
        ctx->pc = 0x39BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAE8u;
        // 0x39baec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAF0u;
        goto label_39baf0;
    }
    ctx->pc = 0x39BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39BAF0u);
        ctx->pc = 0x39BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAE8u;
        // 0x39baec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BAE8u, 0x39BAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BAF0u;
label_39baf0:
    // 0x39baf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_39baf4:
    if (ctx->pc == 0x39BAF4u) {
        ctx->pc = 0x39BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAF0u;
        // 0x39baf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BAF8u;
        goto label_39baf8;
    }
    ctx->pc = 0x39BAF0u;
    {
        const bool branch_taken_0x39baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAF0u;
        // 0x39baf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39baf0) {
            ctx->pc = 0x39BB04u;
            goto label_39bb04;
        }
    }
    ctx->pc = 0x39BAF8u;
label_39baf8:
    // 0x39baf8: 0xc0e85e4  jal         func_3A1790
label_39bafc:
    if (ctx->pc == 0x39BAFCu) {
        ctx->pc = 0x39BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAF8u;
        // 0x39bafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB00u;
        goto label_39bb00;
    }
    ctx->pc = 0x39BAF8u;
    SET_GPR_U32(ctx, 31, 0x39BB00u);
    ctx->pc = 0x39BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAF8u;
    // 0x39bafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1790u, 0x39BAF8u, 0x39BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB00u;
label_39bb00:
    // 0x39bb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39bb04:
    // 0x39bb04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39bb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bb08:
    // 0x39bb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39bb0c:
    // 0x39bb0c: 0x3e00008  jr          $ra
label_39bb10:
    if (ctx->pc == 0x39BB10u) {
        ctx->pc = 0x39BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB0Cu;
        // 0x39bb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB14u;
        goto label_39bb14;
    }
    ctx->pc = 0x39BB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB0Cu;
        // 0x39bb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BB14u;
label_39bb14:
    // 0x39bb14: 0x0  nop
    ctx->pc = 0x39bb14u;
    // NOP
    ctx->pc = 0x39bb18u;
}
