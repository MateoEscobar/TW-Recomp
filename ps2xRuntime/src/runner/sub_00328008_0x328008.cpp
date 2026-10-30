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

// Function: sub_00328008
// Address: 0x328008 - 0x328190
void sub_00328008_0x328008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328008_0x328008");
#endif

    switch (ctx->pc) {
        case 0x328058u: goto label_328058;
        case 0x328098u: goto label_328098;
        case 0x3280a8u: goto label_3280a8;
        case 0x3280b8u: goto label_3280b8;
        case 0x3280d4u: goto label_3280d4;
        case 0x3280fcu: goto label_3280fc;
        case 0x328110u: goto label_328110;
        case 0x32812cu: goto label_32812c;
        default: break;
    }

    ctx->pc = 0x328008u;

    // 0x328008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x328008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32800c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x328010: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x328010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x328014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328018: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x328018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32801c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x328020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x328020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328024: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x328024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x328028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32802c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x32802cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x328030: 0x3842003e  xori        $v0, $v0, 0x3E
    ctx->pc = 0x328030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)62);
    // 0x328034: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x328034u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x328038: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x328038u;
    {
        const bool branch_taken_0x328038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328038u;
        // 0x32803c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328038) {
            ctx->pc = 0x328048u;
            goto label_328048;
        }
    }
    ctx->pc = 0x328040u;
    // 0x328040: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x328040u;
    {
        const bool branch_taken_0x328040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328040u;
        // 0x328044: 0x8e51005c  lw          $s1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328040) {
            ctx->pc = 0x328148u;
            goto label_328148;
        }
    }
    ctx->pc = 0x328048u;
label_328048:
    // 0x328048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32804c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32804cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x328050: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x328050u;
    {
        const bool branch_taken_0x328050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328050u;
        // 0x328054: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328050) {
            ctx->pc = 0x328148u;
            goto label_328148;
        }
    }
    ctx->pc = 0x328058u;
label_328058:
    // 0x328058: 0x2462ffad  addiu       $v0, $v1, -0x53
    ctx->pc = 0x328058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967213));
    // 0x32805c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32805cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x328060: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x328060u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x328064: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x328064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x328068: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x328068u;
    {
        const bool branch_taken_0x328068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328068u;
        // 0x32806c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328068) {
            ctx->pc = 0x32813Cu;
            goto label_32813c;
        }
    }
    ctx->pc = 0x328070u;
    // 0x328070: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x328070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x328074: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x328074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
    // 0x328078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x328078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32807c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32807cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328080: 0x800008  jr          $a0
    ctx->pc = 0x328080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x328088u: goto label_328088;
            case 0x3280A0u: goto label_3280a0;
            case 0x3280B0u: goto label_3280b0;
            case 0x3280C0u: goto label_3280c0;
            case 0x328104u: goto label_328104;
            case 0x32813Cu: goto label_32813c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x328088u;
label_328088:
    // 0x328088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32808c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328090: 0xc0c9f68  jal         func_327DA0
    ctx->pc = 0x328090u;
    SET_GPR_U32(ctx, 31, 0x328098u);
    ctx->pc = 0x328094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328090u;
    // 0x328094: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327DA0u, 0x328090u, 0x328098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328098u;
label_328098:
    // 0x328098: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x328098u;
    {
        const bool branch_taken_0x328098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328098u;
        // 0x32809c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328098) {
            ctx->pc = 0x328148u;
            goto label_328148;
        }
    }
    ctx->pc = 0x3280A0u;
label_3280a0:
    // 0x3280a0: 0xc0c9f46  jal         func_327D18
    ctx->pc = 0x3280A0u;
    SET_GPR_U32(ctx, 31, 0x3280A8u);
    ctx->pc = 0x3280A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280A0u;
    // 0x3280a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D18u, 0x3280A0u, 0x3280A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280A8u;
label_3280a8:
    // 0x3280a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3280A8u;
    {
        const bool branch_taken_0x3280a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280A8u;
        // 0x3280ac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280a8) {
            ctx->pc = 0x328144u;
            goto label_328144;
        }
    }
    ctx->pc = 0x3280B0u;
label_3280b0:
    // 0x3280b0: 0xc0c9ef0  jal         func_327BC0
    ctx->pc = 0x3280B0u;
    SET_GPR_U32(ctx, 31, 0x3280B8u);
    ctx->pc = 0x3280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280B0u;
    // 0x3280b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327BC0u, 0x3280B0u, 0x3280B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280B8u;
label_3280b8:
    // 0x3280b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3280B8u;
    {
        const bool branch_taken_0x3280b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B8u;
        // 0x3280bc: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280b8) {
            ctx->pc = 0x328144u;
            goto label_328144;
        }
    }
    ctx->pc = 0x3280C0u;
label_3280c0:
    // 0x3280c0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3280C0u;
    {
        const bool branch_taken_0x3280c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280C0u;
        // 0x3280c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280c0) {
            ctx->pc = 0x3280DCu;
            goto label_3280dc;
        }
    }
    ctx->pc = 0x3280C8u;
    // 0x3280c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3280c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280cc: 0xc0ca142  jal         func_328508
    ctx->pc = 0x3280CCu;
    SET_GPR_U32(ctx, 31, 0x3280D4u);
    ctx->pc = 0x3280D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280CCu;
    // 0x3280d0: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328508u, 0x3280CCu, 0x3280D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280D4u;
label_3280d4:
    // 0x3280d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3280D4u;
    {
        const bool branch_taken_0x3280d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D4u;
        // 0x3280d8: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280d4) {
            ctx->pc = 0x3280E4u;
            goto label_3280e4;
        }
    }
    ctx->pc = 0x3280DCu;
label_3280dc:
    // 0x3280dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3280dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280e0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3280e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3280e4:
    // 0x3280e4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3280E4u;
    {
        const bool branch_taken_0x3280e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3280e4) {
            ctx->pc = 0x3280E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3280E4u;
            // 0x3280e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328148u;
            goto label_328148;
        }
    }
    ctx->pc = 0x3280ECu;
    // 0x3280ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3280ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3280f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280f4: 0xc0c9fe2  jal         func_327F88
    ctx->pc = 0x3280F4u;
    SET_GPR_U32(ctx, 31, 0x3280FCu);
    ctx->pc = 0x3280F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280F4u;
    // 0x3280f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327F88u, 0x3280F4u, 0x3280FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280FCu;
label_3280fc:
    // 0x3280fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3280FCu;
    {
        const bool branch_taken_0x3280fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280FCu;
        // 0x328100: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280fc) {
            ctx->pc = 0x328148u;
            goto label_328148;
        }
    }
    ctx->pc = 0x328104u;
label_328104:
    // 0x328104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x328104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328108: 0xc0c9eae  jal         func_327AB8
    ctx->pc = 0x328108u;
    SET_GPR_U32(ctx, 31, 0x328110u);
    ctx->pc = 0x32810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328108u;
    // 0x32810c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327AB8u, 0x328108u, 0x328110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328110u;
label_328110:
    // 0x328110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x328110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328114: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328118: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328118u;
    {
        const bool branch_taken_0x328118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328118) {
            ctx->pc = 0x32811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328118u;
            // 0x32811c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328130u;
            goto label_328130;
        }
    }
    ctx->pc = 0x328120u;
    // 0x328120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328124: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x328124u;
    SET_GPR_U32(ctx, 31, 0x32812Cu);
    ctx->pc = 0x328128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328124u;
    // 0x328128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x328124u, 0x32812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32812Cu;
label_32812c:
    // 0x32812c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328130:
    // 0x328130: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x328134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x328134u;
    {
        const bool branch_taken_0x328134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328134u;
        // 0x328138: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328134) {
            ctx->pc = 0x328144u;
            goto label_328144;
        }
    }
    ctx->pc = 0x32813Cu;
label_32813c:
    // 0x32813c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32813Cu;
    {
        const bool branch_taken_0x32813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32813Cu;
        // 0x328140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32813c) {
            ctx->pc = 0x32816Cu;
            goto label_32816c;
        }
    }
    ctx->pc = 0x328144u;
label_328144:
    // 0x328144: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x328144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_328148:
    // 0x328148: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x328148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32814c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x32814Cu;
    {
        const bool branch_taken_0x32814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32814Cu;
        // 0x328150: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32814c) {
            ctx->pc = 0x328058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328058;
        }
    }
    ctx->pc = 0x328154u;
    // 0x328154: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x328154u;
    {
        const bool branch_taken_0x328154 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x328158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328154u;
        // 0x328158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328154) {
            ctx->pc = 0x32816Cu;
            goto label_32816c;
        }
    }
    ctx->pc = 0x32815Cu;
    // 0x32815c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328160: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x328160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x328164: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x328164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x328168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32816c:
    // 0x32816c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32816cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328170: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x328170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x328174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328178: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x328178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32817c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32817cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328184: 0x3e00008  jr          $ra
    ctx->pc = 0x328184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328184u;
        // 0x328188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32818Cu;
    // 0x32818c: 0x0  nop
    ctx->pc = 0x32818cu;
    // NOP
    ctx->pc = 0x328190u;
}
