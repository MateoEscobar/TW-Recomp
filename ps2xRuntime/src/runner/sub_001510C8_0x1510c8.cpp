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

// Function: sub_001510C8
// Address: 0x1510c8 - 0x1511a8
void sub_001510C8_0x1510c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001510C8_0x1510c8");
#endif

    switch (ctx->pc) {
        case 0x151110u: goto label_151110;
        case 0x151130u: goto label_151130;
        case 0x15113cu: goto label_15113c;
        case 0x151144u: goto label_151144;
        case 0x151150u: goto label_151150;
        case 0x151158u: goto label_151158;
        case 0x151160u: goto label_151160;
        case 0x151168u: goto label_151168;
        case 0x151170u: goto label_151170;
        default: break;
    }

    ctx->pc = 0x1510c8u;

    // 0x1510c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1510cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1510d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1510d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1510d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1510d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1510d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1510d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1510dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1510dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1510e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1510e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1510e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1510ec: 0x2472c368  addiu       $s2, $v1, -0x3C98
    ctx->pc = 0x1510ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951784));
    // 0x1510f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1510f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1510f4: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x1510f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x1510f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1510f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1510fc: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x151100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151104: 0x2455c248  addiu       $s5, $v0, -0x3DB8
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x151108: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x151108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C368u));
    // 0x15110c: 0x0  nop
    ctx->pc = 0x15110cu;
    // NOP
label_151110:
    // 0x151110: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x151114: 0x14510016  bne         $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151114u;
    {
        const bool branch_taken_0x151114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x151118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151114u;
        // 0x151118: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151114) {
            ctx->pc = 0x151170u;
            goto label_151170;
        }
    }
    ctx->pc = 0x15111Cu;
    // 0x15111c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x15111cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151120: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151120) {
            ctx->pc = 0x151124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151120u;
            // 0x151124: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151174u;
            goto label_151174;
        }
    }
    ctx->pc = 0x151128u;
    // 0x151128: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x151128u;
    SET_GPR_U32(ctx, 31, 0x151130u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x151128u, 0x151130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151130u;
label_151130:
    // 0x151130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151134: 0xc054470  jal         func_1511C0
    ctx->pc = 0x151134u;
    SET_GPR_U32(ctx, 31, 0x15113Cu);
    ctx->pc = 0x151138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151134u;
    // 0x151138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511C0u, 0x151134u, 0x15113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15113Cu;
label_15113c:
    // 0x15113c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x15113Cu;
    SET_GPR_U32(ctx, 31, 0x151144u);
    ctx->pc = 0x151140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15113Cu;
    // 0x151140: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x15113Cu, 0x151144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151144u;
label_151144:
    // 0x151144: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x151148: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151148u;
    SET_GPR_U32(ctx, 31, 0x151150u);
    ctx->pc = 0x15114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151148u;
    // 0x15114c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151148u, 0x151150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151150u;
label_151150:
    // 0x151150: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151150u;
    SET_GPR_U32(ctx, 31, 0x151158u);
    ctx->pc = 0x151154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151150u;
    // 0x151154: 0x868441a8  lh          $a0, 0x41A8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151150u, 0x151158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151158u;
    SET_GPR_U32(ctx, 31, 0x151160u);
    ctx->pc = 0x15115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151158u;
    // 0x15115c: 0x866441ac  lh          $a0, 0x41AC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151158u, 0x151160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151160u;
label_151160:
    // 0x151160: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151160u;
    SET_GPR_U32(ctx, 31, 0x151168u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151160u, 0x151168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151168u;
label_151168:
    // 0x151168: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151168u;
    SET_GPR_U32(ctx, 31, 0x151170u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151168u, 0x151170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151170u;
label_151170:
    // 0x151170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_151174:
    // 0x151174: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x151174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x151178: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x151178u;
    {
        const bool branch_taken_0x151178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151178) {
            ctx->pc = 0x15117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151178u;
            // 0x15117c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151110;
        }
    }
    ctx->pc = 0x151180u;
    // 0x151180: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x151180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151184: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x151184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151188: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x151188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15118c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15118cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151190: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x151190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151194: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x151194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15119c: 0x3e00008  jr          $ra
    ctx->pc = 0x15119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15119Cu;
        // 0x1511a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1511A4u;
    // 0x1511a4: 0x0  nop
    ctx->pc = 0x1511a4u;
    // NOP
    ctx->pc = 0x1511a8u;
}
