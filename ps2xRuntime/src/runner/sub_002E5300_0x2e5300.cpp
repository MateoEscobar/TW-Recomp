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

// Function: sub_002E5300
// Address: 0x2e5300 - 0x2e53e0
void sub_002E5300_0x2e5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5300_0x2e5300");
#endif

    switch (ctx->pc) {
        case 0x2e533cu: goto label_2e533c;
        case 0x2e5344u: goto label_2e5344;
        case 0x2e5354u: goto label_2e5354;
        case 0x2e535cu: goto label_2e535c;
        case 0x2e537cu: goto label_2e537c;
        case 0x2e5388u: goto label_2e5388;
        case 0x2e53b8u: goto label_2e53b8;
        default: break;
    }

    ctx->pc = 0x2e5300u;

    // 0x2e5300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e5304: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5308: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e530c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5310: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5314: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5318: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e5318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e531c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e531cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5320: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e5320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e5324: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e5324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5328: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e5328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e532c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e5330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5334: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E5334u;
    SET_GPR_U32(ctx, 31, 0x2E533Cu);
    ctx->pc = 0x2E5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5334u;
    // 0x2e5338: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E5334u, 0x2E533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E533Cu;
label_2e533c:
    // 0x2e533c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E533Cu;
    SET_GPR_U32(ctx, 31, 0x2E5344u);
    ctx->pc = 0x2E5340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E533Cu;
    // 0x2e5340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E533Cu, 0x2E5344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5344u;
label_2e5344:
    // 0x2e5344: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E5344u;
    {
        const bool branch_taken_0x2e5344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5344u;
        // 0x2e5348: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5344) {
            ctx->pc = 0x2E53BCu;
            goto label_2e53bc;
        }
    }
    ctx->pc = 0x2E534Cu;
    // 0x2e534c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E534Cu;
    SET_GPR_U32(ctx, 31, 0x2E5354u);
    ctx->pc = 0x2E5350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E534Cu;
    // 0x2e5350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E534Cu, 0x2E5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5354u;
label_2e5354:
    // 0x2e5354: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E5354u;
    SET_GPR_U32(ctx, 31, 0x2E535Cu);
    ctx->pc = 0x2E5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5354u;
    // 0x2e5358: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E5354u, 0x2E535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E535Cu;
label_2e535c:
    // 0x2e535c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5360: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5360u;
    {
        const bool branch_taken_0x2e5360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5360u;
        // 0x2e5364: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5360) {
            ctx->pc = 0x2E537Cu;
            goto label_2e537c;
        }
    }
    ctx->pc = 0x2E5368u;
    // 0x2e5368: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e5368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e536c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e536cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5374: 0xc0b94f8  jal         func_2E53E0
    ctx->pc = 0x2E5374u;
    SET_GPR_U32(ctx, 31, 0x2E537Cu);
    ctx->pc = 0x2E5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5374u;
    // 0x2e5378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E53E0u, 0x2E5374u, 0x2E537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E537Cu;
label_2e537c:
    // 0x2e537c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e537cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5380: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E5380u;
    SET_GPR_U32(ctx, 31, 0x2E5388u);
    ctx->pc = 0x2E5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5380u;
    // 0x2e5384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E5380u, 0x2E5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5388u;
label_2e5388:
    // 0x2e5388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e538c: 0x16a3000b  bne         $s5, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E538Cu;
    {
        const bool branch_taken_0x2e538c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E538Cu;
        // 0x2e5390: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e538c) {
            ctx->pc = 0x2E53BCu;
            goto label_2e53bc;
        }
    }
    ctx->pc = 0x2E5394u;
    // 0x2e5394: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2e5394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2e5398: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5398u;
    {
        const bool branch_taken_0x2e5398 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5398u;
        // 0x2e539c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5398) {
            ctx->pc = 0x2E53ACu;
            goto label_2e53ac;
        }
    }
    ctx->pc = 0x2E53A0u;
    // 0x2e53a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e53a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E53A4u;
    {
        const bool branch_taken_0x2e53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53A4u;
        // 0x2e53a8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53a4) {
            ctx->pc = 0x2E53B0u;
            goto label_2e53b0;
        }
    }
    ctx->pc = 0x2E53ACu;
label_2e53ac:
    // 0x2e53ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e53acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e53b0:
    // 0x2e53b0: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x2E53B0u;
    SET_GPR_U32(ctx, 31, 0x2E53B8u);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x2E53B0u, 0x2E53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53B8u;
label_2e53b8:
    // 0x2e53b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e53b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e53bc:
    // 0x2e53bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e53bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e53c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e53c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e53c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e53c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e53c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e53cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e53ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e53d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e53d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e53d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E53D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53D4u;
        // 0x2e53d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E53D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E53DCu;
    // 0x2e53dc: 0x0  nop
    ctx->pc = 0x2e53dcu;
    // NOP
    ctx->pc = 0x2e53e0u;
}
