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

// Function: sub_0042E158
// Address: 0x42e158 - 0x42e3c0
void sub_0042E158_0x42e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E158_0x42e158");
#endif

    switch (ctx->pc) {
        case 0x42e184u: goto label_42e184;
        case 0x42e190u: goto label_42e190;
        case 0x42e1acu: goto label_42e1ac;
        case 0x42e1c0u: goto label_42e1c0;
        case 0x42e1d0u: goto label_42e1d0;
        case 0x42e2a0u: goto label_42e2a0;
        case 0x42e2d0u: goto label_42e2d0;
        case 0x42e398u: goto label_42e398;
        case 0x42e3a0u: goto label_42e3a0;
        default: break;
    }

    ctx->pc = 0x42e158u;

    // 0x42e158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42e158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42e15c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42e160: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42e160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42e164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42e164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x42e16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42e170: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x42e170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42e174: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42E174u;
    {
        const bool branch_taken_0x42e174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x42E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E174u;
        // 0x42e178: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e174) {
            ctx->pc = 0x42E184u;
            goto label_42e184;
        }
    }
    ctx->pc = 0x42E17Cu;
    // 0x42e17c: 0xc10ce84  jal         func_433A10
    ctx->pc = 0x42E17Cu;
    SET_GPR_U32(ctx, 31, 0x42E184u);
    ctx->pc = 0x433A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A10u, 0x42E17Cu, 0x42E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E184u;
label_42e184:
    // 0x42e184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42e184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e188: 0xc10bb74  jal         func_42EDD0
    ctx->pc = 0x42E188u;
    SET_GPR_U32(ctx, 31, 0x42E190u);
    ctx->pc = 0x42E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E188u;
    // 0x42e18c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EDD0u, 0x42E188u, 0x42E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E190u;
label_42e190:
    // 0x42e190: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42e194: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x42e194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x42e198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e19c: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42E19Cu;
    {
        const bool branch_taken_0x42e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x42e19c) {
            ctx->pc = 0x42E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E19Cu;
            // 0x42e1a0: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E1ACu;
            goto label_42e1ac;
        }
    }
    ctx->pc = 0x42E1A4u;
    // 0x42e1a4: 0xc10ce84  jal         func_433A10
    ctx->pc = 0x42E1A4u;
    SET_GPR_U32(ctx, 31, 0x42E1ACu);
    ctx->pc = 0x433A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A10u, 0x42E1A4u, 0x42E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E1ACu;
label_42e1ac:
    // 0x42e1ac: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x42e1acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x42e1b0: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x42E1B0u;
    {
        const bool branch_taken_0x42e1b0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E1B0u;
        // 0x42e1b4: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e1b0) {
            ctx->pc = 0x42E284u;
            goto label_42e284;
        }
    }
    ctx->pc = 0x42E1B8u;
    // 0x42e1b8: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x42e1b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42e1bc: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x42e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_42e1c0:
    // 0x42e1c0: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x42e1c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x42e1c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x42E1C4u;
    {
        const bool branch_taken_0x42e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E1C4u;
        // 0x42e1c8: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e1c4) {
            ctx->pc = 0x42E264u;
            goto label_42e264;
        }
    }
    ctx->pc = 0x42E1CCu;
    // 0x42e1cc: 0x0  nop
    ctx->pc = 0x42e1ccu;
    // NOP
label_42e1d0:
    // 0x42e1d0: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x42e1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x42e1d4: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x42e1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x42e1d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x42E1D8u;
    {
        const bool branch_taken_0x42e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E1D8u;
        // 0x42e1dc: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e1d8) {
            ctx->pc = 0x42E228u;
            goto label_42e228;
        }
    }
    ctx->pc = 0x42E1E0u;
    // 0x42e1e0: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x42e1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x42e1e4: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x42e1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42e1e8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x42e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x42e1ec: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x42e1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x42e1f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42e1f4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x42e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42e1f8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42E1F8u;
    {
        const bool branch_taken_0x42e1f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E1F8u;
        // 0x42e1fc: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e1f8) {
            ctx->pc = 0x42E22Cu;
            goto label_42e22c;
        }
    }
    ctx->pc = 0x42E200u;
    // 0x42e200: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x42e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x42e204: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42e208: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42e20c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x42e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42e210: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42E210u;
    {
        const bool branch_taken_0x42e210 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E210u;
        // 0x42e214: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e210) {
            ctx->pc = 0x42E230u;
            goto label_42e230;
        }
    }
    ctx->pc = 0x42E218u;
    // 0x42e218: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x42e218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x42e21c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x42e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x42e220: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x42E220u;
    {
        const bool branch_taken_0x42e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E220u;
        // 0x42e224: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e220) {
            ctx->pc = 0x42E260u;
            goto label_42e260;
        }
    }
    ctx->pc = 0x42E228u;
label_42e228:
    // 0x42e228: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x42e228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_42e22c:
    // 0x42e22c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x42e22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_42e230:
    // 0x42e230: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x42e230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x42e234: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x42e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x42e238: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x42e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42e23c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42e240: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42e244: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42e244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e248: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x42E248u;
    {
        const bool branch_taken_0x42e248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42e248) {
            ctx->pc = 0x42E274u;
            goto label_42e274;
        }
    }
    ctx->pc = 0x42E250u;
    // 0x42e250: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x42e250u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x42e254: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x42e254u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x42e258: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x42e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x42e25c: 0x0  nop
    ctx->pc = 0x42e25cu;
    // NOP
label_42e260:
    // 0x42e260: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x42e260u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_42e264:
    // 0x42e264: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x42e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x42e268: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x42e268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x42e26c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x42E26Cu;
    {
        const bool branch_taken_0x42e26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E26Cu;
        // 0x42e270: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e26c) {
            ctx->pc = 0x42E1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e1d0;
        }
    }
    ctx->pc = 0x42E274u;
label_42e274:
    // 0x42e274: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x42E274u;
    {
        const bool branch_taken_0x42e274 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E274u;
        // 0x42e278: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e274) {
            ctx->pc = 0x42E1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e1c0;
        }
    }
    ctx->pc = 0x42E27Cu;
    // 0x42e27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42E27Cu;
    {
        const bool branch_taken_0x42e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e27c) {
            ctx->pc = 0x42E288u;
            goto label_42e288;
        }
    }
    ctx->pc = 0x42E284u;
label_42e284:
    // 0x42e284: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x42e284u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42e288:
    // 0x42e288: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x42E288u;
    {
        const bool branch_taken_0x42e288 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E288u;
        // 0x42e28c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e288) {
            ctx->pc = 0x42E390u;
            goto label_42e390;
        }
    }
    ctx->pc = 0x42E290u;
    // 0x42e290: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x42e290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x42e294: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x42e294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42e298: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x42e298u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x42e29c: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x42e29cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_42e2a0:
    // 0x42e2a0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x42e2a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x42e2a4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x42e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x42e2a8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x42e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x42e2ac: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x42e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x42e2b0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x42e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x42e2b4: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x42e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x42e2b8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x42E2B8u;
    {
        const bool branch_taken_0x42e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E2B8u;
        // 0x42e2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e2b8) {
            ctx->pc = 0x42E380u;
            goto label_42e380;
        }
    }
    ctx->pc = 0x42E2C0u;
    // 0x42e2c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42e2c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e2c4: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x42e2c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42e2c8: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x42e2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x42e2cc: 0x0  nop
    ctx->pc = 0x42e2ccu;
    // NOP
label_42e2d0:
    // 0x42e2d0: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x42e2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x42e2d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x42E2D4u;
    {
        const bool branch_taken_0x42e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E2D4u;
        // 0x42e2d8: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e2d4) {
            ctx->pc = 0x42E328u;
            goto label_42e328;
        }
    }
    ctx->pc = 0x42E2DCu;
    // 0x42e2dc: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x42e2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x42e2e0: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x42e2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42e2e4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x42e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x42e2e8: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x42e2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x42e2ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42e2f0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x42e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42e2f4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x42E2F4u;
    {
        const bool branch_taken_0x42e2f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E2F4u;
        // 0x42e2f8: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e2f4) {
            ctx->pc = 0x42E32Cu;
            goto label_42e32c;
        }
    }
    ctx->pc = 0x42E2FCu;
    // 0x42e2fc: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x42e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x42e300: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42e300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42e304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42e308: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x42e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42e30c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42E30Cu;
    {
        const bool branch_taken_0x42e30c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E30Cu;
        // 0x42e310: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e30c) {
            ctx->pc = 0x42E330u;
            goto label_42e330;
        }
    }
    ctx->pc = 0x42E314u;
    // 0x42e314: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x42e314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x42e318: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x42e318u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x42e31c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x42E31Cu;
    {
        const bool branch_taken_0x42e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E31Cu;
        // 0x42e320: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e31c) {
            ctx->pc = 0x42E360u;
            goto label_42e360;
        }
    }
    ctx->pc = 0x42E324u;
    // 0x42e324: 0x0  nop
    ctx->pc = 0x42e324u;
    // NOP
label_42e328:
    // 0x42e328: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x42e328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_42e32c:
    // 0x42e32c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x42e32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_42e330:
    // 0x42e330: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x42e330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x42e334: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x42e334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x42e338: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x42e338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42e33c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x42e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42e340: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42e340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42e344: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42e344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42e348: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x42E348u;
    {
        const bool branch_taken_0x42e348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42e348) {
            ctx->pc = 0x42E384u;
            goto label_42e384;
        }
    }
    ctx->pc = 0x42E350u;
    // 0x42e350: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x42e350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x42e354: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x42e354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x42e358: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x42e358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x42e35c: 0x0  nop
    ctx->pc = 0x42e35cu;
    // NOP
label_42e360:
    // 0x42e360: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x42e360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x42e364: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x42e364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e368: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x42e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x42e36c: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x42e36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x42e370: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x42E370u;
    {
        const bool branch_taken_0x42e370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E370u;
        // 0x42e374: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e370) {
            ctx->pc = 0x42E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e2d0;
        }
    }
    ctx->pc = 0x42E378u;
    // 0x42e378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42E378u;
    {
        const bool branch_taken_0x42e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e378) {
            ctx->pc = 0x42E384u;
            goto label_42e384;
        }
    }
    ctx->pc = 0x42E380u;
label_42e380:
    // 0x42e380: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x42e380u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_42e384:
    // 0x42e384: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x42E384u;
    {
        const bool branch_taken_0x42e384 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E384u;
        // 0x42e388: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e384) {
            ctx->pc = 0x42E2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e2a0;
        }
    }
    ctx->pc = 0x42E38Cu;
    // 0x42e38c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42e38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42e390:
    // 0x42e390: 0xc10b816  jal         func_42E058
    ctx->pc = 0x42E390u;
    SET_GPR_U32(ctx, 31, 0x42E398u);
    ctx->pc = 0x42E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E390u;
    // 0x42e394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E058u, 0x42E390u, 0x42E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E398u;
label_42e398:
    // 0x42e398: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x42E398u;
    SET_GPR_U32(ctx, 31, 0x42E3A0u);
    ctx->pc = 0x42E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E398u;
    // 0x42e39c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x42E398u, 0x42E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E3A0u;
label_42e3a0:
    // 0x42e3a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42e3a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42e3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42e3a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42e3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42e3ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42e3acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42e3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42e3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x42E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E3B4u;
        // 0x42e3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E3BCu;
    // 0x42e3bc: 0x0  nop
    ctx->pc = 0x42e3bcu;
    // NOP
    ctx->pc = 0x42e3c0u;
}
