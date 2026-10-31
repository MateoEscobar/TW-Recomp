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

// Function: sub_0037A4A8
// Address: 0x37a4a8 - 0x37a5c8
void sub_0037A4A8_0x37a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A4A8_0x37a4a8");
#endif

    switch (ctx->pc) {
        case 0x37a4dcu: goto label_37a4dc;
        case 0x37a4e4u: goto label_37a4e4;
        case 0x37a4f8u: goto label_37a4f8;
        case 0x37a500u: goto label_37a500;
        case 0x37a514u: goto label_37a514;
        case 0x37a520u: goto label_37a520;
        case 0x37a538u: goto label_37a538;
        case 0x37a540u: goto label_37a540;
        case 0x37a564u: goto label_37a564;
        case 0x37a570u: goto label_37a570;
        case 0x37a580u: goto label_37a580;
        case 0x37a594u: goto label_37a594;
        default: break;
    }

    ctx->pc = 0x37a4a8u;

    // 0x37a4a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37a4ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a4b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37a4b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37a4b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37a4c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37a4c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37a4cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37a4d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a4d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A4D4u;
    SET_GPR_U32(ctx, 31, 0x37A4DCu);
    ctx->pc = 0x37A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4D4u;
    // 0x37a4d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A4D4u, 0x37A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A4DCu;
label_37a4dc:
    // 0x37a4dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A4DCu;
    SET_GPR_U32(ctx, 31, 0x37A4E4u);
    ctx->pc = 0x37A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4DCu;
    // 0x37a4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A4DCu, 0x37A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A4E4u;
label_37a4e4:
    // 0x37a4e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a4ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A4F0u;
    SET_GPR_U32(ctx, 31, 0x37A4F8u);
    ctx->pc = 0x37A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4F0u;
    // 0x37a4f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A4F0u, 0x37A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A4F8u;
label_37a4f8:
    // 0x37a4f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A4F8u;
    SET_GPR_U32(ctx, 31, 0x37A500u);
    ctx->pc = 0x37A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4F8u;
    // 0x37a4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A4F8u, 0x37A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A500u;
label_37a500:
    // 0x37a500: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37a500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a508: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37a508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a50c: 0xc102488  jal         func_409220
    ctx->pc = 0x37A50Cu;
    SET_GPR_U32(ctx, 31, 0x37A514u);
    ctx->pc = 0x37A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A50Cu;
    // 0x37a510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37A50Cu, 0x37A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A514u;
label_37a514:
    // 0x37a514: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37a514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a518: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a51c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37a51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a520:
    // 0x37a520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a52c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a530: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37A530u;
    SET_GPR_U32(ctx, 31, 0x37A538u);
    ctx->pc = 0x37A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A530u;
    // 0x37a534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37A530u, 0x37A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A538u;
label_37a538:
    // 0x37a538: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A538u;
    SET_GPR_U32(ctx, 31, 0x37A540u);
    ctx->pc = 0x37A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A538u;
    // 0x37a53c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A538u, 0x37A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A540u;
label_37a540:
    // 0x37a540: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37a540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a544: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a548: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A548u;
    {
        const bool branch_taken_0x37a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A548u;
        // 0x37a54c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a548) {
            ctx->pc = 0x37A520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a520;
        }
    }
    ctx->pc = 0x37A550u;
    // 0x37a550: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x37a550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a554: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37a554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a558: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x37a558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a55c: 0xc106de8  jal         func_41B7A0
    ctx->pc = 0x37A55Cu;
    SET_GPR_U32(ctx, 31, 0x37A564u);
    ctx->pc = 0x37A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A55Cu;
    // 0x37a560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B7A0u, 0x37A55Cu, 0x37A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A564u;
label_37a564:
    // 0x37a564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a568: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37a568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37a56c: 0x0  nop
    ctx->pc = 0x37a56cu;
    // NOP
label_37a570:
    // 0x37a570: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37a574: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a578: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37A578u;
    SET_GPR_U32(ctx, 31, 0x37A580u);
    ctx->pc = 0x37A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A578u;
    // 0x37a57c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37A578u, 0x37A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A580u;
label_37a580:
    // 0x37a580: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37a580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a58c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37A58Cu;
    SET_GPR_U32(ctx, 31, 0x37A594u);
    ctx->pc = 0x37A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A58Cu;
    // 0x37a590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37A58Cu, 0x37A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A594u;
label_37a594:
    // 0x37a594: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a598: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A598u;
    {
        const bool branch_taken_0x37a598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A598u;
        // 0x37a59c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a598) {
            ctx->pc = 0x37A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a570;
        }
    }
    ctx->pc = 0x37A5A0u;
    // 0x37a5a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37a5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37a5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a5a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37a5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37a5ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37a5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a5b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37a5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a5b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37a5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a5b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37a5b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a5bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5C0u;
        // 0x37a5c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A5C8u;
}
