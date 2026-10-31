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

// Function: sub_001FD1C8
// Address: 0x1fd1c8 - 0x1fd368
void sub_001FD1C8_0x1fd1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD1C8_0x1fd1c8");
#endif

    switch (ctx->pc) {
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1dcu: goto label_1fd1dc;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd1e4u: goto label_1fd1e4;
        case 0x1fd1e8u: goto label_1fd1e8;
        case 0x1fd1ecu: goto label_1fd1ec;
        case 0x1fd1f0u: goto label_1fd1f0;
        case 0x1fd1f4u: goto label_1fd1f4;
        case 0x1fd1f8u: goto label_1fd1f8;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd200u: goto label_1fd200;
        case 0x1fd204u: goto label_1fd204;
        case 0x1fd208u: goto label_1fd208;
        case 0x1fd20cu: goto label_1fd20c;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd214u: goto label_1fd214;
        case 0x1fd218u: goto label_1fd218;
        case 0x1fd21cu: goto label_1fd21c;
        case 0x1fd220u: goto label_1fd220;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd234u: goto label_1fd234;
        case 0x1fd238u: goto label_1fd238;
        case 0x1fd23cu: goto label_1fd23c;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd244u: goto label_1fd244;
        case 0x1fd248u: goto label_1fd248;
        case 0x1fd24cu: goto label_1fd24c;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd258u: goto label_1fd258;
        case 0x1fd25cu: goto label_1fd25c;
        case 0x1fd260u: goto label_1fd260;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd268u: goto label_1fd268;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd270u: goto label_1fd270;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd27cu: goto label_1fd27c;
        case 0x1fd280u: goto label_1fd280;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd288u: goto label_1fd288;
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd290u: goto label_1fd290;
        case 0x1fd294u: goto label_1fd294;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd29cu: goto label_1fd29c;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2a4u: goto label_1fd2a4;
        case 0x1fd2a8u: goto label_1fd2a8;
        case 0x1fd2acu: goto label_1fd2ac;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b4u: goto label_1fd2b4;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2bcu: goto label_1fd2bc;
        case 0x1fd2c0u: goto label_1fd2c0;
        case 0x1fd2c4u: goto label_1fd2c4;
        case 0x1fd2c8u: goto label_1fd2c8;
        case 0x1fd2ccu: goto label_1fd2cc;
        case 0x1fd2d0u: goto label_1fd2d0;
        case 0x1fd2d4u: goto label_1fd2d4;
        case 0x1fd2d8u: goto label_1fd2d8;
        case 0x1fd2dcu: goto label_1fd2dc;
        case 0x1fd2e0u: goto label_1fd2e0;
        case 0x1fd2e4u: goto label_1fd2e4;
        case 0x1fd2e8u: goto label_1fd2e8;
        case 0x1fd2ecu: goto label_1fd2ec;
        case 0x1fd2f0u: goto label_1fd2f0;
        case 0x1fd2f4u: goto label_1fd2f4;
        case 0x1fd2f8u: goto label_1fd2f8;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd300u: goto label_1fd300;
        case 0x1fd304u: goto label_1fd304;
        case 0x1fd308u: goto label_1fd308;
        case 0x1fd30cu: goto label_1fd30c;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd314u: goto label_1fd314;
        case 0x1fd318u: goto label_1fd318;
        case 0x1fd31cu: goto label_1fd31c;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd328u: goto label_1fd328;
        case 0x1fd32cu: goto label_1fd32c;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        default: break;
    }

    ctx->pc = 0x1fd1c8u;

label_1fd1c8:
    // 0x1fd1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fd1cc:
    // 0x1fd1cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fd1d0:
    // 0x1fd1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd1d4:
    // 0x1fd1d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fd1d8:
    // 0x1fd1d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd1dc:
    // 0x1fd1dc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_1fd1e0:
    if (ctx->pc == 0x1FD1E0u) {
        ctx->pc = 0x1FD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1DCu;
        // 0x1fd1e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1E4u;
        goto label_1fd1e4;
    }
    ctx->pc = 0x1FD1DCu;
    {
        const bool branch_taken_0x1fd1dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1DCu;
        // 0x1fd1e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1dc) {
            ctx->pc = 0x1FD200u;
            goto label_1fd200;
        }
    }
    ctx->pc = 0x1FD1E4u;
label_1fd1e4:
    // 0x1fd1e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fd1e8:
    // 0x1fd1e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1fd1ec:
    // 0x1fd1ec: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1fd1f0:
    // 0x1fd1f0: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1fd1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1fd1f4:
    // 0x1fd1f4: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1fd1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1fd1f8:
    // 0x1fd1f8: 0x10000052  b           . + 4 + (0x52 << 2)
label_1fd1fc:
    if (ctx->pc == 0x1FD1FCu) {
        ctx->pc = 0x1FD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1F8u;
        // 0x1fd1fc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD200u;
        goto label_1fd200;
    }
    ctx->pc = 0x1FD1F8u;
    {
        const bool branch_taken_0x1fd1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1F8u;
        // 0x1fd1fc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1f8) {
            ctx->pc = 0x1FD344u;
            goto label_1fd344;
        }
    }
    ctx->pc = 0x1FD200u;
label_1fd200:
    // 0x1fd200: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fd200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fd204:
    // 0x1fd204: 0x14a20052  bne         $a1, $v0, . + 4 + (0x52 << 2)
label_1fd208:
    if (ctx->pc == 0x1FD208u) {
        ctx->pc = 0x1FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD204u;
        // 0x1fd208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD20Cu;
        goto label_1fd20c;
    }
    ctx->pc = 0x1FD204u;
    {
        const bool branch_taken_0x1fd204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD204u;
        // 0x1fd208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd204) {
            ctx->pc = 0x1FD350u;
            goto label_1fd350;
        }
    }
    ctx->pc = 0x1FD20Cu;
label_1fd20c:
    // 0x1fd20c: 0xc0750fa  jal         func_1D43E8
label_1fd210:
    if (ctx->pc == 0x1FD210u) {
        ctx->pc = 0x1FD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD20Cu;
        // 0x1fd210: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD214u;
        goto label_1fd214;
    }
    ctx->pc = 0x1FD20Cu;
    SET_GPR_U32(ctx, 31, 0x1FD214u);
    ctx->pc = 0x1FD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD20Cu;
    // 0x1fd210: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1FD20Cu, 0x1FD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD214u;
label_1fd214:
    // 0x1fd214: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1fd218:
    // 0x1fd218: 0xc0750fc  jal         func_1D43F0
label_1fd21c:
    if (ctx->pc == 0x1FD21Cu) {
        ctx->pc = 0x1FD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD218u;
        // 0x1fd21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD220u;
        goto label_1fd220;
    }
    ctx->pc = 0x1FD218u;
    SET_GPR_U32(ctx, 31, 0x1FD220u);
    ctx->pc = 0x1FD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD218u;
    // 0x1fd21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1FD218u, 0x1FD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD220u;
label_1fd220:
    // 0x1fd220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd224:
    // 0x1fd224: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fd228:
    // 0x1fd228: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fd228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fd22c:
    // 0x1fd22c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1fd230:
    if (ctx->pc == 0x1FD230u) {
        ctx->pc = 0x1FD234u;
        goto label_1fd234;
    }
    ctx->pc = 0x1FD22Cu;
    {
        const bool branch_taken_0x1fd22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd22c) {
            ctx->pc = 0x1FD294u;
            goto label_1fd294;
        }
    }
    ctx->pc = 0x1FD234u;
label_1fd234:
    // 0x1fd234: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1fd234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fd238:
    // 0x1fd238: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1fd23c:
    if (ctx->pc == 0x1FD23Cu) {
        ctx->pc = 0x1FD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD238u;
        // 0x1fd23c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD240u;
        goto label_1fd240;
    }
    ctx->pc = 0x1FD238u;
    {
        const bool branch_taken_0x1fd238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD238u;
        // 0x1fd23c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd238) {
            ctx->pc = 0x1FD294u;
            goto label_1fd294;
        }
    }
    ctx->pc = 0x1FD240u;
label_1fd240:
    // 0x1fd240: 0x8e2600c0  lw          $a2, 0xC0($s1)
    ctx->pc = 0x1fd240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1fd244:
    // 0x1fd244: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fd244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd248:
    // 0x1fd248: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd24c:
    // 0x1fd24c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd250:
    // 0x1fd250: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd254:
    // 0x1fd254: 0x60f809  jalr        $v1
label_1fd258:
    if (ctx->pc == 0x1FD258u) {
        ctx->pc = 0x1FD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD254u;
        // 0x1fd258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD25Cu;
        goto label_1fd25c;
    }
    ctx->pc = 0x1FD254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD25Cu);
        ctx->pc = 0x1FD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD254u;
        // 0x1fd258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD254u, 0x1FD25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD25Cu;
label_1fd25c:
    // 0x1fd25c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fd260:
    // 0x1fd260: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1fd260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1fd264:
    // 0x1fd264: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1fd264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1fd268:
    // 0x1fd268: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x1fd268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_1fd26c:
    // 0x1fd26c: 0xae300098  sw          $s0, 0x98($s1)
    ctx->pc = 0x1fd26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 16));
label_1fd270:
    // 0x1fd270: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd274:
    // 0x1fd274: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fd274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fd278:
    // 0x1fd278: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd27c:
    // 0x1fd27c: 0x40f809  jalr        $v0
label_1fd280:
    if (ctx->pc == 0x1FD280u) {
        ctx->pc = 0x1FD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD27Cu;
        // 0x1fd280: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD284u;
        goto label_1fd284;
    }
    ctx->pc = 0x1FD27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD284u);
        ctx->pc = 0x1FD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD27Cu;
        // 0x1fd280: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD27Cu, 0x1FD284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD284u;
label_1fd284:
    // 0x1fd284: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x1fd284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_1fd288:
    // 0x1fd288: 0xae30008c  sw          $s0, 0x8C($s1)
    ctx->pc = 0x1fd288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
label_1fd28c:
    // 0x1fd28c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1fd290:
    if (ctx->pc == 0x1FD290u) {
        ctx->pc = 0x1FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD28Cu;
        // 0x1fd290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD294u;
        goto label_1fd294;
    }
    ctx->pc = 0x1FD28Cu;
    {
        const bool branch_taken_0x1fd28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD28Cu;
        // 0x1fd290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd28c) {
            ctx->pc = 0x1FD350u;
            goto label_1fd350;
        }
    }
    ctx->pc = 0x1FD294u;
label_1fd294:
    // 0x1fd294: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1fd298:
    if (ctx->pc == 0x1FD298u) {
        ctx->pc = 0x1FD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD294u;
        // 0x1fd298: 0xae230074  sw          $v1, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD29Cu;
        goto label_1fd29c;
    }
    ctx->pc = 0x1FD294u;
    {
        const bool branch_taken_0x1fd294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD294u;
        // 0x1fd298: 0xae230074  sw          $v1, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd294) {
            ctx->pc = 0x1FD2ACu;
            goto label_1fd2ac;
        }
    }
    ctx->pc = 0x1FD29Cu;
label_1fd29c:
    // 0x1fd29c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1fd2a0:
    // 0x1fd2a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd2a4:
    // 0x1fd2a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fd2a8:
    if (ctx->pc == 0x1FD2A8u) {
        ctx->pc = 0x1FD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2A4u;
        // 0x1fd2a8: 0xa462eec0  sh          $v0, -0x1140($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294962880), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2ACu;
        goto label_1fd2ac;
    }
    ctx->pc = 0x1FD2A4u;
    {
        const bool branch_taken_0x1fd2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2A4u;
        // 0x1fd2a8: 0xa462eec0  sh          $v0, -0x1140($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294962880), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2a4) {
            ctx->pc = 0x1FD2D0u;
            goto label_1fd2d0;
        }
    }
    ctx->pc = 0x1FD2ACu;
label_1fd2ac:
    // 0x1fd2ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd2b0:
    // 0x1fd2b0: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_1fd2b4:
    if (ctx->pc == 0x1FD2B4u) {
        ctx->pc = 0x1FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2B0u;
        // 0x1fd2b4: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2B8u;
        goto label_1fd2b8;
    }
    ctx->pc = 0x1FD2B0u;
    {
        const bool branch_taken_0x1fd2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2B0u;
        // 0x1fd2b4: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2b0) {
            ctx->pc = 0x1FD2CCu;
            goto label_1fd2cc;
        }
    }
    ctx->pc = 0x1FD2B8u;
label_1fd2b8:
    // 0x1fd2b8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1fd2bc:
    // 0x1fd2bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd2c0:
    // 0x1fd2c0: 0xa462eec0  sh          $v0, -0x1140($v1)
    ctx->pc = 0x1fd2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962880), (uint16_t)GPR_U32(ctx, 2));
label_1fd2c4:
    // 0x1fd2c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fd2c8:
    if (ctx->pc == 0x1FD2C8u) {
        ctx->pc = 0x1FD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2C4u;
        // 0x1fd2c8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2CCu;
        goto label_1fd2cc;
    }
    ctx->pc = 0x1FD2C4u;
    {
        const bool branch_taken_0x1fd2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2C4u;
        // 0x1fd2c8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2c4) {
            ctx->pc = 0x1FD2D4u;
            goto label_1fd2d4;
        }
    }
    ctx->pc = 0x1FD2CCu;
label_1fd2cc:
    // 0x1fd2cc: 0xa444eec0  sh          $a0, -0x1140($v0)
    ctx->pc = 0x1fd2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294962880), (uint16_t)GPR_U32(ctx, 4));
label_1fd2d0:
    // 0x1fd2d0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1fd2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_1fd2d4:
    // 0x1fd2d4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1fd2d8:
    // 0x1fd2d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fd2dc:
    // 0x1fd2dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fd2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fd2e0:
    // 0x1fd2e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1fd2e4:
    if (ctx->pc == 0x1FD2E4u) {
        ctx->pc = 0x1FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E0u;
        // 0x1fd2e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2E8u;
        goto label_1fd2e8;
    }
    ctx->pc = 0x1FD2E0u;
    {
        const bool branch_taken_0x1fd2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E0u;
        // 0x1fd2e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2e0) {
            ctx->pc = 0x1FD304u;
            goto label_1fd304;
        }
    }
    ctx->pc = 0x1FD2E8u;
label_1fd2e8:
    // 0x1fd2e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1fd2ec:
    // 0x1fd2ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd2f0:
    // 0x1fd2f0: 0xc06ba26  jal         func_1AE898
label_1fd2f4:
    if (ctx->pc == 0x1FD2F4u) {
        ctx->pc = 0x1FD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2F0u;
        // 0x1fd2f4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2F8u;
        goto label_1fd2f8;
    }
    ctx->pc = 0x1FD2F0u;
    SET_GPR_U32(ctx, 31, 0x1FD2F8u);
    ctx->pc = 0x1FD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2F0u;
    // 0x1fd2f4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1FD2F0u, 0x1FD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2F8u;
label_1fd2f8:
    // 0x1fd2f8: 0xc07f974  jal         func_1FE5D0
label_1fd2fc:
    if (ctx->pc == 0x1FD2FCu) {
        ctx->pc = 0x1FD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2F8u;
        // 0x1fd2fc: 0x80440019  lb          $a0, 0x19($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD300u;
        goto label_1fd300;
    }
    ctx->pc = 0x1FD2F8u;
    SET_GPR_U32(ctx, 31, 0x1FD300u);
    ctx->pc = 0x1FD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2F8u;
    // 0x1fd2fc: 0x80440019  lb          $a0, 0x19($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE5D0u, 0x1FD2F8u, 0x1FD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD300u;
label_1fd300:
    // 0x1fd300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd304:
    // 0x1fd304: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fd308:
    if (ctx->pc == 0x1FD308u) {
        ctx->pc = 0x1FD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD304u;
        // 0x1fd308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD30Cu;
        goto label_1fd30c;
    }
    ctx->pc = 0x1FD304u;
    {
        const bool branch_taken_0x1fd304 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD304u;
        // 0x1fd308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd304) {
            ctx->pc = 0x1FD314u;
            goto label_1fd314;
        }
    }
    ctx->pc = 0x1FD30Cu;
label_1fd30c:
    // 0x1fd30c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fd310:
    if (ctx->pc == 0x1FD310u) {
        ctx->pc = 0x1FD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD30Cu;
        // 0x1fd310: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD314u;
        goto label_1fd314;
    }
    ctx->pc = 0x1FD30Cu;
    {
        const bool branch_taken_0x1fd30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD30Cu;
        // 0x1fd310: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd30c) {
            ctx->pc = 0x1FD338u;
            goto label_1fd338;
        }
    }
    ctx->pc = 0x1FD314u;
label_1fd314:
    // 0x1fd314: 0xc07f7d0  jal         func_1FDF40
label_1fd318:
    if (ctx->pc == 0x1FD318u) {
        ctx->pc = 0x1FD31Cu;
        goto label_1fd31c;
    }
    ctx->pc = 0x1FD314u;
    SET_GPR_U32(ctx, 31, 0x1FD31Cu);
    ctx->pc = 0x1FDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF40u, 0x1FD314u, 0x1FD31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD31Cu;
label_1fd31c:
    // 0x1fd31c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1fd320:
    if (ctx->pc == 0x1FD320u) {
        ctx->pc = 0x1FD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD31Cu;
        // 0x1fd320: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD324u;
        goto label_1fd324;
    }
    ctx->pc = 0x1FD31Cu;
    {
        const bool branch_taken_0x1fd31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD31Cu;
        // 0x1fd320: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd31c) {
            ctx->pc = 0x1FD338u;
            goto label_1fd338;
        }
    }
    ctx->pc = 0x1FD324u;
label_1fd324:
    // 0x1fd324: 0x2602eec0  addiu       $v0, $s0, -0x1140
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962880));
label_1fd328:
    // 0x1fd328: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1fd328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_1fd32c:
    // 0x1fd32c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fd32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd330:
    // 0x1fd330: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1fd330u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_1fd334:
    // 0x1fd334: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x1fd334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_1fd338:
    // 0x1fd338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fd338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fd33c:
    // 0x1fd33c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fd340:
    // 0x1fd340: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1fd344:
    // 0x1fd344: 0xc043f0c  jal         func_10FC30
label_1fd348:
    if (ctx->pc == 0x1FD348u) {
        ctx->pc = 0x1FD34Cu;
        goto label_1fd34c;
    }
    ctx->pc = 0x1FD344u;
    SET_GPR_U32(ctx, 31, 0x1FD34Cu);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1FD344u, 0x1FD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD34Cu;
label_1fd34c:
    // 0x1fd34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd350:
    // 0x1fd350: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd354:
    // 0x1fd354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd358:
    // 0x1fd358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd35c:
    // 0x1fd35c: 0x3e00008  jr          $ra
label_1fd360:
    if (ctx->pc == 0x1FD360u) {
        ctx->pc = 0x1FD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD35Cu;
        // 0x1fd360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD364u;
        goto label_1fd364;
    }
    ctx->pc = 0x1FD35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD35Cu;
        // 0x1fd360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD364u;
label_1fd364:
    // 0x1fd364: 0x0  nop
    ctx->pc = 0x1fd364u;
    // NOP
    ctx->pc = 0x1fd368u;
}
