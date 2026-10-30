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

// Function: sub_002977C8
// Address: 0x2977c8 - 0x2978f8
void sub_002977C8_0x2977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002977C8_0x2977c8");
#endif

    switch (ctx->pc) {
        case 0x2977e4u: goto label_2977e4;
        case 0x2977f8u: goto label_2977f8;
        case 0x29780cu: goto label_29780c;
        case 0x297848u: goto label_297848;
        case 0x297888u: goto label_297888;
        case 0x297894u: goto label_297894;
        default: break;
    }

    ctx->pc = 0x2977c8u;

    // 0x2977c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2977cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2977ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2977d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2977d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2977d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2977d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2977d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2977d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977dc: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x2977DCu;
    SET_GPR_U32(ctx, 31, 0x2977E4u);
    ctx->pc = 0x2977E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977DCu;
    // 0x2977e0: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x2977DCu, 0x2977E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977E4u;
label_2977e4:
    // 0x2977e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2977e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977e8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2977E8u;
    {
        const bool branch_taken_0x2977e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2977ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977E8u;
        // 0x2977ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977e8) {
            ctx->pc = 0x297814u;
            goto label_297814;
        }
    }
    ctx->pc = 0x2977F0u;
    // 0x2977f0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2977F0u;
    SET_GPR_U32(ctx, 31, 0x2977F8u);
    ctx->pc = 0x2977F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977F0u;
    // 0x2977f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2977F0u, 0x2977F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977F8u;
label_2977f8:
    // 0x2977f8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2977f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2977fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2977FCu;
    {
        const bool branch_taken_0x2977fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977FCu;
        // 0x297800: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977fc) {
            ctx->pc = 0x297814u;
            goto label_297814;
        }
    }
    ctx->pc = 0x297804u;
    // 0x297804: 0xc088e88  jal         func_223A20
    ctx->pc = 0x297804u;
    SET_GPR_U32(ctx, 31, 0x29780Cu);
    ctx->pc = 0x297808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297804u;
    // 0x297808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x297804u, 0x29780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29780Cu;
label_29780c:
    // 0x29780c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x29780Cu;
    {
        const bool branch_taken_0x29780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29780Cu;
        // 0x297810: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29780c) {
            ctx->pc = 0x2978E0u;
            goto label_2978e0;
        }
    }
    ctx->pc = 0x297814u;
label_297814:
    // 0x297814: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x297814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29781c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29781cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297820: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x297820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
    // 0x297824: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x297824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x297828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29782c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29782cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297830: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x297830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297834: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x297834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x297838: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x297838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29783c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x297840: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x297840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297844: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x297844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_297848:
    // 0x297848: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29784c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29784Cu;
    {
        const bool branch_taken_0x29784c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x297850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29784Cu;
        // 0x297850: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29784c) {
            ctx->pc = 0x297870u;
            goto label_297870;
        }
    }
    ctx->pc = 0x297854u;
    // 0x297854: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x297854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297858: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x297858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29785c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x29785cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x297860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x297864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297868: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x297868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29786c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x29786cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_297870:
    // 0x297870: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x297874: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x297874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x297878: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x297878u;
    {
        const bool branch_taken_0x297878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297878u;
        // 0x29787c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297878) {
            ctx->pc = 0x297848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297848;
        }
    }
    ctx->pc = 0x297880u;
    // 0x297880: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x297880u;
    SET_GPR_U32(ctx, 31, 0x297888u);
    ctx->pc = 0x297884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297880u;
    // 0x297884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297880u, 0x297888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297888u;
label_297888:
    // 0x297888: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29788c: 0xc0a67b8  jal         func_299EE0
    ctx->pc = 0x29788Cu;
    SET_GPR_U32(ctx, 31, 0x297894u);
    ctx->pc = 0x297890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29788Cu;
    // 0x297890: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x29788Cu, 0x297894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297894u;
label_297894:
    // 0x297894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297898: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x297898u;
    {
        const bool branch_taken_0x297898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297898u;
        // 0x29789c: 0x92230014  lbu         $v1, 0x14($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297898) {
            ctx->pc = 0x2978C0u;
            goto label_2978c0;
        }
    }
    ctx->pc = 0x2978A0u;
    // 0x2978a0: 0x26020b00  addiu       $v0, $s0, 0xB00
    ctx->pc = 0x2978a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
    // 0x2978a4: 0x96250016  lhu         $a1, 0x16($s1)
    ctx->pc = 0x2978a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2978a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2978ac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2978acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2978b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2978b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2978b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2978b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2978B8u;
    {
        const bool branch_taken_0x2978b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978B8u;
        // 0x2978bc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978b8) {
            ctx->pc = 0x2978DCu;
            goto label_2978dc;
        }
    }
    ctx->pc = 0x2978C0u;
label_2978c0:
    // 0x2978c0: 0x26020b00  addiu       $v0, $s0, 0xB00
    ctx->pc = 0x2978c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
    // 0x2978c4: 0x96250016  lhu         $a1, 0x16($s1)
    ctx->pc = 0x2978c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2978c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2978c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2978cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2978ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2978d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2978d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2978d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2978d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2978d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2978dc:
    // 0x2978dc: 0xa6250016  sh          $a1, 0x16($s1)
    ctx->pc = 0x2978dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 5));
label_2978e0:
    // 0x2978e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2978e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2978e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2978e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2978ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2978ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2978F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978ECu;
        // 0x2978f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2978ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2978F4u;
    // 0x2978f4: 0x0  nop
    ctx->pc = 0x2978f4u;
    // NOP
    ctx->pc = 0x2978f8u;
}
