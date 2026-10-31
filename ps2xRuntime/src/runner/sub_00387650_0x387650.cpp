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

// Function: sub_00387650
// Address: 0x387650 - 0x387780
void sub_00387650_0x387650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387650_0x387650");
#endif

    switch (ctx->pc) {
        case 0x387694u: goto label_387694;
        case 0x3876acu: goto label_3876ac;
        case 0x3876c8u: goto label_3876c8;
        case 0x38770cu: goto label_38770c;
        case 0x38772cu: goto label_38772c;
        default: break;
    }

    ctx->pc = 0x387650u;

    // 0x387650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x387650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x387654: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x387654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x387658: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x387658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x38765c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38765cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387660: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x387660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387664: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x387664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x387668: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x387668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x38766c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x387670: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x387670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x387674: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x387674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x387678: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x387678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x38767c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x38767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x387680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387684: 0xae651300  sw          $a1, 0x1300($s3)
    ctx->pc = 0x387684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4864), GPR_U32(ctx, 5));
    // 0x387688: 0xa2701308  sb          $s0, 0x1308($s3)
    ctx->pc = 0x387688u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4872), (uint8_t)GPR_U32(ctx, 16));
    // 0x38768c: 0xc0e26d0  jal         func_389B40
    ctx->pc = 0x38768Cu;
    SET_GPR_U32(ctx, 31, 0x387694u);
    ctx->pc = 0x387690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38768Cu;
    // 0x387690: 0xacb3003c  sw          $s3, 0x3C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B40u, 0x38768Cu, 0x387694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387694u;
label_387694:
    // 0x387694: 0x926212d4  lbu         $v0, 0x12D4($s3)
    ctx->pc = 0x387694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4820)));
    // 0x387698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387698u;
    {
        const bool branch_taken_0x387698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387698u;
        // 0x38769c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387698) {
            ctx->pc = 0x3876B0u;
            goto label_3876b0;
        }
    }
    ctx->pc = 0x3876A0u;
    // 0x3876a0: 0xa27012d4  sb          $s0, 0x12D4($s3)
    ctx->pc = 0x3876a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4820), (uint8_t)GPR_U32(ctx, 16));
    // 0x3876a4: 0xc0e1de0  jal         func_387780
    ctx->pc = 0x3876A4u;
    SET_GPR_U32(ctx, 31, 0x3876ACu);
    ctx->pc = 0x3876A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876A4u;
    // 0x3876a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387780u, 0x3876A4u, 0x3876ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3876ACu;
label_3876ac:
    // 0x3876ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3876acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3876b0:
    // 0x3876b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3876b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876b4: 0x245ee5b0  addiu       $fp, $v0, -0x1A50
    ctx->pc = 0x3876b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
    // 0x3876b8: 0x241705f0  addiu       $s7, $zero, 0x5F0
    ctx->pc = 0x3876b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x3876bc: 0x24160015  addiu       $s6, $zero, 0x15
    ctx->pc = 0x3876bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3876c0: 0x267101a0  addiu       $s1, $s3, 0x1A0
    ctx->pc = 0x3876c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
    // 0x3876c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3876c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3876c8:
    // 0x3876c8: 0x8e6211e0  lw          $v0, 0x11E0($s3)
    ctx->pc = 0x3876c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x3876cc: 0x92300096  lbu         $s0, 0x96($s1)
    ctx->pc = 0x3876ccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x3876d0: 0x571818  mult        $v1, $v0, $s7
    ctx->pc = 0x3876d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3876d4: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x3876d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3876d8: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x3876d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x3876dc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3876DCu;
    {
        const bool branch_taken_0x3876dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876DCu;
        // 0x3876e0: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876dc) {
            ctx->pc = 0x387738u;
            goto label_387738;
        }
    }
    ctx->pc = 0x3876E4u;
    // 0x3876e4: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x3876e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x3876e8: 0x2e42001a  sltiu       $v0, $s2, 0x1A
    ctx->pc = 0x3876e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x3876ec: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3876ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3876f0: 0x2647ffe7  addiu       $a3, $s2, -0x19
    ctx->pc = 0x3876f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967271));
    // 0x3876f4: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x3876f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x3876f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3876f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3876fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x387700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387704: 0xc0e32dc  jal         func_38CB70
    ctx->pc = 0x387704u;
    SET_GPR_U32(ctx, 31, 0x38770Cu);
    ctx->pc = 0x387708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387704u;
    // 0x387708: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB70u, 0x387704u, 0x38770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38770Cu;
label_38770c:
    // 0x38770c: 0x2d2102b  sltu        $v0, $s6, $s2
    ctx->pc = 0x38770cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x387710: 0x26470019  addiu       $a3, $s2, 0x19
    ctx->pc = 0x387710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x387714: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x387714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x387718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x387718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38771c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x38771cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x387720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387724: 0xc0e32dc  jal         func_38CB70
    ctx->pc = 0x387724u;
    SET_GPR_U32(ctx, 31, 0x38772Cu);
    ctx->pc = 0x387728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387724u;
    // 0x387728: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB70u, 0x387724u, 0x38772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38772Cu;
label_38772c:
    // 0x38772c: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x38772cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x387730: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x387730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x387734: 0xa2220096  sb          $v0, 0x96($s1)
    ctx->pc = 0x387734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 150), (uint8_t)GPR_U32(ctx, 2));
label_387738:
    // 0x387738: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x387738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x38773c: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x38773cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x387740: 0x2e420019  sltiu       $v0, $s2, 0x19
    ctx->pc = 0x387740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x387744: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x387744u;
    {
        const bool branch_taken_0x387744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387744u;
        // 0x387748: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387744) {
            ctx->pc = 0x3876C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3876c8;
        }
    }
    ctx->pc = 0x38774Cu;
    // 0x38774c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x38774cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x387750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387754: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x387754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387758: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x387758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38775c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x38775cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x387760: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x387760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387764: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x387764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387768: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x387768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38776c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x38776cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387770: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x387770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387778: 0x3e00008  jr          $ra
    ctx->pc = 0x387778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387778u;
        // 0x38777c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387780u;
}
