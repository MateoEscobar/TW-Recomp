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

// Function: sub_001200E0
// Address: 0x1200e0 - 0x120188
void sub_001200E0_0x1200e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001200E0_0x1200e0");
#endif

    switch (ctx->pc) {
        case 0x1200e0u: goto label_1200e0;
        case 0x1200e4u: goto label_1200e4;
        case 0x1200e8u: goto label_1200e8;
        case 0x1200ecu: goto label_1200ec;
        case 0x1200f0u: goto label_1200f0;
        case 0x1200f4u: goto label_1200f4;
        case 0x1200f8u: goto label_1200f8;
        case 0x1200fcu: goto label_1200fc;
        case 0x120100u: goto label_120100;
        case 0x120104u: goto label_120104;
        case 0x120108u: goto label_120108;
        case 0x12010cu: goto label_12010c;
        case 0x120110u: goto label_120110;
        case 0x120114u: goto label_120114;
        case 0x120118u: goto label_120118;
        case 0x12011cu: goto label_12011c;
        case 0x120120u: goto label_120120;
        case 0x120124u: goto label_120124;
        case 0x120128u: goto label_120128;
        case 0x12012cu: goto label_12012c;
        case 0x120130u: goto label_120130;
        case 0x120134u: goto label_120134;
        case 0x120138u: goto label_120138;
        case 0x12013cu: goto label_12013c;
        case 0x120140u: goto label_120140;
        case 0x120144u: goto label_120144;
        case 0x120148u: goto label_120148;
        case 0x12014cu: goto label_12014c;
        case 0x120150u: goto label_120150;
        case 0x120154u: goto label_120154;
        case 0x120158u: goto label_120158;
        case 0x12015cu: goto label_12015c;
        case 0x120160u: goto label_120160;
        case 0x120164u: goto label_120164;
        case 0x120168u: goto label_120168;
        case 0x12016cu: goto label_12016c;
        case 0x120170u: goto label_120170;
        case 0x120174u: goto label_120174;
        case 0x120178u: goto label_120178;
        case 0x12017cu: goto label_12017c;
        case 0x120180u: goto label_120180;
        case 0x120184u: goto label_120184;
        default: break;
    }

    ctx->pc = 0x1200e0u;

label_1200e0:
    // 0x1200e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1200e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1200e4:
    // 0x1200e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1200e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1200e8:
    // 0x1200e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1200e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1200ec:
    // 0x1200ec: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1200f0:
    if (ctx->pc == 0x1200F0u) {
        ctx->pc = 0x1200F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200ECu;
        // 0x1200f0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200F4u;
        goto label_1200f4;
    }
    ctx->pc = 0x1200ECu;
    {
        const bool branch_taken_0x1200ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200ECu;
        // 0x1200f0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200ec) {
            ctx->pc = 0x120174u;
            goto label_120174;
        }
    }
    ctx->pc = 0x1200F4u;
label_1200f4:
    // 0x1200f4: 0x8e02b170  lw          $v0, -0x4E90($s0)
    ctx->pc = 0x1200f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947184)));
label_1200f8:
    // 0x1200f8: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_1200fc:
    if (ctx->pc == 0x1200FCu) {
        ctx->pc = 0x1200FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200F8u;
        // 0x1200fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120100u;
        goto label_120100;
    }
    ctx->pc = 0x1200F8u;
    {
        const bool branch_taken_0x1200f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1200f8) {
            ctx->pc = 0x1200FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1200F8u;
            // 0x1200fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12017Cu;
            goto label_12017c;
        }
    }
    ctx->pc = 0x120100u;
label_120100:
    // 0x120100: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120104:
    // 0x120104: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x120104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_120108:
    // 0x120108: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x120108u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_12010c:
    // 0x12010c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_120110:
    // 0x120110: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_120114:
    // 0x120114: 0x24a58718  addiu       $a1, $a1, -0x78E8
    ctx->pc = 0x120114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936344));
label_120118:
    // 0x120118: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x120118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_12011c:
    // 0x12011c: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x12011cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_120120:
    // 0x120120: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120124:
    // 0x120124: 0x240904d3  addiu       $t1, $zero, 0x4D3
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1235));
label_120128:
    // 0x120128: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x120128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_12012c:
    // 0x12012c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12012cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120130:
    // 0x120130: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x120130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_120134:
    // 0x120134: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x120134u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120138:
    // 0x120138: 0x40f809  jalr        $v0
label_12013c:
    if (ctx->pc == 0x12013Cu) {
        ctx->pc = 0x12013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120138u;
        // 0x12013c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120140u;
        goto label_120140;
    }
    ctx->pc = 0x120138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120140u);
        ctx->pc = 0x12013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120138u;
        // 0x12013c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120138u, 0x120140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120140u;
label_120140:
    // 0x120140: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120144:
    // 0x120144: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_120148:
    if (ctx->pc == 0x120148u) {
        ctx->pc = 0x120148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120144u;
        // 0x120148: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12014Cu;
        goto label_12014c;
    }
    ctx->pc = 0x120144u;
    {
        const bool branch_taken_0x120144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120144) {
            ctx->pc = 0x120148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120144u;
            // 0x120148: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12015Cu;
            goto label_12015c;
        }
    }
    ctx->pc = 0x12014Cu;
label_12014c:
    // 0x12014c: 0xc048d8c  jal         func_123630
label_120150:
    if (ctx->pc == 0x120150u) {
        ctx->pc = 0x120150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12014Cu;
        // 0x120150: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120154u;
        goto label_120154;
    }
    ctx->pc = 0x12014Cu;
    SET_GPR_U32(ctx, 31, 0x120154u);
    ctx->pc = 0x120150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12014Cu;
    // 0x120150: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123630u, 0x12014Cu, 0x120154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120154u;
label_120154:
    // 0x120154: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120158:
    // 0x120158: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x120158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_12015c:
    // 0x12015c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12015cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120160:
    // 0x120160: 0xae06b170  sw          $a2, -0x4E90($s0)
    ctx->pc = 0x120160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947184), GPR_U32(ctx, 6));
label_120164:
    // 0x120164: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x120164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_120168:
    // 0x120168: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_12016c:
    // 0x12016c: 0x60f809  jalr        $v1
label_120170:
    if (ctx->pc == 0x120170u) {
        ctx->pc = 0x120170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12016Cu;
        // 0x120170: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120174u;
        goto label_120174;
    }
    ctx->pc = 0x12016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x120174u);
        ctx->pc = 0x120170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12016Cu;
        // 0x120170: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12016Cu, 0x120174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120174u;
label_120174:
    // 0x120174: 0x8e02b170  lw          $v0, -0x4E90($s0)
    ctx->pc = 0x120174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947184)));
label_120178:
    // 0x120178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x120178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12017c:
    // 0x12017c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120180:
    // 0x120180: 0x3e00008  jr          $ra
label_120184:
    if (ctx->pc == 0x120184u) {
        ctx->pc = 0x120184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120180u;
        // 0x120184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120188u;
        goto label_fallthrough_0x120180;
    }
    ctx->pc = 0x120180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120180u;
        // 0x120184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120180:
    ctx->pc = 0x120188u;
}
