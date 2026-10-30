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

// Function: sub_003757B8
// Address: 0x3757b8 - 0x375930
void sub_003757B8_0x3757b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003757B8_0x3757b8");
#endif

    switch (ctx->pc) {
        case 0x3757e8u: goto label_3757e8;
        case 0x3757f0u: goto label_3757f0;
        case 0x375808u: goto label_375808;
        case 0x37583cu: goto label_37583c;
        case 0x375844u: goto label_375844;
        case 0x375858u: goto label_375858;
        case 0x375868u: goto label_375868;
        case 0x375880u: goto label_375880;
        case 0x375888u: goto label_375888;
        case 0x3758acu: goto label_3758ac;
        case 0x3758b8u: goto label_3758b8;
        case 0x3758ccu: goto label_3758cc;
        case 0x3758e4u: goto label_3758e4;
        case 0x3758f8u: goto label_3758f8;
        default: break;
    }

    ctx->pc = 0x3757b8u;

    // 0x3757b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3757b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3757bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3757bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3757c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3757c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3757c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3757c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3757c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3757c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3757cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3757ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3757d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3757d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3757d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3757d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3757d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3757d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3757dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3757dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3757e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3757E0u;
    SET_GPR_U32(ctx, 31, 0x3757E8u);
    ctx->pc = 0x3757E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3757E0u;
    // 0x3757e4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3757E0u, 0x3757E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3757E8u;
label_3757e8:
    // 0x3757e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3757E8u;
    SET_GPR_U32(ctx, 31, 0x3757F0u);
    ctx->pc = 0x3757ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3757E8u;
    // 0x3757ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3757E8u, 0x3757F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3757F0u;
label_3757f0:
    // 0x3757f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3757f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3757f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3757f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3757f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3757f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3757fc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3757fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375800: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x375800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x375804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_375808:
    // 0x375808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x375808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37580c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x37580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x375810: 0x0  nop
    ctx->pc = 0x375810u;
    // NOP
    // 0x375814: 0x0  nop
    ctx->pc = 0x375814u;
    // NOP
    // 0x375818: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x375818u;
    {
        const bool branch_taken_0x375818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x37581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375818u;
        // 0x37581c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375818) {
            ctx->pc = 0x375808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375808;
        }
    }
    ctx->pc = 0x375820u;
    // 0x375820: 0x3406814e  ori         $a2, $zero, 0x814E
    ctx->pc = 0x375820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33102);
    // 0x375824: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x375824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x375828: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x375828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x37582c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x37582cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x375830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375834: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375834u;
    SET_GPR_U32(ctx, 31, 0x37583Cu);
    ctx->pc = 0x375838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375834u;
    // 0x375838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375834u, 0x37583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37583Cu;
label_37583c:
    // 0x37583c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37583Cu;
    SET_GPR_U32(ctx, 31, 0x375844u);
    ctx->pc = 0x375840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37583Cu;
    // 0x375840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37583Cu, 0x375844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375844u;
label_375844:
    // 0x375844: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37584c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375850: 0xc102488  jal         func_409220
    ctx->pc = 0x375850u;
    SET_GPR_U32(ctx, 31, 0x375858u);
    ctx->pc = 0x375854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375850u;
    // 0x375854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375850u, 0x375858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375858u;
label_375858:
    // 0x375858: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37585c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37585cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375860: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x375860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375864: 0x0  nop
    ctx->pc = 0x375864u;
    // NOP
label_375868:
    // 0x375868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x375868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37586c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375870: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375878: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x375878u;
    SET_GPR_U32(ctx, 31, 0x375880u);
    ctx->pc = 0x37587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375878u;
    // 0x37587c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x375878u, 0x375880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375880u;
label_375880:
    // 0x375880: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375880u;
    SET_GPR_U32(ctx, 31, 0x375888u);
    ctx->pc = 0x375884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375880u;
    // 0x375884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375880u, 0x375888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375888u;
label_375888:
    // 0x375888: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x375888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37588c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x375890: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x375890u;
    {
        const bool branch_taken_0x375890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375890u;
        // 0x375894: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375890) {
            ctx->pc = 0x375868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375868;
        }
    }
    ctx->pc = 0x375898u;
    // 0x375898: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x375898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37589c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3758a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758a4: 0xc0c5964  jal         func_316590
    ctx->pc = 0x3758A4u;
    SET_GPR_U32(ctx, 31, 0x3758ACu);
    ctx->pc = 0x3758A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3758A4u;
    // 0x3758a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316590u, 0x3758A4u, 0x3758ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758ACu;
label_3758ac:
    // 0x3758ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3758acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758b0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3758b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3758b4: 0x0  nop
    ctx->pc = 0x3758b4u;
    // NOP
label_3758b8:
    // 0x3758b8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3758b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3758bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3758c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3758c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3758c4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3758C4u;
    SET_GPR_U32(ctx, 31, 0x3758CCu);
    ctx->pc = 0x3758C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3758C4u;
    // 0x3758c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3758C4u, 0x3758CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758CCu;
label_3758cc:
    // 0x3758cc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3758CCu;
    {
        const bool branch_taken_0x3758cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3758D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758CCu;
        // 0x3758d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3758cc) {
            ctx->pc = 0x3758E8u;
            goto label_3758e8;
        }
    }
    ctx->pc = 0x3758D4u;
    // 0x3758d4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3758d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3758d8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3758d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3758dc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3758DCu;
    SET_GPR_U32(ctx, 31, 0x3758E4u);
    ctx->pc = 0x3758E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3758DCu;
    // 0x3758e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3758DCu, 0x3758E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758E4u;
label_3758e4:
    // 0x3758e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3758e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3758e8:
    // 0x3758e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3758e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3758ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758f0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3758F0u;
    SET_GPR_U32(ctx, 31, 0x3758F8u);
    ctx->pc = 0x3758F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3758F0u;
    // 0x3758f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3758F0u, 0x3758F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758F8u;
label_3758f8:
    // 0x3758f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3758f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3758fc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3758fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x375900: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x375900u;
    {
        const bool branch_taken_0x375900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375900u;
        // 0x375904: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375900) {
            ctx->pc = 0x3758B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3758b8;
        }
    }
    ctx->pc = 0x375908u;
    // 0x375908: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x375908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37590c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37590cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375910: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x375910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375914: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x375914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x375918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37591c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37591cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375920: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x375920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375928: 0x3e00008  jr          $ra
    ctx->pc = 0x375928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375928u;
        // 0x37592c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375930u;
}
