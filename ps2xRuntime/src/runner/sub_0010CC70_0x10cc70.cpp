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

// Function: sub_0010CC70
// Address: 0x10cc70 - 0x10cd68
void sub_0010CC70_0x10cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC70_0x10cc70");
#endif

    switch (ctx->pc) {
        case 0x10ccb8u: goto label_10ccb8;
        case 0x10ccc4u: goto label_10ccc4;
        default: break;
    }

    ctx->pc = 0x10cc70u;

    // 0x10cc70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cc74: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10cc78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10cc7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10cc84: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10cc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10cc8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10cc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc90: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10cc94: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10cc94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc98: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10cc9c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10cca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cca4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10cca8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10CCA8u;
    {
        const bool branch_taken_0x10cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCA8u;
        // 0x10ccac: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cca8) {
            ctx->pc = 0x10CD38u;
            goto label_10cd38;
        }
    }
    ctx->pc = 0x10CCB0u;
    // 0x10ccb0: 0x269200bd  addiu       $s2, $s4, 0xBD
    ctx->pc = 0x10ccb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 189));
    // 0x10ccb4: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x10ccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_10ccb8:
    // 0x10ccb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccbc: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x10CCBCu;
    SET_GPR_U32(ctx, 31, 0x10CCC4u);
    ctx->pc = 0x10CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCBCu;
    // 0x10ccc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x10CCBCu, 0x10CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCC4u;
label_10ccc4:
    // 0x10ccc4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x10CCC4u;
    {
        const bool branch_taken_0x10ccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ccc4) {
            ctx->pc = 0x10CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CCC4u;
            // 0x10ccc8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CD24u;
            goto label_10cd24;
        }
    }
    ctx->pc = 0x10CCCCu;
    // 0x10cccc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ccd0: 0x54550014  bnel        $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x10CCD0u;
    {
        const bool branch_taken_0x10ccd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x10ccd0) {
            ctx->pc = 0x10CCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CCD0u;
            // 0x10ccd4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CD24u;
            goto label_10cd24;
        }
    }
    ctx->pc = 0x10CCD8u;
    // 0x10ccd8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x10ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10ccdc: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x10ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cce0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10cce0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cce4: 0x0  nop
    ctx->pc = 0x10cce4u;
    // NOP
    // 0x10cce8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x10CCE8u;
    {
        const bool branch_taken_0x10cce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10cce8) {
            ctx->pc = 0x10CCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CCE8u;
            // 0x10ccec: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CD24u;
            goto label_10cd24;
        }
    }
    ctx->pc = 0x10CCF0u;
    // 0x10ccf0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x10ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10ccf4: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x10ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ccf8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10ccf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ccfc: 0x0  nop
    ctx->pc = 0x10ccfcu;
    // NOP
    // 0x10cd00: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x10CD00u;
    {
        const bool branch_taken_0x10cd00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10cd00) {
            ctx->pc = 0x10CD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD00u;
            // 0x10cd04: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CD24u;
            goto label_10cd24;
        }
    }
    ctx->pc = 0x10CD08u;
    // 0x10cd08: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x10cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10cd0c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x10cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cd10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10cd10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cd14: 0x0  nop
    ctx->pc = 0x10cd14u;
    // NOP
    // 0x10cd18: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x10CD18u;
    {
        const bool branch_taken_0x10cd18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD18u;
        // 0x10cd1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd18) {
            ctx->pc = 0x10CD3Cu;
            goto label_10cd3c;
        }
    }
    ctx->pc = 0x10CD20u;
    // 0x10cd20: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10cd24:
    // 0x10cd24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10cd28: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x10cd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x10cd2c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10cd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cd30: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x10CD30u;
    {
        const bool branch_taken_0x10cd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD30u;
        // 0x10cd34: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd30) {
            ctx->pc = 0x10CCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ccb8;
        }
    }
    ctx->pc = 0x10CD38u;
label_10cd38:
    // 0x10cd38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10cd3c:
    // 0x10cd3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10cd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cd40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10cd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cd44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10cd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cd48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10cd48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cd4c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10cd4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cd50: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10cd50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cd54: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10cd54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD5Cu;
        // 0x10cd60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD64u;
    // 0x10cd64: 0x0  nop
    ctx->pc = 0x10cd64u;
    // NOP
    ctx->pc = 0x10cd68u;
}
