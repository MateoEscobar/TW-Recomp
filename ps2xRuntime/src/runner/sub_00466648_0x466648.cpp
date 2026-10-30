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

// Function: sub_00466648
// Address: 0x466648 - 0x466790
void sub_00466648_0x466648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466648_0x466648");
#endif

    switch (ctx->pc) {
        case 0x46668cu: goto label_46668c;
        case 0x4666bcu: goto label_4666bc;
        case 0x4666d4u: goto label_4666d4;
        case 0x4666ecu: goto label_4666ec;
        case 0x466700u: goto label_466700;
        case 0x46671cu: goto label_46671c;
        case 0x46672cu: goto label_46672c;
        case 0x466748u: goto label_466748;
        case 0x46675cu: goto label_46675c;
        default: break;
    }

    ctx->pc = 0x466648u;

    // 0x466648: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x466648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x46664c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46664cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x466650: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x466650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x466654: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x466654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x466658: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x466658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x46665c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x46665cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466660: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x466660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x466664: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x466664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x466668: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x466668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x46666c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x466670: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x466670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x466674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x466674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x466678: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x466678u;
    {
        const bool branch_taken_0x466678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466678u;
        // 0x46667c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466678) {
            ctx->pc = 0x466750u;
            goto label_466750;
        }
    }
    ctx->pc = 0x466680u;
    // 0x466680: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x466680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466684: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x466684u;
    SET_GPR_U32(ctx, 31, 0x46668Cu);
    ctx->pc = 0x466688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466684u;
    // 0x466688: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x466684u, 0x46668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46668Cu;
label_46668c:
    // 0x46668c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x46668Cu;
    {
        const bool branch_taken_0x46668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46668Cu;
        // 0x466690: 0x93b20001  lbu         $s2, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46668c) {
            ctx->pc = 0x466738u;
            goto label_466738;
        }
    }
    ctx->pc = 0x466694u;
    // 0x466694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x466694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466698: 0x93b50002  lbu         $s5, 0x2($sp)
    ctx->pc = 0x466698u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x46669c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46669cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666a0: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x4666a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4666a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4666a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666a8: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x4666a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4666ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4666acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4666b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666b4: 0xc11985a  jal         func_466168
    ctx->pc = 0x4666B4u;
    SET_GPR_U32(ctx, 31, 0x4666BCu);
    ctx->pc = 0x4666B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4666B4u;
    // 0x4666b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466168u, 0x4666B4u, 0x4666BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4666BCu;
label_4666bc:
    // 0x4666bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4666bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666c0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4666C0u;
    {
        const bool branch_taken_0x4666c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4666C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4666C0u;
        // 0x4666c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4666c0) {
            ctx->pc = 0x466738u;
            goto label_466738;
        }
    }
    ctx->pc = 0x4666C8u;
    // 0x4666c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4666c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4666cc: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x4666CCu;
    SET_GPR_U32(ctx, 31, 0x4666D4u);
    ctx->pc = 0x4666D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4666CCu;
    // 0x4666d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4666CCu, 0x4666D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4666D4u;
label_4666d4:
    // 0x4666d4: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x4666D4u;
    {
        const bool branch_taken_0x4666d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4666D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4666D4u;
        // 0x4666d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4666d4) {
            ctx->pc = 0x46676Cu;
            goto label_46676c;
        }
    }
    ctx->pc = 0x4666DCu;
    // 0x4666dc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4666dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4666e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4666e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666e4: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x4666E4u;
    SET_GPR_U32(ctx, 31, 0x4666ECu);
    ctx->pc = 0x4666E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4666E4u;
    // 0x4666e8: 0x133080  sll         $a2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4666E4u, 0x4666ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4666ECu;
label_4666ec:
    // 0x4666ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4666ECu;
    {
        const bool branch_taken_0x4666ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4666ECu;
        // 0x4666f0: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4666ec) {
            ctx->pc = 0x466738u;
            goto label_466738;
        }
    }
    ctx->pc = 0x4666F4u;
    // 0x4666f4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4666f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4666f8: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x4666F8u;
    SET_GPR_U32(ctx, 31, 0x466700u);
    ctx->pc = 0x4666FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4666F8u;
    // 0x4666fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x4666F8u, 0x466700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466700u;
label_466700:
    // 0x466700: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x466700u;
    {
        const bool branch_taken_0x466700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466700u;
        // 0x466704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466700) {
            ctx->pc = 0x466738u;
            goto label_466738;
        }
    }
    ctx->pc = 0x466708u;
    // 0x466708: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x466708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46670c: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x46670cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x466710: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x466710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x466714: 0xc11ef6c  jal         func_47BDB0
    ctx->pc = 0x466714u;
    SET_GPR_U32(ctx, 31, 0x46671Cu);
    ctx->pc = 0x466718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466714u;
    // 0x466718: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x466714u, 0x46671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46671Cu;
label_46671c:
    // 0x46671c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46671Cu;
    {
        const bool branch_taken_0x46671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46671Cu;
        // 0x466720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46671c) {
            ctx->pc = 0x466738u;
            goto label_466738;
        }
    }
    ctx->pc = 0x466724u;
    // 0x466724: 0xc119e10  jal         func_467840
    ctx->pc = 0x466724u;
    SET_GPR_U32(ctx, 31, 0x46672Cu);
    ctx->pc = 0x466728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466724u;
    // 0x466728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467840u, 0x466724u, 0x46672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46672Cu;
label_46672c:
    // 0x46672c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46672Cu;
    {
        const bool branch_taken_0x46672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46672Cu;
        // 0x466730: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46672c) {
            ctx->pc = 0x466740u;
            goto label_466740;
        }
    }
    ctx->pc = 0x466734u;
    // 0x466734: 0x0  nop
    ctx->pc = 0x466734u;
    // NOP
label_466738:
    // 0x466738: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x466738u;
    {
        const bool branch_taken_0x466738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466738u;
        // 0x46673c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466738) {
            ctx->pc = 0x46676Cu;
            goto label_46676c;
        }
    }
    ctx->pc = 0x466740u;
label_466740:
    // 0x466740: 0xc119aec  jal         func_466BB0
    ctx->pc = 0x466740u;
    SET_GPR_U32(ctx, 31, 0x466748u);
    ctx->pc = 0x466744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466740u;
    // 0x466744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466BB0u, 0x466740u, 0x466748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466748u;
label_466748:
    // 0x466748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x466748u;
    {
        const bool branch_taken_0x466748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466748u;
        // 0x46674c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466748) {
            ctx->pc = 0x46676Cu;
            goto label_46676c;
        }
    }
    ctx->pc = 0x466750u;
label_466750:
    // 0x466750: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x466750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466754: 0xc119d4a  jal         func_467528
    ctx->pc = 0x466754u;
    SET_GPR_U32(ctx, 31, 0x46675Cu);
    ctx->pc = 0x466758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466754u;
    // 0x466758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467528u, 0x466754u, 0x46675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46675Cu;
label_46675c:
    // 0x46675c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46675cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466760: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x466760u;
    {
        const bool branch_taken_0x466760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466760u;
        // 0x466764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466760) {
            ctx->pc = 0x46676Cu;
            goto label_46676c;
        }
    }
    ctx->pc = 0x466768u;
    // 0x466768: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x466768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46676c:
    // 0x46676c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x46676cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x466770: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x466770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x466774: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x466774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x466778: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x466778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46677c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x46677cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466780: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x466780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x466784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466788: 0x3e00008  jr          $ra
    ctx->pc = 0x466788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466788u;
        // 0x46678c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466790u;
}
