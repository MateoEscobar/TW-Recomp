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

// Function: sub_00462130
// Address: 0x462130 - 0x462238
void sub_00462130_0x462130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462130_0x462130");
#endif

    switch (ctx->pc) {
        case 0x462160u: goto label_462160;
        case 0x4621c8u: goto label_4621c8;
        default: break;
    }

    ctx->pc = 0x462130u;

    // 0x462130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x462130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x462134: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x462134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x462138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x462138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46213c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x46213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x462140: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x462140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x462144: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x462144u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x462148: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x462148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x46214c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46214cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x462154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462158: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x462158u;
    SET_GPR_U32(ctx, 31, 0x462160u);
    ctx->pc = 0x46215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462158u;
    // 0x46215c: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x462158u, 0x462160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462160u;
label_462160:
    // 0x462160: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x462160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x462164: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x462164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x462168: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x462168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x46216c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46216cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x462170: 0x346302ff  ori         $v1, $v1, 0x2FF
    ctx->pc = 0x462170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)767);
    // 0x462174: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x462174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x462178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x462178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x46217c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x46217cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x462180: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x462180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x462184: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x462184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x462188: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x462188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x46218c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x46218cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x462190: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x462190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x462194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x462194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x462198: 0x70501389  pcpyld      $v0, $v0, $s0
    ctx->pc = 0x462198u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x46219c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x46219cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621a0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621a4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4621a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4621a8: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x4621a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4621ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4621acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4621b0: 0x70701389  pcpyld      $v0, $v1, $s0
    ctx->pc = 0x4621b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
    // 0x4621b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621bc: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4621BCu;
    {
        const bool branch_taken_0x4621bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4621C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4621BCu;
        // 0x4621c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4621bc) {
            ctx->pc = 0x462218u;
            goto label_462218;
        }
    }
    ctx->pc = 0x4621C4u;
    // 0x4621c4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4621c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4621c8:
    // 0x4621c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4621c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4621cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621d0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621d4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x4621d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4621d8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621dc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621e0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x4621e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x4621e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621ec: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x4621ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4621f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4621f4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4621f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4621f8: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x4621f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x4621fc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4621fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x462200: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x462200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x462204: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x462204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x462208: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x462208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x46220c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x46220Cu;
    {
        const bool branch_taken_0x46220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46220Cu;
        // 0x462210: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46220c) {
            ctx->pc = 0x4621C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4621c8;
        }
    }
    ctx->pc = 0x462214u;
    // 0x462214: 0x0  nop
    ctx->pc = 0x462214u;
    // NOP
label_462218:
    // 0x462218: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x462218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x46221c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46221cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462220: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x462220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x462224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x462224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x462228: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x462228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46222c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462230: 0x3e00008  jr          $ra
    ctx->pc = 0x462230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462230u;
        // 0x462234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462238u;
}
