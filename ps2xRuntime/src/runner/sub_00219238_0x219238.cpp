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

// Function: sub_00219238
// Address: 0x219238 - 0x219320
void sub_00219238_0x219238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219238_0x219238");
#endif

    switch (ctx->pc) {
        case 0x21926cu: goto label_21926c;
        case 0x219280u: goto label_219280;
        case 0x21928cu: goto label_21928c;
        case 0x219294u: goto label_219294;
        case 0x2192b8u: goto label_2192b8;
        case 0x2192c0u: goto label_2192c0;
        case 0x2192d0u: goto label_2192d0;
        case 0x2192d8u: goto label_2192d8;
        case 0x21930cu: goto label_21930c;
        default: break;
    }

    ctx->pc = 0x219238u;

    // 0x219238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21923c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x219240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x219240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x219244: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x219244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x219248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21924c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219250: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x219254: 0x8c660220  lw          $a2, 0x220($v1)
    ctx->pc = 0x219254u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x510220u));
    // 0x219258: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x219258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x21925c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x21925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x219260: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x219260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x219264: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x219264u;
    SET_GPR_U32(ctx, 31, 0x21926Cu);
    ctx->pc = 0x219268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219264u;
    // 0x219268: 0xac62010c  sw          $v0, 0x10C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x219264u, 0x21926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21926Cu;
label_21926c:
    // 0x21926c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x21926Cu;
    {
        const bool branch_taken_0x21926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21926c) {
            ctx->pc = 0x219270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21926Cu;
            // 0x219270: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219310u;
            goto label_219310;
        }
    }
    ctx->pc = 0x219274u;
    // 0x219274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219278: 0xc089988  jal         func_226620
    ctx->pc = 0x219278u;
    SET_GPR_U32(ctx, 31, 0x219280u);
    ctx->pc = 0x21927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219278u;
    // 0x21927c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x219278u, 0x219280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219280u;
label_219280:
    // 0x219280: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x219280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x219284: 0xc089974  jal         func_2265D0
    ctx->pc = 0x219284u;
    SET_GPR_U32(ctx, 31, 0x21928Cu);
    ctx->pc = 0x219288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219284u;
    // 0x219288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x219284u, 0x21928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21928Cu;
label_21928c:
    // 0x21928c: 0xc086b7e  jal         func_21ADF8
    ctx->pc = 0x21928Cu;
    SET_GPR_U32(ctx, 31, 0x219294u);
    ctx->pc = 0x219290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21928Cu;
    // 0x219290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADF8u, 0x21928Cu, 0x219294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219294u;
label_219294:
    // 0x219294: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x219294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x219298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21929c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2192a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192a4: 0x84450118  lh          $a1, 0x118($v0)
    ctx->pc = 0x2192a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x2192a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2192a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2192ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2192acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192b0: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2192B0u;
    SET_GPR_U32(ctx, 31, 0x2192B8u);
    ctx->pc = 0x2192B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192B0u;
    // 0x2192b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x2192B0u, 0x2192B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0xc089000  jal         func_224000
    ctx->pc = 0x2192B8u;
    SET_GPR_U32(ctx, 31, 0x2192C0u);
    ctx->pc = 0x2192BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192B8u;
    // 0x2192bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2192B8u, 0x2192C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192C0u;
label_2192c0:
    // 0x2192c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2192C0u;
    {
        const bool branch_taken_0x2192c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2192c0) {
            ctx->pc = 0x2192D0u;
            goto label_2192d0;
        }
    }
    ctx->pc = 0x2192C8u;
    // 0x2192c8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2192C8u;
    SET_GPR_U32(ctx, 31, 0x2192D0u);
    ctx->pc = 0x2192CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192C8u;
    // 0x2192cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2192C8u, 0x2192D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192D0u;
label_2192d0:
    // 0x2192d0: 0xc0962a2  jal         func_258A88
    ctx->pc = 0x2192D0u;
    SET_GPR_U32(ctx, 31, 0x2192D8u);
    ctx->pc = 0x2192D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192D0u;
    // 0x2192d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x2192D0u, 0x2192D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192D8u;
label_2192d8:
    // 0x2192d8: 0x9202019b  lbu         $v0, 0x19B($s0)
    ctx->pc = 0x2192d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
    // 0x2192dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2192DCu;
    {
        const bool branch_taken_0x2192dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192DCu;
        // 0x2192e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192dc) {
            ctx->pc = 0x21930Cu;
            goto label_21930c;
        }
    }
    ctx->pc = 0x2192E4u;
    // 0x2192e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2192e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2192e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2192ec: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2192ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2192f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2192f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192f4: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x2192f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x2192f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2192f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2192fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219304: 0xc088178  jal         func_2205E0
    ctx->pc = 0x219304u;
    SET_GPR_U32(ctx, 31, 0x21930Cu);
    ctx->pc = 0x219308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219304u;
    // 0x219308: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x219304u, 0x21930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21930Cu;
label_21930c:
    // 0x21930c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21930cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219310:
    // 0x219310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219314: 0x3e00008  jr          $ra
    ctx->pc = 0x219314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219314u;
        // 0x219318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21931Cu;
    // 0x21931c: 0x0  nop
    ctx->pc = 0x21931cu;
    // NOP
    ctx->pc = 0x219320u;
}
