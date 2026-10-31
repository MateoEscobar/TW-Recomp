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

// Function: sub_00234188
// Address: 0x234188 - 0x234318
void sub_00234188_0x234188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234188_0x234188");
#endif

    switch (ctx->pc) {
        case 0x2341a8u: goto label_2341a8;
        case 0x2341b0u: goto label_2341b0;
        case 0x234228u: goto label_234228;
        case 0x234230u: goto label_234230;
        case 0x234238u: goto label_234238;
        case 0x234244u: goto label_234244;
        case 0x234258u: goto label_234258;
        case 0x23426cu: goto label_23426c;
        case 0x234290u: goto label_234290;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f8u: goto label_2342f8;
        case 0x234304u: goto label_234304;
        default: break;
    }

    ctx->pc = 0x234188u;

    // 0x234188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23418c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x234190: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x234194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x234198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23419c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2341a0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2341A0u;
    SET_GPR_U32(ctx, 31, 0x2341A8u);
    ctx->pc = 0x2341A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2341A0u;
    // 0x2341a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2341A0u, 0x2341A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341A8u;
label_2341a8:
    // 0x2341a8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2341A8u;
    SET_GPR_U32(ctx, 31, 0x2341B0u);
    ctx->pc = 0x2341ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2341A8u;
    // 0x2341ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2341A8u, 0x2341B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341B0u;
label_2341b0:
    // 0x2341b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2341b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341b4: 0x52000054  beql        $s0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x2341B4u;
    {
        const bool branch_taken_0x2341b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341b4) {
            ctx->pc = 0x2341B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2341B4u;
            // 0x2341b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234308u;
            goto label_234308;
        }
    }
    ctx->pc = 0x2341BCu;
    // 0x2341bc: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2341BCu;
    {
        const bool branch_taken_0x2341bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341BCu;
        // 0x2341c0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341bc) {
            ctx->pc = 0x234274u;
            goto label_234274;
        }
    }
    ctx->pc = 0x2341C4u;
    // 0x2341c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2341c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2341c8: 0x2445c5f8  addiu       $a1, $v0, -0x3A08
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952440));
    // 0x2341cc: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2341d0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2341d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2341d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341d8: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2341D8u;
    {
        const bool branch_taken_0x2341d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2341DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341D8u;
        // 0x2341dc: 0xa460b23c  sh          $zero, -0x4DC4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294947388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341d8) {
            ctx->pc = 0x234210u;
            goto label_234210;
        }
    }
    ctx->pc = 0x2341E0u;
    // 0x2341e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2341e4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2341E4u;
    {
        const bool branch_taken_0x2341e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2341E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341E4u;
        // 0x2341e8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341e4) {
            ctx->pc = 0x2341FCu;
            goto label_2341fc;
        }
    }
    ctx->pc = 0x2341ECu;
    // 0x2341ec: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x2341ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2341f0: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2341f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2341f4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2341F4u;
    {
        const bool branch_taken_0x2341f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2341F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F4u;
        // 0x2341f8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341f4) {
            ctx->pc = 0x23420Cu;
            goto label_23420c;
        }
    }
    ctx->pc = 0x2341FCu;
label_2341fc:
    // 0x2341fc: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2341fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x234200: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x234200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
    // 0x234204: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234204u;
    {
        const bool branch_taken_0x234204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234204) {
            ctx->pc = 0x234210u;
            goto label_234210;
        }
    }
    ctx->pc = 0x23420Cu;
label_23420c:
    // 0x23420c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234210:
    // 0x234210: 0x54c0003d  bnel        $a2, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x234210u;
    {
        const bool branch_taken_0x234210 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x234210) {
            ctx->pc = 0x234214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234210u;
            // 0x234214: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234308u;
            goto label_234308;
        }
    }
    ctx->pc = 0x234218u;
    // 0x234218: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x234218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23421c: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x23421cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x234220: 0xc089974  jal         func_2265D0
    ctx->pc = 0x234220u;
    SET_GPR_U32(ctx, 31, 0x234228u);
    ctx->pc = 0x234224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234220u;
    // 0x234224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x234220u, 0x234228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234228u;
label_234228:
    // 0x234228: 0xc08840e  jal         func_221038
    ctx->pc = 0x234228u;
    SET_GPR_U32(ctx, 31, 0x234230u);
    ctx->pc = 0x23422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234228u;
    // 0x23422c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x234228u, 0x234230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234230u;
label_234230:
    // 0x234230: 0xc091188  jal         func_244620
    ctx->pc = 0x234230u;
    SET_GPR_U32(ctx, 31, 0x234238u);
    ctx->pc = 0x234234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234230u;
    // 0x234234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x234230u, 0x234238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234238u;
label_234238:
    // 0x234238: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23423c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x23423Cu;
    SET_GPR_U32(ctx, 31, 0x234244u);
    ctx->pc = 0x234240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23423Cu;
    // 0x234240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x23423Cu, 0x234244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234244u;
label_234244:
    // 0x234244: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x234248: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23424c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234250: 0xc051d0c  jal         func_147430
    ctx->pc = 0x234250u;
    SET_GPR_U32(ctx, 31, 0x234258u);
    ctx->pc = 0x234254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234250u;
    // 0x234254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147430u, 0x234250u, 0x234258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234258u;
label_234258:
    // 0x234258: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23425c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x234260: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234264: 0xc051d0c  jal         func_147430
    ctx->pc = 0x234264u;
    SET_GPR_U32(ctx, 31, 0x23426Cu);
    ctx->pc = 0x234268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234264u;
    // 0x234268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147430u, 0x234264u, 0x23426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23426Cu;
label_23426c:
    // 0x23426c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x23426Cu;
    {
        const bool branch_taken_0x23426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23426Cu;
        // 0x234270: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23426c) {
            ctx->pc = 0x234308u;
            goto label_234308;
        }
    }
    ctx->pc = 0x234274u;
label_234274:
    // 0x234274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234278: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23427c: 0xa443b23c  sh          $v1, -0x4DC4($v0)
    ctx->pc = 0x23427cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50B23Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x50B23Cu, _value); } while (0);
    // 0x234280: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x234280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x234284: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x234284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x234288: 0xc089988  jal         func_226620
    ctx->pc = 0x234288u;
    SET_GPR_U32(ctx, 31, 0x234290u);
    ctx->pc = 0x23428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234288u;
    // 0x23428c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x234288u, 0x234290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234290u;
label_234290:
    // 0x234290: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x234294: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x234294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x234298: 0x2444c5f8  addiu       $a0, $v0, -0x3A08
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952440));
    // 0x23429c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55C5FAu));
    // 0x2342a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2342A0u;
    {
        const bool branch_taken_0x2342a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2342A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342A0u;
        // 0x2342a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342a0) {
            ctx->pc = 0x2342D8u;
            goto label_2342d8;
        }
    }
    ctx->pc = 0x2342A8u;
    // 0x2342a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2342ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2342ACu;
    {
        const bool branch_taken_0x2342ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2342B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342ACu;
        // 0x2342b0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342ac) {
            ctx->pc = 0x2342C4u;
            goto label_2342c4;
        }
    }
    ctx->pc = 0x2342B4u;
    // 0x2342b4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2342b8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2342bc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2342BCu;
    {
        const bool branch_taken_0x2342bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2342C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342BCu;
        // 0x2342c0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342bc) {
            ctx->pc = 0x2342D4u;
            goto label_2342d4;
        }
    }
    ctx->pc = 0x2342C4u;
label_2342c4:
    // 0x2342c4: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2342c8: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
    // 0x2342cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2342CCu;
    {
        const bool branch_taken_0x2342cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2342cc) {
            ctx->pc = 0x2342D8u;
            goto label_2342d8;
        }
    }
    ctx->pc = 0x2342D4u;
label_2342d4:
    // 0x2342d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2342d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2342d8:
    // 0x2342d8: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2342D8u;
    {
        const bool branch_taken_0x2342d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342d8) {
            ctx->pc = 0x2342DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2342D8u;
            // 0x2342dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234308u;
            goto label_234308;
        }
    }
    ctx->pc = 0x2342E0u;
    // 0x2342e0: 0xc088420  jal         func_221080
    ctx->pc = 0x2342E0u;
    SET_GPR_U32(ctx, 31, 0x2342E8u);
    ctx->pc = 0x2342E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342E0u;
    // 0x2342e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2342E0u, 0x2342E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342E8u;
label_2342e8:
    // 0x2342e8: 0xc051ae4  jal         func_146B90
    ctx->pc = 0x2342E8u;
    SET_GPR_U32(ctx, 31, 0x2342F0u);
    ctx->pc = 0x2342ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342E8u;
    // 0x2342ec: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146B90u, 0x2342E8u, 0x2342F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342F0u;
label_2342f0:
    // 0x2342f0: 0xc051ae4  jal         func_146B90
    ctx->pc = 0x2342F0u;
    SET_GPR_U32(ctx, 31, 0x2342F8u);
    ctx->pc = 0x2342F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342F0u;
    // 0x2342f4: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146B90u, 0x2342F0u, 0x2342F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342F8u;
label_2342f8:
    // 0x2342f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2342f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2342fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2342FCu;
    SET_GPR_U32(ctx, 31, 0x234304u);
    ctx->pc = 0x234300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342FCu;
    // 0x234300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x2342FCu, 0x234304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234304u;
label_234304:
    // 0x234304: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234308:
    // 0x234308: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23430c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23430cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234310: 0x3e00008  jr          $ra
    ctx->pc = 0x234310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234310u;
        // 0x234314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234318u;
}
