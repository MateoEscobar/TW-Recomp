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

// Function: sub_00409068
// Address: 0x409068 - 0x4091c8
void sub_00409068_0x409068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409068_0x409068");
#endif

    switch (ctx->pc) {
        case 0x4090acu: goto label_4090ac;
        case 0x4090b8u: goto label_4090b8;
        case 0x4090ccu: goto label_4090cc;
        case 0x4090d8u: goto label_4090d8;
        case 0x4090e8u: goto label_4090e8;
        case 0x40910cu: goto label_40910c;
        case 0x40911cu: goto label_40911c;
        case 0x409124u: goto label_409124;
        case 0x409134u: goto label_409134;
        case 0x409154u: goto label_409154;
        case 0x409180u: goto label_409180;
        case 0x40918cu: goto label_40918c;
        case 0x4091a0u: goto label_4091a0;
        default: break;
    }

    ctx->pc = 0x409068u;

    // 0x409068: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x409068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x40906c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x40906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x409070: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x409070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x409074: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x409074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x409078: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x409078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x40907c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40907cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409080: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x409080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x409084: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x409084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x409088: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x409088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x40908c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x40908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x409090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409094: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x409094u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x409098: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x409098u;
    {
        const bool branch_taken_0x409098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409098u;
        // 0x40909c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409098) {
            ctx->pc = 0x409194u;
            goto label_409194;
        }
    }
    ctx->pc = 0x4090A0u;
    // 0x4090a0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4090a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4090a4: 0xc102866  jal         func_40A198
    ctx->pc = 0x4090A4u;
    SET_GPR_U32(ctx, 31, 0x4090ACu);
    ctx->pc = 0x4090A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4090A4u;
    // 0x4090a8: 0x24a57f10  addiu       $a1, $a1, 0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x4090A4u, 0x4090ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4090ACu;
label_4090ac:
    // 0x4090ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4090acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4090b0: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x4090B0u;
    SET_GPR_U32(ctx, 31, 0x4090B8u);
    ctx->pc = 0x4090B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4090B0u;
    // 0x4090b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x4090B0u, 0x4090B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4090B8u;
label_4090b8:
    // 0x4090b8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4090b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4090bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4090bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090c0: 0x24a57f28  addiu       $a1, $a1, 0x7F28
    ctx->pc = 0x4090c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32552));
    // 0x4090c4: 0xc102866  jal         func_40A198
    ctx->pc = 0x4090C4u;
    SET_GPR_U32(ctx, 31, 0x4090CCu);
    ctx->pc = 0x4090C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4090C4u;
    // 0x4090c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x4090C4u, 0x4090CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4090CCu;
label_4090cc:
    // 0x4090cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4090ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090d0: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x4090D0u;
    SET_GPR_U32(ctx, 31, 0x4090D8u);
    ctx->pc = 0x4090D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4090D0u;
    // 0x4090d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x4090D0u, 0x4090D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4090D8u;
label_4090d8:
    // 0x4090d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4090d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4090dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090e0: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x4090E0u;
    SET_GPR_U32(ctx, 31, 0x4090E8u);
    ctx->pc = 0x4090E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4090E0u;
    // 0x4090e4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x4090E0u, 0x4090E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4090E8u;
label_4090e8:
    // 0x4090e8: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x4090e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x4090ec: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x4090ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x4090f0: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4090F0u;
    {
        const bool branch_taken_0x4090f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4090F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4090F0u;
        // 0x4090f4: 0x24020076  addiu       $v0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4090f0) {
            ctx->pc = 0x40915Cu;
            goto label_40915c;
        }
    }
    ctx->pc = 0x4090F8u;
    // 0x4090f8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4090f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4090fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4090fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409100: 0x24a57f00  addiu       $a1, $a1, 0x7F00
    ctx->pc = 0x409100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    // 0x409104: 0xc102866  jal         func_40A198
    ctx->pc = 0x409104u;
    SET_GPR_U32(ctx, 31, 0x40910Cu);
    ctx->pc = 0x409108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409104u;
    // 0x409108: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x409104u, 0x40910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40910Cu;
label_40910c:
    // 0x40910c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x40910cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x409110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x409114: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x409114u;
    SET_GPR_U32(ctx, 31, 0x40911Cu);
    ctx->pc = 0x409118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409114u;
    // 0x409118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x409114u, 0x40911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40911Cu;
label_40911c:
    // 0x40911c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40911Cu;
    SET_GPR_U32(ctx, 31, 0x409124u);
    ctx->pc = 0x409120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40911Cu;
    // 0x409120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40911Cu, 0x409124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409124u;
label_409124:
    // 0x409124: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x409124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x409128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x409128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40912c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40912Cu;
    SET_GPR_U32(ctx, 31, 0x409134u);
    ctx->pc = 0x409130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40912Cu;
    // 0x409130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40912Cu, 0x409134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409134u;
label_409134:
    // 0x409134: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409138: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x409138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x40913c: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x40913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
    // 0x409140: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x409140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409144: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x409144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409148: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x409148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40914c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x40914Cu;
    SET_GPR_U32(ctx, 31, 0x409154u);
    ctx->pc = 0x409150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40914Cu;
    // 0x409150: 0x262431d0  addiu       $a0, $s1, 0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x40914Cu, 0x409154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409154u;
label_409154:
    // 0x409154: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x409154u;
    {
        const bool branch_taken_0x409154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409154u;
        // 0x409158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409154) {
            ctx->pc = 0x409184u;
            goto label_409184;
        }
    }
    ctx->pc = 0x40915Cu;
label_40915c:
    // 0x40915c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40915Cu;
    {
        const bool branch_taken_0x40915c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x409160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40915Cu;
        // 0x409160: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40915c) {
            ctx->pc = 0x409180u;
            goto label_409180;
        }
    }
    ctx->pc = 0x409164u;
    // 0x409164: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409168: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x409168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x40916c: 0x24a57f70  addiu       $a1, $a1, 0x7F70
    ctx->pc = 0x40916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32624));
    // 0x409170: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x409170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409174: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x409174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409178: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x409178u;
    SET_GPR_U32(ctx, 31, 0x409180u);
    ctx->pc = 0x40917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409178u;
    // 0x40917c: 0x26c431d0  addiu       $a0, $s6, 0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x409178u, 0x409180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409180u;
label_409180:
    // 0x409180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x409180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409184:
    // 0x409184: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x409184u;
    SET_GPR_U32(ctx, 31, 0x40918Cu);
    ctx->pc = 0x409188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409184u;
    // 0x409188: 0x26c531d0  addiu       $a1, $s6, 0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 12752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x409184u, 0x40918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40918Cu;
label_40918c:
    // 0x40918c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40918Cu;
    {
        const bool branch_taken_0x40918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40918Cu;
        // 0x409190: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40918c) {
            ctx->pc = 0x4091A4u;
            goto label_4091a4;
        }
    }
    ctx->pc = 0x409194u;
label_409194:
    // 0x409194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x409194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409198: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x409198u;
    SET_GPR_U32(ctx, 31, 0x4091A0u);
    ctx->pc = 0x40919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409198u;
    // 0x40919c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x409198u, 0x4091A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4091A0u;
label_4091a0:
    // 0x4091a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4091a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4091a4:
    // 0x4091a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4091a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4091a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4091a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4091ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4091acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4091b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4091b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4091b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4091b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4091b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4091b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4091bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4091bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4091c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4091C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4091C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4091C0u;
        // 0x4091c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4091C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4091C8u;
}
