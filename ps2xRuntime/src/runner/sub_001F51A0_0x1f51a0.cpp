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

// Function: sub_001F51A0
// Address: 0x1f51a0 - 0x1f5308
void sub_001F51A0_0x1f51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F51A0_0x1f51a0");
#endif

    switch (ctx->pc) {
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51a4u: goto label_1f51a4;
        case 0x1f51a8u: goto label_1f51a8;
        case 0x1f51acu: goto label_1f51ac;
        case 0x1f51b0u: goto label_1f51b0;
        case 0x1f51b4u: goto label_1f51b4;
        case 0x1f51b8u: goto label_1f51b8;
        case 0x1f51bcu: goto label_1f51bc;
        case 0x1f51c0u: goto label_1f51c0;
        case 0x1f51c4u: goto label_1f51c4;
        case 0x1f51c8u: goto label_1f51c8;
        case 0x1f51ccu: goto label_1f51cc;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51d4u: goto label_1f51d4;
        case 0x1f51d8u: goto label_1f51d8;
        case 0x1f51dcu: goto label_1f51dc;
        case 0x1f51e0u: goto label_1f51e0;
        case 0x1f51e4u: goto label_1f51e4;
        case 0x1f51e8u: goto label_1f51e8;
        case 0x1f51ecu: goto label_1f51ec;
        case 0x1f51f0u: goto label_1f51f0;
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f51f8u: goto label_1f51f8;
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5200u: goto label_1f5200;
        case 0x1f5204u: goto label_1f5204;
        case 0x1f5208u: goto label_1f5208;
        case 0x1f520cu: goto label_1f520c;
        case 0x1f5210u: goto label_1f5210;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5218u: goto label_1f5218;
        case 0x1f521cu: goto label_1f521c;
        case 0x1f5220u: goto label_1f5220;
        case 0x1f5224u: goto label_1f5224;
        case 0x1f5228u: goto label_1f5228;
        case 0x1f522cu: goto label_1f522c;
        case 0x1f5230u: goto label_1f5230;
        case 0x1f5234u: goto label_1f5234;
        case 0x1f5238u: goto label_1f5238;
        case 0x1f523cu: goto label_1f523c;
        case 0x1f5240u: goto label_1f5240;
        case 0x1f5244u: goto label_1f5244;
        case 0x1f5248u: goto label_1f5248;
        case 0x1f524cu: goto label_1f524c;
        case 0x1f5250u: goto label_1f5250;
        case 0x1f5254u: goto label_1f5254;
        case 0x1f5258u: goto label_1f5258;
        case 0x1f525cu: goto label_1f525c;
        case 0x1f5260u: goto label_1f5260;
        case 0x1f5264u: goto label_1f5264;
        case 0x1f5268u: goto label_1f5268;
        case 0x1f526cu: goto label_1f526c;
        case 0x1f5270u: goto label_1f5270;
        case 0x1f5274u: goto label_1f5274;
        case 0x1f5278u: goto label_1f5278;
        case 0x1f527cu: goto label_1f527c;
        case 0x1f5280u: goto label_1f5280;
        case 0x1f5284u: goto label_1f5284;
        case 0x1f5288u: goto label_1f5288;
        case 0x1f528cu: goto label_1f528c;
        case 0x1f5290u: goto label_1f5290;
        case 0x1f5294u: goto label_1f5294;
        case 0x1f5298u: goto label_1f5298;
        case 0x1f529cu: goto label_1f529c;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52a4u: goto label_1f52a4;
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52acu: goto label_1f52ac;
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52b4u: goto label_1f52b4;
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52c0u: goto label_1f52c0;
        case 0x1f52c4u: goto label_1f52c4;
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52ccu: goto label_1f52cc;
        case 0x1f52d0u: goto label_1f52d0;
        case 0x1f52d4u: goto label_1f52d4;
        case 0x1f52d8u: goto label_1f52d8;
        case 0x1f52dcu: goto label_1f52dc;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f52e4u: goto label_1f52e4;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f52ecu: goto label_1f52ec;
        case 0x1f52f0u: goto label_1f52f0;
        case 0x1f52f4u: goto label_1f52f4;
        case 0x1f52f8u: goto label_1f52f8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5300u: goto label_1f5300;
        case 0x1f5304u: goto label_1f5304;
        default: break;
    }

    ctx->pc = 0x1f51a0u;

label_1f51a0:
    // 0x1f51a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f51a4:
    // 0x1f51a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f51a8:
    // 0x1f51a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f51ac:
    // 0x1f51ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f51acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f51b0:
    // 0x1f51b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f51b4:
    // 0x1f51b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f51b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f51b8:
    // 0x1f51b8: 0xc0750fa  jal         func_1D43E8
label_1f51bc:
    if (ctx->pc == 0x1F51BCu) {
        ctx->pc = 0x1F51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51B8u;
        // 0x1f51bc: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F51C0u;
        goto label_1f51c0;
    }
    ctx->pc = 0x1F51B8u;
    SET_GPR_U32(ctx, 31, 0x1F51C0u);
    ctx->pc = 0x1F51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51B8u;
    // 0x1f51bc: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1F51B8u, 0x1F51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51C0u;
label_1f51c0:
    // 0x1f51c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f51c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f51c4:
    // 0x1f51c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f51c8:
    // 0x1f51c8: 0x5602001a  bnel        $s0, $v0, . + 4 + (0x1A << 2)
label_1f51cc:
    if (ctx->pc == 0x1F51CCu) {
        ctx->pc = 0x1F51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51C8u;
        // 0x1f51cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F51D0u;
        goto label_1f51d0;
    }
    ctx->pc = 0x1F51C8u;
    {
        const bool branch_taken_0x1f51c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f51c8) {
            ctx->pc = 0x1F51CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F51C8u;
            // 0x1f51cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5234u;
            goto label_1f5234;
        }
    }
    ctx->pc = 0x1F51D0u;
label_1f51d0:
    // 0x1f51d0: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1f51d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f51d4:
    // 0x1f51d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f51d8:
    // 0x1f51d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f51d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1f51dc:
    // 0x1f51dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f51e0:
    // 0x1f51e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f51e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f51e4:
    // 0x1f51e4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f51e8:
    // 0x1f51e8: 0x60f809  jalr        $v1
label_1f51ec:
    if (ctx->pc == 0x1F51ECu) {
        ctx->pc = 0x1F51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51E8u;
        // 0x1f51ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F51F0u;
        goto label_1f51f0;
    }
    ctx->pc = 0x1F51E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F51F0u);
        ctx->pc = 0x1F51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51E8u;
        // 0x1f51ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F51E8u, 0x1F51F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F51F0u;
label_1f51f0:
    // 0x1f51f0: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f51f4:
    // 0x1f51f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f51f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f51f8:
    // 0x1f51f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f51fc:
    // 0x1f51fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f51fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5200:
    // 0x1f5200: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5204:
    // 0x1f5204: 0x60f809  jalr        $v1
label_1f5208:
    if (ctx->pc == 0x1F5208u) {
        ctx->pc = 0x1F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5204u;
        // 0x1f5208: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F520Cu;
        goto label_1f520c;
    }
    ctx->pc = 0x1F5204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F520Cu);
        ctx->pc = 0x1F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5204u;
        // 0x1f5208: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5204u, 0x1F520Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F520Cu;
label_1f520c:
    // 0x1f520c: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x1f520cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1f5210:
    // 0x1f5210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5214:
    // 0x1f5214: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5218:
    // 0x1f5218: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f521c:
    // 0x1f521c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5220:
    // 0x1f5220: 0x60f809  jalr        $v1
label_1f5224:
    if (ctx->pc == 0x1F5224u) {
        ctx->pc = 0x1F5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5220u;
        // 0x1f5224: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5228u;
        goto label_1f5228;
    }
    ctx->pc = 0x1F5220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5228u);
        ctx->pc = 0x1F5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5220u;
        // 0x1f5224: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5220u, 0x1F5228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5228u;
label_1f5228:
    // 0x1f5228: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f522c:
    // 0x1f522c: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f5230:
    if (ctx->pc == 0x1F5230u) {
        ctx->pc = 0x1F5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F522Cu;
        // 0x1f5230: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5234u;
        goto label_1f5234;
    }
    ctx->pc = 0x1F522Cu;
    {
        const bool branch_taken_0x1f522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F522Cu;
        // 0x1f5230: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f522c) {
            ctx->pc = 0x1F52CCu;
            goto label_1f52cc;
        }
    }
    ctx->pc = 0x1F5234u;
label_1f5234:
    // 0x1f5234: 0x5602002e  bnel        $s0, $v0, . + 4 + (0x2E << 2)
label_1f5238:
    if (ctx->pc == 0x1F5238u) {
        ctx->pc = 0x1F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5234u;
        // 0x1f5238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F523Cu;
        goto label_1f523c;
    }
    ctx->pc = 0x1F5234u;
    {
        const bool branch_taken_0x1f5234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5234) {
            ctx->pc = 0x1F5238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5234u;
            // 0x1f5238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F52F0u;
            goto label_1f52f0;
        }
    }
    ctx->pc = 0x1F523Cu;
label_1f523c:
    // 0x1f523c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1f5240:
    if (ctx->pc == 0x1F5240u) {
        ctx->pc = 0x1F5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F523Cu;
        // 0x1f5240: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5244u;
        goto label_1f5244;
    }
    ctx->pc = 0x1F523Cu;
    {
        const bool branch_taken_0x1f523c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F523Cu;
        // 0x1f5240: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f523c) {
            ctx->pc = 0x1F52A0u;
            goto label_1f52a0;
        }
    }
    ctx->pc = 0x1F5244u;
label_1f5244:
    // 0x1f5244: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1f5244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f5248:
    // 0x1f5248: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f524c:
    // 0x1f524c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5250:
    // 0x1f5250: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5254:
    // 0x1f5254: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5258:
    // 0x1f5258: 0x60f809  jalr        $v1
label_1f525c:
    if (ctx->pc == 0x1F525Cu) {
        ctx->pc = 0x1F525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5258u;
        // 0x1f525c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5260u;
        goto label_1f5260;
    }
    ctx->pc = 0x1F5258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5260u);
        ctx->pc = 0x1F525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5258u;
        // 0x1f525c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5258u, 0x1F5260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5260u;
label_1f5260:
    // 0x1f5260: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x1f5260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f5264:
    // 0x1f5264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5268:
    // 0x1f5268: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f526c:
    // 0x1f526c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f526cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5270:
    // 0x1f5270: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5274:
    // 0x1f5274: 0x60f809  jalr        $v1
label_1f5278:
    if (ctx->pc == 0x1F5278u) {
        ctx->pc = 0x1F5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5274u;
        // 0x1f5278: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F527Cu;
        goto label_1f527c;
    }
    ctx->pc = 0x1F5274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F527Cu);
        ctx->pc = 0x1F5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5274u;
        // 0x1f5278: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5274u, 0x1F527Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F527Cu;
label_1f527c:
    // 0x1f527c: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x1f527cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1f5280:
    // 0x1f5280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5284:
    // 0x1f5284: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5288:
    // 0x1f5288: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f528c:
    // 0x1f528c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5290:
    // 0x1f5290: 0x60f809  jalr        $v1
label_1f5294:
    if (ctx->pc == 0x1F5294u) {
        ctx->pc = 0x1F5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5290u;
        // 0x1f5294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5298u;
        goto label_1f5298;
    }
    ctx->pc = 0x1F5290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5298u);
        ctx->pc = 0x1F5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5290u;
        // 0x1f5294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5290u, 0x1F5298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5298u;
label_1f5298:
    // 0x1f5298: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f529c:
    if (ctx->pc == 0x1F529Cu) {
        ctx->pc = 0x1F529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5298u;
        // 0x1f529c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52A0u;
        goto label_1f52a0;
    }
    ctx->pc = 0x1F5298u;
    {
        const bool branch_taken_0x1f5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5298u;
        // 0x1f529c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5298) {
            ctx->pc = 0x1F52C4u;
            goto label_1f52c4;
        }
    }
    ctx->pc = 0x1F52A0u;
label_1f52a0:
    // 0x1f52a0: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_1f52a4:
    // 0x1f52a4: 0xc080b0c  jal         func_202C30
label_1f52a8:
    if (ctx->pc == 0x1F52A8u) {
        ctx->pc = 0x1F52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52A4u;
        // 0x1f52a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52ACu;
        goto label_1f52ac;
    }
    ctx->pc = 0x1F52A4u;
    SET_GPR_U32(ctx, 31, 0x1F52ACu);
    ctx->pc = 0x1F52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52A4u;
    // 0x1f52a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F52A4u, 0x1F52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52ACu;
label_1f52ac:
    // 0x1f52ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f52acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f52b0:
    // 0x1f52b0: 0xc080ac2  jal         func_202B08
label_1f52b4:
    if (ctx->pc == 0x1F52B4u) {
        ctx->pc = 0x1F52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52B0u;
        // 0x1f52b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52B8u;
        goto label_1f52b8;
    }
    ctx->pc = 0x1F52B0u;
    SET_GPR_U32(ctx, 31, 0x1F52B8u);
    ctx->pc = 0x1F52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52B0u;
    // 0x1f52b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F52B0u, 0x1F52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52B8u;
label_1f52b8:
    // 0x1f52b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f52bc:
    // 0x1f52bc: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1f52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1f52c0:
    // 0x1f52c0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1f52c4:
    // 0x1f52c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f52c8:
    // 0x1f52c8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f52cc:
    // 0x1f52cc: 0xc04444c  jal         func_111130
label_1f52d0:
    if (ctx->pc == 0x1F52D0u) {
        ctx->pc = 0x1F52D4u;
        goto label_1f52d4;
    }
    ctx->pc = 0x1F52CCu;
    SET_GPR_U32(ctx, 31, 0x1F52D4u);
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1F52CCu, 0x1F52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52D4u;
label_1f52d4:
    // 0x1f52d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f52d8:
    // 0x1f52d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f52d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f52dc:
    // 0x1f52dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f52dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f52e0:
    // 0x1f52e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f52e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f52e4:
    // 0x1f52e4: 0xc043f36  jal         func_10FCD8
label_1f52e8:
    if (ctx->pc == 0x1F52E8u) {
        ctx->pc = 0x1F52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52E4u;
        // 0x1f52e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52ECu;
        goto label_1f52ec;
    }
    ctx->pc = 0x1F52E4u;
    SET_GPR_U32(ctx, 31, 0x1F52ECu);
    ctx->pc = 0x1F52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52E4u;
    // 0x1f52e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1F52E4u, 0x1F52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52ECu;
label_1f52ec:
    // 0x1f52ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f52f0:
    // 0x1f52f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f52f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f52f4:
    // 0x1f52f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f52f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f52f8:
    // 0x1f52f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f52f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f52fc:
    // 0x1f52fc: 0x3e00008  jr          $ra
label_1f5300:
    if (ctx->pc == 0x1F5300u) {
        ctx->pc = 0x1F5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52FCu;
        // 0x1f5300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5304u;
        goto label_1f5304;
    }
    ctx->pc = 0x1F52FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52FCu;
        // 0x1f5300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F52FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5304u;
label_1f5304:
    // 0x1f5304: 0x0  nop
    ctx->pc = 0x1f5304u;
    // NOP
    ctx->pc = 0x1f5308u;
}
