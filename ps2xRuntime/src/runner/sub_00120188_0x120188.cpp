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

// Function: sub_00120188
// Address: 0x120188 - 0x120230
void sub_00120188_0x120188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120188_0x120188");
#endif

    switch (ctx->pc) {
        case 0x120188u: goto label_120188;
        case 0x12018cu: goto label_12018c;
        case 0x120190u: goto label_120190;
        case 0x120194u: goto label_120194;
        case 0x120198u: goto label_120198;
        case 0x12019cu: goto label_12019c;
        case 0x1201a0u: goto label_1201a0;
        case 0x1201a4u: goto label_1201a4;
        case 0x1201a8u: goto label_1201a8;
        case 0x1201acu: goto label_1201ac;
        case 0x1201b0u: goto label_1201b0;
        case 0x1201b4u: goto label_1201b4;
        case 0x1201b8u: goto label_1201b8;
        case 0x1201bcu: goto label_1201bc;
        case 0x1201c0u: goto label_1201c0;
        case 0x1201c4u: goto label_1201c4;
        case 0x1201c8u: goto label_1201c8;
        case 0x1201ccu: goto label_1201cc;
        case 0x1201d0u: goto label_1201d0;
        case 0x1201d4u: goto label_1201d4;
        case 0x1201d8u: goto label_1201d8;
        case 0x1201dcu: goto label_1201dc;
        case 0x1201e0u: goto label_1201e0;
        case 0x1201e4u: goto label_1201e4;
        case 0x1201e8u: goto label_1201e8;
        case 0x1201ecu: goto label_1201ec;
        case 0x1201f0u: goto label_1201f0;
        case 0x1201f4u: goto label_1201f4;
        case 0x1201f8u: goto label_1201f8;
        case 0x1201fcu: goto label_1201fc;
        case 0x120200u: goto label_120200;
        case 0x120204u: goto label_120204;
        case 0x120208u: goto label_120208;
        case 0x12020cu: goto label_12020c;
        case 0x120210u: goto label_120210;
        case 0x120214u: goto label_120214;
        case 0x120218u: goto label_120218;
        case 0x12021cu: goto label_12021c;
        case 0x120220u: goto label_120220;
        case 0x120224u: goto label_120224;
        case 0x120228u: goto label_120228;
        case 0x12022cu: goto label_12022c;
        default: break;
    }

    ctx->pc = 0x120188u;

label_120188:
    // 0x120188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12018c:
    // 0x12018c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12018cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_120190:
    // 0x120190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_120194:
    // 0x120194: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_120198:
    if (ctx->pc == 0x120198u) {
        ctx->pc = 0x120198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120194u;
        // 0x120198: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12019Cu;
        goto label_12019c;
    }
    ctx->pc = 0x120194u;
    {
        const bool branch_taken_0x120194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120194u;
        // 0x120198: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120194) {
            ctx->pc = 0x12021Cu;
            goto label_12021c;
        }
    }
    ctx->pc = 0x12019Cu;
label_12019c:
    // 0x12019c: 0x8e02b174  lw          $v0, -0x4E8C($s0)
    ctx->pc = 0x12019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947188)));
label_1201a0:
    // 0x1201a0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_1201a4:
    if (ctx->pc == 0x1201A4u) {
        ctx->pc = 0x1201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201A0u;
        // 0x1201a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1201A8u;
        goto label_1201a8;
    }
    ctx->pc = 0x1201A0u;
    {
        const bool branch_taken_0x1201a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1201a0) {
            ctx->pc = 0x1201A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1201A0u;
            // 0x1201a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120224u;
            goto label_120224;
        }
    }
    ctx->pc = 0x1201A8u;
label_1201a8:
    // 0x1201a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1201a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1201ac:
    // 0x1201ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1201acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1201b0:
    // 0x1201b0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1201b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1201b4:
    // 0x1201b4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1201b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1201b8:
    // 0x1201b8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1201b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1201bc:
    // 0x1201bc: 0x24a58728  addiu       $a1, $a1, -0x78D8
    ctx->pc = 0x1201bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936360));
label_1201c0:
    // 0x1201c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1201c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1201c4:
    // 0x1201c4: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x1201c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_1201c8:
    // 0x1201c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1201c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1201cc:
    // 0x1201cc: 0x240904e1  addiu       $t1, $zero, 0x4E1
    ctx->pc = 0x1201ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1249));
label_1201d0:
    // 0x1201d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1201d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1201d4:
    // 0x1201d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1201d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1201d8:
    // 0x1201d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1201dc:
    // 0x1201dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1201dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1201e0:
    // 0x1201e0: 0x40f809  jalr        $v0
label_1201e4:
    if (ctx->pc == 0x1201E4u) {
        ctx->pc = 0x1201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201E0u;
        // 0x1201e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1201E8u;
        goto label_1201e8;
    }
    ctx->pc = 0x1201E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1201E8u);
        ctx->pc = 0x1201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201E0u;
        // 0x1201e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1201E0u, 0x1201E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1201E8u;
label_1201e8:
    // 0x1201e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1201e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1201ec:
    // 0x1201ec: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_1201f0:
    if (ctx->pc == 0x1201F0u) {
        ctx->pc = 0x1201F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201ECu;
        // 0x1201f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1201F4u;
        goto label_1201f4;
    }
    ctx->pc = 0x1201ECu;
    {
        const bool branch_taken_0x1201ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1201ec) {
            ctx->pc = 0x1201F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1201ECu;
            // 0x1201f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120204u;
            goto label_120204;
        }
    }
    ctx->pc = 0x1201F4u;
label_1201f4:
    // 0x1201f4: 0xc050e46  jal         func_143918
label_1201f8:
    if (ctx->pc == 0x1201F8u) {
        ctx->pc = 0x1201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201F4u;
        // 0x1201f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1201FCu;
        goto label_1201fc;
    }
    ctx->pc = 0x1201F4u;
    SET_GPR_U32(ctx, 31, 0x1201FCu);
    ctx->pc = 0x1201F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201F4u;
    // 0x1201f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143918u, 0x1201F4u, 0x1201FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201FCu;
label_1201fc:
    // 0x1201fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1201fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120200:
    // 0x120200: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x120200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_120204:
    // 0x120204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120208:
    // 0x120208: 0xae06b174  sw          $a2, -0x4E8C($s0)
    ctx->pc = 0x120208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947188), GPR_U32(ctx, 6));
label_12020c:
    // 0x12020c: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x12020cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_120210:
    // 0x120210: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_120214:
    // 0x120214: 0x60f809  jalr        $v1
label_120218:
    if (ctx->pc == 0x120218u) {
        ctx->pc = 0x120218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120214u;
        // 0x120218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12021Cu;
        goto label_12021c;
    }
    ctx->pc = 0x120214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12021Cu);
        ctx->pc = 0x120218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120214u;
        // 0x120218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120214u, 0x12021Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12021Cu;
label_12021c:
    // 0x12021c: 0x8e02b174  lw          $v0, -0x4E8C($s0)
    ctx->pc = 0x12021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947188)));
label_120220:
    // 0x120220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x120220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120224:
    // 0x120224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120228:
    // 0x120228: 0x3e00008  jr          $ra
label_12022c:
    if (ctx->pc == 0x12022Cu) {
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120230u;
        goto label_fallthrough_0x120228;
    }
    ctx->pc = 0x120228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120228:
    ctx->pc = 0x120230u;
}
