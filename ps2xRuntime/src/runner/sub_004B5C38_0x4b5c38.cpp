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

// Function: sub_004B5C38
// Address: 0x4b5c38 - 0x4b60c8
void sub_004B5C38_0x4b5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5C38_0x4b5c38");
#endif

    switch (ctx->pc) {
        case 0x4b5c88u: goto label_4b5c88;
        case 0x4b5c94u: goto label_4b5c94;
        case 0x4b5ca4u: goto label_4b5ca4;
        case 0x4b5da4u: goto label_4b5da4;
        case 0x4b5decu: goto label_4b5dec;
        case 0x4b5ea8u: goto label_4b5ea8;
        case 0x4b5ec0u: goto label_4b5ec0;
        case 0x4b5f08u: goto label_4b5f08;
        case 0x4b5f18u: goto label_4b5f18;
        case 0x4b5f28u: goto label_4b5f28;
        case 0x4b5f34u: goto label_4b5f34;
        case 0x4b5f44u: goto label_4b5f44;
        case 0x4b5f50u: goto label_4b5f50;
        case 0x4b5f5cu: goto label_4b5f5c;
        case 0x4b5f6cu: goto label_4b5f6c;
        case 0x4b5f7cu: goto label_4b5f7c;
        case 0x4b5f88u: goto label_4b5f88;
        case 0x4b5fc0u: goto label_4b5fc0;
        default: break;
    }

    ctx->pc = 0x4b5c38u;

    // 0x4b5c38: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x4b5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x4b5c3c: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x4b5c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x4b5c40: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x4b5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x4b5c44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b5c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5c48: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x4b5c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x4b5c4c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4b5c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5c50: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x4b5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x4b5c54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b5c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5c58: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x4b5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x4b5c5c: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4b5c5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4b5c60: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x4b5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x4b5c64: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x4b5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x4b5c68: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x4b5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x4b5c6c: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x4b5c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x4b5c70: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x4b5c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x4b5c74: 0xafa50148  sw          $a1, 0x148($sp)
    ctx->pc = 0x4b5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 5));
    // 0x4b5c78: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x4b5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
    // 0x4b5c7c: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x4b5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x4b5c80: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B5C80u;
    SET_GPR_U32(ctx, 31, 0x4B5C88u);
    ctx->pc = 0x4B5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5C80u;
    // 0x4b5c84: 0xafa90154  sw          $t1, 0x154($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B5C80u, 0x4B5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5C88u;
label_4b5c88:
    // 0x4b5c88: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x4b5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x4b5c8c: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B5C8Cu;
    SET_GPR_U32(ctx, 31, 0x4B5C94u);
    ctx->pc = 0x4B5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5C8Cu;
    // 0x4b5c90: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B5C8Cu, 0x4B5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5C94u;
label_4b5c94:
    // 0x4b5c94: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x4b5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x4b5c98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b5c98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5c9c: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B5C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B5CA4u);
    ctx->pc = 0x4B5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5C9Cu;
    // 0x4b5ca0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B5C9Cu, 0x4B5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5CA4u;
label_4b5ca4:
    // 0x4b5ca4: 0x8ea52308  lw          $a1, 0x2308($s5)
    ctx->pc = 0x4b5ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
    // 0x4b5ca8: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x4b5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x4b5cac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B5CACu;
    {
        const bool branch_taken_0x4b5cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5CACu;
        // 0x4b5cb0: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5cac) {
            ctx->pc = 0x4B5CD0u;
            goto label_4b5cd0;
        }
    }
    ctx->pc = 0x4B5CB4u;
    // 0x4b5cb4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4b5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4b5cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5cbc: 0x8c4405bc  lw          $a0, 0x5BC($v0)
    ctx->pc = 0x4b5cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7105BCu));
    // 0x4b5cc0: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x4b5cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b5cc4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x4b5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b5cc8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x4b5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x4b5ccc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4b5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_4b5cd0:
    // 0x4b5cd0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b5cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5cd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5cd8: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B5CD8u;
    {
        const bool branch_taken_0x4b5cd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b5cd8) {
            ctx->pc = 0x4B5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5CD8u;
            // 0x4b5cdc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5D14u;
            goto label_4b5d14;
        }
    }
    ctx->pc = 0x4B5CE0u;
    // 0x4b5ce0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b5ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5ce4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4b5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4b5ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5cec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5cf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5cf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5cf8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b5cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5cfc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4b5cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4b5d00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b5d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b5d04: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b5d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b5d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5d0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b5d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b5d10: 0x83a025  or          $s4, $a0, $v1
    ctx->pc = 0x4b5d10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b5d14:
    // 0x4b5d14: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b5d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5d18: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4b5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4b5d1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5d20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b5d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5d24: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B5D24u;
    {
        const bool branch_taken_0x4b5d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D24u;
        // 0x4b5d28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d24) {
            ctx->pc = 0x4B5D9Cu;
            goto label_4b5d9c;
        }
    }
    ctx->pc = 0x4B5D2Cu;
    // 0x4b5d2c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x4b5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4b5d30: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x4b5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x4b5d34: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b5d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5d3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5d40: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B5D40u;
    {
        const bool branch_taken_0x4b5d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D40u;
        // 0x4b5d44: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d40) {
            ctx->pc = 0x4B5D80u;
            goto label_4b5d80;
        }
    }
    ctx->pc = 0x4B5D48u;
    // 0x4b5d48: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b5d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5d4c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b5d50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5d50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5d58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5d5c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B5D5Cu;
    {
        const bool branch_taken_0x4b5d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D5Cu;
        // 0x4b5d60: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d5c) {
            ctx->pc = 0x4B5D84u;
            goto label_4b5d84;
        }
    }
    ctx->pc = 0x4B5D64u;
    // 0x4b5d64: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b5d68: 0x24550d90  addiu       $s5, $v0, 0xD90
    ctx->pc = 0x4b5d68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
    // 0x4b5d6c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x4b5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4b5d70: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B5D70u;
    {
        const bool branch_taken_0x4b5d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D70u;
        // 0x4b5d74: 0x8fa30154  lw          $v1, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d70) {
            ctx->pc = 0x4B5DD4u;
            goto label_4b5dd4;
        }
    }
    ctx->pc = 0x4B5D78u;
    // 0x4b5d78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B5D78u;
    {
        const bool branch_taken_0x4b5d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D78u;
        // 0x4b5d7c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d78) {
            ctx->pc = 0x4B5DD0u;
            goto label_4b5dd0;
        }
    }
    ctx->pc = 0x4B5D80u;
label_4b5d80:
    // 0x4b5d80: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4b5d84:
    // 0x4b5d84: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x4b5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4b5d88: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B5D88u;
    {
        const bool branch_taken_0x4b5d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D88u;
        // 0x4b5d8c: 0x24550da0  addiu       $s5, $v0, 0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d88) {
            ctx->pc = 0x4B5DD4u;
            goto label_4b5dd4;
        }
    }
    ctx->pc = 0x4B5D90u;
    // 0x4b5d90: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x4b5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x4b5d94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B5D94u;
    {
        const bool branch_taken_0x4b5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5D94u;
        // 0x4b5d98: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5d94) {
            ctx->pc = 0x4B5DD4u;
            goto label_4b5dd4;
        }
    }
    ctx->pc = 0x4B5D9Cu;
label_4b5d9c:
    // 0x4b5d9c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B5D9Cu;
    SET_GPR_U32(ctx, 31, 0x4B5DA4u);
    ctx->pc = 0x4B5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5D9Cu;
    // 0x4b5da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B5D9Cu, 0x4B5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5DA4u;
label_4b5da4:
    // 0x4b5da4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B5DA4u;
    {
        const bool branch_taken_0x4b5da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5DA4u;
        // 0x4b5da8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5da4) {
            ctx->pc = 0x4B5DDCu;
            goto label_4b5ddc;
        }
    }
    ctx->pc = 0x4B5DACu;
    // 0x4b5dac: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x4b5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4b5db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5db4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b5db8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b5dbc: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x4b5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4b5dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5DC0u;
    {
        const bool branch_taken_0x4b5dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5DC0u;
        // 0x4b5dc4: 0x24750da8  addiu       $s5, $v1, 0xDA8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5dc0) {
            ctx->pc = 0x4B5DD4u;
            goto label_4b5dd4;
        }
    }
    ctx->pc = 0x4B5DC8u;
    // 0x4b5dc8: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x4b5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4b5dcc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x4b5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4b5dd0:
    // 0x4b5dd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4b5dd4:
    // 0x4b5dd4: 0x100003fc  b           . + 4 + (0x3FC << 2)
    ctx->pc = 0x4B5DD4u;
    {
        const bool branch_taken_0x4b5dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5DD4u;
        // 0x4b5dd8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5dd4) {
            ctx->pc = 0x4B6DC8u;
            return;
        }
    }
    ctx->pc = 0x4B5DDCu;
label_4b5ddc:
    // 0x4b5ddc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b5ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5de0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x4b5de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x4b5de4: 0xc12d222  jal         func_4B4888
    ctx->pc = 0x4B5DE4u;
    SET_GPR_U32(ctx, 31, 0x4B5DECu);
    ctx->pc = 0x4B5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5DE4u;
    // 0x4b5de8: 0x27a70144  addiu       $a3, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4888u, 0x4B5DE4u, 0x4B5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5DECu;
label_4b5dec:
    // 0x4b5dec: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b5decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5df0: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x4b5df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x4b5df4: 0x307307ff  andi        $s3, $v1, 0x7FF
    ctx->pc = 0x4b5df4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x4b5df8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B5DF8u;
    {
        const bool branch_taken_0x4b5df8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5DF8u;
        // 0x4b5dfc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5df8) {
            ctx->pc = 0x4B5E48u;
            goto label_4b5e48;
        }
    }
    ctx->pc = 0x4B5E00u;
    // 0x4b5e00: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b5e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e04: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b5e08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5e0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5e0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5e10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5e14: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x4b5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x4b5e18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b5e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b5e1c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b5e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e20: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5e24: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b5e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b5e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b5e2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b5e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b5e30: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x4b5e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x4b5e34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b5e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b5e38: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x4b5e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x4b5e3c: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x4b5e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
    // 0x4b5e40: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4B5E40u;
    {
        const bool branch_taken_0x4b5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5E40u;
        // 0x4b5e44: 0x8fb20144  lw          $s2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5e40) {
            ctx->pc = 0x4B5EF8u;
            goto label_4b5ef8;
        }
    }
    ctx->pc = 0x4B5E48u;
label_4b5e48:
    // 0x4b5e48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4b5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4b5e4c: 0x8fb20144  lw          $s2, 0x144($sp)
    ctx->pc = 0x4b5e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x4b5e50: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x4b5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b5e54: 0x24b30432  addiu       $s3, $a1, 0x432
    ctx->pc = 0x4b5e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1074));
    // 0x4b5e58: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x4b5e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x4b5e5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B5E5Cu;
    {
        const bool branch_taken_0x4b5e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5E5Cu;
        // 0x4b5e60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5e5c) {
            ctx->pc = 0x4B5E90u;
            goto label_4b5e90;
        }
    }
    ctx->pc = 0x4B5E64u;
    // 0x4b5e64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e68: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b5e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4b5e6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4b5e70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b5e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b5e74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5e74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5e78: 0x24a50412  addiu       $a1, $a1, 0x412
    ctx->pc = 0x4b5e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1042));
    // 0x4b5e7c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x4b5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4b5e80: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x4b5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b5e84: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x4b5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b5e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5E88u;
    {
        const bool branch_taken_0x4b5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5E88u;
        // 0x4b5e8c: 0x838025  or          $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5e88) {
            ctx->pc = 0x4B5EA0u;
            goto label_4b5ea0;
        }
    }
    ctx->pc = 0x4B5E90u;
label_4b5e90:
    // 0x4b5e90: 0x131823  negu        $v1, $s3
    ctx->pc = 0x4b5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4b5e94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5e98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5e9c: 0x628004  sllv        $s0, $v0, $v1
    ctx->pc = 0x4b5e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_4b5ea0:
    // 0x4b5ea0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B5EA0u;
    SET_GPR_U32(ctx, 31, 0x4B5EA8u);
    ctx->pc = 0x4B5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5EA0u;
    // 0x4b5ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B5EA0u, 0x4B5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5EA8u;
label_4b5ea8:
    // 0x4b5ea8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B5EA8u;
    {
        const bool branch_taken_0x4b5ea8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4B5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5EA8u;
        // 0x4b5eac: 0xffa20198  sd          $v0, 0x198($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5ea8) {
            ctx->pc = 0x4B5EC4u;
            goto label_4b5ec4;
        }
    }
    ctx->pc = 0x4B5EB0u;
    // 0x4b5eb0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x4b5eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x4b5eb4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b5eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b5eb8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B5EB8u;
    SET_GPR_U32(ctx, 31, 0x4B5EC0u);
    ctx->pc = 0x4B5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5EB8u;
    // 0x4b5ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B5EB8u, 0x4B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5EC0u;
label_4b5ec0:
    // 0x4b5ec0: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x4b5ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
label_4b5ec4:
    // 0x4b5ec4: 0xdfa30198  ld          $v1, 0x198($sp)
    ctx->pc = 0x4b5ec4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b5ec8: 0x3c05fe10  lui         $a1, 0xFE10
    ctx->pc = 0x4b5ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65040 << 16));
    // 0x4b5ecc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5ed0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b5ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b5ed4: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x4b5ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x4b5ed8: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x4b5ed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5edc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b5ee0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b5ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b5ee4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5eec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b5eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b5ef0: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x4b5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x4b5ef4: 0xffa30198  sd          $v1, 0x198($sp)
    ctx->pc = 0x4b5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 3));
label_4b5ef8:
    // 0x4b5ef8: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x4b5ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x4b5efc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b5efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b5f00: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B5F00u;
    SET_GPR_U32(ctx, 31, 0x4B5F08u);
    ctx->pc = 0x4B5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F00u;
    // 0x4b5f04: 0xdfa40198  ld          $a0, 0x198($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B5F00u, 0x4B5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F08u;
label_4b5f08:
    // 0x4b5f08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b5f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b5f0c: 0xdc250db0  ld          $a1, 0xDB0($at)
    ctx->pc = 0x4b5f0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590DB0u));
    // 0x4b5f10: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5F10u;
    SET_GPR_U32(ctx, 31, 0x4B5F18u);
    ctx->pc = 0x4B5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F10u;
    // 0x4b5f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5F10u, 0x4B5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F18u;
label_4b5f18:
    // 0x4b5f18: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b5f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b5f1c: 0xdc250db8  ld          $a1, 0xDB8($at)
    ctx->pc = 0x4b5f1cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590DB8u));
    // 0x4b5f20: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B5F20u;
    SET_GPR_U32(ctx, 31, 0x4B5F28u);
    ctx->pc = 0x4B5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F20u;
    // 0x4b5f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B5F20u, 0x4B5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F28u;
label_4b5f28:
    // 0x4b5f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b5f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f2c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B5F2Cu;
    SET_GPR_U32(ctx, 31, 0x4B5F34u);
    ctx->pc = 0x4B5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F2Cu;
    // 0x4b5f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B5F2Cu, 0x4B5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F34u;
label_4b5f34:
    // 0x4b5f34: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b5f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b5f38: 0xdc250dc0  ld          $a1, 0xDC0($at)
    ctx->pc = 0x4b5f38u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590DC0u));
    // 0x4b5f3c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5F3Cu;
    SET_GPR_U32(ctx, 31, 0x4B5F44u);
    ctx->pc = 0x4B5F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F3Cu;
    // 0x4b5f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5F3Cu, 0x4B5F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F44u;
label_4b5f44:
    // 0x4b5f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f48: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B5F48u;
    SET_GPR_U32(ctx, 31, 0x4B5F50u);
    ctx->pc = 0x4B5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F48u;
    // 0x4b5f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B5F48u, 0x4B5F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F50u;
label_4b5f50:
    // 0x4b5f50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b5f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f54: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B5F54u;
    SET_GPR_U32(ctx, 31, 0x4B5F5Cu);
    ctx->pc = 0x4B5F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F54u;
    // 0x4b5f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B5F54u, 0x4B5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F5Cu;
label_4b5f5c:
    // 0x4b5f5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4b5f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f64: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B5F64u;
    SET_GPR_U32(ctx, 31, 0x4B5F6Cu);
    ctx->pc = 0x4B5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F64u;
    // 0x4b5f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B5F64u, 0x4B5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F6Cu;
label_4b5f6c:
    // 0x4b5f6c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B5F6Cu;
    {
        const bool branch_taken_0x4b5f6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5F6Cu;
        // 0x4b5f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5f6c) {
            ctx->pc = 0x4B5F94u;
            goto label_4b5f94;
        }
    }
    ctx->pc = 0x4B5F74u;
    // 0x4b5f74: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B5F74u;
    SET_GPR_U32(ctx, 31, 0x4B5F7Cu);
    ctx->pc = 0x4B5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F74u;
    // 0x4b5f78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B5F74u, 0x4B5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F7Cu;
label_4b5f7c:
    // 0x4b5f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f80: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B5F80u;
    SET_GPR_U32(ctx, 31, 0x4B5F88u);
    ctx->pc = 0x4B5F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F80u;
    // 0x4b5f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B5F80u, 0x4B5F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F88u;
label_4b5f88:
    // 0x4b5f88: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x4b5f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4b5f8c: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x4b5f8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x4b5f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5f94:
    // 0x4b5f94: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x4b5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x4b5f98: 0x2ec20017  sltiu       $v0, $s6, 0x17
    ctx->pc = 0x4b5f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x4b5f9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B5F9Cu;
    {
        const bool branch_taken_0x4b5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5F9Cu;
        // 0x4b5fa0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5f9c) {
            ctx->pc = 0x4B5FD0u;
            goto label_4b5fd0;
        }
    }
    ctx->pc = 0x4B5FA4u;
    // 0x4b5fa4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x4b5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x4b5fa8: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b5fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5fb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5fb4: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x4b5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x4b5fb8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B5FB8u;
    SET_GPR_U32(ctx, 31, 0x4B5FC0u);
    ctx->pc = 0x4B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5FB8u;
    // 0x4b5fbc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B5FB8u, 0x4B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5FC0u;
label_4b5fc0:
    // 0x4b5fc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b5fc4: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x4b5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4b5fc8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4b5fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4b5fcc: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x4b5fccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_4b5fd0:
    // 0x4b5fd0: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x4b5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4b5fd4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x4b5fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b5fd8: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B5FD8u;
    {
        const bool branch_taken_0x4b5fd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5FD8u;
        // 0x4b5fdc: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5fd8) {
            ctx->pc = 0x4B5FE8u;
            goto label_4b5fe8;
        }
    }
    ctx->pc = 0x4B5FE0u;
    // 0x4b5fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5FE0u;
    {
        const bool branch_taken_0x4b5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5FE0u;
        // 0x4b5fe4: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5fe0) {
            ctx->pc = 0x4B5FF4u;
            goto label_4b5ff4;
        }
    }
    ctx->pc = 0x4B5FE8u;
label_4b5fe8:
    // 0x4b5fe8: 0x108023  negu        $s0, $s0
    ctx->pc = 0x4b5fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x4b5fec: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4b5fecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5ff0: 0xafb00158  sw          $s0, 0x158($sp)
    ctx->pc = 0x4b5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 16));
label_4b5ff4:
    // 0x4b5ff4: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5FF4u;
    {
        const bool branch_taken_0x4b5ff4 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x4B5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5FF4u;
        // 0x4b5ff8: 0x8fa30158  lw          $v1, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5ff4) {
            ctx->pc = 0x4B600Cu;
            goto label_4b600c;
        }
    }
    ctx->pc = 0x4B5FFCu;
    // 0x4b5ffc: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x4b5ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x4b6000: 0x3d6f021  addu        $fp, $fp, $s6
    ctx->pc = 0x4b6000u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x4b6004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6004u;
    {
        const bool branch_taken_0x4b6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6004u;
        // 0x4b6008: 0xafb60178  sw          $s6, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6004) {
            ctx->pc = 0x4B6020u;
            goto label_4b6020;
        }
    }
    ctx->pc = 0x4B600Cu;
label_4b600c:
    // 0x4b600c: 0x162023  negu        $a0, $s6
    ctx->pc = 0x4b600cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x4b6010: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x4b6010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x4b6014: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x4b6014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x4b6018: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x4b6018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x4b601c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x4b601cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_4b6020:
    // 0x4b6020: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x4b6020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4b6024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b6024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6028: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x4b6028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x4b602c: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x4b602cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b6030: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x4b6030u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4b6034: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x4b6034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x4b6038: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x4b6038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4b603c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B603Cu;
    {
        const bool branch_taken_0x4b603c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B603Cu;
        // 0x4b6040: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b603c) {
            ctx->pc = 0x4B6058u;
            goto label_4b6058;
        }
    }
    ctx->pc = 0x4B6044u;
    // 0x4b6044: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x4b6044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4b6048: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x4b6048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x4b604c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4b604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4b6050: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x4b6050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x4b6054: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x4b6054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_4b6058:
    // 0x4b6058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b605c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x4b605cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4b6060: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4B6060u;
    {
        const bool branch_taken_0x4b6060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6060u;
        // 0x4b6064: 0xafa30174  sw          $v1, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6060) {
            ctx->pc = 0x4B60E8u;
            return;
        }
    }
    ctx->pc = 0x4B6068u;
    // 0x4b6068: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b6068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b606c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4b606cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4b6070: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x4b6070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x4b6074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b6078: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b6078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b607c: 0x800008  jr          $a0
    ctx->pc = 0x4B607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B6084u: goto label_4b6084;
            case 0x4B60A0u: goto label_4b60a0;
            case 0x4B60A4u: goto label_4b60a4;
            case 0x4B60C4u: goto label_4b60c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B607Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B6084u;
label_4b6084:
    // 0x4b6084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b6084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b6088: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b608c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x4b608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x4b6090: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x4b6090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4b6094: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x4b6094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x4b6098: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B6098u;
    {
        const bool branch_taken_0x4b6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6098u;
        // 0x4b609c: 0xafa0014c  sw          $zero, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6098) {
            ctx->pc = 0x4B60E8u;
            return;
        }
    }
    ctx->pc = 0x4B60A0u;
label_4b60a0:
    // 0x4b60a0: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x4b60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_4b60a4:
    // 0x4b60a4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4b60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4b60a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4b60a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b60ac: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x4b60acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b60b0: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x4b60b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4b60b4: 0xafb3014c  sw          $s3, 0x14C($sp)
    ctx->pc = 0x4b60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 19));
    // 0x4b60b8: 0xafb30168  sw          $s3, 0x168($sp)
    ctx->pc = 0x4b60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 19));
    // 0x4b60bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B60BCu;
    {
        const bool branch_taken_0x4b60bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B60BCu;
        // 0x4b60c0: 0xafb30160  sw          $s3, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b60bc) {
            ctx->pc = 0x4B60E8u;
            return;
        }
    }
    ctx->pc = 0x4B60C4u;
label_4b60c4:
    // 0x4b60c4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x4b60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    ctx->pc = 0x4b60c8u;
}
