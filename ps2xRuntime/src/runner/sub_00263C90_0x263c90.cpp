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

// Function: sub_00263C90
// Address: 0x263c90 - 0x263eb8
void sub_00263C90_0x263c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263C90_0x263c90");
#endif

    switch (ctx->pc) {
        case 0x263cb8u: goto label_263cb8;
        case 0x263cc8u: goto label_263cc8;
        case 0x263cdcu: goto label_263cdc;
        case 0x263ce4u: goto label_263ce4;
        case 0x263d00u: goto label_263d00;
        case 0x263d0cu: goto label_263d0c;
        case 0x263d14u: goto label_263d14;
        case 0x263d2cu: goto label_263d2c;
        case 0x263d68u: goto label_263d68;
        case 0x263d80u: goto label_263d80;
        case 0x263d90u: goto label_263d90;
        case 0x263da0u: goto label_263da0;
        case 0x263dd8u: goto label_263dd8;
        case 0x263de8u: goto label_263de8;
        case 0x263e24u: goto label_263e24;
        case 0x263e40u: goto label_263e40;
        case 0x263e54u: goto label_263e54;
        case 0x263e88u: goto label_263e88;
        case 0x263e94u: goto label_263e94;
        default: break;
    }

    ctx->pc = 0x263c90u;

    // 0x263c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263c94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x263c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x263c98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x263c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x263c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ca0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x263ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x263ca4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x263ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x263ca8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x263ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x263cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263cb0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x263CB0u;
    SET_GPR_U32(ctx, 31, 0x263CB8u);
    ctx->pc = 0x263CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CB0u;
    // 0x263cb4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x263CB0u, 0x263CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CB8u;
label_263cb8:
    // 0x263cb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263CB8u;
    {
        const bool branch_taken_0x263cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263cb8) {
            ctx->pc = 0x263CDCu;
            goto label_263cdc;
        }
    }
    ctx->pc = 0x263CC0u;
    // 0x263cc0: 0xc095018  jal         func_254060
    ctx->pc = 0x263CC0u;
    SET_GPR_U32(ctx, 31, 0x263CC8u);
    ctx->pc = 0x263CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CC0u;
    // 0x263cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x263CC0u, 0x263CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CC8u;
label_263cc8:
    // 0x263cc8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x263cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x263ccc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263CCCu;
    {
        const bool branch_taken_0x263ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263ccc) {
            ctx->pc = 0x263CDCu;
            goto label_263cdc;
        }
    }
    ctx->pc = 0x263CD4u;
    // 0x263cd4: 0xc094fca  jal         func_253F28
    ctx->pc = 0x263CD4u;
    SET_GPR_U32(ctx, 31, 0x263CDCu);
    ctx->pc = 0x263CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CD4u;
    // 0x263cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x263CD4u, 0x263CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CDCu;
label_263cdc:
    // 0x263cdc: 0xc089b98  jal         func_226E60
    ctx->pc = 0x263CDCu;
    SET_GPR_U32(ctx, 31, 0x263CE4u);
    ctx->pc = 0x263CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CDCu;
    // 0x263ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x263CDCu, 0x263CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CE4u;
label_263ce4:
    // 0x263ce4: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x263ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x263ce8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x263ce8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x263cec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x263CECu;
    {
        const bool branch_taken_0x263cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CECu;
        // 0x263cf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cec) {
            ctx->pc = 0x263D18u;
            goto label_263d18;
        }
    }
    ctx->pc = 0x263CF4u;
    // 0x263cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cf8: 0xc09e92c  jal         func_27A4B0
    ctx->pc = 0x263CF8u;
    SET_GPR_U32(ctx, 31, 0x263D00u);
    ctx->pc = 0x263CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CF8u;
    // 0x263cfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x263CF8u, 0x263D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D00u;
label_263d00:
    // 0x263d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d04: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x263D04u;
    SET_GPR_U32(ctx, 31, 0x263D0Cu);
    ctx->pc = 0x263D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D04u;
    // 0x263d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x263D04u, 0x263D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D0Cu;
label_263d0c:
    // 0x263d0c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x263D0Cu;
    SET_GPR_U32(ctx, 31, 0x263D14u);
    ctx->pc = 0x263D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D0Cu;
    // 0x263d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x263D0Cu, 0x263D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D14u;
label_263d14:
    // 0x263d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263d18:
    // 0x263d18: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263D18u;
    {
        const bool branch_taken_0x263d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D18u;
        // 0x263d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d18) {
            ctx->pc = 0x263D34u;
            goto label_263d34;
        }
    }
    ctx->pc = 0x263D20u;
    // 0x263d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x263d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d24: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x263D24u;
    SET_GPR_U32(ctx, 31, 0x263D2Cu);
    ctx->pc = 0x263D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D24u;
    // 0x263d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x263D24u, 0x263D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D2Cu;
label_263d2c:
    // 0x263d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263D2Cu;
    {
        const bool branch_taken_0x263d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D2Cu;
        // 0x263d30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d2c) {
            ctx->pc = 0x263D38u;
            goto label_263d38;
        }
    }
    ctx->pc = 0x263D34u;
label_263d34:
    // 0x263d34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x263d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263d38:
    // 0x263d38: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x263d38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x263d3c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x263d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x263d40: 0x24050285  addiu       $a1, $zero, 0x285
    ctx->pc = 0x263d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
    // 0x263d44: 0x2412028d  addiu       $s2, $zero, 0x28D
    ctx->pc = 0x263d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    // 0x263d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x263d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x263d4c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x263d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x263d50: 0xa3900b  movn        $s2, $a1, $v1
    ctx->pc = 0x263d50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x263d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d58: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263d5c: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x263d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x263d60: 0xc0406be  jal         func_101AF8
    ctx->pc = 0x263D60u;
    SET_GPR_U32(ctx, 31, 0x263D68u);
    ctx->pc = 0x263D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D60u;
    // 0x263d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AF8u, 0x263D60u, 0x263D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D68u;
label_263d68:
    // 0x263d68: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x263D68u;
    {
        const bool branch_taken_0x263d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d68) {
            ctx->pc = 0x263D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263D68u;
            // 0x263d6c: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E48u;
            goto label_263e48;
        }
    }
    ctx->pc = 0x263D70u;
    // 0x263d70: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x263D70u;
    {
        const bool branch_taken_0x263d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D70u;
        // 0x263d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d70) {
            ctx->pc = 0x263E94u;
            goto label_263e94;
        }
    }
    ctx->pc = 0x263D78u;
    // 0x263d78: 0xc089548  jal         func_225520
    ctx->pc = 0x263D78u;
    SET_GPR_U32(ctx, 31, 0x263D80u);
    ctx->pc = 0x263D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D78u;
    // 0x263d7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x263D78u, 0x263D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D80u;
label_263d80:
    // 0x263d80: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x263D80u;
    {
        const bool branch_taken_0x263d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D80u;
        // 0x263d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d80) {
            ctx->pc = 0x263E94u;
            goto label_263e94;
        }
    }
    ctx->pc = 0x263D88u;
    // 0x263d88: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x263D88u;
    SET_GPR_U32(ctx, 31, 0x263D90u);
    ctx->pc = 0x263D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D88u;
    // 0x263d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x263D88u, 0x263D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D90u;
label_263d90:
    // 0x263d90: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x263D90u;
    {
        const bool branch_taken_0x263d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D90u;
        // 0x263d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d90) {
            ctx->pc = 0x263E94u;
            goto label_263e94;
        }
    }
    ctx->pc = 0x263D98u;
    // 0x263d98: 0xc0406d6  jal         func_101B58
    ctx->pc = 0x263D98u;
    SET_GPR_U32(ctx, 31, 0x263DA0u);
    ctx->pc = 0x263D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D98u;
    // 0x263d9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B58u, 0x263D98u, 0x263DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DA0u;
label_263da0:
    // 0x263da0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x263DA0u;
    {
        const bool branch_taken_0x263da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DA0u;
        // 0x263da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263da0) {
            ctx->pc = 0x263DE0u;
            goto label_263de0;
        }
    }
    ctx->pc = 0x263DA8u;
    // 0x263da8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x263da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x263dac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x263dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x263db0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x263db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x263db4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x263db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x263db8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263dbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x263dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x263dc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x263dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x263dc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263DC4u;
    {
        const bool branch_taken_0x263dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DC4u;
        // 0x263dc8: 0x2533023  subu        $a2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dc4) {
            ctx->pc = 0x263DE0u;
            goto label_263de0;
        }
    }
    ctx->pc = 0x263DCCu;
    // 0x263dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dd0: 0xc09b152  jal         func_26C548
    ctx->pc = 0x263DD0u;
    SET_GPR_U32(ctx, 31, 0x263DD8u);
    ctx->pc = 0x263DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DD0u;
    // 0x263dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C548u, 0x263DD0u, 0x263DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DD8u;
label_263dd8:
    // 0x263dd8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x263DD8u;
    {
        const bool branch_taken_0x263dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DD8u;
        // 0x263ddc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dd8) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263DE0u;
label_263de0:
    // 0x263de0: 0xc0406ca  jal         func_101B28
    ctx->pc = 0x263DE0u;
    SET_GPR_U32(ctx, 31, 0x263DE8u);
    ctx->pc = 0x263DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DE0u;
    // 0x263de4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B28u, 0x263DE0u, 0x263DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DE8u;
label_263de8:
    // 0x263de8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x263DE8u;
    {
        const bool branch_taken_0x263de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DE8u;
        // 0x263dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263de8) {
            ctx->pc = 0x263E2Cu;
            goto label_263e2c;
        }
    }
    ctx->pc = 0x263DF0u;
    // 0x263df0: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x263df0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x263df4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x263df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x263df8: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x263df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x263dfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x263dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x263e00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263e04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x263e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x263e08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x263e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x263e0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263E0Cu;
    {
        const bool branch_taken_0x263e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E0Cu;
        // 0x263e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e0c) {
            ctx->pc = 0x263E30u;
            goto label_263e30;
        }
    }
    ctx->pc = 0x263E14u;
    // 0x263e14: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x263e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e1c: 0xc09c1ea  jal         func_2707A8
    ctx->pc = 0x263E1Cu;
    SET_GPR_U32(ctx, 31, 0x263E24u);
    ctx->pc = 0x263E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E1Cu;
    // 0x263e20: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2707A8u, 0x263E1Cu, 0x263E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E24u;
label_263e24:
    // 0x263e24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x263E24u;
    {
        const bool branch_taken_0x263e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E24u;
        // 0x263e28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e24) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263E2Cu;
label_263e2c:
    // 0x263e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263e30:
    // 0x263e30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263e38: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x263E38u;
    SET_GPR_U32(ctx, 31, 0x263E40u);
    ctx->pc = 0x263E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E38u;
    // 0x263e3c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x263E38u, 0x263E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E40u;
label_263e40:
    // 0x263e40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x263E40u;
    {
        const bool branch_taken_0x263e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E40u;
        // 0x263e44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e40) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263E48u;
label_263e48:
    // 0x263e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e4c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x263E4Cu;
    SET_GPR_U32(ctx, 31, 0x263E54u);
    ctx->pc = 0x263E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E4Cu;
    // 0x263e50: 0x84500148  lh          $s0, 0x148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x263E4Cu, 0x263E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E54u;
label_263e54:
    // 0x263e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263e58: 0x0  nop
    ctx->pc = 0x263e58u;
    // NOP
    // 0x263e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263e60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x263e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x263e64: 0xc44c0278  lwc1        $f12, 0x278($v0)
    ctx->pc = 0x263e64u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263e68: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x263e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x263e6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263e70: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x263e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x263e74: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x263e74u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263e78: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263E78u;
    {
        const bool branch_taken_0x263e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E78u;
        // 0x263e7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e78) {
            ctx->pc = 0x263E98u;
            goto label_263e98;
        }
    }
    ctx->pc = 0x263E80u;
    // 0x263e80: 0xc089912  jal         func_226448
    ctx->pc = 0x263E80u;
    SET_GPR_U32(ctx, 31, 0x263E88u);
    ctx->pc = 0x263E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E80u;
    // 0x263e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x263E80u, 0x263E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E88u;
label_263e88:
    // 0x263e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e8c: 0xc0988da  jal         func_262368
    ctx->pc = 0x263E8Cu;
    SET_GPR_U32(ctx, 31, 0x263E94u);
    ctx->pc = 0x263E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E8Cu;
    // 0x263e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262368u, 0x263E8Cu, 0x263E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E94u;
label_263e94:
    // 0x263e94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x263e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_263e98:
    // 0x263e98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x263e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263e9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x263e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263ea0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x263ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263ea4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x263ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263eac: 0x3e00008  jr          $ra
    ctx->pc = 0x263EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EACu;
        // 0x263eb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263EB4u;
    // 0x263eb4: 0x0  nop
    ctx->pc = 0x263eb4u;
    // NOP
    ctx->pc = 0x263eb8u;
}
