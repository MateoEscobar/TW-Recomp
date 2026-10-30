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

// Function: sub_00449B30
// Address: 0x449b30 - 0x44a088
void sub_00449B30_0x449b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449B30_0x449b30");
#endif

    switch (ctx->pc) {
        case 0x449ba8u: goto label_449ba8;
        case 0x449bccu: goto label_449bcc;
        case 0x449c44u: goto label_449c44;
        case 0x449c8cu: goto label_449c8c;
        case 0x449d48u: goto label_449d48;
        case 0x449d74u: goto label_449d74;
        case 0x449de4u: goto label_449de4;
        case 0x449e10u: goto label_449e10;
        case 0x449e70u: goto label_449e70;
        case 0x449e9cu: goto label_449e9c;
        case 0x449eccu: goto label_449ecc;
        case 0x449ef4u: goto label_449ef4;
        case 0x449efcu: goto label_449efc;
        default: break;
    }

    ctx->pc = 0x449b30u;

    // 0x449b30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x449b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x449b34: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x449b34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x449b38: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x449b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x449b3c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x449b3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x449b40: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x449b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x449b44: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x449b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x449b48: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x449b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x449b4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x449b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x449b50: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x449b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x449b54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x449b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x449b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x449b5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x449b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b60: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x449b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x449b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b68: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x449b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x449b6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x449b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b70: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x449b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x449b74: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x449b74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b78: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x449b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x449b7c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x449b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x449b80: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x449b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x449b84: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x449b84u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x449b88: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x449b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x449b8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x449b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x449b90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x449b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x449b94: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x449b94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x449b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b9c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x449b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x449ba0: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x449BA0u;
    SET_GPR_U32(ctx, 31, 0x449BA8u);
    ctx->pc = 0x449BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449BA0u;
    // 0x449ba4: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x449BA0u, 0x449BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449BA8u;
label_449ba8:
    // 0x449ba8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449bac: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x449bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x449bb0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x449bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x449bb4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x449bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x449bb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x449bb8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x449bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449bc0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x449bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x449bc4: 0xc1128da  jal         func_44A368
    ctx->pc = 0x449BC4u;
    SET_GPR_U32(ctx, 31, 0x449BCCu);
    ctx->pc = 0x449BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449BC4u;
    // 0x449bc8: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x449BC4u, 0x449BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449BCCu;
label_449bcc:
    // 0x449bcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x449bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449bd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x449bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x449bd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449bd8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x449bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x449bdc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x449bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x449be0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449be0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x449be4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x449be4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x449be8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x449be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x449bec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449bf0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449BF0u;
    {
        const bool branch_taken_0x449bf0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449BF0u;
        // 0x449bf4: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449bf0) {
            ctx->pc = 0x449C08u;
            goto label_449c08;
        }
    }
    ctx->pc = 0x449BF8u;
    // 0x449bf8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x449bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x449bfc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x449bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x449c00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x449C00u;
    {
        const bool branch_taken_0x449c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C00u;
        // 0x449c04: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c00) {
            ctx->pc = 0x449C0Cu;
            goto label_449c0c;
        }
    }
    ctx->pc = 0x449C08u;
label_449c08:
    // 0x449c08: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x449c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_449c0c:
    // 0x449c0c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x449c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x449c10: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x449c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x449c14: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x449c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x449c18: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x449c18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x449c1c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x449c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x449c20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x449c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x449c24: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x449c24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x449c28: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x449c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x449c2c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x449C2Cu;
    {
        const bool branch_taken_0x449c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x449C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C2Cu;
        // 0x449c30: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c2c) {
            ctx->pc = 0x449C54u;
            goto label_449c54;
        }
    }
    ctx->pc = 0x449C34u;
    // 0x449c34: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x449c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x449c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449c3c: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x449C3Cu;
    SET_GPR_U32(ctx, 31, 0x449C44u);
    ctx->pc = 0x449C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449C3Cu;
    // 0x449c40: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x449C3Cu, 0x449C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449C44u;
label_449c44:
    // 0x449c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x449c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449c4c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x449C4Cu;
    {
        const bool branch_taken_0x449c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C4Cu;
        // 0x449c50: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c4c) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x449C54u;
label_449c54:
    // 0x449c54: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x449c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x449c58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x449C58u;
    {
        const bool branch_taken_0x449c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C58u;
        // 0x449c5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c58) {
            ctx->pc = 0x449C94u;
            goto label_449c94;
        }
    }
    ctx->pc = 0x449C60u;
    // 0x449c60: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x449c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x449c64: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x449C64u;
    {
        const bool branch_taken_0x449c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x449c64) {
            ctx->pc = 0x449C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449C64u;
            // 0x449c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449C84u;
            goto label_449c84;
        }
    }
    ctx->pc = 0x449C6Cu;
    // 0x449c6c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x449c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x449c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449C70u;
    {
        const bool branch_taken_0x449c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C70u;
        // 0x449c74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c70) {
            ctx->pc = 0x449C80u;
            goto label_449c80;
        }
    }
    ctx->pc = 0x449C78u;
    // 0x449c78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x449C78u;
    {
        const bool branch_taken_0x449c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C78u;
        // 0x449c7c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c78) {
            ctx->pc = 0x449CC0u;
            goto label_449cc0;
        }
    }
    ctx->pc = 0x449C80u;
label_449c80:
    // 0x449c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449c84:
    // 0x449c84: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x449C84u;
    SET_GPR_U32(ctx, 31, 0x449C8Cu);
    ctx->pc = 0x449C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449C84u;
    // 0x449c88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x449C84u, 0x449C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449C8Cu;
label_449c8c:
    // 0x449c8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x449C8Cu;
    {
        const bool branch_taken_0x449c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C8Cu;
        // 0x449c90: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c8c) {
            ctx->pc = 0x449CC0u;
            goto label_449cc0;
        }
    }
    ctx->pc = 0x449C94u;
label_449c94:
    // 0x449c94: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x449c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x449c98: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x449C98u;
    {
        const bool branch_taken_0x449c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449c98) {
            ctx->pc = 0x449C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449C98u;
            // 0x449c9c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449CC4u;
            goto label_449cc4;
        }
    }
    ctx->pc = 0x449CA0u;
    // 0x449ca0: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x449ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x449ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x449CA4u;
    {
        const bool branch_taken_0x449ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CA4u;
        // 0x449ca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ca4) {
            ctx->pc = 0x449CC0u;
            goto label_449cc0;
        }
    }
    ctx->pc = 0x449CACu;
    // 0x449cac: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x449cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x449cb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x449cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x449cb4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x449cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x449cb8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x449cb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x449cbc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x449cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_449cc0:
    // 0x449cc0: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x449cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_449cc4:
    // 0x449cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x449cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x449cc8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x449CC8u;
    {
        const bool branch_taken_0x449cc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x449CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CC8u;
        // 0x449ccc: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449cc8) {
            ctx->pc = 0x449CECu;
            goto label_449cec;
        }
    }
    ctx->pc = 0x449CD0u;
    // 0x449cd0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x449cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x449cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x449cd8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x449cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x449cdc: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x449cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x449ce0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x449ce0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x449ce4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x449CE4u;
    {
        const bool branch_taken_0x449ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CE4u;
        // 0x449ce8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ce4) {
            ctx->pc = 0x449D00u;
            goto label_449d00;
        }
    }
    ctx->pc = 0x449CECu;
label_449cec:
    // 0x449cec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x449cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x449cf0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x449cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449cf4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x449cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449cf8: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x449cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x449cfc: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x449cfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_449d00:
    // 0x449d00: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x449d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x449d04: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x449d04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449d08: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x449D08u;
    {
        const bool branch_taken_0x449d08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x449D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D08u;
        // 0x449d0c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d08) {
            ctx->pc = 0x449D18u;
            goto label_449d18;
        }
    }
    ctx->pc = 0x449D10u;
    // 0x449d10: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x449d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x449d14: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x449d14u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_449d18:
    // 0x449d18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x449d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x449d1c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x449D1Cu;
    {
        const bool branch_taken_0x449d1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x449D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D1Cu;
        // 0x449d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d1c) {
            ctx->pc = 0x449D54u;
            goto label_449d54;
        }
    }
    ctx->pc = 0x449D24u;
    // 0x449d24: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x449d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x449d28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x449D28u;
    {
        const bool branch_taken_0x449d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D28u;
        // 0x449d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d28) {
            ctx->pc = 0x449D54u;
            goto label_449d54;
        }
    }
    ctx->pc = 0x449D30u;
    // 0x449d30: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449d34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x449d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x449d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449D38u;
    {
        const bool branch_taken_0x449d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D38u;
        // 0x449d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d38) {
            ctx->pc = 0x449D50u;
            goto label_449d50;
        }
    }
    ctx->pc = 0x449D40u;
    // 0x449d40: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x449D40u;
    SET_GPR_U32(ctx, 31, 0x449D48u);
    ctx->pc = 0x449D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449D40u;
    // 0x449d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x449D40u, 0x449D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449D48u;
label_449d48:
    // 0x449d48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x449D48u;
    {
        const bool branch_taken_0x449d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D48u;
        // 0x449d4c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d48) {
            ctx->pc = 0x449D58u;
            goto label_449d58;
        }
    }
    ctx->pc = 0x449D50u;
label_449d50:
    // 0x449d50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449d54:
    // 0x449d54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x449d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_449d58:
    // 0x449d58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x449d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x449d5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x449d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449d60: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x449d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x449d64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449D64u;
    {
        const bool branch_taken_0x449d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D64u;
        // 0x449d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d64) {
            ctx->pc = 0x449D7Cu;
            goto label_449d7c;
        }
    }
    ctx->pc = 0x449D6Cu;
    // 0x449d6c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x449D6Cu;
    SET_GPR_U32(ctx, 31, 0x449D74u);
    ctx->pc = 0x449D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449D6Cu;
    // 0x449d70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x449D6Cu, 0x449D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449D74u;
label_449d74:
    // 0x449d74: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x449d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x449d78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x449d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_449d7c:
    // 0x449d7c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x449d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x449d80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x449D80u;
    {
        const bool branch_taken_0x449d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449d80) {
            ctx->pc = 0x449D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449D80u;
            // 0x449d84: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449DA4u;
            goto label_449da4;
        }
    }
    ctx->pc = 0x449D88u;
    // 0x449d88: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x449d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x449d8c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x449D8Cu;
    {
        const bool branch_taken_0x449d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449d8c) {
            ctx->pc = 0x449D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449D8Cu;
            // 0x449d90: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449E14u;
            goto label_449e14;
        }
    }
    ctx->pc = 0x449D94u;
    // 0x449d94: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x449d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x449d98: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x449D98u;
    {
        const bool branch_taken_0x449d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449d98) {
            ctx->pc = 0x449D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449D98u;
            // 0x449d9c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449E14u;
            goto label_449e14;
        }
    }
    ctx->pc = 0x449DA0u;
    // 0x449da0: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x449da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_449da4:
    // 0x449da4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x449DA4u;
    {
        const bool branch_taken_0x449da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449DA4u;
        // 0x449da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449da4) {
            ctx->pc = 0x449DECu;
            goto label_449dec;
        }
    }
    ctx->pc = 0x449DACu;
    // 0x449dac: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x449dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x449db0: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x449db0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x449db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x449db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449db8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x449db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x449dbc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x449dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x449dc0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x449dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x449dc4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x449dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x449dc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x449dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x449dcc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x449dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449dd0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x449dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x449dd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x449dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449dd8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x449dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ddc: 0xc112664  jal         func_449990
    ctx->pc = 0x449DDCu;
    SET_GPR_U32(ctx, 31, 0x449DE4u);
    ctx->pc = 0x449DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449DDCu;
    // 0x449de0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449990u, 0x449DDCu, 0x449DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449DE4u;
label_449de4:
    // 0x449de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x449DE4u;
    {
        const bool branch_taken_0x449de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449DE4u;
        // 0x449de8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449de4) {
            ctx->pc = 0x449E14u;
            goto label_449e14;
        }
    }
    ctx->pc = 0x449DECu;
label_449dec:
    // 0x449dec: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x449decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x449df0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x449df0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x449df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x449df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449df8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x449df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x449dfc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x449dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x449e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e04: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x449e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e08: 0xc11255a  jal         func_449568
    ctx->pc = 0x449E08u;
    SET_GPR_U32(ctx, 31, 0x449E10u);
    ctx->pc = 0x449E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449E08u;
    // 0x449e0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449568u, 0x449E08u, 0x449E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449E10u;
label_449e10:
    // 0x449e10: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x449e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_449e14:
    // 0x449e14: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x449E14u;
    {
        const bool branch_taken_0x449e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E14u;
        // 0x449e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e14) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x449E1Cu;
    // 0x449e1c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449e20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x449e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x449e24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x449E24u;
    {
        const bool branch_taken_0x449e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449e24) {
            ctx->pc = 0x449EA0u;
            goto label_449ea0;
        }
    }
    ctx->pc = 0x449E2Cu;
    // 0x449e2c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x449e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x449e30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x449E30u;
    {
        const bool branch_taken_0x449e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E30u;
        // 0x449e34: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e30) {
            ctx->pc = 0x449E78u;
            goto label_449e78;
        }
    }
    ctx->pc = 0x449E38u;
    // 0x449e38: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x449e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x449e3c: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x449e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x449e40: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x449e40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x449e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x449e48: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x449e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x449e4c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x449e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x449e50: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x449e50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x449e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x449e58: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x449e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x449e5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x449e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x449e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x449e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e68: 0xc112664  jal         func_449990
    ctx->pc = 0x449E68u;
    SET_GPR_U32(ctx, 31, 0x449E70u);
    ctx->pc = 0x449E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449E68u;
    // 0x449e6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449990u, 0x449E68u, 0x449E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449E70u;
label_449e70:
    // 0x449e70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x449E70u;
    {
        const bool branch_taken_0x449e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E70u;
        // 0x449e74: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e70) {
            ctx->pc = 0x449EA0u;
            goto label_449ea0;
        }
    }
    ctx->pc = 0x449E78u;
label_449e78:
    // 0x449e78: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x449e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x449e7c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x449e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x449e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e84: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x449e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x449e88: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x449e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x449e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x449e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e90: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x449e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e94: 0xc11255a  jal         func_449568
    ctx->pc = 0x449E94u;
    SET_GPR_U32(ctx, 31, 0x449E9Cu);
    ctx->pc = 0x449E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449E94u;
    // 0x449e98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449568u, 0x449E94u, 0x449E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449E9Cu;
label_449e9c:
    // 0x449e9c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x449e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_449ea0:
    // 0x449ea0: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x449EA0u;
    {
        const bool branch_taken_0x449ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EA0u;
        // 0x449ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ea0) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x449EA8u;
    // 0x449ea8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x449ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449eac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x449eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x449eb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x449EB0u;
    {
        const bool branch_taken_0x449eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EB0u;
        // 0x449eb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449eb0) {
            ctx->pc = 0x449ED4u;
            goto label_449ed4;
        }
    }
    ctx->pc = 0x449EB8u;
    // 0x449eb8: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x449eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x449ebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x449EBCu;
    {
        const bool branch_taken_0x449ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EBCu;
        // 0x449ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ebc) {
            ctx->pc = 0x449ED0u;
            goto label_449ed0;
        }
    }
    ctx->pc = 0x449EC4u;
    // 0x449ec4: 0xc1129cc  jal         func_44A730
    ctx->pc = 0x449EC4u;
    SET_GPR_U32(ctx, 31, 0x449ECCu);
    ctx->pc = 0x449EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449EC4u;
    // 0x449ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A730u, 0x449EC4u, 0x449ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449ECCu;
label_449ecc:
    // 0x449ecc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x449eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_449ed0:
    // 0x449ed0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x449ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_449ed4:
    // 0x449ed4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x449ED4u;
    {
        const bool branch_taken_0x449ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449ED4u;
        // 0x449ed8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ed4) {
            ctx->pc = 0x449F78u;
            goto label_449f78;
        }
    }
    ctx->pc = 0x449EDCu;
    // 0x449edc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x449edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x449ee0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x449ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x449ee4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x449ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x449ee8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x449ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x449eec: 0xc112e06  jal         func_44B818
    ctx->pc = 0x449EECu;
    SET_GPR_U32(ctx, 31, 0x449EF4u);
    ctx->pc = 0x449EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449EECu;
    // 0x449ef0: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B818u, 0x449EECu, 0x449EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449EF4u;
label_449ef4:
    // 0x449ef4: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x449EF4u;
    SET_GPR_U32(ctx, 31, 0x449EFCu);
    ctx->pc = 0x449EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449EF4u;
    // 0x449ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x449EF4u, 0x449EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449EFCu;
label_449efc:
    // 0x449efc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x449efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449f00: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x449f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x449f04: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x449f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x449f08: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x449f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x449f0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x449f10: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x449f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x449f14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449f18: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x449f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x449f1c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x449f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x449f20: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x449f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x449f24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x449f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x449f28: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x449f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x449f2c: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x449f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x449f30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x449f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x449f34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x449f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x449f38: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x449f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x449f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x449f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x449f40: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x449f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x449f44: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x449f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x449f48: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x449f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x449f4c: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x449F4Cu;
    {
        const bool branch_taken_0x449f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x449F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F4Cu;
        // 0x449f50: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f4c) {
            ctx->pc = 0x449F68u;
            goto label_449f68;
        }
    }
    ctx->pc = 0x449F54u;
    // 0x449f54: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x449f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x449f58: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449F58u;
    {
        const bool branch_taken_0x449f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x449F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F58u;
        // 0x449f5c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f58) {
            ctx->pc = 0x449F68u;
            goto label_449f68;
        }
    }
    ctx->pc = 0x449F60u;
    // 0x449f60: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449F60u;
    {
        const bool branch_taken_0x449f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x449F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F60u;
        // 0x449f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f60) {
            ctx->pc = 0x449F70u;
            goto label_449f70;
        }
    }
    ctx->pc = 0x449F68u;
label_449f68:
    // 0x449f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x449F68u;
    {
        const bool branch_taken_0x449f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F68u;
        // 0x449f6c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f68) {
            ctx->pc = 0x449F8Cu;
            goto label_449f8c;
        }
    }
    ctx->pc = 0x449F70u;
label_449f70:
    // 0x449f70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x449F70u;
    {
        const bool branch_taken_0x449f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F70u;
        // 0x449f74: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f70) {
            ctx->pc = 0x449F8Cu;
            goto label_449f8c;
        }
    }
    ctx->pc = 0x449F78u;
label_449f78:
    // 0x449f78: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x449f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x449f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x449f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449f80: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x449f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x449f84: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x449f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x449f88: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x449f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_449f8c:
    // 0x449f8c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x449f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x449f90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449F90u;
    {
        const bool branch_taken_0x449f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F90u;
        // 0x449f94: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f90) {
            ctx->pc = 0x449FA0u;
            goto label_449fa0;
        }
    }
    ctx->pc = 0x449F98u;
    // 0x449f98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x449F98u;
    {
        const bool branch_taken_0x449f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F98u;
        // 0x449f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f98) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x449FA0u;
label_449fa0:
    // 0x449fa0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x449fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x449fa8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x449FA8u;
    {
        const bool branch_taken_0x449fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449fa8) {
            ctx->pc = 0x449FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449FA8u;
            // 0x449fac: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449FCCu;
            goto label_449fcc;
        }
    }
    ctx->pc = 0x449FB0u;
    // 0x449fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x449fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449fb4: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x449fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x449fb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449fbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x449fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x449fc0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x449FC0u;
    {
        const bool branch_taken_0x449fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449fc0) {
            ctx->pc = 0x449FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449FC0u;
            // 0x449fc4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449FF8u;
            goto label_449ff8;
        }
    }
    ctx->pc = 0x449FC8u;
    // 0x449fc8: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x449fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_449fcc:
    // 0x449fcc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x449FCCu;
    {
        const bool branch_taken_0x449fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449fcc) {
            ctx->pc = 0x449FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449FCCu;
            // 0x449fd0: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449FF8u;
            goto label_449ff8;
        }
    }
    ctx->pc = 0x449FD4u;
    // 0x449fd4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x449fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x449fd8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x449fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x449fdc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x449fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x449fe0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x449fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x449fe4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x449fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x449fe8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x449fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x449fec: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x449fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x449ff0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x449ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x449ff4: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x449ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_449ff8:
    // 0x449ff8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x449ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x449ffc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x449FFCu;
    {
        const bool branch_taken_0x449ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x44A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449FFCu;
        // 0x44a000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ffc) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x44A004u;
    // 0x44a004: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x44a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44a008: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x44a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x44a00c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x44A00Cu;
    {
        const bool branch_taken_0x44a00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A00Cu;
        // 0x44a010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a00c) {
            ctx->pc = 0x44A058u;
            goto label_44a058;
        }
    }
    ctx->pc = 0x44A014u;
    // 0x44a014: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x44a014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x44a018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44a01c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x44a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x44a020: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x44a020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x44a024: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x44a024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x44a028: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x44a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x44a02c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44A02Cu;
    {
        const bool branch_taken_0x44a02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x44A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A02Cu;
        // 0x44a030: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a02c) {
            ctx->pc = 0x44A03Cu;
            goto label_44a03c;
        }
    }
    ctx->pc = 0x44A034u;
    // 0x44a034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x44A034u;
    {
        const bool branch_taken_0x44a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A034u;
        // 0x44a038: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a034) {
            ctx->pc = 0x44A054u;
            goto label_44a054;
        }
    }
    ctx->pc = 0x44A03Cu;
label_44a03c:
    // 0x44a03c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x44a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x44a040: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x44a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x44a044: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x44a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x44a048: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x44a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x44a04c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44a04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x44a050: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x44a050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_44a054:
    // 0x44a054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a058:
    // 0x44a058: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x44a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44a05c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x44a05cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44a060: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x44a060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44a064: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x44a064u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44a068: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x44a068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44a06c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x44a06cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44a070: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x44a070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a074: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x44a074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44a078: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x44a078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44a07c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x44a07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44a080: 0x3e00008  jr          $ra
    ctx->pc = 0x44A080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A080u;
        // 0x44a084: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A088u;
}
