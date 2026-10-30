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

// Function: sub_0046E168
// Address: 0x46e168 - 0x46e2c0
void sub_0046E168_0x46e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E168_0x46e168");
#endif

    ctx->pc = 0x46e168u;

    // 0x46e168: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x46e168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46e16c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x46e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46e170: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x46e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x46e174: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x46e174u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46e178: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x46e178u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46e17c: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x46e17cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x46e180: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46E180u;
    {
        const bool branch_taken_0x46e180 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x46E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E180u;
        // 0x46e184: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e180) {
            ctx->pc = 0x46E190u;
            goto label_46e190;
        }
    }
    ctx->pc = 0x46E188u;
    // 0x46e188: 0x3e00008  jr          $ra
    ctx->pc = 0x46E188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E188u;
        // 0x46e18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E190u;
label_46e190:
    // 0x46e190: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x46E190u;
    {
        const bool branch_taken_0x46e190 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e190) {
            ctx->pc = 0x46E1E0u;
            goto label_46e1e0;
        }
    }
    ctx->pc = 0x46E198u;
    // 0x46e198: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x46e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x46e19c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x46E19Cu;
    {
        const bool branch_taken_0x46e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E19Cu;
        // 0x46e1a0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e19c) {
            ctx->pc = 0x46E1D0u;
            goto label_46e1d0;
        }
    }
    ctx->pc = 0x46E1A4u;
    // 0x46e1a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46e1a8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x46e1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x46e1ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x46e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x46e1b0: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x46e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x46e1b4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46E1B4u;
    {
        const bool branch_taken_0x46e1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x46E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E1B4u;
        // 0x46e1b8: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e1b4) {
            ctx->pc = 0x46E1CCu;
            goto label_46e1cc;
        }
    }
    ctx->pc = 0x46E1BCu;
    // 0x46e1bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46E1BCu;
    {
        const bool branch_taken_0x46e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x46E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E1BCu;
        // 0x46e1c0: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e1bc) {
            ctx->pc = 0x46E1CCu;
            goto label_46e1cc;
        }
    }
    ctx->pc = 0x46E1C4u;
    // 0x46e1c4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46E1C4u;
    {
        const bool branch_taken_0x46e1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e1c4) {
            ctx->pc = 0x46E1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E1C4u;
            // 0x46e1c8: 0x91020007  lbu         $v0, 0x7($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E1D4u;
            goto label_46e1d4;
        }
    }
    ctx->pc = 0x46E1CCu;
label_46e1cc:
    // 0x46e1cc: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x46e1ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46e1d0:
    // 0x46e1d0: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x46e1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
label_46e1d4:
    // 0x46e1d4: 0x35a30010  ori         $v1, $t5, 0x10
    ctx->pc = 0x46e1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x46e1d8: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x46e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x46e1dc: 0x62680b  movn        $t5, $v1, $v0
    ctx->pc = 0x46e1dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
label_46e1e0:
    // 0x46e1e0: 0x51200016  beql        $t1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x46E1E0u;
    {
        const bool branch_taken_0x46e1e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e1e0) {
            ctx->pc = 0x46E1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E1E0u;
            // 0x46e1e4: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E23Cu;
            goto label_46e23c;
        }
    }
    ctx->pc = 0x46E1E8u;
    // 0x46e1e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x46e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x46e1ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x46E1ECu;
    {
        const bool branch_taken_0x46e1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E1ECu;
        // 0x46e1f0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e1ec) {
            ctx->pc = 0x46E228u;
            goto label_46e228;
        }
    }
    ctx->pc = 0x46E1F4u;
    // 0x46e1f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46e1f8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x46e1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x46e1fc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x46e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x46e200: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x46e200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x46e204: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46E204u;
    {
        const bool branch_taken_0x46e204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x46e204) {
            ctx->pc = 0x46E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E204u;
            // 0x46e208: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E228u;
            goto label_46e228;
        }
    }
    ctx->pc = 0x46E20Cu;
    // 0x46e20c: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x46e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x46e210: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46E210u;
    {
        const bool branch_taken_0x46e210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e210) {
            ctx->pc = 0x46E214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E210u;
            // 0x46e214: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E228u;
            goto label_46e228;
        }
    }
    ctx->pc = 0x46E218u;
    // 0x46e218: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x46e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x46e21c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46E21Cu;
    {
        const bool branch_taken_0x46e21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e21c) {
            ctx->pc = 0x46E220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E21Cu;
            // 0x46e220: 0x91220007  lbu         $v0, 0x7($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E22Cu;
            goto label_46e22c;
        }
    }
    ctx->pc = 0x46E224u;
    // 0x46e224: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x46e224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46e228:
    // 0x46e228: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x46e228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_46e22c:
    // 0x46e22c: 0x35830010  ori         $v1, $t4, 0x10
    ctx->pc = 0x46e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16);
    // 0x46e230: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x46e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x46e234: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x46e234u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x46e238: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x46e238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_46e23c:
    // 0x46e23c: 0x35890008  ori         $t1, $t4, 0x8
    ctx->pc = 0x46e23cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
    // 0x46e240: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x46e240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46e244: 0x35ab0008  ori         $t3, $t5, 0x8
    ctx->pc = 0x46e244u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8);
    // 0x46e248: 0x94e50010  lhu         $a1, 0x10($a3)
    ctx->pc = 0x46e248u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x46e24c: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x46e24cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x46e250: 0x94e80012  lhu         $t0, 0x12($a3)
    ctx->pc = 0x46e250u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x46e254: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x46e254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x46e258: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x46e258u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46e25c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x46e25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x46e260: 0x124600b  movn        $t4, $t1, $a0
    ctx->pc = 0x46e260u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 9));
    // 0x46e264: 0x103502b  sltu        $t2, $t0, $v1
    ctx->pc = 0x46e264u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46e268: 0x162680b  movn        $t5, $t3, $v0
    ctx->pc = 0x46e268u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 11));
    // 0x46e26c: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x46e26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x46e270: 0x94e9000e  lhu         $t1, 0xE($a3)
    ctx->pc = 0x46e270u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x46e274: 0x94c5000e  lhu         $a1, 0xE($a2)
    ctx->pc = 0x46e274u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x46e278: 0x35a20004  ori         $v0, $t5, 0x4
    ctx->pc = 0x46e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)4);
    // 0x46e27c: 0x94e8000c  lhu         $t0, 0xC($a3)
    ctx->pc = 0x46e27cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x46e280: 0x43680b  movn        $t5, $v0, $v1
    ctx->pc = 0x46e280u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 2));
    // 0x46e284: 0x125382b  sltu        $a3, $t1, $a1
    ctx->pc = 0x46e284u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x46e288: 0x35840004  ori         $a0, $t4, 0x4
    ctx->pc = 0x46e288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
    // 0x46e28c: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x46e28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x46e290: 0x35a30002  ori         $v1, $t5, 0x2
    ctx->pc = 0x46e290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x46e294: 0xa9282b  sltu        $a1, $a1, $t1
    ctx->pc = 0x46e294u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x46e298: 0x8a600b  movn        $t4, $a0, $t2
    ctx->pc = 0x46e298u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x46e29c: 0x65680b  movn        $t5, $v1, $a1
    ctx->pc = 0x46e29cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x46e2a0: 0x35840002  ori         $a0, $t4, 0x2
    ctx->pc = 0x46e2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x46e2a4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x46e2a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46e2a8: 0x87600b  movn        $t4, $a0, $a3
    ctx->pc = 0x46e2a8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x46e2ac: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x46e2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x46e2b0: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x46e2b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x46e2b4: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x46e2b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x46e2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x46E2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E2B8u;
        // 0x46e2bc: 0x1ac1023  subu        $v0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E2C0u;
}
