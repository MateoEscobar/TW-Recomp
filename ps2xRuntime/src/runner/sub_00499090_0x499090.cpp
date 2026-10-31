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

// Function: sub_00499090
// Address: 0x499090 - 0x499208
void sub_00499090_0x499090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499090_0x499090");
#endif

    switch (ctx->pc) {
        case 0x4990ecu: goto label_4990ec;
        default: break;
    }

    ctx->pc = 0x499090u;

    // 0x499090: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x499090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x499094: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x499094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x499098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x499098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x49909c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49909cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4990a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4990a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4990a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4990a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4990ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4990acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4990b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4990b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4990b4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x4990b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4990b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4990bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4990bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990c0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4990c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4990c4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x4990c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4990c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4990cc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4990ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990d0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4990d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4990d4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4990d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4990d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4990dc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4990dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4990e0: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x4990e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4990e4: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4990E4u;
    SET_GPR_U32(ctx, 31, 0x4990ECu);
    ctx->pc = 0x4990E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4990E4u;
    // 0x4990e8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4990E4u, 0x4990ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4990ECu;
label_4990ec:
    // 0x4990ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4990ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4990f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4990f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4990f4: 0x34848006  ori         $a0, $a0, 0x8006
    ctx->pc = 0x4990f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32774);
    // 0x4990f8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4990f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4990fc: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x4990fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x499100: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x499100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x499104: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x499104u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x499108: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x499108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49910c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49910Cu;
    {
        const bool branch_taken_0x49910c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x499110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49910Cu;
        // 0x499110: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49910c) {
            ctx->pc = 0x499128u;
            goto label_499128;
        }
    }
    ctx->pc = 0x499114u;
    // 0x499114: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x499114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499118: 0x24020156  addiu       $v0, $zero, 0x156
    ctx->pc = 0x499118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x49911c: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x49911cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x499120: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x499120u;
    {
        const bool branch_taken_0x499120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499120u;
        // 0x499124: 0x8f83898c  lw          $v1, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499120) {
            ctx->pc = 0x499138u;
            goto label_499138;
        }
    }
    ctx->pc = 0x499128u;
label_499128:
    // 0x499128: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x499128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49912c: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x49912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x499130: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x499130u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x499134: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x499134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_499138:
    // 0x499138: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x499138u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x49913c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x49913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499140: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x499140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499144: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x499144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x499148: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x499148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49914c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x49914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x499150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x499150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499154: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x499154u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x499158: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x499158u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x49915c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x49915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499160: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499164: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x499164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x499168: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x499168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x49916c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x49916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x499170: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x499170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x499174: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x499174u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x499178: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x499178u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x49917c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x49917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x499180: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499184: 0x340480ff  ori         $a0, $zero, 0x80FF
    ctx->pc = 0x499184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x499188: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x499188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x49918c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49918cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499194: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x499194u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x499198: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x499198u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x49919c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x49919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4991a0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4991a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4991a4: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x4991a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x4991a8: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x4991a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x4991ac: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x4991acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x4991b0: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x4991b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x4991b4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x4991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x4991b8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4991b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4991bc: 0x172500  sll         $a0, $s7, 20
    ctx->pc = 0x4991bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x4991c0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x4991c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x4991c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4991c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4991c8: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x4991c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x4991cc: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x4991ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x4991d0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x4991d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x4991d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4991d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4991d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4991d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4991dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4991dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4991e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4991e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4991e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4991e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4991e8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4991e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4991ec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4991ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4991f0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4991f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4991f4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4991f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4991f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4991f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4991fc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4991fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499200: 0x3e00008  jr          $ra
    ctx->pc = 0x499200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499200u;
        // 0x499204: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499208u;
}
