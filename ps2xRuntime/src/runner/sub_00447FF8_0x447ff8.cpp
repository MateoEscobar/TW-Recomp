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

// Function: sub_00447FF8
// Address: 0x447ff8 - 0x448700
void sub_00447FF8_0x447ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447FF8_0x447ff8");
#endif

    switch (ctx->pc) {
        case 0x448114u: goto label_448114;
        case 0x448154u: goto label_448154;
        case 0x448180u: goto label_448180;
        case 0x4481c0u: goto label_4481c0;
        case 0x4481fcu: goto label_4481fc;
        case 0x44823cu: goto label_44823c;
        case 0x448284u: goto label_448284;
        case 0x448388u: goto label_448388;
        case 0x448428u: goto label_448428;
        case 0x448470u: goto label_448470;
        case 0x4484c0u: goto label_4484c0;
        case 0x4484d8u: goto label_4484d8;
        case 0x44857cu: goto label_44857c;
        case 0x4485bcu: goto label_4485bc;
        case 0x448614u: goto label_448614;
        case 0x44866cu: goto label_44866c;
        case 0x4486b4u: goto label_4486b4;
        case 0x4486ccu: goto label_4486cc;
        default: break;
    }

    ctx->pc = 0x447ff8u;

    // 0x447ff8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x447ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x447ffc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x447ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448000: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x448000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x448004: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x448004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x448008: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x448008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44800c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x44800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x448010: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x448010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448014: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x448014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x448018: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x448018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44801c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x44801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x448020: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x448020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448024: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x448024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x448028: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x448028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44802c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x44802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x448030: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x448030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448034: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x448034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x448038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x448038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44803c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x44803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x448040: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x448040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448044: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x448044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x448048: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x448048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x44804c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x44804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x448050: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x448050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x448054: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x448054u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x448058: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x448058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x44805c: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x44805Cu;
    {
        const bool branch_taken_0x44805c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x448060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44805Cu;
        // 0x448060: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44805c) {
            ctx->pc = 0x448074u;
            goto label_448074;
        }
    }
    ctx->pc = 0x448064u;
    // 0x448064: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x448064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x448068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x448068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44806c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x44806Cu;
    {
        const bool branch_taken_0x44806c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x448070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44806Cu;
        // 0x448070: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44806c) {
            ctx->pc = 0x4484E0u;
            goto label_4484e0;
        }
    }
    ctx->pc = 0x448074u;
label_448074:
    // 0x448074: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x448074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x448078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x448078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44807c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x44807Cu;
    {
        const bool branch_taken_0x44807c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x448080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44807Cu;
        // 0x448080: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44807c) {
            ctx->pc = 0x44828Cu;
            goto label_44828c;
        }
    }
    ctx->pc = 0x448084u;
    // 0x448084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x448084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x448088: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x448088u;
    {
        const bool branch_taken_0x448088 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x448088) {
            ctx->pc = 0x44808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448088u;
            // 0x44808c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44809Cu;
            goto label_44809c;
        }
    }
    ctx->pc = 0x448090u;
    // 0x448090: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x448090u;
    {
        const bool branch_taken_0x448090 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x448090) {
            ctx->pc = 0x4480D0u;
            goto label_4480d0;
        }
    }
    ctx->pc = 0x448098u;
    // 0x448098: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x448098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44809c:
    // 0x44809c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4480a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4480a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4480a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480a8: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x4480a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x4480ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4480acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4480b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4480b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4480b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4480b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4480bc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x4480bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4480c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4480c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4480c4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4480c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480c8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x4480C8u;
    {
        const bool branch_taken_0x4480c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480C8u;
        // 0x4480cc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4480c8) {
            ctx->pc = 0x4484B8u;
            goto label_4484b8;
        }
    }
    ctx->pc = 0x4480D0u;
label_4480d0:
    // 0x4480d0: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x4480D0u;
    {
        const bool branch_taken_0x4480d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x4480D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480D0u;
        // 0x4480d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4480d0) {
            ctx->pc = 0x44815Cu;
            goto label_44815c;
        }
    }
    ctx->pc = 0x4480D8u;
    // 0x4480d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4480dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4480dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4480e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4480e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480e4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x4480e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x4480e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4480e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4480ec: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x4480ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4480f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4480f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4480f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4480f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4480f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4480f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4480fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4480fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448100: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448104: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x448104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x448108: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44810c: 0xc112254  jal         func_448950
    ctx->pc = 0x44810Cu;
    SET_GPR_U32(ctx, 31, 0x448114u);
    ctx->pc = 0x448110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44810Cu;
    // 0x448110: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x44810Cu, 0x448114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448114u;
label_448114:
    // 0x448114: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x448114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x448118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44811c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x44811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x448120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x448120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448124: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x448124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x448128: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x448128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x44812c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x44812cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x448130: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448134: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448138: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x44813c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x44813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448140: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448144: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x448144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x448148: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44814c: 0xc112254  jal         func_448950
    ctx->pc = 0x44814Cu;
    SET_GPR_U32(ctx, 31, 0x448154u);
    ctx->pc = 0x448150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44814Cu;
    // 0x448150: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x44814Cu, 0x448154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448154u;
label_448154:
    // 0x448154: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x448154u;
    {
        const bool branch_taken_0x448154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448154u;
        // 0x448158: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448154) {
            ctx->pc = 0x4484DCu;
            goto label_4484dc;
        }
    }
    ctx->pc = 0x44815Cu;
label_44815c:
    // 0x44815c: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x44815Cu;
    {
        const bool branch_taken_0x44815c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x448160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44815Cu;
        // 0x448160: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44815c) {
            ctx->pc = 0x448274u;
            goto label_448274;
        }
    }
    ctx->pc = 0x448164u;
    // 0x448164: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x448164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448168: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x448168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44816c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x44816cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x448170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448174: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x448174u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x448178: 0xc111f9c  jal         func_447E70
    ctx->pc = 0x448178u;
    SET_GPR_U32(ctx, 31, 0x448180u);
    ctx->pc = 0x44817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448178u;
    // 0x44817c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E70u, 0x448178u, 0x448180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448180u;
label_448180:
    // 0x448180: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x448180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448188: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x448188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44818c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448190: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x448190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x448194: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x448194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x448198: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x44819c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44819cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481a0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4481a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4481a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4481a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481a8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x4481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x4481ac: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4481acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4481b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x4481b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x4481b4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4481b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481b8: 0xc112254  jal         func_448950
    ctx->pc = 0x4481B8u;
    SET_GPR_U32(ctx, 31, 0x4481C0u);
    ctx->pc = 0x4481BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4481B8u;
    // 0x4481bc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x4481B8u, 0x4481C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4481C0u;
label_4481c0:
    // 0x4481c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4481c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4481c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4481c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481c8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4481c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4481cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4481ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4481d0: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x4481d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x4481d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4481d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4481d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4481dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4481dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4481e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4481e4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4481e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4481e8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x4481e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x4481ec: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4481ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4481f0: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x4481f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x4481f4: 0xc112254  jal         func_448950
    ctx->pc = 0x4481F4u;
    SET_GPR_U32(ctx, 31, 0x4481FCu);
    ctx->pc = 0x4481F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4481F4u;
    // 0x4481f8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x4481F4u, 0x4481FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4481FCu;
label_4481fc:
    // 0x4481fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4481fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448204: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x448204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x448208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x448208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44820c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x44820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x448210: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x448210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x448214: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448218: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x448218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44821c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x44821cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448224: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x448224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x448228: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x44822c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x44822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x448230: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448234: 0xc112254  jal         func_448950
    ctx->pc = 0x448234u;
    SET_GPR_U32(ctx, 31, 0x44823Cu);
    ctx->pc = 0x448238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448234u;
    // 0x448238: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x448234u, 0x44823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44823Cu;
label_44823c:
    // 0x44823c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x44823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x448240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448244: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x448244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x448248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44824c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x44824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x448250: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x448250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448254: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x448254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x448258: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44825c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x44825cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x448260: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x448264: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x448264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x448268: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44826c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x44826Cu;
    {
        const bool branch_taken_0x44826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44826Cu;
        // 0x448270: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44826c) {
            ctx->pc = 0x4484B8u;
            goto label_4484b8;
        }
    }
    ctx->pc = 0x448274u;
label_448274:
    // 0x448274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448278: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x448278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
    // 0x44827c: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x44827Cu;
    SET_GPR_U32(ctx, 31, 0x448284u);
    ctx->pc = 0x448280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44827Cu;
    // 0x448280: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x44827Cu, 0x448284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448284u;
label_448284:
    // 0x448284: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x448284u;
    {
        const bool branch_taken_0x448284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448284u;
        // 0x448288: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448284) {
            ctx->pc = 0x4484DCu;
            goto label_4484dc;
        }
    }
    ctx->pc = 0x44828Cu;
label_44828c:
    // 0x44828c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x44828cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x448290: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x448290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x448294: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x448294u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x448298: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x448298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x44829c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x44829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4482a0: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x4482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x4482a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4482a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4482a8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x4482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x4482ac: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x4482acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x4482b0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x4482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x4482b4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x4482b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x4482b8: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4482B8u;
    {
        const bool branch_taken_0x4482b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x4482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482B8u;
        // 0x4482bc: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482b8) {
            ctx->pc = 0x4482D8u;
            goto label_4482d8;
        }
    }
    ctx->pc = 0x4482C0u;
    // 0x4482c0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x4482c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4482c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4482C4u;
    {
        const bool branch_taken_0x4482c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4482C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482C4u;
        // 0x4482c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482c4) {
            ctx->pc = 0x4482DCu;
            goto label_4482dc;
        }
    }
    ctx->pc = 0x4482CCu;
    // 0x4482cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4482ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4482d0: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x4482d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x4482d4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x4482d4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4482d8:
    // 0x4482d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4482dc:
    // 0x4482dc: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4482DCu;
    {
        const bool branch_taken_0x4482dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x4482dc) {
            ctx->pc = 0x4482E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4482DCu;
            // 0x4482e0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4482F0u;
            goto label_4482f0;
        }
    }
    ctx->pc = 0x4482E4u;
    // 0x4482e4: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x4482E4u;
    {
        const bool branch_taken_0x4482e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4482E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4482E4u;
        // 0x4482e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482e4) {
            ctx->pc = 0x44832Cu;
            goto label_44832c;
        }
    }
    ctx->pc = 0x4482ECu;
    // 0x4482ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4482f0:
    // 0x4482f0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x4482f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x4482f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4482f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4482f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4482f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4482fc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4482fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x448300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x448304: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x448304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x448308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44830c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x44830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x448310: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x448310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x448314: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x448314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x448318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44831c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x44831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x448320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448324: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x448324u;
    {
        const bool branch_taken_0x448324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448324u;
        // 0x448328: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448324) {
            ctx->pc = 0x4484ACu;
            goto label_4484ac;
        }
    }
    ctx->pc = 0x44832Cu;
label_44832c:
    // 0x44832c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x44832Cu;
    {
        const bool branch_taken_0x44832c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x448330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44832Cu;
        // 0x448330: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44832c) {
            ctx->pc = 0x4483FCu;
            goto label_4483fc;
        }
    }
    ctx->pc = 0x448334u;
    // 0x448334: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x448334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x448338: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x448338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x44833c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x44833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448340: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x448340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x448344: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x448344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x448348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x448348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x44834c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x448350: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x448350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x448354: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448358: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x448358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x44835c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448364: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x448364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44836c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x44836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x448370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448374: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x448374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x448378: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x44837c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x44837cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448380: 0xc112254  jal         func_448950
    ctx->pc = 0x448380u;
    SET_GPR_U32(ctx, 31, 0x448388u);
    ctx->pc = 0x448384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448380u;
    // 0x448384: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x448380u, 0x448388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448388u;
label_448388:
    // 0x448388: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x448388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x44838c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x44838Cu;
    {
        const bool branch_taken_0x44838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x448390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44838Cu;
        // 0x448390: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44838c) {
            ctx->pc = 0x4483B0u;
            goto label_4483b0;
        }
    }
    ctx->pc = 0x448394u;
    // 0x448394: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x448394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x448398: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x448398u;
    {
        const bool branch_taken_0x448398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448398u;
        // 0x44839c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448398) {
            ctx->pc = 0x4483B4u;
            goto label_4483b4;
        }
    }
    ctx->pc = 0x4483A0u;
    // 0x4483a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4483a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4483a4: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x4483a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x4483a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4483A8u;
    {
        const bool branch_taken_0x4483a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483A8u;
        // 0x4483ac: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483a8) {
            ctx->pc = 0x4483B4u;
            goto label_4483b4;
        }
    }
    ctx->pc = 0x4483B0u;
label_4483b0:
    // 0x4483b0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x4483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_4483b4:
    // 0x4483b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4483b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4483b8: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4483b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4483bc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x4483bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x4483c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4483c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4483c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4483c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4483c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4483c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4483cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4483ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4483d0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4483d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4483d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4483d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4483d8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x4483d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4483dc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4483dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4483e0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4483e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4483e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4483e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4483e8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4483e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4483ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4483ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4483f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4483f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4483f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x4483F4u;
    {
        const bool branch_taken_0x4483f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483F4u;
        // 0x4483f8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483f4) {
            ctx->pc = 0x4484B8u;
            goto label_4484b8;
        }
    }
    ctx->pc = 0x4483FCu;
label_4483fc:
    // 0x4483fc: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4483FCu;
    {
        const bool branch_taken_0x4483fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x448400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483FCu;
        // 0x448400: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483fc) {
            ctx->pc = 0x4484C8u;
            goto label_4484c8;
        }
    }
    ctx->pc = 0x448404u;
    // 0x448404: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x448404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x448408: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x448408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44840c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x44840cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x448410: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x448410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448414: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x448414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448418: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x448418u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x44841c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448420: 0xc111f9c  jal         func_447E70
    ctx->pc = 0x448420u;
    SET_GPR_U32(ctx, 31, 0x448428u);
    ctx->pc = 0x448424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448420u;
    // 0x448424: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E70u, 0x448420u, 0x448428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448428u;
label_448428:
    // 0x448428: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x448428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44842c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x44842cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x448430: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x448430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x448434: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x448434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x448438: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x448438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44843c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448440: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x448440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448448: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x448448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x44844c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44844cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448450: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448458: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x448458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x44845c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x44845cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x448460: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x448460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x448464: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448464u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448468: 0xc112254  jal         func_448950
    ctx->pc = 0x448468u;
    SET_GPR_U32(ctx, 31, 0x448470u);
    ctx->pc = 0x44846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448468u;
    // 0x44846c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x448468u, 0x448470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448470u;
label_448470:
    // 0x448470: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x448470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x448474: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x448474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448478: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x448478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x44847c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x44847cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x448480: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x448480u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x448484: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x448484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x448488: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x448488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x44848c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x44848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x448490: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x448490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x448494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x448494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44849c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x44849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4484a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4484a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4484a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4484a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4484a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4484a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4484ac:
    // 0x4484ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4484acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4484b0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x4484b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4484b4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4484b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4484b8:
    // 0x4484b8: 0xc112254  jal         func_448950
    ctx->pc = 0x4484B8u;
    SET_GPR_U32(ctx, 31, 0x4484C0u);
    ctx->pc = 0x4484BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4484B8u;
    // 0x4484bc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x4484B8u, 0x4484C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4484C0u;
label_4484c0:
    // 0x4484c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4484C0u;
    {
        const bool branch_taken_0x4484c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484C0u;
        // 0x4484c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484c0) {
            ctx->pc = 0x4484DCu;
            goto label_4484dc;
        }
    }
    ctx->pc = 0x4484C8u;
label_4484c8:
    // 0x4484c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4484c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4484cc: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x4484ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
    // 0x4484d0: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x4484D0u;
    SET_GPR_U32(ctx, 31, 0x4484D8u);
    ctx->pc = 0x4484D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4484D0u;
    // 0x4484d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x4484D0u, 0x4484D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4484D8u;
label_4484d8:
    // 0x4484d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4484d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4484dc:
    // 0x4484dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4484dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4484e0:
    // 0x4484e0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x4484e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x4484e4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x4484E4u;
    {
        const bool branch_taken_0x4484e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484E4u;
        // 0x4484e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484e4) {
            ctx->pc = 0x4486CCu;
            goto label_4486cc;
        }
    }
    ctx->pc = 0x4484ECu;
    // 0x4484ec: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x4484ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x4484f0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4484F0u;
    {
        const bool branch_taken_0x4484f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484F0u;
        // 0x4484f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484f0) {
            ctx->pc = 0x4485C4u;
            goto label_4485c4;
        }
    }
    ctx->pc = 0x4484F8u;
    // 0x4484f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4484f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4484fc: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4484FCu;
    {
        const bool branch_taken_0x4484fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x448500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484FCu;
        // 0x448500: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484fc) {
            ctx->pc = 0x44853Cu;
            goto label_44853c;
        }
    }
    ctx->pc = 0x448504u;
    // 0x448504: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x448504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x448508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44850c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x44850cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x448510: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448514: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x448514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448518: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44851c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x44851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448524: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x448524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x448528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44852c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x44852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x448530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448534: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x448534u;
    {
        const bool branch_taken_0x448534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448534u;
        // 0x448538: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448534) {
            ctx->pc = 0x4485B4u;
            goto label_4485b4;
        }
    }
    ctx->pc = 0x44853Cu;
label_44853c:
    // 0x44853c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x44853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x448540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448544: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x448544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x448548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44854c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x44854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x448550: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x448550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x448554: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x448554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x448558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44855c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x44855cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448560: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x448564: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x448564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448568: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44856c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x44856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x448570: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448574: 0xc112254  jal         func_448950
    ctx->pc = 0x448574u;
    SET_GPR_U32(ctx, 31, 0x44857Cu);
    ctx->pc = 0x448578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448574u;
    // 0x448578: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x448574u, 0x44857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44857Cu;
label_44857c:
    // 0x44857c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x44857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x448580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448584: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x448584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x448588: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44858c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x44858cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x448590: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x448590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x448594: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448598: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448598u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44859c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x44859cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4485a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4485a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4485a4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x4485a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x4485a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4485a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4485ac: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4485acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4485b0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x4485b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_4485b4:
    // 0x4485b4: 0xc112254  jal         func_448950
    ctx->pc = 0x4485B4u;
    SET_GPR_U32(ctx, 31, 0x4485BCu);
    ctx->pc = 0x4485B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4485B4u;
    // 0x4485b8: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x4485B4u, 0x4485BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4485BCu;
label_4485bc:
    // 0x4485bc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4485BCu;
    {
        const bool branch_taken_0x4485bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4485C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485BCu;
        // 0x4485c0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4485bc) {
            ctx->pc = 0x4486D0u;
            goto label_4486d0;
        }
    }
    ctx->pc = 0x4485C4u;
label_4485c4:
    // 0x4485c4: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4485C4u;
    {
        const bool branch_taken_0x4485c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485C4u;
        // 0x4485c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4485c4) {
            ctx->pc = 0x44861Cu;
            goto label_44861c;
        }
    }
    ctx->pc = 0x4485CCu;
    // 0x4485cc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x4485ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4485d0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4485D0u;
    {
        const bool branch_taken_0x4485d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4485d0) {
            ctx->pc = 0x4485D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4485D0u;
            // 0x4485d4: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4485DCu;
            goto label_4485dc;
        }
    }
    ctx->pc = 0x4485D8u;
    // 0x4485d8: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x4485d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_4485dc:
    // 0x4485dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4485dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4485e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4485e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4485e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4485e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4485e8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4485e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4485ec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4485ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4485f0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x4485f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4485f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4485f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4485f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4485f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4485fc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x4485fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x448600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448604: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x448604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x448608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44860c: 0xc112254  jal         func_448950
    ctx->pc = 0x44860Cu;
    SET_GPR_U32(ctx, 31, 0x448614u);
    ctx->pc = 0x448610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44860Cu;
    // 0x448610: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x44860Cu, 0x448614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448614u;
label_448614:
    // 0x448614: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x448614u;
    {
        const bool branch_taken_0x448614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448614u;
        // 0x448618: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448614) {
            ctx->pc = 0x4486D0u;
            goto label_4486d0;
        }
    }
    ctx->pc = 0x44861Cu;
label_44861c:
    // 0x44861c: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x44861Cu;
    {
        const bool branch_taken_0x44861c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x448620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44861Cu;
        // 0x448620: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44861c) {
            ctx->pc = 0x4486BCu;
            goto label_4486bc;
        }
    }
    ctx->pc = 0x448624u;
    // 0x448624: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x448624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x448628: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x448628u;
    {
        const bool branch_taken_0x448628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448628) {
            ctx->pc = 0x44862Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448628u;
            // 0x44862c: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448634u;
            goto label_448634;
        }
    }
    ctx->pc = 0x448630u;
    // 0x448630: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x448630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_448634:
    // 0x448634: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x448634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x448638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44863c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x44863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x448640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x448644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x448648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44864c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x44864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x448650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x448650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448654: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x448654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x448658: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x448658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x44865c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x44865cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x448660: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448664: 0xc112254  jal         func_448950
    ctx->pc = 0x448664u;
    SET_GPR_U32(ctx, 31, 0x44866Cu);
    ctx->pc = 0x448668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448664u;
    // 0x448668: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x448664u, 0x44866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44866Cu;
label_44866c:
    // 0x44866c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x44866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x448670: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x448670u;
    {
        const bool branch_taken_0x448670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448670) {
            ctx->pc = 0x448674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448670u;
            // 0x448674: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44867Cu;
            goto label_44867c;
        }
    }
    ctx->pc = 0x448678u;
    // 0x448678: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x448678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_44867c:
    // 0x44867c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x44867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x448680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448684: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x448684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x448688: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x448688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44868c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x44868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x448690: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x448690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448694: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44869c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x44869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x4486a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4486a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4486a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4486a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4486a8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x4486a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4486ac: 0xc112254  jal         func_448950
    ctx->pc = 0x4486ACu;
    SET_GPR_U32(ctx, 31, 0x4486B4u);
    ctx->pc = 0x4486B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4486ACu;
    // 0x4486b0: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448950u, 0x4486ACu, 0x4486B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4486B4u;
label_4486b4:
    // 0x4486b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4486B4u;
    {
        const bool branch_taken_0x4486b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486B4u;
        // 0x4486b8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486b4) {
            ctx->pc = 0x4486D0u;
            goto label_4486d0;
        }
    }
    ctx->pc = 0x4486BCu;
label_4486bc:
    // 0x4486bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4486bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4486c0: 0x24a5e1f0  addiu       $a1, $a1, -0x1E10
    ctx->pc = 0x4486c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959600));
    // 0x4486c4: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x4486C4u;
    SET_GPR_U32(ctx, 31, 0x4486CCu);
    ctx->pc = 0x4486C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4486C4u;
    // 0x4486c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x4486C4u, 0x4486CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4486CCu;
label_4486cc:
    // 0x4486cc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x4486ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_4486d0:
    // 0x4486d0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x4486d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4486d4: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x4486d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4486d8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x4486d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4486dc: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x4486dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4486e0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x4486e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4486e4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x4486e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4486e8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4486e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4486ec: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x4486ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4486f0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4486f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4486f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4486F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4486F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486F4u;
        // 0x4486f8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4486F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4486FCu;
    // 0x4486fc: 0x0  nop
    ctx->pc = 0x4486fcu;
    // NOP
    ctx->pc = 0x448700u;
}
