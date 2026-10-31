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

// Function: sub_0014B4C8
// Address: 0x14b4c8 - 0x14b6b0
void sub_0014B4C8_0x14b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4C8_0x14b4c8");
#endif

    switch (ctx->pc) {
        case 0x14b4f8u: goto label_14b4f8;
        case 0x14b590u: goto label_14b590;
        case 0x14b59cu: goto label_14b59c;
        case 0x14b650u: goto label_14b650;
        case 0x14b65cu: goto label_14b65c;
        case 0x14b678u: goto label_14b678;
        case 0x14b684u: goto label_14b684;
        default: break;
    }

    ctx->pc = 0x14b4c8u;

    // 0x14b4c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b4cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b4d0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x14b4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x14b4d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14b4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14b4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14b4e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b4e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b4ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b4f0: 0xc111590  jal         func_445640
    ctx->pc = 0x14B4F0u;
    SET_GPR_U32(ctx, 31, 0x14B4F8u);
    ctx->pc = 0x14B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4F0u;
    // 0x14b4f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14B4F0u, 0x14B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4F8u;
label_14b4f8:
    // 0x14b4f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B4F8u;
    {
        const bool branch_taken_0x14b4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4F8u;
        // 0x14b4fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4f8) {
            ctx->pc = 0x14B508u;
            goto label_14b508;
        }
    }
    ctx->pc = 0x14B500u;
    // 0x14b500: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x14B500u;
    {
        const bool branch_taken_0x14b500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B500u;
        // 0x14b504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b500) {
            ctx->pc = 0x14B694u;
            goto label_14b694;
        }
    }
    ctx->pc = 0x14B508u;
label_14b508:
    // 0x14b508: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14B508u;
    {
        const bool branch_taken_0x14b508 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b508) {
            ctx->pc = 0x14B56Cu;
            goto label_14b56c;
        }
    }
    ctx->pc = 0x14B510u;
    // 0x14b510: 0x8c45bcd8  lw          $a1, -0x4328($v0)
    ctx->pc = 0x14b510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950104)));
    // 0x14b514: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x14b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14b518: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b51c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b520: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b528: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b52c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b52cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b530: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x14b530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14b534: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B534u;
    {
        const bool branch_taken_0x14b534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B534u;
        // 0x14b538: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b534) {
            ctx->pc = 0x14B550u;
            goto label_14b550;
        }
    }
    ctx->pc = 0x14B53Cu;
    // 0x14b53c: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x14b53cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14b540: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14B540u;
    {
        const bool branch_taken_0x14b540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b540) {
            ctx->pc = 0x14B544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B540u;
            // 0x14b544: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B548u;
            goto label_14b548;
        }
    }
    ctx->pc = 0x14B548u;
label_14b548:
    // 0x14b548: 0x1010  mfhi        $v0
    ctx->pc = 0x14b548u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14b54c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x14b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_14b550:
    // 0x14b550: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14b554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b558: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x14b558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x14b55c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b560: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x14b560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x14b564: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14B564u;
    {
        const bool branch_taken_0x14b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B564u;
        // 0x14b568: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b564) {
            ctx->pc = 0x14B68Cu;
            goto label_14b68c;
        }
    }
    ctx->pc = 0x14B56Cu;
label_14b56c:
    // 0x14b56c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b570: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x14b574: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b578: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b57c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b580: 0x24c6b528  addiu       $a2, $a2, -0x4AD8
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948136));
    // 0x14b584: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b588: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B588u;
    SET_GPR_U32(ctx, 31, 0x14B590u);
    ctx->pc = 0x14B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B588u;
    // 0x14b58c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B588u, 0x14B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B590u;
label_14b590:
    // 0x14b590: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b594: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B594u;
    SET_GPR_U32(ctx, 31, 0x14B59Cu);
    ctx->pc = 0x14B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B594u;
    // 0x14b598: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B594u, 0x14B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B59Cu;
label_14b59c:
    // 0x14b59c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b5a0: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x14b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x14b5a4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x14b5a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b5a8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14B5A8u;
    {
        const bool branch_taken_0x14b5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5A8u;
        // 0x14b5ac: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5a8) {
            ctx->pc = 0x14B62Cu;
            goto label_14b62c;
        }
    }
    ctx->pc = 0x14B5B0u;
    // 0x14b5b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b5b4: 0x2442b570  addiu       $v0, $v0, -0x4A90
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948208));
    // 0x14b5b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b5bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b5c0: 0x800008  jr          $a0
    ctx->pc = 0x14B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B5C8u: goto label_14b5c8;
            case 0x14B5DCu: goto label_14b5dc;
            case 0x14B5F0u: goto label_14b5f0;
            case 0x14B604u: goto label_14b604;
            case 0x14B618u: goto label_14b618;
            case 0x14B62Cu: goto label_14b62c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14B5C8u;
label_14b5c8:
    // 0x14b5c8: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b5cc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b5d0: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b5d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14B5D4u;
    {
        const bool branch_taken_0x14b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5D4u;
        // 0x14b5d8: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5d4) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B5DCu;
label_14b5dc:
    // 0x14b5dc: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b5e0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b5e4: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b5e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14B5E8u;
    {
        const bool branch_taken_0x14b5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5E8u;
        // 0x14b5ec: 0x24c6aaa0  addiu       $a2, $a2, -0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5e8) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B5F0u;
label_14b5f0:
    // 0x14b5f0: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b5f4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b5f8: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b5fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5FCu;
        // 0x14b600: 0x24c6aaf8  addiu       $a2, $a2, -0x5508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B604u;
label_14b604:
    // 0x14b604: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b608: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b60c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b610: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B610u;
    {
        const bool branch_taken_0x14b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B610u;
        // 0x14b614: 0x24c6ab68  addiu       $a2, $a2, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b610) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B618u;
label_14b618:
    // 0x14b618: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b61c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b620: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B624u;
    {
        const bool branch_taken_0x14b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B624u;
        // 0x14b628: 0x24c6ac40  addiu       $a2, $a2, -0x53C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b624) {
            ctx->pc = 0x14B648u;
            goto label_14b648;
        }
    }
    ctx->pc = 0x14B62Cu;
label_14b62c:
    // 0x14b62c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b630: 0x2842fff7  slti        $v0, $v0, -0x9
    ctx->pc = 0x14b630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x14b634: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B634u;
    {
        const bool branch_taken_0x14b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B634u;
        // 0x14b638: 0x8e4269ec  lw          $v0, 0x69EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b634) {
            ctx->pc = 0x14B664u;
            goto label_14b664;
        }
    }
    ctx->pc = 0x14B63Cu;
    // 0x14b63c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b640: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b644: 0x24c6acb8  addiu       $a2, $a2, -0x5348
    ctx->pc = 0x14b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945976));
label_14b648:
    // 0x14b648: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B648u;
    SET_GPR_U32(ctx, 31, 0x14B650u);
    ctx->pc = 0x14B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B648u;
    // 0x14b64c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B648u, 0x14B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B650u;
label_14b650:
    // 0x14b650: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b654: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B654u;
    SET_GPR_U32(ctx, 31, 0x14B65Cu);
    ctx->pc = 0x14B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B654u;
    // 0x14b658: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B654u, 0x14B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B65Cu;
label_14b65c:
    // 0x14b65c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14B65Cu;
    {
        const bool branch_taken_0x14b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B65Cu;
        // 0x14b660: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b65c) {
            ctx->pc = 0x14B690u;
            goto label_14b690;
        }
    }
    ctx->pc = 0x14B664u;
label_14b664:
    // 0x14b664: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b668: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14b66c: 0x24c6acf8  addiu       $a2, $a2, -0x5308
    ctx->pc = 0x14b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946040));
    // 0x14b670: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B670u;
    SET_GPR_U32(ctx, 31, 0x14B678u);
    ctx->pc = 0x14B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B670u;
    // 0x14b674: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B670u, 0x14B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B678u;
label_14b678:
    // 0x14b678: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14b67c: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B67Cu;
    SET_GPR_U32(ctx, 31, 0x14B684u);
    ctx->pc = 0x14B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B67Cu;
    // 0x14b680: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B67Cu, 0x14B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B684u;
label_14b684:
    // 0x14b684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B684u;
    {
        const bool branch_taken_0x14b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B684u;
        // 0x14b688: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b684) {
            ctx->pc = 0x14B690u;
            goto label_14b690;
        }
    }
    ctx->pc = 0x14B68Cu;
label_14b68c:
    // 0x14b68c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x14b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_14b690:
    // 0x14b690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b694:
    // 0x14b694: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b698: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14b698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b69c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b6a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14b6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6A8u;
        // 0x14b6ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6B0u;
}
