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

// Function: sub_0018BDD0
// Address: 0x18bdd0 - 0x18be58
void sub_0018BDD0_0x18bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BDD0_0x18bdd0");
#endif

    switch (ctx->pc) {
        case 0x18bdd0u: goto label_18bdd0;
        case 0x18bdd4u: goto label_18bdd4;
        case 0x18bdd8u: goto label_18bdd8;
        case 0x18bddcu: goto label_18bddc;
        case 0x18bde0u: goto label_18bde0;
        case 0x18bde4u: goto label_18bde4;
        case 0x18bde8u: goto label_18bde8;
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        case 0x18be10u: goto label_18be10;
        case 0x18be14u: goto label_18be14;
        case 0x18be18u: goto label_18be18;
        case 0x18be1cu: goto label_18be1c;
        case 0x18be20u: goto label_18be20;
        case 0x18be24u: goto label_18be24;
        case 0x18be28u: goto label_18be28;
        case 0x18be2cu: goto label_18be2c;
        case 0x18be30u: goto label_18be30;
        case 0x18be34u: goto label_18be34;
        case 0x18be38u: goto label_18be38;
        case 0x18be3cu: goto label_18be3c;
        case 0x18be40u: goto label_18be40;
        case 0x18be44u: goto label_18be44;
        case 0x18be48u: goto label_18be48;
        case 0x18be4cu: goto label_18be4c;
        case 0x18be50u: goto label_18be50;
        case 0x18be54u: goto label_18be54;
        default: break;
    }

    ctx->pc = 0x18bdd0u;

label_18bdd0:
    // 0x18bdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18bdd4:
    // 0x18bdd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18bdd8:
    // 0x18bdd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18bddc:
    // 0x18bddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bde0:
    // 0x18bde0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18bde4:
    // 0x18bde4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x18bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_18bde8:
    // 0x18bde8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18bdec:
    if (ctx->pc == 0x18BDECu) {
        ctx->pc = 0x18BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDE8u;
        // 0x18bdec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDF0u;
        goto label_18bdf0;
    }
    ctx->pc = 0x18BDE8u;
    {
        const bool branch_taken_0x18bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDE8u;
        // 0x18bdec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bde8) {
            ctx->pc = 0x18BE10u;
            goto label_18be10;
        }
    }
    ctx->pc = 0x18BDF0u;
label_18bdf0:
    // 0x18bdf0: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_18bdf4:
    // 0x18bdf4: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
label_18bdf8:
    if (ctx->pc == 0x18BDF8u) {
        ctx->pc = 0x18BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDF4u;
        // 0x18bdf8: 0x8e020170  lw          $v0, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDFCu;
        goto label_18bdfc;
    }
    ctx->pc = 0x18BDF4u;
    {
        const bool branch_taken_0x18bdf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bdf4) {
            ctx->pc = 0x18BDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BDF4u;
            // 0x18bdf8: 0x8e020170  lw          $v0, 0x170($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BE14u;
            goto label_18be14;
        }
    }
    ctx->pc = 0x18BDFCu;
label_18bdfc:
    // 0x18bdfc: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_18be00:
    // 0x18be00: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_18be04:
    // 0x18be04: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_18be08:
    // 0x18be08: 0x60f809  jalr        $v1
label_18be0c:
    if (ctx->pc == 0x18BE0Cu) {
        ctx->pc = 0x18BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE08u;
        // 0x18be0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE10u;
        goto label_18be10;
    }
    ctx->pc = 0x18BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18BE10u);
        ctx->pc = 0x18BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE08u;
        // 0x18be0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE08u, 0x18BE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BE10u;
label_18be10:
    // 0x18be10: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_18be14:
    // 0x18be14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_18be18:
    if (ctx->pc == 0x18BE18u) {
        ctx->pc = 0x18BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE14u;
        // 0x18be18: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE1Cu;
        goto label_18be1c;
    }
    ctx->pc = 0x18BE14u;
    {
        const bool branch_taken_0x18be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18be14) {
            ctx->pc = 0x18BE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BE14u;
            // 0x18be18: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BE30u;
            goto label_18be30;
        }
    }
    ctx->pc = 0x18BE1Cu;
label_18be1c:
    // 0x18be1c: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x18be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_18be20:
    // 0x18be20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18be24:
    if (ctx->pc == 0x18BE24u) {
        ctx->pc = 0x18BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE20u;
        // 0x18be24: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE28u;
        goto label_18be28;
    }
    ctx->pc = 0x18BE20u;
    {
        const bool branch_taken_0x18be20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE20u;
        // 0x18be24: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be20) {
            ctx->pc = 0x18BE2Cu;
            goto label_18be2c;
        }
    }
    ctx->pc = 0x18BE28u;
label_18be28:
    // 0x18be28: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x18be28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_18be2c:
    // 0x18be2c: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x18be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_18be30:
    // 0x18be30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_18be34:
    if (ctx->pc == 0x18BE34u) {
        ctx->pc = 0x18BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE30u;
        // 0x18be34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE38u;
        goto label_18be38;
    }
    ctx->pc = 0x18BE30u;
    {
        const bool branch_taken_0x18be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18be30) {
            ctx->pc = 0x18BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BE30u;
            // 0x18be34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BE48u;
            goto label_18be48;
        }
    }
    ctx->pc = 0x18BE38u;
label_18be38:
    // 0x18be38: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_18be3c:
    // 0x18be3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18be40:
    if (ctx->pc == 0x18BE40u) {
        ctx->pc = 0x18BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE3Cu;
        // 0x18be40: 0xae11018c  sw          $s1, 0x18C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE44u;
        goto label_18be44;
    }
    ctx->pc = 0x18BE3Cu;
    {
        const bool branch_taken_0x18be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18be3c) {
            ctx->pc = 0x18BE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BE3Cu;
            // 0x18be40: 0xae11018c  sw          $s1, 0x18C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BE44u;
            goto label_18be44;
        }
    }
    ctx->pc = 0x18BE44u;
label_18be44:
    // 0x18be44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18be44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18be48:
    // 0x18be48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18be48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18be4c:
    // 0x18be4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18be4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18be50:
    // 0x18be50: 0x3e00008  jr          $ra
label_18be54:
    if (ctx->pc == 0x18BE54u) {
        ctx->pc = 0x18BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE50u;
        // 0x18be54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE58u;
        goto label_fallthrough_0x18be50;
    }
    ctx->pc = 0x18BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE50u;
        // 0x18be54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18be50:
    ctx->pc = 0x18BE58u;
}
