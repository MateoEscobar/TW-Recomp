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

// Function: sub_00290230
// Address: 0x290230 - 0x290328
void sub_00290230_0x290230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290230_0x290230");
#endif

    switch (ctx->pc) {
        case 0x2902d4u: goto label_2902d4;
        default: break;
    }

    ctx->pc = 0x290230u;

    // 0x290230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290234: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290238: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29023c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29023cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290240: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x290240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x290244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x290244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290248: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290248u;
    {
        const bool branch_taken_0x290248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x29024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290248u;
        // 0x29024c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290248) {
            ctx->pc = 0x290258u;
            goto label_290258;
        }
    }
    ctx->pc = 0x290250u;
    // 0x290250: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x290250u;
    {
        const bool branch_taken_0x290250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290250u;
        // 0x290254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290250) {
            ctx->pc = 0x29030Cu;
            goto label_29030c;
        }
    }
    ctx->pc = 0x290258u;
label_290258:
    // 0x290258: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x290258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29025c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290260: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290260u;
    {
        const bool branch_taken_0x290260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290260u;
        // 0x290264: 0x8e25020c  lw          $a1, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290260) {
            ctx->pc = 0x29028Cu;
            goto label_29028c;
        }
    }
    ctx->pc = 0x290268u;
    // 0x290268: 0x920202e5  lbu         $v0, 0x2E5($s0)
    ctx->pc = 0x290268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 741)));
    // 0x29026c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29026Cu;
    {
        const bool branch_taken_0x29026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29026Cu;
        // 0x290270: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29026c) {
            ctx->pc = 0x29028Cu;
            goto label_29028c;
        }
    }
    ctx->pc = 0x290274u;
    // 0x290274: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x290274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290278: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x29027c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29027cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290280: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x290280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x290284: 0x10440021  beq         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x290284u;
    {
        const bool branch_taken_0x290284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x290288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290284u;
        // 0x290288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290284) {
            ctx->pc = 0x29030Cu;
            goto label_29030c;
        }
    }
    ctx->pc = 0x29028Cu;
label_29028c:
    // 0x29028c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290290: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x290290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290294: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290294u;
    {
        const bool branch_taken_0x290294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290294) {
            ctx->pc = 0x290298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290294u;
            // 0x290298: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2902CCu;
            goto label_2902cc;
        }
    }
    ctx->pc = 0x29029Cu;
    // 0x29029c: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x29029cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
    // 0x2902a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2902A0u;
    {
        const bool branch_taken_0x2902a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902A0u;
        // 0x2902a4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902a0) {
            ctx->pc = 0x2902C8u;
            goto label_2902c8;
        }
    }
    ctx->pc = 0x2902A8u;
    // 0x2902a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2902a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2902ac: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2902acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2902b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2902b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2902b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2902b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2902b8: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2902B8u;
    {
        const bool branch_taken_0x2902b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2902b8) {
            ctx->pc = 0x2902BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902B8u;
            // 0x2902bc: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2902CCu;
            goto label_2902cc;
        }
    }
    ctx->pc = 0x2902C0u;
    // 0x2902c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2902C0u;
    {
        const bool branch_taken_0x2902c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902C0u;
        // 0x2902c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902c0) {
            ctx->pc = 0x29030Cu;
            goto label_29030c;
        }
    }
    ctx->pc = 0x2902C8u;
label_2902c8:
    // 0x2902c8: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_2902cc:
    // 0x2902cc: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x2902CCu;
    SET_GPR_U32(ctx, 31, 0x2902D4u);
    ctx->pc = 0x2902D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2902CCu;
    // 0x2902d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x2902CCu, 0x2902D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902D4u;
label_2902d4:
    // 0x2902d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2902D4u;
    {
        const bool branch_taken_0x2902d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902D4u;
        // 0x2902d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902d4) {
            ctx->pc = 0x29030Cu;
            goto label_29030c;
        }
    }
    ctx->pc = 0x2902DCu;
    // 0x2902dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2902e0: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2902e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2902e4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2902e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2902e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2902E8u;
    {
        const bool branch_taken_0x2902e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2902e8) {
            ctx->pc = 0x2902ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902E8u;
            // 0x2902ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290308u;
            goto label_290308;
        }
    }
    ctx->pc = 0x2902F0u;
    // 0x2902f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2902f4: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2902f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2902f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2902f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2902fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2902FCu;
    {
        const bool branch_taken_0x2902fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902FCu;
        // 0x290300: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902fc) {
            ctx->pc = 0x29030Cu;
            goto label_29030c;
        }
    }
    ctx->pc = 0x290304u;
    // 0x290304: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290308:
    // 0x290308: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x290308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29030c:
    // 0x29030c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29030cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290310: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290314: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x290314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29031c: 0x3e00008  jr          $ra
    ctx->pc = 0x29031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29031Cu;
        // 0x290320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290324u;
    // 0x290324: 0x0  nop
    ctx->pc = 0x290324u;
    // NOP
    ctx->pc = 0x290328u;
}
