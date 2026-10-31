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

// Function: sub_002CD4F8
// Address: 0x2cd4f8 - 0x2cd640
void sub_002CD4F8_0x2cd4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD4F8_0x2cd4f8");
#endif

    switch (ctx->pc) {
        case 0x2cd560u: goto label_2cd560;
        case 0x2cd5c0u: goto label_2cd5c0;
        case 0x2cd5d4u: goto label_2cd5d4;
        case 0x2cd5dcu: goto label_2cd5dc;
        default: break;
    }

    ctx->pc = 0x2cd4f8u;

    // 0x2cd4f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd4fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cd500: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cd504: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cd504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2cd508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd50c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cd50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2cd510: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cd510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2cd514: 0x24631710  addiu       $v1, $v1, 0x1710
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5904));
    // 0x2cd518: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cd518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cd51c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd520: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cd520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cd524: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2cd528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cd52c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2cd52cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd534: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x2cd534u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
    // 0x2cd538: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cd538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2cd53c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2cd53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2cd540: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cd540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cd544: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd548: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cd548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2cd54c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2cd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cd550: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2cd550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd558: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2cd558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd55c: 0x0  nop
    ctx->pc = 0x2cd55cu;
    // NOP
label_2cd560:
    // 0x2cd560: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2cd560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2cd564: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cd568: 0x0  nop
    ctx->pc = 0x2cd568u;
    // NOP
    // 0x2cd56c: 0x0  nop
    ctx->pc = 0x2cd56cu;
    // NOP
    // 0x2cd570: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CD570u;
    {
        const bool branch_taken_0x2cd570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD570u;
        // 0x2cd574: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd570) {
            ctx->pc = 0x2CD560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD578u;
    // 0x2cd578: 0x8ea2bd30  lw          $v0, -0x42D0($s5)
    ctx->pc = 0x2cd578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
    // 0x2cd57c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cd57cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd580: 0xe60c002c  swc1        $f12, 0x2C($s0)
    ctx->pc = 0x2cd580u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2cd584: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2cd584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd588: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2cd588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2cd58c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cd590: 0xa6070030  sh          $a3, 0x30($s0)
    ctx->pc = 0x2cd590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x2cd594: 0xa6060032  sh          $a2, 0x32($s0)
    ctx->pc = 0x2cd594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cd598: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2cd598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2cd59c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2cd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2cd5a0: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x2cd5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5a4: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2cd5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5a8: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x2cd5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5ac: 0xa2000037  sb          $zero, 0x37($s0)
    ctx->pc = 0x2cd5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5b0: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2cd5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5b4: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x2cd5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5b8: 0xa200003a  sb          $zero, 0x3A($s0)
    ctx->pc = 0x2cd5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd5bc: 0x0  nop
    ctx->pc = 0x2cd5bcu;
    // NOP
label_2cd5c0:
    // 0x2cd5c0: 0x8ea2bd30  lw          $v0, -0x42D0($s5)
    ctx->pc = 0x2cd5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
    // 0x2cd5c4: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD5C4u;
    {
        const bool branch_taken_0x2cd5c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C4u;
        // 0x2cd5c8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5c4) {
            ctx->pc = 0x2CD600u;
            goto label_2cd600;
        }
    }
    ctx->pc = 0x2CD5CCu;
    // 0x2cd5cc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2CD5CCu;
    SET_GPR_U32(ctx, 31, 0x2CD5D4u);
    ctx->pc = 0x2CD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5CCu;
    // 0x2cd5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CD5CCu, 0x2CD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5D4u;
label_2cd5d4:
    // 0x2cd5d4: 0xc0e2612  jal         func_389848
    ctx->pc = 0x2CD5D4u;
    SET_GPR_U32(ctx, 31, 0x2CD5DCu);
    ctx->pc = 0x2CD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5D4u;
    // 0x2cd5d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2CD5D4u, 0x2CD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5DCu;
label_2cd5dc:
    // 0x2cd5dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD5DCu;
    {
        const bool branch_taken_0x2cd5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5dc) {
            ctx->pc = 0x2CD5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5DCu;
            // 0x2cd5e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD604u;
            goto label_2cd604;
        }
    }
    ctx->pc = 0x2CD5E4u;
    // 0x2cd5e4: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x2cd5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2cd5e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2cd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cd5ec: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x2cd5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd5f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cd5f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd5f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cd5fc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2cd5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_2cd600:
    // 0x2cd600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cd600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cd604:
    // 0x2cd604: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2cd604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2cd608: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x2cd608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cd60c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CD60Cu;
    {
        const bool branch_taken_0x2cd60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD60Cu;
        // 0x2cd610: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd60c) {
            ctx->pc = 0x2CD5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd5c0;
        }
    }
    ctx->pc = 0x2CD614u;
    // 0x2cd614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd618: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cd618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd61c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cd61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd620: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cd620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cd624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd628: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cd628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd62c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cd62cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd634: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD634u;
        // 0x2cd638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD63Cu;
    // 0x2cd63c: 0x0  nop
    ctx->pc = 0x2cd63cu;
    // NOP
    ctx->pc = 0x2cd640u;
}
