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

// Function: sub_0011FE68
// Address: 0x11fe68 - 0x11ff50
void sub_0011FE68_0x11fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FE68_0x11fe68");
#endif

    switch (ctx->pc) {
        case 0x11fe68u: goto label_11fe68;
        case 0x11fe6cu: goto label_11fe6c;
        case 0x11fe70u: goto label_11fe70;
        case 0x11fe74u: goto label_11fe74;
        case 0x11fe78u: goto label_11fe78;
        case 0x11fe7cu: goto label_11fe7c;
        case 0x11fe80u: goto label_11fe80;
        case 0x11fe84u: goto label_11fe84;
        case 0x11fe88u: goto label_11fe88;
        case 0x11fe8cu: goto label_11fe8c;
        case 0x11fe90u: goto label_11fe90;
        case 0x11fe94u: goto label_11fe94;
        case 0x11fe98u: goto label_11fe98;
        case 0x11fe9cu: goto label_11fe9c;
        case 0x11fea0u: goto label_11fea0;
        case 0x11fea4u: goto label_11fea4;
        case 0x11fea8u: goto label_11fea8;
        case 0x11feacu: goto label_11feac;
        case 0x11feb0u: goto label_11feb0;
        case 0x11feb4u: goto label_11feb4;
        case 0x11feb8u: goto label_11feb8;
        case 0x11febcu: goto label_11febc;
        case 0x11fec0u: goto label_11fec0;
        case 0x11fec4u: goto label_11fec4;
        case 0x11fec8u: goto label_11fec8;
        case 0x11feccu: goto label_11fecc;
        case 0x11fed0u: goto label_11fed0;
        case 0x11fed4u: goto label_11fed4;
        case 0x11fed8u: goto label_11fed8;
        case 0x11fedcu: goto label_11fedc;
        case 0x11fee0u: goto label_11fee0;
        case 0x11fee4u: goto label_11fee4;
        case 0x11fee8u: goto label_11fee8;
        case 0x11feecu: goto label_11feec;
        case 0x11fef0u: goto label_11fef0;
        case 0x11fef4u: goto label_11fef4;
        case 0x11fef8u: goto label_11fef8;
        case 0x11fefcu: goto label_11fefc;
        case 0x11ff00u: goto label_11ff00;
        case 0x11ff04u: goto label_11ff04;
        case 0x11ff08u: goto label_11ff08;
        case 0x11ff0cu: goto label_11ff0c;
        case 0x11ff10u: goto label_11ff10;
        case 0x11ff14u: goto label_11ff14;
        case 0x11ff18u: goto label_11ff18;
        case 0x11ff1cu: goto label_11ff1c;
        case 0x11ff20u: goto label_11ff20;
        case 0x11ff24u: goto label_11ff24;
        case 0x11ff28u: goto label_11ff28;
        case 0x11ff2cu: goto label_11ff2c;
        case 0x11ff30u: goto label_11ff30;
        case 0x11ff34u: goto label_11ff34;
        case 0x11ff38u: goto label_11ff38;
        case 0x11ff3cu: goto label_11ff3c;
        case 0x11ff40u: goto label_11ff40;
        case 0x11ff44u: goto label_11ff44;
        case 0x11ff48u: goto label_11ff48;
        case 0x11ff4cu: goto label_11ff4c;
        default: break;
    }

    ctx->pc = 0x11fe68u;

label_11fe68:
    // 0x11fe68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11fe6c:
    // 0x11fe6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11fe70:
    // 0x11fe70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11fe74:
    // 0x11fe74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11fe78:
    // 0x11fe78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11fe7c:
    // 0x11fe7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11fe80:
    // 0x11fe80: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11fe84:
    if (ctx->pc == 0x11FE84u) {
        ctx->pc = 0x11FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE80u;
        // 0x11fe84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE88u;
        goto label_11fe88;
    }
    ctx->pc = 0x11FE80u;
    {
        const bool branch_taken_0x11fe80 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE80u;
        // 0x11fe84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe80) {
            ctx->pc = 0x11FE90u;
            goto label_11fe90;
        }
    }
    ctx->pc = 0x11FE88u;
label_11fe88:
    // 0x11fe88: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fe8c:
    if (ctx->pc == 0x11FE8Cu) {
        ctx->pc = 0x11FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE88u;
        // 0x11fe8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE90u;
        goto label_11fe90;
    }
    ctx->pc = 0x11FE88u;
    {
        const bool branch_taken_0x11fe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE88u;
        // 0x11fe8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe88) {
            ctx->pc = 0x11FF30u;
            goto label_11ff30;
        }
    }
    ctx->pc = 0x11FE90u;
label_11fe90:
    // 0x11fe90: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11fe90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11fe94:
    // 0x11fe94: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11fe98:
    if (ctx->pc == 0x11FE98u) {
        ctx->pc = 0x11FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE94u;
        // 0x11fe98: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE9Cu;
        goto label_11fe9c;
    }
    ctx->pc = 0x11FE94u;
    {
        const bool branch_taken_0x11fe94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE94u;
        // 0x11fe98: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe94) {
            ctx->pc = 0x11FF24u;
            goto label_11ff24;
        }
    }
    ctx->pc = 0x11FE9Cu;
label_11fe9c:
    // 0x11fe9c: 0x26629178  addiu       $v0, $s3, -0x6E88
    ctx->pc = 0x11fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939000));
label_11fea0:
    // 0x11fea0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fea4:
    // 0x11fea4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fea8:
    // 0x11fea8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11feac:
    if (ctx->pc == 0x11FEACu) {
        ctx->pc = 0x11FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEA8u;
        // 0x11feac: 0x26639178  addiu       $v1, $s3, -0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FEB0u;
        goto label_11feb0;
    }
    ctx->pc = 0x11FEA8u;
    {
        const bool branch_taken_0x11fea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEA8u;
        // 0x11feac: 0x26639178  addiu       $v1, $s3, -0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fea8) {
            ctx->pc = 0x11FF28u;
            goto label_11ff28;
        }
    }
    ctx->pc = 0x11FEB0u;
label_11feb0:
    // 0x11feb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11feb4:
    // 0x11feb4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11feb8:
    // 0x11feb8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11feb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11febc:
    // 0x11febc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11febcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fec0:
    // 0x11fec0: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x11fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_11fec4:
    // 0x11fec4: 0x24a586e8  addiu       $a1, $a1, -0x7918
    ctx->pc = 0x11fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936296));
label_11fec8:
    // 0x11fec8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fecc:
    // 0x11fecc: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11feccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fed0:
    // 0x11fed0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fed4:
    // 0x11fed4: 0x24090499  addiu       $t1, $zero, 0x499
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
label_11fed8:
    // 0x11fed8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fedc:
    // 0x11fedc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fedcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fee0:
    // 0x11fee0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fee4:
    // 0x11fee4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fee4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fee8:
    // 0x11fee8: 0x40f809  jalr        $v0
label_11feec:
    if (ctx->pc == 0x11FEECu) {
        ctx->pc = 0x11FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEE8u;
        // 0x11feec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FEF0u;
        goto label_11fef0;
    }
    ctx->pc = 0x11FEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FEF0u);
        ctx->pc = 0x11FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEE8u;
        // 0x11feec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FEE8u, 0x11FEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FEF0u;
label_11fef0:
    // 0x11fef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fef4:
    // 0x11fef4: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fef8:
    if (ctx->pc == 0x11FEF8u) {
        ctx->pc = 0x11FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEF4u;
        // 0x11fef8: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FEFCu;
        goto label_11fefc;
    }
    ctx->pc = 0x11FEF4u;
    {
        const bool branch_taken_0x11fef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fef4) {
            ctx->pc = 0x11FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEF4u;
            // 0x11fef8: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FF0Cu;
            goto label_11ff0c;
        }
    }
    ctx->pc = 0x11FEFCu;
label_11fefc:
    // 0x11fefc: 0xc04d81a  jal         func_136068
label_11ff00:
    if (ctx->pc == 0x11FF00u) {
        ctx->pc = 0x11FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEFCu;
        // 0x11ff00: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF04u;
        goto label_11ff04;
    }
    ctx->pc = 0x11FEFCu;
    SET_GPR_U32(ctx, 31, 0x11FF04u);
    ctx->pc = 0x11FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEFCu;
    // 0x11ff00: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136068u, 0x11FEFCu, 0x11FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF04u;
label_11ff04:
    // 0x11ff04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11ff04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ff08:
    // 0x11ff08: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11ff0c:
    // 0x11ff0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ff10:
    // 0x11ff10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11ff14:
    // 0x11ff14: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11ff18:
    // 0x11ff18: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11ff1c:
    // 0x11ff1c: 0x60f809  jalr        $v1
label_11ff20:
    if (ctx->pc == 0x11FF20u) {
        ctx->pc = 0x11FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF1Cu;
        // 0x11ff20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF24u;
        goto label_11ff24;
    }
    ctx->pc = 0x11FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FF24u);
        ctx->pc = 0x11FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF1Cu;
        // 0x11ff20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF1Cu, 0x11FF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FF24u;
label_11ff24:
    // 0x11ff24: 0x26639178  addiu       $v1, $s3, -0x6E88
    ctx->pc = 0x11ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939000));
label_11ff28:
    // 0x11ff28: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11ff2c:
    // 0x11ff2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11ff30:
    // 0x11ff30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11ff30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11ff34:
    // 0x11ff34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11ff34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11ff38:
    // 0x11ff38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ff38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11ff3c:
    // 0x11ff3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11ff3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11ff40:
    // 0x11ff40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ff44:
    // 0x11ff44: 0x3e00008  jr          $ra
label_11ff48:
    if (ctx->pc == 0x11FF48u) {
        ctx->pc = 0x11FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF44u;
        // 0x11ff48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF4Cu;
        goto label_11ff4c;
    }
    ctx->pc = 0x11FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF44u;
        // 0x11ff48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF4Cu;
label_11ff4c:
    // 0x11ff4c: 0x0  nop
    ctx->pc = 0x11ff4cu;
    // NOP
    ctx->pc = 0x11ff50u;
}
