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

// Function: sub_003260D8
// Address: 0x3260d8 - 0x3263f0
void sub_003260D8_0x3260d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003260D8_0x3260d8");
#endif

    switch (ctx->pc) {
        case 0x326118u: goto label_326118;
        case 0x326138u: goto label_326138;
        case 0x326148u: goto label_326148;
        case 0x326158u: goto label_326158;
        case 0x32616cu: goto label_32616c;
        case 0x32617cu: goto label_32617c;
        case 0x32618cu: goto label_32618c;
        case 0x32619cu: goto label_32619c;
        case 0x3261b0u: goto label_3261b0;
        case 0x3261c0u: goto label_3261c0;
        case 0x3261dcu: goto label_3261dc;
        case 0x3261ecu: goto label_3261ec;
        case 0x326204u: goto label_326204;
        case 0x326218u: goto label_326218;
        case 0x326220u: goto label_326220;
        case 0x326230u: goto label_326230;
        case 0x32623cu: goto label_32623c;
        case 0x326250u: goto label_326250;
        case 0x326260u: goto label_326260;
        case 0x326270u: goto label_326270;
        case 0x326280u: goto label_326280;
        case 0x32628cu: goto label_32628c;
        case 0x3262a4u: goto label_3262a4;
        case 0x3262b4u: goto label_3262b4;
        case 0x3262d4u: goto label_3262d4;
        case 0x3262e4u: goto label_3262e4;
        case 0x3262f4u: goto label_3262f4;
        case 0x326304u: goto label_326304;
        case 0x326314u: goto label_326314;
        case 0x326350u: goto label_326350;
        case 0x326368u: goto label_326368;
        case 0x326378u: goto label_326378;
        case 0x326388u: goto label_326388;
        case 0x32639cu: goto label_32639c;
        case 0x3263acu: goto label_3263ac;
        default: break;
    }

    ctx->pc = 0x3260d8u;

label_3260d8:
    // 0x3260d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3260d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3260dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3260dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3260e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3260e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3260e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3260e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260e8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3260e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3260ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3260ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3260f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3260f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3260f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3260f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3260fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3260fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x326100: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x326100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x326104: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x326104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x326108: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x326108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x32610c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x32610Cu;
    {
        const bool branch_taken_0x32610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32610Cu;
        // 0x326110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32610c) {
            ctx->pc = 0x326350u;
            goto label_326350;
        }
    }
    ctx->pc = 0x326114u;
    // 0x326114: 0x0  nop
    ctx->pc = 0x326114u;
    // NOP
label_326118:
    // 0x326118: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x326118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x32611c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32611cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326120: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x326120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x326124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32612c: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x32612cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x326130: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326130u;
    SET_GPR_U32(ctx, 31, 0x326138u);
    ctx->pc = 0x326134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326130u;
    // 0x326134: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326130u, 0x326138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326138u;
label_326138:
    // 0x326138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32613c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326140: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326140u;
    SET_GPR_U32(ctx, 31, 0x326148u);
    ctx->pc = 0x326144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326140u;
    // 0x326144: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326140u, 0x326148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326148u;
label_326148:
    // 0x326148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32614c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x32614cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x326150: 0xc0c9808  jal         func_326020
    ctx->pc = 0x326150u;
    SET_GPR_U32(ctx, 31, 0x326158u);
    ctx->pc = 0x326154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326150u;
    // 0x326154: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x326150u, 0x326158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326158u;
label_326158:
    // 0x326158: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326158u;
    {
        const bool branch_taken_0x326158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326158u;
        // 0x32615c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326158) {
            ctx->pc = 0x326174u;
            goto label_326174;
        }
    }
    ctx->pc = 0x326160u;
    // 0x326160: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x326160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326164: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x326164u;
    SET_GPR_U32(ctx, 31, 0x32616Cu);
    ctx->pc = 0x326168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326164u;
    // 0x326168: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x326164u, 0x32616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32616Cu;
label_32616c:
    // 0x32616c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x32616Cu;
    {
        const bool branch_taken_0x32616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32616Cu;
        // 0x326170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32616c) {
            ctx->pc = 0x3261C4u;
            goto label_3261c4;
        }
    }
    ctx->pc = 0x326174u;
label_326174:
    // 0x326174: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x326174u;
    SET_GPR_U32(ctx, 31, 0x32617Cu);
    ctx->pc = 0x326178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326174u;
    // 0x326178: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x326174u, 0x32617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32617Cu;
label_32617c:
    // 0x32617c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326184: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326184u;
    SET_GPR_U32(ctx, 31, 0x32618Cu);
    ctx->pc = 0x326188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326184u;
    // 0x326188: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326184u, 0x32618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32618Cu;
label_32618c:
    // 0x32618c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x326190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326194: 0xc0c9808  jal         func_326020
    ctx->pc = 0x326194u;
    SET_GPR_U32(ctx, 31, 0x32619Cu);
    ctx->pc = 0x326198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326194u;
    // 0x326198: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x326194u, 0x32619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32619Cu;
label_32619c:
    // 0x32619c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32619Cu;
    {
        const bool branch_taken_0x32619c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32619Cu;
        // 0x3261a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32619c) {
            ctx->pc = 0x3261B8u;
            goto label_3261b8;
        }
    }
    ctx->pc = 0x3261A4u;
    // 0x3261a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3261a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261a8: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x3261A8u;
    SET_GPR_U32(ctx, 31, 0x3261B0u);
    ctx->pc = 0x3261ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261A8u;
    // 0x3261ac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x3261A8u, 0x3261B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261B0u;
label_3261b0:
    // 0x3261b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3261B0u;
    {
        const bool branch_taken_0x3261b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261B0u;
        // 0x3261b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261b0) {
            ctx->pc = 0x3261C4u;
            goto label_3261c4;
        }
    }
    ctx->pc = 0x3261B8u;
label_3261b8:
    // 0x3261b8: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x3261B8u;
    SET_GPR_U32(ctx, 31, 0x3261C0u);
    ctx->pc = 0x3261BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261B8u;
    // 0x3261bc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x3261B8u, 0x3261C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261C0u;
label_3261c0:
    // 0x3261c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3261c4:
    // 0x3261c4: 0x1202007d  beq         $s0, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3261C4u;
    {
        const bool branch_taken_0x3261c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3261C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261C4u;
        // 0x3261c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261c4) {
            ctx->pc = 0x3263BCu;
            goto label_3263bc;
        }
    }
    ctx->pc = 0x3261CCu;
    // 0x3261cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3261ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3261d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3261d4: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x3261D4u;
    SET_GPR_U32(ctx, 31, 0x3261DCu);
    ctx->pc = 0x3261D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261D4u;
    // 0x3261d8: 0x26b0ffff  addiu       $s0, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x3261D4u, 0x3261DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261DCu;
label_3261dc:
    // 0x3261dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3261dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3261e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261e4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3261E4u;
    SET_GPR_U32(ctx, 31, 0x3261ECu);
    ctx->pc = 0x3261E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261E4u;
    // 0x3261e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3261E4u, 0x3261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261ECu;
label_3261ec:
    // 0x3261ec: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3261ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3261f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3261f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3261f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3261f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261fc: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x3261FCu;
    SET_GPR_U32(ctx, 31, 0x326204u);
    ctx->pc = 0x326200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261FCu;
    // 0x326200: 0x3c1e0057  lui         $fp, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x3261FCu, 0x326204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326204u;
label_326204:
    // 0x326204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x326204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32620c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32620cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326210: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x326210u;
    SET_GPR_U32(ctx, 31, 0x326218u);
    ctx->pc = 0x326214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326210u;
    // 0x326214: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x326210u, 0x326218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326218u;
label_326218:
    // 0x326218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326218u;
    {
        const bool branch_taken_0x326218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326218u;
        // 0x32621c: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326218) {
            ctx->pc = 0x32623Cu;
            goto label_32623c;
        }
    }
    ctx->pc = 0x326220u;
label_326220:
    // 0x326220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326220u;
    {
        const bool branch_taken_0x326220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326220u;
        // 0x326224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326220) {
            ctx->pc = 0x326230u;
            goto label_326230;
        }
    }
    ctx->pc = 0x326228u;
    // 0x326228: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x326228u;
    SET_GPR_U32(ctx, 31, 0x326230u);
    ctx->pc = 0x32622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326228u;
    // 0x32622c: 0x27c54b70  addiu       $a1, $fp, 0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 19312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x326228u, 0x326230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326230u;
label_326230:
    // 0x326230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326234: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x326234u;
    SET_GPR_U32(ctx, 31, 0x32623Cu);
    ctx->pc = 0x326238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326234u;
    // 0x326238: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x326234u, 0x32623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32623Cu;
label_32623c:
    // 0x32623c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326248: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326248u;
    SET_GPR_U32(ctx, 31, 0x326250u);
    ctx->pc = 0x32624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326248u;
    // 0x32624c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326248u, 0x326250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326250u;
label_326250:
    // 0x326250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x326254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326258: 0xc0c9808  jal         func_326020
    ctx->pc = 0x326258u;
    SET_GPR_U32(ctx, 31, 0x326260u);
    ctx->pc = 0x32625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326258u;
    // 0x32625c: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x326258u, 0x326260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326260u;
label_326260:
    // 0x326260: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x326260u;
    {
        const bool branch_taken_0x326260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326260u;
        // 0x326264: 0x2b3102a  slt         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326260) {
            ctx->pc = 0x326220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326220;
        }
    }
    ctx->pc = 0x326268u;
    // 0x326268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x326268u;
    {
        const bool branch_taken_0x326268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326268u;
        // 0x32626c: 0x3c160057  lui         $s6, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326268) {
            ctx->pc = 0x326290u;
            goto label_326290;
        }
    }
    ctx->pc = 0x326270u;
label_326270:
    // 0x326270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326270u;
    {
        const bool branch_taken_0x326270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326270u;
        // 0x326274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326270) {
            ctx->pc = 0x326280u;
            goto label_326280;
        }
    }
    ctx->pc = 0x326278u;
    // 0x326278: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x326278u;
    SET_GPR_U32(ctx, 31, 0x326280u);
    ctx->pc = 0x32627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326278u;
    // 0x32627c: 0x26c54b70  addiu       $a1, $s6, 0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 19312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x326278u, 0x326280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326280u;
label_326280:
    // 0x326280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326284: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x326284u;
    SET_GPR_U32(ctx, 31, 0x32628Cu);
    ctx->pc = 0x326288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326284u;
    // 0x326288: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x326284u, 0x32628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32628Cu;
label_32628c:
    // 0x32628c: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x32628cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_326290:
    // 0x326290: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x326290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32629c: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x32629Cu;
    SET_GPR_U32(ctx, 31, 0x3262A4u);
    ctx->pc = 0x3262A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32629Cu;
    // 0x3262a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x32629Cu, 0x3262A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262A4u;
label_3262a4:
    // 0x3262a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3262a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262a8: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x3262a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3262ac: 0xc0c9808  jal         func_326020
    ctx->pc = 0x3262ACu;
    SET_GPR_U32(ctx, 31, 0x3262B4u);
    ctx->pc = 0x3262B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262ACu;
    // 0x3262b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x3262ACu, 0x3262B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262B4u;
label_3262b4:
    // 0x3262b4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3262B4u;
    {
        const bool branch_taken_0x3262b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3262B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262B4u;
        // 0x3262b8: 0x234102a  slt         $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262b4) {
            ctx->pc = 0x326270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326270;
        }
    }
    ctx->pc = 0x3262BCu;
    // 0x3262bc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3262bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3262c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3262C0u;
    {
        const bool branch_taken_0x3262c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262C0u;
        // 0x3262c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262c0) {
            ctx->pc = 0x3262DCu;
            goto label_3262dc;
        }
    }
    ctx->pc = 0x3262C8u;
    // 0x3262c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3262c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262cc: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x3262CCu;
    SET_GPR_U32(ctx, 31, 0x3262D4u);
    ctx->pc = 0x3262D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262CCu;
    // 0x3262d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x3262CCu, 0x3262D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262D4u;
label_3262d4:
    // 0x3262d4: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x3262D4u;
    {
        const bool branch_taken_0x3262d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3262D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262D4u;
        // 0x3262d8: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262d4) {
            ctx->pc = 0x32623Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32623c;
        }
    }
    ctx->pc = 0x3262DCu;
label_3262dc:
    // 0x3262dc: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x3262DCu;
    SET_GPR_U32(ctx, 31, 0x3262E4u);
    ctx->pc = 0x3262E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262DCu;
    // 0x3262e0: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x3262DCu, 0x3262E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262E4u;
label_3262e4:
    // 0x3262e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3262e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3262e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3262ec: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x3262ECu;
    SET_GPR_U32(ctx, 31, 0x3262F4u);
    ctx->pc = 0x3262F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262ECu;
    // 0x3262f0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x3262ECu, 0x3262F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262F4u;
label_3262f4:
    // 0x3262f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3262f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3262fc: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x3262FCu;
    SET_GPR_U32(ctx, 31, 0x326304u);
    ctx->pc = 0x326300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262FCu;
    // 0x326300: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x3262FCu, 0x326304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326304u;
label_326304:
    // 0x326304: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x326304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32630c: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x32630Cu;
    SET_GPR_U32(ctx, 31, 0x326314u);
    ctx->pc = 0x326310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32630Cu;
    // 0x326310: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x32630Cu, 0x326314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326314u;
label_326314:
    // 0x326314: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x326314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x326318: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x326318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x32631c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x326320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326320u;
    {
        const bool branch_taken_0x326320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326320u;
        // 0x326324: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326320) {
            ctx->pc = 0x326334u;
            goto label_326334;
        }
    }
    ctx->pc = 0x326328u;
    // 0x326328: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x326328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x32632c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32632Cu;
    {
        const bool branch_taken_0x32632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32632Cu;
        // 0x326330: 0x26740002  addiu       $s4, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32632c) {
            ctx->pc = 0x326340u;
            goto label_326340;
        }
    }
    ctx->pc = 0x326334u;
label_326334:
    // 0x326334: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x326334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326338: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x326338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32633c: 0x2635fffe  addiu       $s5, $s1, -0x2
    ctx->pc = 0x32633cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_326340:
    // 0x326340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x326340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326344: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326348: 0xc0c9836  jal         func_3260D8
    ctx->pc = 0x326348u;
    SET_GPR_U32(ctx, 31, 0x326350u);
    ctx->pc = 0x32634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326348u;
    // 0x32634c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260D8u;
    goto label_3260d8;
    ctx->pc = 0x326350u;
label_326350:
    // 0x326350: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x326350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x326354: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x326354u;
    {
        const bool branch_taken_0x326354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326354u;
        // 0x326358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326354) {
            ctx->pc = 0x3263BCu;
            goto label_3263bc;
        }
    }
    ctx->pc = 0x32635Cu;
    // 0x32635c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326360: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326360u;
    SET_GPR_U32(ctx, 31, 0x326368u);
    ctx->pc = 0x326364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326360u;
    // 0x326364: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326360u, 0x326368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326368u;
label_326368:
    // 0x326368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32636c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32636cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326370: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x326370u;
    SET_GPR_U32(ctx, 31, 0x326378u);
    ctx->pc = 0x326374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326370u;
    // 0x326374: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x326370u, 0x326378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326378u;
label_326378:
    // 0x326378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32637c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326380: 0xc0c9808  jal         func_326020
    ctx->pc = 0x326380u;
    SET_GPR_U32(ctx, 31, 0x326388u);
    ctx->pc = 0x326384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326380u;
    // 0x326384: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x326380u, 0x326388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326388u;
label_326388:
    // 0x326388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326388u;
    {
        const bool branch_taken_0x326388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326388u;
        // 0x32638c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326388) {
            ctx->pc = 0x3263A4u;
            goto label_3263a4;
        }
    }
    ctx->pc = 0x326390u;
    // 0x326390: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x326390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326394: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x326394u;
    SET_GPR_U32(ctx, 31, 0x32639Cu);
    ctx->pc = 0x326398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326394u;
    // 0x326398: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x326394u, 0x32639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32639Cu;
label_32639c:
    // 0x32639c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32639Cu;
    {
        const bool branch_taken_0x32639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32639Cu;
        // 0x3263a0: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32639c) {
            ctx->pc = 0x3263B0u;
            goto label_3263b0;
        }
    }
    ctx->pc = 0x3263A4u;
label_3263a4:
    // 0x3263a4: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x3263A4u;
    SET_GPR_U32(ctx, 31, 0x3263ACu);
    ctx->pc = 0x3263A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263A4u;
    // 0x3263a8: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x3263A4u, 0x3263ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263ACu;
label_3263ac:
    // 0x3263ac: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_3263b0:
    // 0x3263b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3263b4: 0x1443ff58  bne         $v0, $v1, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x3263B4u;
    {
        const bool branch_taken_0x3263b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3263B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263B4u;
        // 0x3263b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263b4) {
            ctx->pc = 0x326118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326118;
        }
    }
    ctx->pc = 0x3263BCu;
label_3263bc:
    // 0x3263bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3263bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3263c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3263c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3263c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3263c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3263c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3263c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3263cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3263ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3263d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3263d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3263d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3263d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3263d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3263d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3263dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3263e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3263e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3263e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3263E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3263E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263E4u;
        // 0x3263e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3263E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3263ECu;
    // 0x3263ec: 0x0  nop
    ctx->pc = 0x3263ecu;
    // NOP
    ctx->pc = 0x3263f0u;
}
