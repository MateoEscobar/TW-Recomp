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

// Function: sub_004E0208
// Address: 0x4e0208 - 0x4e0360
void sub_004E0208_0x4e0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0208_0x4e0208");
#endif

    switch (ctx->pc) {
        case 0x4e0238u: goto label_4e0238;
        case 0x4e0274u: goto label_4e0274;
        case 0x4e02c8u: goto label_4e02c8;
        case 0x4e02f8u: goto label_4e02f8;
        case 0x4e0330u: goto label_4e0330;
        default: break;
    }

    ctx->pc = 0x4e0208u;

    // 0x4e0208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e020c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e020cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0210: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e0214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e0218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e021c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e021cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0220: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e0220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e0224: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E0224u;
    {
        const bool branch_taken_0x4e0224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0224u;
        // 0x4e0228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0224) {
            ctx->pc = 0x4E0254u;
            goto label_4e0254;
        }
    }
    ctx->pc = 0x4E022Cu;
    // 0x4e022c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0230: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e0230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0234: 0x0  nop
    ctx->pc = 0x4e0234u;
    // NOP
label_4e0238:
    // 0x4e0238: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e023c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e023cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e0240: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E0240u;
    {
        const bool branch_taken_0x4e0240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0240) {
            ctx->pc = 0x4E0244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0240u;
            // 0x4e0244: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E024Cu;
            goto label_4e024c;
        }
    }
    ctx->pc = 0x4E0248u;
    // 0x4e0248: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e0248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e024c:
    // 0x4e024c: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E024Cu;
    {
        const bool branch_taken_0x4e024c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e024c) {
            ctx->pc = 0x4E0250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E024Cu;
            // 0x4e0250: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0238;
        }
    }
    ctx->pc = 0x4E0254u;
label_4e0254:
    // 0x4e0254: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E0254u;
    {
        const bool branch_taken_0x4e0254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0254u;
        // 0x4e0258: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0254) {
            ctx->pc = 0x4E0310u;
            goto label_4e0310;
        }
    }
    ctx->pc = 0x4E025Cu;
    // 0x4e025c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0260: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e0264: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E0264u;
    {
        const bool branch_taken_0x4e0264 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0264u;
        // 0x4e0268: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0264) {
            ctx->pc = 0x4E027Cu;
            goto label_4e027c;
        }
    }
    ctx->pc = 0x4E026Cu;
    // 0x4e026c: 0xc137f8e  jal         func_4DFE38
    ctx->pc = 0x4E026Cu;
    SET_GPR_U32(ctx, 31, 0x4E0274u);
    ctx->pc = 0x4E0270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E026Cu;
    // 0x4e0270: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFE38u, 0x4E026Cu, 0x4E0274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0274u;
label_4e0274:
    // 0x4e0274: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E0274u;
    {
        const bool branch_taken_0x4e0274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0274u;
        // 0x4e0278: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0274) {
            ctx->pc = 0x4E0334u;
            goto label_4e0334;
        }
    }
    ctx->pc = 0x4E027Cu;
label_4e027c:
    // 0x4e027c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0280: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0280u;
    {
        const bool branch_taken_0x4e0280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0280u;
        // 0x4e0284: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0280) {
            ctx->pc = 0x4E02A4u;
            goto label_4e02a4;
        }
    }
    ctx->pc = 0x4E0288u;
    // 0x4e0288: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e0288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e028c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e0290: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E0290u;
    {
        const bool branch_taken_0x4e0290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e0290) {
            ctx->pc = 0x4E0294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0290u;
            // 0x4e0294: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E02A8u;
            goto label_4e02a8;
        }
    }
    ctx->pc = 0x4E0298u;
    // 0x4e0298: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e029c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E029Cu;
    {
        const bool branch_taken_0x4e029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E029Cu;
        // 0x4e02a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e029c) {
            ctx->pc = 0x4E0310u;
            goto label_4e0310;
        }
    }
    ctx->pc = 0x4E02A4u;
label_4e02a4:
    // 0x4e02a4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e02a8:
    // 0x4e02a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e02ac: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E02ACu;
    {
        const bool branch_taken_0x4e02ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e02ac) {
            ctx->pc = 0x4E02B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E02ACu;
            // 0x4e02b0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E02E8u;
            goto label_4e02e8;
        }
    }
    ctx->pc = 0x4E02B4u;
    // 0x4e02b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e02b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e02b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e02bc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E02BCu;
    {
        const bool branch_taken_0x4e02bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e02bc) {
            ctx->pc = 0x4E02C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E02BCu;
            // 0x4e02c0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0310u;
            goto label_4e0310;
        }
    }
    ctx->pc = 0x4E02C4u;
    // 0x4e02c4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e02c8:
    // 0x4e02c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e02cc: 0x0  nop
    ctx->pc = 0x4e02ccu;
    // NOP
    // 0x4e02d0: 0x0  nop
    ctx->pc = 0x4e02d0u;
    // NOP
    // 0x4e02d4: 0x0  nop
    ctx->pc = 0x4e02d4u;
    // NOP
    // 0x4e02d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E02D8u;
    {
        const bool branch_taken_0x4e02d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e02d8) {
            ctx->pc = 0x4E02DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E02D8u;
            // 0x4e02dc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E02C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e02c8;
        }
    }
    ctx->pc = 0x4E02E0u;
    // 0x4e02e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E02E0u;
    {
        const bool branch_taken_0x4e02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E02E0u;
        // 0x4e02e4: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e02e0) {
            ctx->pc = 0x4E0310u;
            goto label_4e0310;
        }
    }
    ctx->pc = 0x4E02E8u;
label_4e02e8:
    // 0x4e02e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e02ec: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E02ECu;
    {
        const bool branch_taken_0x4e02ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E02ECu;
        // 0x4e02f0: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e02ec) {
            ctx->pc = 0x4E0310u;
            goto label_4e0310;
        }
    }
    ctx->pc = 0x4E02F4u;
    // 0x4e02f4: 0x0  nop
    ctx->pc = 0x4e02f4u;
    // NOP
label_4e02f8:
    // 0x4e02f8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e02fc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0300: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0304: 0x0  nop
    ctx->pc = 0x4e0304u;
    // NOP
    // 0x4e0308: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0308u;
    {
        const bool branch_taken_0x4e0308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0308u;
        // 0x4e030c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0308) {
            ctx->pc = 0x4E02F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e02f8;
        }
    }
    ctx->pc = 0x4E0310u;
label_4e0310:
    // 0x4e0310: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e0310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0314: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0318: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e031c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e031cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e0320: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0320u;
    {
        const bool branch_taken_0x4e0320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0320) {
            ctx->pc = 0x4E0324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0320u;
            // 0x4e0324: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0344u;
            goto label_4e0344;
        }
    }
    ctx->pc = 0x4E0328u;
    // 0x4e0328: 0xc137f8e  jal         func_4DFE38
    ctx->pc = 0x4E0328u;
    SET_GPR_U32(ctx, 31, 0x4E0330u);
    ctx->pc = 0x4E032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0328u;
    // 0x4e032c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFE38u, 0x4E0328u, 0x4E0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0330u;
label_4e0330:
    // 0x4e0330: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0334:
    // 0x4e0334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e0334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e0338: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e0338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e033c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E033Cu;
    {
        const bool branch_taken_0x4e033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E033Cu;
        // 0x4e0340: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e033c) {
            ctx->pc = 0x4E0348u;
            goto label_4e0348;
        }
    }
    ctx->pc = 0x4E0344u;
label_4e0344:
    // 0x4e0344: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e0344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e0348:
    // 0x4e0348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e034c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0350: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e0350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0354: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0354u;
        // 0x4e0358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E035Cu;
    // 0x4e035c: 0x0  nop
    ctx->pc = 0x4e035cu;
    // NOP
    ctx->pc = 0x4e0360u;
}
