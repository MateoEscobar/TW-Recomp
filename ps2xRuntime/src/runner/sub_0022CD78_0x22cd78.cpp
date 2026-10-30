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

// Function: sub_0022CD78
// Address: 0x22cd78 - 0x22ceb8
void sub_0022CD78_0x22cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CD78_0x22cd78");
#endif

    switch (ctx->pc) {
        case 0x22cd98u: goto label_22cd98;
        case 0x22cda4u: goto label_22cda4;
        case 0x22cdb0u: goto label_22cdb0;
        case 0x22cdbcu: goto label_22cdbc;
        case 0x22cdc8u: goto label_22cdc8;
        case 0x22cdd4u: goto label_22cdd4;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22ce5cu: goto label_22ce5c;
        case 0x22ce88u: goto label_22ce88;
        default: break;
    }

    ctx->pc = 0x22cd78u;

    // 0x22cd78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22cd7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22cd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22cd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22cd84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22cd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cd90: 0xc089988  jal         func_226620
    ctx->pc = 0x22CD90u;
    SET_GPR_U32(ctx, 31, 0x22CD98u);
    ctx->pc = 0x22CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD90u;
    // 0x22cd94: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CD90u, 0x22CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD98u;
label_22cd98:
    // 0x22cd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd9c: 0xc089988  jal         func_226620
    ctx->pc = 0x22CD9Cu;
    SET_GPR_U32(ctx, 31, 0x22CDA4u);
    ctx->pc = 0x22CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD9Cu;
    // 0x22cda0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CD9Cu, 0x22CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDA4u;
label_22cda4:
    // 0x22cda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cda8: 0xc089988  jal         func_226620
    ctx->pc = 0x22CDA8u;
    SET_GPR_U32(ctx, 31, 0x22CDB0u);
    ctx->pc = 0x22CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDA8u;
    // 0x22cdac: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CDA8u, 0x22CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDB0u;
label_22cdb0:
    // 0x22cdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdb4: 0xc089988  jal         func_226620
    ctx->pc = 0x22CDB4u;
    SET_GPR_U32(ctx, 31, 0x22CDBCu);
    ctx->pc = 0x22CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDB4u;
    // 0x22cdb8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CDB4u, 0x22CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDBCu;
label_22cdbc:
    // 0x22cdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdc0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22CDC0u;
    SET_GPR_U32(ctx, 31, 0x22CDC8u);
    ctx->pc = 0x22CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDC0u;
    // 0x22cdc4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CDC0u, 0x22CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDC8u;
label_22cdc8:
    // 0x22cdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdcc: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22CDCCu;
    SET_GPR_U32(ctx, 31, 0x22CDD4u);
    ctx->pc = 0x22CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDCCu;
    // 0x22cdd0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CDCCu, 0x22CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDD4u;
label_22cdd4:
    // 0x22cdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cddc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22cddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cde0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cde4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cde8: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x22CDE8u;
    SET_GPR_U32(ctx, 31, 0x22CDF0u);
    ctx->pc = 0x22CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDE8u;
    // 0x22cdec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x22CDE8u, 0x22CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDF0u;
label_22cdf0:
    // 0x22cdf0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22cdf4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x22cdf8: 0xa0400128  sb          $zero, 0x128($v0)
    ctx->pc = 0x22cdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cdfc: 0x8cc3b734  lw          $v1, -0x48CC($a2)
    ctx->pc = 0x22cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x22ce00: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ce04: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22ce08: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x22ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x22ce0c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ce10: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x22ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
    // 0x22ce14: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ce18: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x22ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x22ce1c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22ce20: 0xa0600128  sb          $zero, 0x128($v1)
    ctx->pc = 0x22ce20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ce24: 0x8cc4b734  lw          $a0, -0x48CC($a2)
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x22ce28: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22ce2c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x22ce30: 0xaca20130  sw          $v0, 0x130($a1)
    ctx->pc = 0x22ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
    // 0x22ce34: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22ce38: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x22ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
    // 0x22ce3c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x22ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22ce40: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x22ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x22ce44: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22ce44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22ce48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22ce48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22ce4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CE4Cu;
    {
        const bool branch_taken_0x22ce4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE4Cu;
        // 0x22ce50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce4c) {
            ctx->pc = 0x22CE70u;
            goto label_22ce70;
        }
    }
    ctx->pc = 0x22CE54u;
    // 0x22ce54: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x22CE54u;
    SET_GPR_U32(ctx, 31, 0x22CE5Cu);
    ctx->pc = 0x22CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE54u;
    // 0x22ce58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x22CE54u, 0x22CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE5Cu;
label_22ce5c:
    // 0x22ce5c: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x22ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ce60: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22ce64: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x22ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x22ce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ce6c: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x22ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
label_22ce70:
    // 0x22ce70: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x22ce74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22ce74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22ce78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CE78u;
    {
        const bool branch_taken_0x22ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE78u;
        // 0x22ce7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce78) {
            ctx->pc = 0x22CEA0u;
            goto label_22cea0;
        }
    }
    ctx->pc = 0x22CE80u;
    // 0x22ce80: 0xc0a14ea  jal         func_2853A8
    ctx->pc = 0x22CE80u;
    SET_GPR_U32(ctx, 31, 0x22CE88u);
    ctx->pc = 0x22CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE80u;
    // 0x22ce84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2853A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2853A8u, 0x22CE80u, 0x22CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE88u;
label_22ce88:
    // 0x22ce88: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ce8c: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x22ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22ce90: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x22ce94: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x22ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22ce98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22ce9c: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x22ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
label_22cea0:
    // 0x22cea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22cea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22cea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ceac: 0x3e00008  jr          $ra
    ctx->pc = 0x22CEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEACu;
        // 0x22ceb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CEB4u;
    // 0x22ceb4: 0x0  nop
    ctx->pc = 0x22ceb4u;
    // NOP
    ctx->pc = 0x22ceb8u;
}
