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

// Function: sub_00153118
// Address: 0x153118 - 0x153ab0
void sub_00153118_0x153118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153118_0x153118");
#endif

    switch (ctx->pc) {
        case 0x15317cu: goto label_15317c;
        case 0x15318cu: goto label_15318c;
        case 0x1531d8u: goto label_1531d8;
        case 0x1531e8u: goto label_1531e8;
        case 0x153298u: goto label_153298;
        case 0x153308u: goto label_153308;
        case 0x15334cu: goto label_15334c;
        case 0x153360u: goto label_153360;
        case 0x153374u: goto label_153374;
        case 0x153388u: goto label_153388;
        case 0x15339cu: goto label_15339c;
        case 0x1533b0u: goto label_1533b0;
        case 0x1533c4u: goto label_1533c4;
        case 0x1533d8u: goto label_1533d8;
        case 0x1533ecu: goto label_1533ec;
        case 0x153400u: goto label_153400;
        case 0x153414u: goto label_153414;
        case 0x1534e0u: goto label_1534e0;
        case 0x15354cu: goto label_15354c;
        case 0x153568u: goto label_153568;
        case 0x1535b8u: goto label_1535b8;
        case 0x1535e4u: goto label_1535e4;
        case 0x1535f8u: goto label_1535f8;
        case 0x15361cu: goto label_15361c;
        case 0x153640u: goto label_153640;
        case 0x153660u: goto label_153660;
        case 0x153680u: goto label_153680;
        case 0x153694u: goto label_153694;
        case 0x1536b8u: goto label_1536b8;
        case 0x1536d4u: goto label_1536d4;
        case 0x153708u: goto label_153708;
        case 0x153730u: goto label_153730;
        case 0x153754u: goto label_153754;
        case 0x1537b4u: goto label_1537b4;
        case 0x153930u: goto label_153930;
        default: break;
    }

    ctx->pc = 0x153118u;

label_153118:
    // 0x153118: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15311c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153120: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x153120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x153124: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x153128: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x153128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15312c: 0x8e23c5d8  lw          $v1, -0x3A28($s1)
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x153130: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153130u;
    {
        const bool branch_taken_0x153130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153130u;
        // 0x153134: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153130) {
            ctx->pc = 0x15314Cu;
            goto label_15314c;
        }
    }
    ctx->pc = 0x153138u;
    // 0x153138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15313c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15313Cu;
    {
        const bool branch_taken_0x15313c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x153140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15313Cu;
        // 0x153140: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15313c) {
            ctx->pc = 0x1531B4u;
            goto label_1531b4;
        }
    }
    ctx->pc = 0x153144u;
    // 0x153144: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x153144u;
    {
        const bool branch_taken_0x153144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153144u;
        // 0x153148: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153144) {
            ctx->pc = 0x1531F0u;
            goto label_1531f0;
        }
    }
    ctx->pc = 0x15314Cu;
label_15314c:
    // 0x15314c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x15314cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x153150: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x153154: 0x261046a4  addiu       $s0, $s0, 0x46A4
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18084));
    // 0x153158: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x15315c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x15315cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x153160: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153164: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x153164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153168: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15316c: 0x24a5d5c8  addiu       $a1, $a1, -0x2A38
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956488));
    // 0x153170: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x153170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x153174: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x153174u;
    SET_GPR_U32(ctx, 31, 0x15317Cu);
    ctx->pc = 0x153178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153174u;
    // 0x153178: 0x24c64650  addiu       $a2, $a2, 0x4650 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x153174u, 0x15317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15317Cu;
label_15317c:
    // 0x15317c: 0x8e05ffc8  lw          $a1, -0x38($s0)
    ctx->pc = 0x15317cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x153180: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x153180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153184: 0xc111734  jal         func_445CD0
    ctx->pc = 0x153184u;
    SET_GPR_U32(ctx, 31, 0x15318Cu);
    ctx->pc = 0x153188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153184u;
    // 0x153188: 0x8e04ffc4  lw          $a0, -0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445CD0u, 0x153184u, 0x15318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15318Cu;
label_15318c:
    // 0x15318c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15318cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153190: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153190u;
    {
        const bool branch_taken_0x153190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153190u;
        // 0x153194: 0x8e22c5d8  lw          $v0, -0x3A28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153190) {
            ctx->pc = 0x1531A8u;
            goto label_1531a8;
        }
    }
    ctx->pc = 0x153198u;
    // 0x153198: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x153198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15319c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1531A0u;
    {
        const bool branch_taken_0x1531a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A0u;
        // 0x1531a4: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531a0) {
            ctx->pc = 0x1531D0u;
            goto label_1531d0;
        }
    }
    ctx->pc = 0x1531A8u;
label_1531a8:
    // 0x1531a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1531a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1531ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1531ACu;
    {
        const bool branch_taken_0x1531ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ACu;
        // 0x1531b0: 0xae22c5d8  sw          $v0, -0x3A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ac) {
            ctx->pc = 0x1531E8u;
            goto label_1531e8;
        }
    }
    ctx->pc = 0x1531B4u;
label_1531b4:
    // 0x1531b4: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1531B4u;
    {
        const bool branch_taken_0x1531b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1531B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531B4u;
        // 0x1531b8: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531b4) {
            ctx->pc = 0x1531F0u;
            goto label_1531f0;
        }
    }
    ctx->pc = 0x1531BCu;
    // 0x1531bc: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1531BCu;
    {
        const bool branch_taken_0x1531bc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1531bc) {
            ctx->pc = 0x1531C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1531BCu;
            // 0x1531c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531C4u;
    // 0x1531c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1531c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1531c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531cc: 0xac44c5ec  sw          $a0, -0x3A14($v0)
    ctx->pc = 0x1531ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
label_1531d0:
    // 0x1531d0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1531D0u;
    SET_GPR_U32(ctx, 31, 0x1531D8u);
    ctx->pc = 0x1531D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531D0u;
    // 0x1531d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1531D0u, 0x1531D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531D8u;
label_1531d8:
    // 0x1531d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1531D8u;
    {
        const bool branch_taken_0x1531d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531D8u;
        // 0x1531dc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531d8) {
            ctx->pc = 0x1531ECu;
            goto label_1531ec;
        }
    }
    ctx->pc = 0x1531E0u;
label_1531e0:
    // 0x1531e0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1531E0u;
    SET_GPR_U32(ctx, 31, 0x1531E8u);
    ctx->pc = 0x1531E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531E0u;
    // 0x1531e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1531E0u, 0x1531E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531E8u;
label_1531e8:
    // 0x1531e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1531e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1531ec:
    // 0x1531ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1531ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1531f0:
    // 0x1531f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1531f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1531f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1531F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531F4u;
        // 0x1531f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1531F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x0  nop
    ctx->pc = 0x1531fcu;
    // NOP
    // 0x153200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153204: 0x0  nop
    ctx->pc = 0x153204u;
    // NOP
    // 0x153208: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15320c: 0x0  nop
    ctx->pc = 0x15320cu;
    // NOP
    // 0x153210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153214: 0x0  nop
    ctx->pc = 0x153214u;
    // NOP
    // 0x153218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15321c: 0x0  nop
    ctx->pc = 0x15321cu;
    // NOP
    // 0x153220: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153224: 0x0  nop
    ctx->pc = 0x153224u;
    // NOP
    // 0x153228: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15322c: 0x0  nop
    ctx->pc = 0x15322cu;
    // NOP
    // 0x153230: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x153234: 0x0  nop
    ctx->pc = 0x153234u;
    // NOP
    // 0x153238: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15323c: 0x0  nop
    ctx->pc = 0x15323cu;
    // NOP
    // 0x153240: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x153244: 0x0  nop
    ctx->pc = 0x153244u;
    // NOP
    // 0x153248: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15324c: 0x0  nop
    ctx->pc = 0x15324cu;
    // NOP
    // 0x153250: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x153250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153254: 0x0  nop
    ctx->pc = 0x153254u;
    // NOP
    // 0x153258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15325c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153260: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x153260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x153264: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x153268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15326c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153270: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153274: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x153274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153278: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x153278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15327c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x153280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153284: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x153284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x153288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15328c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x153290: 0xc111590  jal         func_445640
    ctx->pc = 0x153290u;
    SET_GPR_U32(ctx, 31, 0x153298u);
    ctx->pc = 0x153294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153290u;
    // 0x153294: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x153290u, 0x153298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153298u;
label_153298:
    // 0x153298: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15329c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532a0: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1532A0u;
    {
        const bool branch_taken_0x1532a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1532A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532A0u;
        // 0x1532a4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532a0) {
            ctx->pc = 0x1532B8u;
            goto label_1532b8;
        }
    }
    ctx->pc = 0x1532A8u;
    // 0x1532a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1532ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1532b0: 0xac43c5ec  sw          $v1, -0x3A14($v0)
    ctx->pc = 0x1532b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x1532b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1532b8:
    // 0x1532b8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1532b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532bc: 0x8c63c5cc  lw          $v1, -0x3A34($v1)
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952396)));
    // 0x1532c0: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1532c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1532c4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1532C4u;
    {
        const bool branch_taken_0x1532c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532C4u;
        // 0x1532c8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532c4) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1532CCu;
    // 0x1532cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1532ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1532d0: 0x2442d610  addiu       $v0, $v0, -0x29F0
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x1532d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1532d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1532d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1532dc: 0x800008  jr          $a0
    ctx->pc = 0x1532DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1532E4u: goto label_1532e4;
            case 0x153320u: goto label_153320;
            case 0x153354u: goto label_153354;
            case 0x153368u: goto label_153368;
            case 0x15337Cu: goto label_15337c;
            case 0x153390u: goto label_153390;
            case 0x1533A4u: goto label_1533a4;
            case 0x1533B8u: goto label_1533b8;
            case 0x1533CCu: goto label_1533cc;
            case 0x1533E0u: goto label_1533e0;
            case 0x1533F4u: goto label_1533f4;
            case 0x153408u: goto label_153408;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1532DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1532E4u;
label_1532e4:
    // 0x1532e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1532e8: 0x14c2004a  bne         $a2, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1532E8u;
    {
        const bool branch_taken_0x1532e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1532ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532E8u;
        // 0x1532ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532e8) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1532F0u;
    // 0x1532f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1532f4: 0x8c43c5e0  lw          $v1, -0x3A20($v0)
    ctx->pc = 0x1532f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952416)));
    // 0x1532f8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1532F8u;
    {
        const bool branch_taken_0x1532f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F8u;
        // 0x1532fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f8) {
            ctx->pc = 0x153310u;
            goto label_153310;
        }
    }
    ctx->pc = 0x153300u;
    // 0x153300: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x153300u;
    SET_GPR_U32(ctx, 31, 0x153308u);
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x153300u, 0x153308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153308u;
label_153308:
    // 0x153308: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x153308u;
    {
        const bool branch_taken_0x153308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153308u;
        // 0x15330c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153308) {
            ctx->pc = 0x15343Cu;
            goto label_15343c;
        }
    }
    ctx->pc = 0x153310u;
label_153310:
    // 0x153310: 0x8c43c5d4  lw          $v1, -0x3A2C($v0)
    ctx->pc = 0x153310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952404)));
    // 0x153314: 0xac46c5d4  sw          $a2, -0x3A2C($v0)
    ctx->pc = 0x153314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952404), GPR_U32(ctx, 6));
    // 0x153318: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x153318u;
    {
        const bool branch_taken_0x153318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153318u;
        // 0x15331c: 0xae63c5cc  sw          $v1, -0x3A34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153318) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153320u;
label_153320:
    // 0x153320: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x153320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x153324: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x153324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153328: 0x8c43c5d4  lw          $v1, -0x3A2C($v0)
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D4u));
    // 0x15332c: 0x14640039  bne         $v1, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15332Cu;
    {
        const bool branch_taken_0x15332c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x153330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15332Cu;
        // 0x153330: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15332c) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153334u;
    // 0x153334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153338: 0x24c6c5e0  addiu       $a2, $a2, -0x3A20
    ctx->pc = 0x153338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952416));
    // 0x15333c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15333cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153340: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x153344: 0xc1115d8  jal         func_445760
    ctx->pc = 0x153344u;
    SET_GPR_U32(ctx, 31, 0x15334Cu);
    ctx->pc = 0x153348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153344u;
    // 0x153348: 0x24c80008  addiu       $t0, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445760u, 0x153344u, 0x15334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15334Cu;
label_15334c:
    // 0x15334c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x15334Cu;
    {
        const bool branch_taken_0x15334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15334c) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153354u;
label_153354:
    // 0x153354: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x153358: 0xc054882  jal         func_152208
    ctx->pc = 0x153358u;
    SET_GPR_U32(ctx, 31, 0x153360u);
    ctx->pc = 0x15335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153358u;
    // 0x15335c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152208u, 0x153358u, 0x153360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153360u;
label_153360:
    // 0x153360: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x153360u;
    {
        const bool branch_taken_0x153360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153360) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153368u;
label_153368:
    // 0x153368: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x153368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15336c: 0xc0548ae  jal         func_1522B8
    ctx->pc = 0x15336Cu;
    SET_GPR_U32(ctx, 31, 0x153374u);
    ctx->pc = 0x153370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15336Cu;
    // 0x153370: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522B8u, 0x15336Cu, 0x153374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153374u;
label_153374:
    // 0x153374: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x153374u;
    {
        const bool branch_taken_0x153374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153374) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x15337Cu;
label_15337c:
    // 0x15337c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x15337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x153380: 0xc0548f6  jal         func_1523D8
    ctx->pc = 0x153380u;
    SET_GPR_U32(ctx, 31, 0x153388u);
    ctx->pc = 0x153384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153380u;
    // 0x153384: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1523D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523D8u, 0x153380u, 0x153388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153388u;
label_153388:
    // 0x153388: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x153388u;
    {
        const bool branch_taken_0x153388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153388) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153390u;
label_153390:
    // 0x153390: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x153394: 0xc054932  jal         func_1524C8
    ctx->pc = 0x153394u;
    SET_GPR_U32(ctx, 31, 0x15339Cu);
    ctx->pc = 0x153398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153394u;
    // 0x153398: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1524C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1524C8u, 0x153394u, 0x15339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15339Cu;
label_15339c:
    // 0x15339c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15339Cu;
    {
        const bool branch_taken_0x15339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15339c) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1533A4u;
label_1533a4:
    // 0x1533a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1533a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1533a8: 0xc0549d0  jal         func_152740
    ctx->pc = 0x1533A8u;
    SET_GPR_U32(ctx, 31, 0x1533B0u);
    ctx->pc = 0x1533ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533A8u;
    // 0x1533ac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152740u, 0x1533A8u, 0x1533B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533B0u;
label_1533b0:
    // 0x1533b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1533B0u;
    {
        const bool branch_taken_0x1533b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533b0) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1533B8u;
label_1533b8:
    // 0x1533b8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1533b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1533bc: 0xc054970  jal         func_1525C0
    ctx->pc = 0x1533BCu;
    SET_GPR_U32(ctx, 31, 0x1533C4u);
    ctx->pc = 0x1533C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533BCu;
    // 0x1533c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1525C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1525C0u, 0x1533BCu, 0x1533C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533C4u;
label_1533c4:
    // 0x1533c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1533C4u;
    {
        const bool branch_taken_0x1533c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533c4) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1533CCu;
label_1533cc:
    // 0x1533cc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1533ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1533d0: 0xc054a68  jal         func_1529A0
    ctx->pc = 0x1533D0u;
    SET_GPR_U32(ctx, 31, 0x1533D8u);
    ctx->pc = 0x1533D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533D0u;
    // 0x1533d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1529A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1529A0u, 0x1533D0u, 0x1533D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533D8u;
label_1533d8:
    // 0x1533d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1533D8u;
    {
        const bool branch_taken_0x1533d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533d8) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1533E0u;
label_1533e0:
    // 0x1533e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1533e4: 0xc054c46  jal         func_153118
    ctx->pc = 0x1533E4u;
    SET_GPR_U32(ctx, 31, 0x1533ECu);
    ctx->pc = 0x1533E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533E4u;
    // 0x1533e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153118u;
    goto label_153118;
    ctx->pc = 0x1533ECu;
label_1533ec:
    // 0x1533ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1533ECu;
    {
        const bool branch_taken_0x1533ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533ec) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x1533F4u;
label_1533f4:
    // 0x1533f4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1533f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1533f8: 0xc054bde  jal         func_152F78
    ctx->pc = 0x1533F8u;
    SET_GPR_U32(ctx, 31, 0x153400u);
    ctx->pc = 0x1533FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533F8u;
    // 0x1533fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F78u, 0x1533F8u, 0x153400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153400u;
label_153400:
    // 0x153400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x153400u;
    {
        const bool branch_taken_0x153400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153400) {
            ctx->pc = 0x153414u;
            goto label_153414;
        }
    }
    ctx->pc = 0x153408u;
label_153408:
    // 0x153408: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15340c: 0xc054afc  jal         func_152BF0
    ctx->pc = 0x15340Cu;
    SET_GPR_U32(ctx, 31, 0x153414u);
    ctx->pc = 0x153410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15340Cu;
    // 0x153410: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152BF0u, 0x15340Cu, 0x153414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153414u;
label_153414:
    // 0x153414: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x153414u;
    {
        const bool branch_taken_0x153414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x153418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153414u;
        // 0x153418: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153414) {
            ctx->pc = 0x153438u;
            goto label_153438;
        }
    }
    ctx->pc = 0x15341Cu;
    // 0x15341c: 0x2446c5e0  addiu       $a2, $v0, -0x3A20
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x153420: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x153420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x153424: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x153424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x153428: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x153428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15342c: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x15342cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153430: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x153430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153434: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x153434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_153438:
    // 0x153438: 0x8e62c5cc  lw          $v0, -0x3A34($s3)
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952396)));
label_15343c:
    // 0x15343c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153440: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x153440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153448: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x153448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15344c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153450: 0x3e00008  jr          $ra
    ctx->pc = 0x153450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153450u;
        // 0x153454: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153458u;
    // 0x153458: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15345c: 0x0  nop
    ctx->pc = 0x15345cu;
    // NOP
    // 0x153460: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x153464: 0x0  nop
    ctx->pc = 0x153464u;
    // NOP
    // 0x153468: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15346c: 0x0  nop
    ctx->pc = 0x15346cu;
    // NOP
    // 0x153470: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153474: 0x0  nop
    ctx->pc = 0x153474u;
    // NOP
    // 0x153478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15347c: 0x0  nop
    ctx->pc = 0x15347cu;
    // NOP
    // 0x153480: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153484: 0x0  nop
    ctx->pc = 0x153484u;
    // NOP
    // 0x153488: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15348c: 0x0  nop
    ctx->pc = 0x15348cu;
    // NOP
    // 0x153490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x153494: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x153494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x153498: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x153498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15349c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15349cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1534a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1534a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1534a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1534a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1534a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534ac: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1534acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1534b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1534b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534b4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1534b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1534b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1534b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1534bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1534c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1534c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1534c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1534c8: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x1534c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1534cc: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1534d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1534d4: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x1534d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1534d8: 0xc1134ba  jal         func_44D2E8
    ctx->pc = 0x1534D8u;
    SET_GPR_U32(ctx, 31, 0x1534E0u);
    ctx->pc = 0x1534DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534D8u;
    // 0x1534dc: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D2E8u, 0x1534D8u, 0x1534E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534E0u;
label_1534e0:
    // 0x1534e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1534e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1534E4u;
    {
        const bool branch_taken_0x1534e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534E4u;
        // 0x1534e8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534e4) {
            ctx->pc = 0x1534F4u;
            goto label_1534f4;
        }
    }
    ctx->pc = 0x1534ECu;
    // 0x1534ec: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1534ECu;
    {
        const bool branch_taken_0x1534ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1534ec) {
            ctx->pc = 0x1534F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534ECu;
            // 0x1534f0: 0x8e030124  lw          $v1, 0x124($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153500u;
            goto label_153500;
        }
    }
    ctx->pc = 0x1534F4u;
label_1534f4:
    // 0x1534f4: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1534f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1534f8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1534f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1534fc: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_153500:
    // 0x153500: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x153500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
    // 0x153504: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x153504u;
    {
        const bool branch_taken_0x153504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153504u;
        // 0x153508: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153504) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x15350Cu;
    // 0x15350c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x153510: 0x2442d780  addiu       $v0, $v0, -0x2880
    ctx->pc = 0x153510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956928));
    // 0x153514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153518: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x153518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15351c: 0x800008  jr          $a0
    ctx->pc = 0x15351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153524u: goto label_153524;
            case 0x1535A4u: goto label_1535a4;
            case 0x1535D0u: goto label_1535d0;
            case 0x1535ECu: goto label_1535ec;
            case 0x15362Cu: goto label_15362c;
            case 0x153688u: goto label_153688;
            case 0x1536C8u: goto label_1536c8;
            case 0x1536FCu: goto label_1536fc;
            case 0x153724u: goto label_153724;
            case 0x15376Cu: goto label_15376c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15351Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x153524u;
label_153524:
    // 0x153524: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153528: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x15352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153528u;
        // 0x15352c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153528) {
            ctx->pc = 0x153538u;
            goto label_153538;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x1642008f  bne         $s2, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x153530u;
    {
        const bool branch_taken_0x153530 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x153534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153530u;
        // 0x153534: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153530) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x153538u;
label_153538:
    // 0x153538: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x15353c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15353cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153540: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x153540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x153544: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x153544u;
    SET_GPR_U32(ctx, 31, 0x15354Cu);
    ctx->pc = 0x153548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153544u;
    // 0x153548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x153544u, 0x15354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15354Cu;
label_15354c:
    // 0x15354c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15354cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153550: 0x12200086  beqz        $s1, . + 4 + (0x86 << 2)
    ctx->pc = 0x153550u;
    {
        const bool branch_taken_0x153550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x153554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153550u;
        // 0x153554: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153550) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x153558u;
    // 0x153558: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x15355c: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x153560: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x153560u;
    SET_GPR_U32(ctx, 31, 0x153568u);
    ctx->pc = 0x153564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153560u;
    // 0x153564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x153560u, 0x153568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153568u;
label_153568:
    // 0x153568: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x153568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x15356c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153570: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x153570u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x153574: 0x12240005  beq         $s1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153574u;
    {
        const bool branch_taken_0x153574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x153578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153574u;
        // 0x153578: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153574) {
            ctx->pc = 0x15358Cu;
            goto label_15358c;
        }
    }
    ctx->pc = 0x15357Cu;
    // 0x15357c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15357Cu;
    {
        const bool branch_taken_0x15357c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x153580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15357Cu;
        // 0x153580: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15357c) {
            ctx->pc = 0x153598u;
            goto label_153598;
        }
    }
    ctx->pc = 0x153584u;
    // 0x153584: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x153584u;
    {
        const bool branch_taken_0x153584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153584u;
        // 0x153588: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153584) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x15358Cu;
label_15358c:
    // 0x15358c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x15358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x153590: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x153590u;
    {
        const bool branch_taken_0x153590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153590u;
        // 0x153594: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153590) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x153598u;
label_153598:
    // 0x153598: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x15359c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x15359Cu;
    {
        const bool branch_taken_0x15359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15359Cu;
        // 0x1535a0: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15359c) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x1535A4u;
label_1535a4:
    // 0x1535a4: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1535a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1535a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1535ac: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x1535acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1535b0: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x1535B0u;
    SET_GPR_U32(ctx, 31, 0x1535B8u);
    ctx->pc = 0x1535B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535B0u;
    // 0x1535b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x1535B0u, 0x1535B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535B8u;
label_1535b8:
    // 0x1535b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x1535BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535B8u;
            // 0x1535bc: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535C8u;
            goto label_1535c8;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1535C0u;
    {
        const bool branch_taken_0x1535c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535C0u;
        // 0x1535c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535c0) {
            ctx->pc = 0x1536ECu;
            goto label_1536ec;
        }
    }
    ctx->pc = 0x1535C8u;
label_1535c8:
    // 0x1535c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1535cc: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1535ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_1535d0:
    // 0x1535d0: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1535d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1535d8: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x1535d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1535dc: 0xc1135c6  jal         func_44D718
    ctx->pc = 0x1535DCu;
    SET_GPR_U32(ctx, 31, 0x1535E4u);
    ctx->pc = 0x1535E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535DCu;
    // 0x1535e0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D718u, 0x1535DCu, 0x1535E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535E4u;
label_1535e4:
    // 0x1535e4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1535E4u;
    {
        const bool branch_taken_0x1535e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535E4u;
        // 0x1535e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535e4) {
            ctx->pc = 0x15370Cu;
            goto label_15370c;
        }
    }
    ctx->pc = 0x1535ECu;
label_1535ec:
    // 0x1535ec: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1535ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1535f0: 0xc113518  jal         func_44D460
    ctx->pc = 0x1535F0u;
    SET_GPR_U32(ctx, 31, 0x1535F8u);
    ctx->pc = 0x1535F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535F0u;
    // 0x1535f4: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x1535F0u, 0x1535F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535F8u;
label_1535f8:
    // 0x1535f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1535fc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1535FCu;
    {
        const bool branch_taken_0x1535fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1535fc) {
            ctx->pc = 0x153600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535FCu;
            // 0x153600: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153614u;
            goto label_153614;
        }
    }
    ctx->pc = 0x153604u;
    // 0x153604: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x153604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x153608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15360c: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x15360cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x153610: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_153614:
    // 0x153614: 0xc113518  jal         func_44D460
    ctx->pc = 0x153614u;
    SET_GPR_U32(ctx, 31, 0x15361Cu);
    ctx->pc = 0x153618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153614u;
    // 0x153618: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x153614u, 0x15361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15361Cu;
label_15361c:
    // 0x15361c: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x15361Cu;
    {
        const bool branch_taken_0x15361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15361c) {
            ctx->pc = 0x153620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15361Cu;
            // 0x153620: 0xae000124  sw          $zero, 0x124($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x153624u;
    // 0x153624: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x153624u;
    {
        const bool branch_taken_0x153624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153624) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x15362Cu;
label_15362c:
    // 0x15362c: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x153630: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x153630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153634: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x153634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x153638: 0xc11352e  jal         func_44D4B8
    ctx->pc = 0x153638u;
    SET_GPR_U32(ctx, 31, 0x153640u);
    ctx->pc = 0x15363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153638u;
    // 0x15363c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D4B8u, 0x153638u, 0x153640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153640u;
label_153640:
    // 0x153640: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153640u;
    {
        const bool branch_taken_0x153640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153640) {
            ctx->pc = 0x153644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153640u;
            // 0x153644: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153654u;
            goto label_153654;
        }
    }
    ctx->pc = 0x153648u;
    // 0x153648: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x153648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x15364c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x15364Cu;
    {
        const bool branch_taken_0x15364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15364Cu;
        // 0x153650: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15364c) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x153654u;
label_153654:
    // 0x153654: 0x2606017e  addiu       $a2, $s0, 0x17E
    ctx->pc = 0x153654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 382));
    // 0x153658: 0xc113624  jal         func_44D890
    ctx->pc = 0x153658u;
    SET_GPR_U32(ctx, 31, 0x153660u);
    ctx->pc = 0x15365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153658u;
    // 0x15365c: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D890u, 0x153658u, 0x153660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153660u;
label_153660:
    // 0x153660: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x153660u;
    {
        const bool branch_taken_0x153660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153660u;
        // 0x153664: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153660) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x153668u;
    // 0x153668: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x15366c: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x15366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x153670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x153674: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x153678: 0xc113518  jal         func_44D460
    ctx->pc = 0x153678u;
    SET_GPR_U32(ctx, 31, 0x153680u);
    ctx->pc = 0x15367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153678u;
    // 0x15367c: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x153678u, 0x153680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153680u;
label_153680:
    // 0x153680: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x153680u;
    {
        const bool branch_taken_0x153680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153680u;
        // 0x153684: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153680) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x153688u;
label_153688:
    // 0x153688: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x15368c: 0xc113518  jal         func_44D460
    ctx->pc = 0x15368Cu;
    SET_GPR_U32(ctx, 31, 0x153694u);
    ctx->pc = 0x153690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15368Cu;
    // 0x153690: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x15368Cu, 0x153694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153694u;
label_153694:
    // 0x153694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153698: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153698u;
    {
        const bool branch_taken_0x153698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x153698) {
            ctx->pc = 0x15369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153698u;
            // 0x15369c: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1536B0u;
            goto label_1536b0;
        }
    }
    ctx->pc = 0x1536A0u;
    // 0x1536a0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1536a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1536a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1536a8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1536a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1536ac: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1536acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1536b0:
    // 0x1536b0: 0xc113518  jal         func_44D460
    ctx->pc = 0x1536B0u;
    SET_GPR_U32(ctx, 31, 0x1536B8u);
    ctx->pc = 0x1536B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536B0u;
    // 0x1536b4: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x1536B0u, 0x1536B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536B8u;
label_1536b8:
    // 0x1536b8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1536B8u;
    {
        const bool branch_taken_0x1536b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1536BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536B8u;
        // 0x1536bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536b8) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x1536C0u;
    // 0x1536c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1536C0u;
    {
        const bool branch_taken_0x1536c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536C0u;
        // 0x1536c4: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536c0) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x1536C8u;
label_1536c8:
    // 0x1536c8: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1536cc: 0xc1136b4  jal         func_44DAD0
    ctx->pc = 0x1536CCu;
    SET_GPR_U32(ctx, 31, 0x1536D4u);
    ctx->pc = 0x1536D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536CCu;
    // 0x1536d0: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DAD0u, 0x1536CCu, 0x1536D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536D4u;
label_1536d4:
    // 0x1536d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1536d8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1536D8u;
    {
        const bool branch_taken_0x1536d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1536DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536D8u;
        // 0x1536dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536d8) {
            ctx->pc = 0x1536ECu;
            goto label_1536ec;
        }
    }
    ctx->pc = 0x1536E0u;
    // 0x1536e0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1536e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1536e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1536E4u;
    {
        const bool branch_taken_0x1536e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536E4u;
        // 0x1536e8: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e4) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x1536ECu;
label_1536ec:
    // 0x1536ec: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1536ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1536f0: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x1536f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x1536f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1536F4u;
    {
        const bool branch_taken_0x1536f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536F4u;
        // 0x1536f8: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536f4) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x1536FCu;
label_1536fc:
    // 0x1536fc: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x153700: 0xc1136cc  jal         func_44DB30
    ctx->pc = 0x153700u;
    SET_GPR_U32(ctx, 31, 0x153708u);
    ctx->pc = 0x153704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153700u;
    // 0x153704: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DB30u, 0x153700u, 0x153708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153708u;
label_153708:
    // 0x153708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15370c:
    // 0x15370c: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15370Cu;
    {
        const bool branch_taken_0x15370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x153710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15370Cu;
        // 0x153710: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15370c) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x153714u;
    // 0x153714: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x153714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_153718:
    // 0x153718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15371c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15371Cu;
    {
        const bool branch_taken_0x15371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15371Cu;
        // 0x153720: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15371c) {
            ctx->pc = 0x15376Cu;
            goto label_15376c;
        }
    }
    ctx->pc = 0x153724u;
label_153724:
    // 0x153724: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x153728: 0xc113518  jal         func_44D460
    ctx->pc = 0x153728u;
    SET_GPR_U32(ctx, 31, 0x153730u);
    ctx->pc = 0x15372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153728u;
    // 0x15372c: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x153728u, 0x153730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153730u;
label_153730:
    // 0x153730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153734: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153734u;
    {
        const bool branch_taken_0x153734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x153734) {
            ctx->pc = 0x153738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153734u;
            // 0x153738: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15374Cu;
            goto label_15374c;
        }
    }
    ctx->pc = 0x15373Cu;
    // 0x15373c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x15373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x153740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x153740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153744: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x153744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x153748: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x153748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_15374c:
    // 0x15374c: 0xc113518  jal         func_44D460
    ctx->pc = 0x15374Cu;
    SET_GPR_U32(ctx, 31, 0x153754u);
    ctx->pc = 0x153750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15374Cu;
    // 0x153750: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x15374Cu, 0x153754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153754u;
label_153754:
    // 0x153754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153754u;
    {
        const bool branch_taken_0x153754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153754u;
        // 0x153758: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153754) {
            ctx->pc = 0x153770u;
            goto label_153770;
        }
    }
    ctx->pc = 0x15375Cu;
    // 0x15375c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x15375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x153760: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153764: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x153764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x153768: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x153768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_15376c:
    // 0x15376c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_153770:
    // 0x153770: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153770u;
    {
        const bool branch_taken_0x153770 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x153774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153770u;
        // 0x153774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153770) {
            ctx->pc = 0x153794u;
            goto label_153794;
        }
    }
    ctx->pc = 0x153778u;
    // 0x153778: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153778u;
    {
        const bool branch_taken_0x153778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x15377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153778u;
        // 0x15377c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153778) {
            ctx->pc = 0x153794u;
            goto label_153794;
        }
    }
    ctx->pc = 0x153780u;
    // 0x153780: 0xa213013b  sb          $s3, 0x13B($s0)
    ctx->pc = 0x153780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 19));
    // 0x153784: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x153784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x153788: 0xa2150139  sb          $s5, 0x139($s0)
    ctx->pc = 0x153788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 21));
    // 0x15378c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x15378Cu;
    {
        const bool branch_taken_0x15378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15378Cu;
        // 0x153790: 0xa214013a  sb          $s4, 0x13A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15378c) {
            ctx->pc = 0x153974u;
            goto label_153974;
        }
    }
    ctx->pc = 0x153794u;
label_153794:
    // 0x153794: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x153794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x153798: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x153798u;
    {
        const bool branch_taken_0x153798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153798u;
        // 0x15379c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153798) {
            ctx->pc = 0x153814u;
            goto label_153814;
        }
    }
    ctx->pc = 0x1537A0u;
    // 0x1537a0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1537a4: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x1537a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1537a8: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1537ac: 0xc11348c  jal         func_44D230
    ctx->pc = 0x1537ACu;
    SET_GPR_U32(ctx, 31, 0x1537B4u);
    ctx->pc = 0x1537B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537ACu;
    // 0x1537b0: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D230u, 0x1537ACu, 0x1537B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537B4u;
label_1537b4:
    // 0x1537b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1537B4u;
    {
        const bool branch_taken_0x1537b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1537B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537B4u;
        // 0x1537b8: 0x93a20002  lbu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537b4) {
            ctx->pc = 0x1537C4u;
            goto label_1537c4;
        }
    }
    ctx->pc = 0x1537BCu;
    // 0x1537bc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1537BCu;
    {
        const bool branch_taken_0x1537bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537BCu;
        // 0x1537c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537bc) {
            ctx->pc = 0x153974u;
            goto label_153974;
        }
    }
    ctx->pc = 0x1537C4u;
label_1537c4:
    // 0x1537c4: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x1537c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1537c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1537c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1537cc: 0x96030120  lhu         $v1, 0x120($s0)
    ctx->pc = 0x1537ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1537d0: 0x441027  nor         $v0, $v0, $a0
    ctx->pc = 0x1537d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 4)));
    // 0x1537d4: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x1537d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1537d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1537d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1537dc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1537dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1537e0: 0xa6020120  sh          $v0, 0x120($s0)
    ctx->pc = 0x1537e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x1537e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1537e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1537e8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1537ec: 0x96050120  lhu         $a1, 0x120($s0)
    ctx->pc = 0x1537ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1537f0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x1537f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1537f4: 0x461826  xor         $v1, $v0, $a2
    ctx->pc = 0x1537f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1537f8: 0xae06010c  sw          $a2, 0x10C($s0)
    ctx->pc = 0x1537f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 6));
    // 0x1537fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1537fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x153800: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x153800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x153804: 0xae050100  sw          $a1, 0x100($s0)
    ctx->pc = 0x153804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 5));
    // 0x153808: 0xae040104  sw          $a0, 0x104($s0)
    ctx->pc = 0x153808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 4));
    // 0x15380c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x15380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x153810: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x153810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_153814:
    // 0x153814: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153818: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x153818u;
    {
        const bool branch_taken_0x153818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153818u;
        // 0x15381c: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153818) {
            ctx->pc = 0x1538F8u;
            goto label_1538f8;
        }
    }
    ctx->pc = 0x153820u;
    // 0x153820: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x153820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x153824: 0x9204013c  lbu         $a0, 0x13C($s0)
    ctx->pc = 0x153824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x153828: 0x9205013d  lbu         $a1, 0x13D($s0)
    ctx->pc = 0x153828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 317)));
    // 0x15382c: 0x2454ff80  addiu       $s4, $v0, -0x80
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x153830: 0x9206013e  lbu         $a2, 0x13E($s0)
    ctx->pc = 0x153830u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 318)));
    // 0x153834: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x153838: 0x9203013f  lbu         $v1, 0x13F($s0)
    ctx->pc = 0x153838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 319)));
    // 0x15383c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x153840: 0x93a80006  lbu         $t0, 0x6($sp)
    ctx->pc = 0x153840u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x153844: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x153848: 0x93a90007  lbu         $t1, 0x7($sp)
    ctx->pc = 0x153848u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x15384c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x153850: 0x93a70005  lbu         $a3, 0x5($sp)
    ctx->pc = 0x153850u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x153854: 0x2516ff80  addiu       $s6, $t0, -0x80
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x153858: 0x2535ff80  addiu       $s5, $t1, -0x80
    ctx->pc = 0x153858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
    // 0x15385c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x15385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x153860: 0x24f3ff80  addiu       $s3, $a3, -0x80
    ctx->pc = 0x153860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x153864: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x153868: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x153868u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x15386c: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x15386cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x153870: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x153874: 0x2c42023  subu        $a0, $s6, $a0
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x153878: 0x2a52823  subu        $a1, $s5, $a1
    ctx->pc = 0x153878u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x15387c: 0x2863023  subu        $a2, $s4, $a2
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x153880: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x153884: 0x6c10002  bgez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x153884u;
    {
        const bool branch_taken_0x153884 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x153888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153884u;
        // 0x153888: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153884) {
            ctx->pc = 0x153890u;
            goto label_153890;
        }
    }
    ctx->pc = 0x15388Cu;
    // 0x15388c: 0x73823  negu        $a3, $a3
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_153890:
    // 0x153890: 0x6a10002  bgez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x153890u;
    {
        const bool branch_taken_0x153890 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x153894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153890u;
        // 0x153894: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153890) {
            ctx->pc = 0x15389Cu;
            goto label_15389c;
        }
    }
    ctx->pc = 0x153898u;
    // 0x153898: 0x84023  negu        $t0, $t0
    ctx->pc = 0x153898u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_15389c:
    // 0x15389c: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x15389Cu;
    {
        const bool branch_taken_0x15389c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1538A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15389Cu;
        // 0x1538a0: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15389c) {
            ctx->pc = 0x1538A8u;
            goto label_1538a8;
        }
    }
    ctx->pc = 0x1538A4u;
    // 0x1538a4: 0x94823  negu        $t1, $t1
    ctx->pc = 0x1538a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_1538a8:
    // 0x1538a8: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1538A8u;
    {
        const bool branch_taken_0x1538a8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1538ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538A8u;
        // 0x1538ac: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538a8) {
            ctx->pc = 0x1538B4u;
            goto label_1538b4;
        }
    }
    ctx->pc = 0x1538B0u;
    // 0x1538b0: 0xa5023  negu        $t2, $t2
    ctx->pc = 0x1538b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
label_1538b4:
    // 0x1538b4: 0xe2382a  slt         $a3, $a3, $v0
    ctx->pc = 0x1538b4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1538b8: 0x142502a  slt         $t2, $t2, $v0
    ctx->pc = 0x1538b8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1538bc: 0x102402a  slt         $t0, $t0, $v0
    ctx->pc = 0x1538bcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1538c0: 0x122482a  slt         $t1, $t1, $v0
    ctx->pc = 0x1538c0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1538c4: 0xa216013c  sb          $s6, 0x13C($s0)
    ctx->pc = 0x1538c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 316), (uint8_t)GPR_U32(ctx, 22));
    // 0x1538c8: 0xa215013d  sb          $s5, 0x13D($s0)
    ctx->pc = 0x1538c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 317), (uint8_t)GPR_U32(ctx, 21));
    // 0x1538cc: 0x7b00b  movn        $s6, $zero, $a3
    ctx->pc = 0x1538ccu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x1538d0: 0xa214013e  sb          $s4, 0x13E($s0)
    ctx->pc = 0x1538d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 318), (uint8_t)GPR_U32(ctx, 20));
    // 0x1538d4: 0x8a80b  movn        $s5, $zero, $t0
    ctx->pc = 0x1538d4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x1538d8: 0xa213013f  sb          $s3, 0x13F($s0)
    ctx->pc = 0x1538d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 319), (uint8_t)GPR_U32(ctx, 19));
    // 0x1538dc: 0x9a00b  movn        $s4, $zero, $t1
    ctx->pc = 0x1538dcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x1538e0: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x1538e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x1538e4: 0xa980b  movn        $s3, $zero, $t2
    ctx->pc = 0x1538e4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1538e8: 0xa6050142  sh          $a1, 0x142($s0)
    ctx->pc = 0x1538e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 322), (uint16_t)GPR_U32(ctx, 5));
    // 0x1538ec: 0xa6060144  sh          $a2, 0x144($s0)
    ctx->pc = 0x1538ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 324), (uint16_t)GPR_U32(ctx, 6));
    // 0x1538f0: 0xa6030146  sh          $v1, 0x146($s0)
    ctx->pc = 0x1538f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 326), (uint16_t)GPR_U32(ctx, 3));
    // 0x1538f4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1538f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1538f8:
    // 0x1538f8: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x1538f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x1538fc: 0xa2150139  sb          $s5, 0x139($s0)
    ctx->pc = 0x1538fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 21));
    // 0x153900: 0xa214013a  sb          $s4, 0x13A($s0)
    ctx->pc = 0x153900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 20));
    // 0x153904: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153904u;
    {
        const bool branch_taken_0x153904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153904u;
        // 0x153908: 0xa213013b  sb          $s3, 0x13B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153904) {
            ctx->pc = 0x153968u;
            goto label_153968;
        }
    }
    ctx->pc = 0x15390Cu;
    // 0x15390c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x15390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x153910: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153914: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153914u;
    {
        const bool branch_taken_0x153914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153914u;
        // 0x153918: 0x93a30001  lbu         $v1, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153914) {
            ctx->pc = 0x15396Cu;
            goto label_15396c;
        }
    }
    ctx->pc = 0x15391Cu;
    // 0x15391c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15391cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153920: 0x260b0160  addiu       $t3, $s0, 0x160
    ctx->pc = 0x153920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x153924: 0x26090148  addiu       $t1, $s0, 0x148
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x153928: 0x2608016c  addiu       $t0, $s0, 0x16C
    ctx->pc = 0x153928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x15392c: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x15392cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_153930:
    // 0x153930: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x153930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153934: 0x16a2821  addu        $a1, $t3, $t2
    ctx->pc = 0x153934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x153938: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x153938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15393c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x15393cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x153940: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153944: 0x2946000c  slti        $a2, $t2, 0xC
    ctx->pc = 0x153944u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x153948: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x153948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15394c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x153950: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x153950u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x153954: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x153954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x153958: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x153958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15395c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x15395cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x153960: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x153960u;
    {
        const bool branch_taken_0x153960 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x153964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153960u;
        // 0x153964: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153960) {
            ctx->pc = 0x153930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153930;
        }
    }
    ctx->pc = 0x153968u;
label_153968:
    // 0x153968: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x153968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_15396c:
    // 0x15396c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x153970: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x153970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_153974:
    // 0x153974: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x153974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153978: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x153978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15397c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15397cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153980: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x153980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153984: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x153984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153988: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x153988u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15398c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x15398cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153990: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153994: 0x3e00008  jr          $ra
    ctx->pc = 0x153994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153994u;
        // 0x153998: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15399Cu;
    // 0x15399c: 0x0  nop
    ctx->pc = 0x15399cu;
    // NOP
    // 0x1539a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1539a4: 0x0  nop
    ctx->pc = 0x1539a4u;
    // NOP
    // 0x1539a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1539ac: 0x0  nop
    ctx->pc = 0x1539acu;
    // NOP
    // 0x1539b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1539b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1539b4: 0x0  nop
    ctx->pc = 0x1539b4u;
    // NOP
    // 0x1539b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1539b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1539bc: 0x0  nop
    ctx->pc = 0x1539bcu;
    // NOP
    // 0x1539c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1539c4: 0x0  nop
    ctx->pc = 0x1539c4u;
    // NOP
    // 0x1539c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1539cc: 0x0  nop
    ctx->pc = 0x1539ccu;
    // NOP
    // 0x1539d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1539d4: 0x0  nop
    ctx->pc = 0x1539d4u;
    // NOP
    // 0x1539d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1539dc: 0x0  nop
    ctx->pc = 0x1539dcu;
    // NOP
    // 0x1539e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1539e4: 0x0  nop
    ctx->pc = 0x1539e4u;
    // NOP
    // 0x1539e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1539ec: 0x0  nop
    ctx->pc = 0x1539ecu;
    // NOP
    // 0x1539f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1539f4: 0x0  nop
    ctx->pc = 0x1539f4u;
    // NOP
    // 0x1539f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1539f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1539fc: 0x0  nop
    ctx->pc = 0x1539fcu;
    // NOP
    // 0x153a00: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x153a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x153a04: 0x0  nop
    ctx->pc = 0x153a04u;
    // NOP
    // 0x153a08: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x153a08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x153a0c: 0x0  nop
    ctx->pc = 0x153a0cu;
    // NOP
    // 0x153a10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x153a14: 0x0  nop
    ctx->pc = 0x153a14u;
    // NOP
    // 0x153a18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x153a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x153a1c: 0x0  nop
    ctx->pc = 0x153a1cu;
    // NOP
    // 0x153a20: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x153a24: 0x0  nop
    ctx->pc = 0x153a24u;
    // NOP
    // 0x153a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153a2c: 0x0  nop
    ctx->pc = 0x153a2cu;
    // NOP
    // 0x153a30: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x153a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x153a34: 0x0  nop
    ctx->pc = 0x153a34u;
    // NOP
    // 0x153a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a3c: 0x0  nop
    ctx->pc = 0x153a3cu;
    // NOP
    // 0x153a40: 0x0  nop
    ctx->pc = 0x153a40u;
    // NOP
    // 0x153a44: 0x0  nop
    ctx->pc = 0x153a44u;
    // NOP
    // 0x153a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153a4c: 0x0  nop
    ctx->pc = 0x153a4cu;
    // NOP
    // 0x153a50: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x153a54: 0x0  nop
    ctx->pc = 0x153a54u;
    // NOP
    // 0x153a58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x153a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a5c: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x153a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x153a60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153A60u;
    {
        const bool branch_taken_0x153a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A60u;
        // 0x153a64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a60) {
            ctx->pc = 0x153AC4u;
            return;
        }
    }
    ctx->pc = 0x153A68u;
    // 0x153a68: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x153a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x153a6c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x153a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x153a70: 0x2442d900  addiu       $v0, $v0, -0x2700
    ctx->pc = 0x153a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957312));
    // 0x153a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153a78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x153a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153a7c: 0x800008  jr          $a0
    ctx->pc = 0x153A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153A84u: goto label_153a84;
            case 0x153A90u: goto label_153a90;
            case 0x153AA4u: goto label_153aa4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153A7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x153A84u;
label_153a84:
    // 0x153a84: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x153a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153a88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x153A88u;
    {
        const bool branch_taken_0x153a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A88u;
        // 0x153a8c: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a88) {
            ctx->pc = 0x153AC4u;
            return;
        }
    }
    ctx->pc = 0x153A90u;
label_153a90:
    // 0x153a90: 0xe51818  mult        $v1, $a3, $a1
    ctx->pc = 0x153a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x153a94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153a9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x153A9Cu;
    {
        const bool branch_taken_0x153a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A9Cu;
        // 0x153aa0: 0x24103  sra         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a9c) {
            ctx->pc = 0x153AC4u;
            return;
        }
    }
    ctx->pc = 0x153AA4u;
label_153aa4:
    // 0x153aa4: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x153aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153aa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153AA8u;
    {
        const bool branch_taken_0x153aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AA8u;
        // 0x153aac: 0x240c3  sra         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153aa8) {
            ctx->pc = 0x153AC4u;
            return;
        }
    }
    ctx->pc = 0x153AB0u;
}
