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

// Function: sub_00352098
// Address: 0x352098 - 0x352430
void sub_00352098_0x352098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352098_0x352098");
#endif

    switch (ctx->pc) {
        case 0x3520dcu: goto label_3520dc;
        case 0x352128u: goto label_352128;
        case 0x352158u: goto label_352158;
        case 0x352180u: goto label_352180;
        case 0x3521e0u: goto label_3521e0;
        case 0x35224cu: goto label_35224c;
        case 0x35225cu: goto label_35225c;
        case 0x352288u: goto label_352288;
        case 0x35234cu: goto label_35234c;
        case 0x352364u: goto label_352364;
        case 0x352380u: goto label_352380;
        case 0x3523fcu: goto label_3523fc;
        default: break;
    }

    ctx->pc = 0x352098u;

    // 0x352098: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x352098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35209c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x35209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3520a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3520a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3520a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3520a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3520a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3520ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3520acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3520b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3520b4: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x3520b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5340u));
    // 0x3520b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3520b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520bc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3520bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3520c0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3520c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3520c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3520c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3520c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3520ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3520d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3520d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3520d4: 0xc10c190  jal         func_430640
    ctx->pc = 0x3520D4u;
    SET_GPR_U32(ctx, 31, 0x3520DCu);
    ctx->pc = 0x3520D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520D4u;
    // 0x3520d8: 0x8c65003c  lw          $a1, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x3520D4u, 0x3520DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520DCu;
label_3520dc:
    // 0x3520dc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x3520dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3520e0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x3520e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3520e4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x3520e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x3520e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3520ec: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x3520ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3520f0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3520f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3520f4: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x3520f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x3520f8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x3520f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3520fc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3520fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x352100: 0x92070020  lbu         $a3, 0x20($s0)
    ctx->pc = 0x352100u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x352104: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352108: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x352108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x35210c: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x35210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x352110: 0xae060094  sw          $a2, 0x94($s0)
    ctx->pc = 0x352110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 6));
    // 0x352114: 0xae040098  sw          $a0, 0x98($s0)
    ctx->pc = 0x352114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 4));
    // 0x352118: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x352118u;
    {
        const bool branch_taken_0x352118 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352118u;
        // 0x35211c: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352118) {
            ctx->pc = 0x352140u;
            goto label_352140;
        }
    }
    ctx->pc = 0x352120u;
    // 0x352120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x352124: 0x0  nop
    ctx->pc = 0x352124u;
    // NOP
label_352128:
    // 0x352128: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x352128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35212c: 0x0  nop
    ctx->pc = 0x35212cu;
    // NOP
    // 0x352130: 0x0  nop
    ctx->pc = 0x352130u;
    // NOP
    // 0x352134: 0x0  nop
    ctx->pc = 0x352134u;
    // NOP
    // 0x352138: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x352138u;
    {
        const bool branch_taken_0x352138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352138u;
        // 0x35213c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352138) {
            ctx->pc = 0x352128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352128;
        }
    }
    ctx->pc = 0x352140u;
label_352140:
    // 0x352140: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x352140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x352144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x352144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352148: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x352148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x35214c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35214Cu;
    {
        const bool branch_taken_0x35214c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35214Cu;
        // 0x352150: 0x8e0600a0  lw          $a2, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35214c) {
            ctx->pc = 0x352170u;
            goto label_352170;
        }
    }
    ctx->pc = 0x352154u;
    // 0x352154: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_352158:
    // 0x352158: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x352158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35215c: 0x0  nop
    ctx->pc = 0x35215cu;
    // NOP
    // 0x352160: 0x0  nop
    ctx->pc = 0x352160u;
    // NOP
    // 0x352164: 0x0  nop
    ctx->pc = 0x352164u;
    // NOP
    // 0x352168: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x352168u;
    {
        const bool branch_taken_0x352168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352168u;
        // 0x35216c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352168) {
            ctx->pc = 0x352158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352158;
        }
    }
    ctx->pc = 0x352170u;
label_352170:
    // 0x352170: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x352170u;
    {
        const bool branch_taken_0x352170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x352174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352170u;
        // 0x352174: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352170) {
            ctx->pc = 0x352198u;
            goto label_352198;
        }
    }
    ctx->pc = 0x352178u;
    // 0x352178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35217c: 0x0  nop
    ctx->pc = 0x35217cu;
    // NOP
label_352180:
    // 0x352180: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x352180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x352184: 0x0  nop
    ctx->pc = 0x352184u;
    // NOP
    // 0x352188: 0x0  nop
    ctx->pc = 0x352188u;
    // NOP
    // 0x35218c: 0x0  nop
    ctx->pc = 0x35218cu;
    // NOP
    // 0x352190: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x352190u;
    {
        const bool branch_taken_0x352190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352190u;
        // 0x352194: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352190) {
            ctx->pc = 0x352180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352180;
        }
    }
    ctx->pc = 0x352198u;
label_352198:
    // 0x352198: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x352198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x35219c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x35219cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3521a0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x3521a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x3521a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3521a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3521a8: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3521ac: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3521acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3521b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3521b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3521b4: 0x92050020  lbu         $a1, 0x20($s0)
    ctx->pc = 0x3521b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3521b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3521b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3521bc: 0xae0600a0  sw          $a2, 0xA0($s0)
    ctx->pc = 0x3521bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 6));
    // 0x3521c0: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x3521c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x3521c4: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x3521c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x3521c8: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3521C8u;
    {
        const bool branch_taken_0x3521c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521C8u;
        // 0x3521cc: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521c8) {
            ctx->pc = 0x352270u;
            goto label_352270;
        }
    }
    ctx->pc = 0x3521D0u;
    // 0x3521d0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x3521d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x3521d4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3521d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x3521d8: 0x24534240  addiu       $s3, $v0, 0x4240
    ctx->pc = 0x3521d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x3521dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3521dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3521e0:
    // 0x3521e0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x3521e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3521e4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3521e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3521e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3521e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3521ec: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x3521ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x3521f0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3521f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3521f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3521f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3521f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3521fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352200: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x352200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x352204: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x352204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x352208: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35220c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352210: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x352210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x352214: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352218: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x352218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x35221c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x35221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x352220: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352224: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352228: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x352228u;
    {
        const bool branch_taken_0x352228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352228) {
            ctx->pc = 0x35222Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352228u;
            // 0x35222c: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35223Cu;
            goto label_35223c;
        }
    }
    ctx->pc = 0x352230u;
    // 0x352230: 0xa0600043  sb          $zero, 0x43($v1)
    ctx->pc = 0x352230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x352234: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x352234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x352238: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x352238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_35223c:
    // 0x35223c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352240: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x352240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x352244: 0xc040716  jal         func_101C58
    ctx->pc = 0x352244u;
    SET_GPR_U32(ctx, 31, 0x35224Cu);
    ctx->pc = 0x352248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352244u;
    // 0x352248: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C58u, 0x352244u, 0x35224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35224Cu;
label_35224c:
    // 0x35224c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35224Cu;
    {
        const bool branch_taken_0x35224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35224Cu;
        // 0x352250: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35224c) {
            ctx->pc = 0x35225Cu;
            goto label_35225c;
        }
    }
    ctx->pc = 0x352254u;
    // 0x352254: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x352254u;
    SET_GPR_U32(ctx, 31, 0x35225Cu);
    ctx->pc = 0x352258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352254u;
    // 0x352258: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x352254u, 0x35225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35225Cu;
label_35225c:
    // 0x35225c: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x35225cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x352260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x352264: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x352264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352268: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x352268u;
    {
        const bool branch_taken_0x352268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352268u;
        // 0x35226c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352268) {
            ctx->pc = 0x3521E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3521e0;
        }
    }
    ctx->pc = 0x352270u;
label_352270:
    // 0x352270: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x352270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x352274: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x352274u;
    {
        const bool branch_taken_0x352274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352274u;
        // 0x352278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352274) {
            ctx->pc = 0x3522ECu;
            goto label_3522ec;
        }
    }
    ctx->pc = 0x35227Cu;
    // 0x35227c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x35227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x352280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352284: 0x24474908  addiu       $a3, $v0, 0x4908
    ctx->pc = 0x352284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
label_352288:
    // 0x352288: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x352288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x35228c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x35228cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x352290: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x352290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x352294: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x352294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x352298: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x352298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x35229c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3522a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3522a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3522a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3522a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3522a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3522ac: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3522b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3522b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3522b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3522b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3522b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3522bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3522c0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3522c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3522c4: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3522c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3522c8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3522c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3522cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3522ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3522d0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3522D0u;
    {
        const bool branch_taken_0x3522d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3522d0) {
            ctx->pc = 0x3522D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3522D0u;
            // 0x3522d4: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3522D8u;
            goto label_3522d8;
        }
    }
    ctx->pc = 0x3522D8u;
label_3522d8:
    // 0x3522d8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x3522d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3522dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3522e0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3522e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3522e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3522E4u;
    {
        const bool branch_taken_0x3522e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3522E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522E4u;
        // 0x3522e8: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522e4) {
            ctx->pc = 0x352288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352288;
        }
    }
    ctx->pc = 0x3522ECu;
label_3522ec:
    // 0x3522ec: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x3522ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x3522f0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3522F0u;
    {
        const bool branch_taken_0x3522f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3522f0) {
            ctx->pc = 0x3522F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3522F0u;
            // 0x3522f4: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352368u;
            goto label_352368;
        }
    }
    ctx->pc = 0x3522F8u;
    // 0x3522f8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x3522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3522fc: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x3522fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x352300: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x352300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x352304: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352308: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35230c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35230cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x352310: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x352310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x352314: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352318: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x352318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35231c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352320: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x352320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x352324: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x352324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x352328: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35232c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35232Cu;
    {
        const bool branch_taken_0x35232c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35232Cu;
        // 0x352330: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35232c) {
            ctx->pc = 0x35233Cu;
            goto label_35233c;
        }
    }
    ctx->pc = 0x352334u;
    // 0x352334: 0x24424908  addiu       $v0, $v0, 0x4908
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
    // 0x352338: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_35233c:
    // 0x35233c: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x35233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x352340: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x352340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x352344: 0xc0d534a  jal         func_354D28
    ctx->pc = 0x352344u;
    SET_GPR_U32(ctx, 31, 0x35234Cu);
    ctx->pc = 0x352348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352344u;
    // 0x352348: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D28u, 0x352344u, 0x35234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35234Cu;
label_35234c:
    // 0x35234c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35234cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352350: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x352350u;
    {
        const bool branch_taken_0x352350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352350u;
        // 0x352354: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352350) {
            ctx->pc = 0x352364u;
            goto label_352364;
        }
    }
    ctx->pc = 0x352358u;
    // 0x352358: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x352358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35235c: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x35235Cu;
    SET_GPR_U32(ctx, 31, 0x352364u);
    ctx->pc = 0x352360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35235Cu;
    // 0x352360: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x35235Cu, 0x352364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352364u;
label_352364:
    // 0x352364: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x352364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_352368:
    // 0x352368: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x352368u;
    {
        const bool branch_taken_0x352368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352368u;
        // 0x35236c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352368) {
            ctx->pc = 0x3523E4u;
            goto label_3523e4;
        }
    }
    ctx->pc = 0x352370u;
    // 0x352370: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x352370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x352374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352378: 0x24474908  addiu       $a3, $v0, 0x4908
    ctx->pc = 0x352378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
    // 0x35237c: 0x0  nop
    ctx->pc = 0x35237cu;
    // NOP
label_352380:
    // 0x352380: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x352380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x352384: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x352384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x352388: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35238c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x35238cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x352390: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x352390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x352394: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x352394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x352398: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35239c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3523a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3523a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3523a4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x3523a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3523a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3523a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3523ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3523acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3523b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3523b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3523b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3523b8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3523b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3523bc: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x3523bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3523c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3523c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3523c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3523c8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3523C8u;
    {
        const bool branch_taken_0x3523c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3523c8) {
            ctx->pc = 0x3523CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3523C8u;
            // 0x3523cc: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3523D0u;
            goto label_3523d0;
        }
    }
    ctx->pc = 0x3523D0u;
label_3523d0:
    // 0x3523d0: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x3523d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x3523d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3523d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3523d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3523d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3523dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3523DCu;
    {
        const bool branch_taken_0x3523dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3523E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523DCu;
        // 0x3523e0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523dc) {
            ctx->pc = 0x352380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352380;
        }
    }
    ctx->pc = 0x3523E4u;
label_3523e4:
    // 0x3523e4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3523E4u;
    {
        const bool branch_taken_0x3523e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523E4u;
        // 0x3523e8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523e4) {
            ctx->pc = 0x3523F4u;
            goto label_3523f4;
        }
    }
    ctx->pc = 0x3523ECu;
    // 0x3523ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3523ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3523f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3523f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3523f4:
    // 0x3523f4: 0xc0d4da6  jal         func_353698
    ctx->pc = 0x3523F4u;
    SET_GPR_U32(ctx, 31, 0x3523FCu);
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x3523F4u, 0x3523FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523FCu;
label_3523fc:
    // 0x3523fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352400: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x352400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x352404: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x352404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x352408: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x352408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35240c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x352410: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x352410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x352414: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x352414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352418: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x352418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35241c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35241cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352424: 0x3e00008  jr          $ra
    ctx->pc = 0x352424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352424u;
        // 0x352428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35242Cu;
    // 0x35242c: 0x0  nop
    ctx->pc = 0x35242cu;
    // NOP
    ctx->pc = 0x352430u;
}
