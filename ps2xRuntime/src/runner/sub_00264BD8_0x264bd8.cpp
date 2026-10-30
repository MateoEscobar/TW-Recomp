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

// Function: sub_00264BD8
// Address: 0x264bd8 - 0x264cf8
void sub_00264BD8_0x264bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264BD8_0x264bd8");
#endif

    switch (ctx->pc) {
        case 0x264c38u: goto label_264c38;
        case 0x264c40u: goto label_264c40;
        case 0x264c50u: goto label_264c50;
        case 0x264c64u: goto label_264c64;
        case 0x264ca4u: goto label_264ca4;
        case 0x264cd4u: goto label_264cd4;
        case 0x264cdcu: goto label_264cdc;
        default: break;
    }

    ctx->pc = 0x264bd8u;

    // 0x264bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264bdc: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x264BDCu;
    {
        const bool branch_taken_0x264bdc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x264BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BDCu;
        // 0x264be0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bdc) {
            ctx->pc = 0x264BE8u;
            goto label_264be8;
        }
    }
    ctx->pc = 0x264BE4u;
    // 0x264be4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_264be8:
    // 0x264be8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x264be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x264bec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bf4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x264bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x264bf8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x264bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264c00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x264c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x264c04: 0x8e1100d4  lw          $s1, 0xD4($s0)
    ctx->pc = 0x264c04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x264c08: 0x86220118  lh          $v0, 0x118($s1)
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x264c0c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x264C0Cu;
    {
        const bool branch_taken_0x264c0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x264c0c) {
            ctx->pc = 0x264C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264C0Cu;
            // 0x264c10: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C14u;
            goto label_264c14;
        }
    }
    ctx->pc = 0x264C14u;
label_264c14:
    // 0x264c14: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x264c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264c18: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x264C18u;
    {
        const bool branch_taken_0x264c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C18u;
        // 0x264c1c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c18) {
            ctx->pc = 0x264CDCu;
            goto label_264cdc;
        }
    }
    ctx->pc = 0x264C20u;
    // 0x264c20: 0xa6250118  sh          $a1, 0x118($s1)
    ctx->pc = 0x264c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x264c24: 0xa60505d2  sh          $a1, 0x5D2($s0)
    ctx->pc = 0x264c24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1490), (uint16_t)GPR_U32(ctx, 5));
    // 0x264c28: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x264C28u;
    {
        const bool branch_taken_0x264c28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C28u;
        // 0x264c2c: 0xa627011a  sh          $a3, 0x11A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 282), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c28) {
            ctx->pc = 0x264CC8u;
            goto label_264cc8;
        }
    }
    ctx->pc = 0x264C30u;
    // 0x264c30: 0xc0899d8  jal         func_226760
    ctx->pc = 0x264C30u;
    SET_GPR_U32(ctx, 31, 0x264C38u);
    ctx->pc = 0x264C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C30u;
    // 0x264c34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x264C30u, 0x264C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C38u;
label_264c38:
    // 0x264c38: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x264C38u;
    SET_GPR_U32(ctx, 31, 0x264C40u);
    ctx->pc = 0x264C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C38u;
    // 0x264c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x264C38u, 0x264C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C40u;
label_264c40:
    // 0x264c40: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x264C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C40u;
        // 0x264c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C58u;
            goto label_264c58;
        }
    }
    ctx->pc = 0x264C48u;
    // 0x264c48: 0xc0899fa  jal         func_2267E8
    ctx->pc = 0x264C48u;
    SET_GPR_U32(ctx, 31, 0x264C50u);
    ctx->pc = 0x264C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C48u;
    // 0x264c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267E8u, 0x264C48u, 0x264C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C50u;
label_264c50:
    // 0x264c50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x264C50u;
    {
        const bool branch_taken_0x264c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C50u;
        // 0x264c54: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c50) {
            ctx->pc = 0x264C68u;
            goto label_264c68;
        }
    }
    ctx->pc = 0x264C58u;
label_264c58:
    // 0x264c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c5c: 0xc0899fa  jal         func_2267E8
    ctx->pc = 0x264C5Cu;
    SET_GPR_U32(ctx, 31, 0x264C64u);
    ctx->pc = 0x264C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C5Cu;
    // 0x264c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267E8u, 0x264C5Cu, 0x264C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C64u;
label_264c64:
    // 0x264c64: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x264c64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_264c68:
    // 0x264c68: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x264c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x264c6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x264c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x264c70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264c74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x264c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264c78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x264C78u;
    {
        const bool branch_taken_0x264c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c78) {
            ctx->pc = 0x264C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264C78u;
            // 0x264c7c: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C90u;
            goto label_264c90;
        }
    }
    ctx->pc = 0x264C80u;
    // 0x264c80: 0x86220118  lh          $v0, 0x118($s1)
    ctx->pc = 0x264c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x264c84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x264c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x264c88: 0xa6220118  sh          $v0, 0x118($s1)
    ctx->pc = 0x264c88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x264c8c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x264c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_264c90:
    // 0x264c90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x264c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x264c94: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x264C94u;
    {
        const bool branch_taken_0x264c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C94u;
        // 0x264c98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c94) {
            ctx->pc = 0x264CE0u;
            goto label_264ce0;
        }
    }
    ctx->pc = 0x264C9Cu;
    // 0x264c9c: 0xc087502  jal         func_21D408
    ctx->pc = 0x264C9Cu;
    SET_GPR_U32(ctx, 31, 0x264CA4u);
    ctx->pc = 0x264CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C9Cu;
    // 0x264ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x264C9Cu, 0x264CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264CA4u;
label_264ca4:
    // 0x264ca4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x264ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264ca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x264ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264cac: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x264CACu;
    {
        const bool branch_taken_0x264cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CACu;
        // 0x264cb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cac) {
            ctx->pc = 0x264CE0u;
            goto label_264ce0;
        }
    }
    ctx->pc = 0x264CB4u;
    // 0x264cb4: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x264cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x264cb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x264cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x264cbc: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x264cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x264cc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264CC0u;
    {
        const bool branch_taken_0x264cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CC0u;
        // 0x264cc4: 0xa6220118  sh          $v0, 0x118($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cc0) {
            ctx->pc = 0x264CE0u;
            goto label_264ce0;
        }
    }
    ctx->pc = 0x264CC8u;
label_264cc8:
    // 0x264cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ccc: 0xc0899fa  jal         func_2267E8
    ctx->pc = 0x264CCCu;
    SET_GPR_U32(ctx, 31, 0x264CD4u);
    ctx->pc = 0x264CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264CCCu;
    // 0x264cd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267E8u, 0x264CCCu, 0x264CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264CD4u;
label_264cd4:
    // 0x264cd4: 0xc0899f2  jal         func_2267C8
    ctx->pc = 0x264CD4u;
    SET_GPR_U32(ctx, 31, 0x264CDCu);
    ctx->pc = 0x264CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264CD4u;
    // 0x264cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267C8u, 0x264CD4u, 0x264CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264CDCu;
label_264cdc:
    // 0x264cdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x264cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264ce0:
    // 0x264ce0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x264ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264ce8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x264ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x264CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CF0u;
        // 0x264cf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CF8u;
}
