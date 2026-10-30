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

// Function: sub_004CFFD0
// Address: 0x4cffd0 - 0x4d0198
void sub_004CFFD0_0x4cffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFFD0_0x4cffd0");
#endif

    switch (ctx->pc) {
        case 0x4cffd0u: goto label_4cffd0;
        case 0x4cffd4u: goto label_4cffd4;
        case 0x4cffd8u: goto label_4cffd8;
        case 0x4cffdcu: goto label_4cffdc;
        case 0x4cffe0u: goto label_4cffe0;
        case 0x4cffe4u: goto label_4cffe4;
        case 0x4cffe8u: goto label_4cffe8;
        case 0x4cffecu: goto label_4cffec;
        case 0x4cfff0u: goto label_4cfff0;
        case 0x4cfff4u: goto label_4cfff4;
        case 0x4cfff8u: goto label_4cfff8;
        case 0x4cfffcu: goto label_4cfffc;
        case 0x4d0000u: goto label_4d0000;
        case 0x4d0004u: goto label_4d0004;
        case 0x4d0008u: goto label_4d0008;
        case 0x4d000cu: goto label_4d000c;
        case 0x4d0010u: goto label_4d0010;
        case 0x4d0014u: goto label_4d0014;
        case 0x4d0018u: goto label_4d0018;
        case 0x4d001cu: goto label_4d001c;
        case 0x4d0020u: goto label_4d0020;
        case 0x4d0024u: goto label_4d0024;
        case 0x4d0028u: goto label_4d0028;
        case 0x4d002cu: goto label_4d002c;
        case 0x4d0030u: goto label_4d0030;
        case 0x4d0034u: goto label_4d0034;
        case 0x4d0038u: goto label_4d0038;
        case 0x4d003cu: goto label_4d003c;
        case 0x4d0040u: goto label_4d0040;
        case 0x4d0044u: goto label_4d0044;
        case 0x4d0048u: goto label_4d0048;
        case 0x4d004cu: goto label_4d004c;
        case 0x4d0050u: goto label_4d0050;
        case 0x4d0054u: goto label_4d0054;
        case 0x4d0058u: goto label_4d0058;
        case 0x4d005cu: goto label_4d005c;
        case 0x4d0060u: goto label_4d0060;
        case 0x4d0064u: goto label_4d0064;
        case 0x4d0068u: goto label_4d0068;
        case 0x4d006cu: goto label_4d006c;
        case 0x4d0070u: goto label_4d0070;
        case 0x4d0074u: goto label_4d0074;
        case 0x4d0078u: goto label_4d0078;
        case 0x4d007cu: goto label_4d007c;
        case 0x4d0080u: goto label_4d0080;
        case 0x4d0084u: goto label_4d0084;
        case 0x4d0088u: goto label_4d0088;
        case 0x4d008cu: goto label_4d008c;
        case 0x4d0090u: goto label_4d0090;
        case 0x4d0094u: goto label_4d0094;
        case 0x4d0098u: goto label_4d0098;
        case 0x4d009cu: goto label_4d009c;
        case 0x4d00a0u: goto label_4d00a0;
        case 0x4d00a4u: goto label_4d00a4;
        case 0x4d00a8u: goto label_4d00a8;
        case 0x4d00acu: goto label_4d00ac;
        case 0x4d00b0u: goto label_4d00b0;
        case 0x4d00b4u: goto label_4d00b4;
        case 0x4d00b8u: goto label_4d00b8;
        case 0x4d00bcu: goto label_4d00bc;
        case 0x4d00c0u: goto label_4d00c0;
        case 0x4d00c4u: goto label_4d00c4;
        case 0x4d00c8u: goto label_4d00c8;
        case 0x4d00ccu: goto label_4d00cc;
        case 0x4d00d0u: goto label_4d00d0;
        case 0x4d00d4u: goto label_4d00d4;
        case 0x4d00d8u: goto label_4d00d8;
        case 0x4d00dcu: goto label_4d00dc;
        case 0x4d00e0u: goto label_4d00e0;
        case 0x4d00e4u: goto label_4d00e4;
        case 0x4d00e8u: goto label_4d00e8;
        case 0x4d00ecu: goto label_4d00ec;
        case 0x4d00f0u: goto label_4d00f0;
        case 0x4d00f4u: goto label_4d00f4;
        case 0x4d00f8u: goto label_4d00f8;
        case 0x4d00fcu: goto label_4d00fc;
        case 0x4d0100u: goto label_4d0100;
        case 0x4d0104u: goto label_4d0104;
        case 0x4d0108u: goto label_4d0108;
        case 0x4d010cu: goto label_4d010c;
        case 0x4d0110u: goto label_4d0110;
        case 0x4d0114u: goto label_4d0114;
        case 0x4d0118u: goto label_4d0118;
        case 0x4d011cu: goto label_4d011c;
        case 0x4d0120u: goto label_4d0120;
        case 0x4d0124u: goto label_4d0124;
        case 0x4d0128u: goto label_4d0128;
        case 0x4d012cu: goto label_4d012c;
        case 0x4d0130u: goto label_4d0130;
        case 0x4d0134u: goto label_4d0134;
        case 0x4d0138u: goto label_4d0138;
        case 0x4d013cu: goto label_4d013c;
        case 0x4d0140u: goto label_4d0140;
        case 0x4d0144u: goto label_4d0144;
        case 0x4d0148u: goto label_4d0148;
        case 0x4d014cu: goto label_4d014c;
        case 0x4d0150u: goto label_4d0150;
        case 0x4d0154u: goto label_4d0154;
        case 0x4d0158u: goto label_4d0158;
        case 0x4d015cu: goto label_4d015c;
        case 0x4d0160u: goto label_4d0160;
        case 0x4d0164u: goto label_4d0164;
        case 0x4d0168u: goto label_4d0168;
        case 0x4d016cu: goto label_4d016c;
        case 0x4d0170u: goto label_4d0170;
        case 0x4d0174u: goto label_4d0174;
        case 0x4d0178u: goto label_4d0178;
        case 0x4d017cu: goto label_4d017c;
        case 0x4d0180u: goto label_4d0180;
        case 0x4d0184u: goto label_4d0184;
        case 0x4d0188u: goto label_4d0188;
        case 0x4d018cu: goto label_4d018c;
        case 0x4d0190u: goto label_4d0190;
        case 0x4d0194u: goto label_4d0194;
        default: break;
    }

    ctx->pc = 0x4cffd0u;

label_4cffd0:
    // 0x4cffd0: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x4cffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
label_4cffd4:
    // 0x4cffd4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4cffd8:
    // 0x4cffd8: 0xffb50838  sd          $s5, 0x838($sp)
    ctx->pc = 0x4cffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2104), GPR_U64(ctx, 21));
label_4cffdc:
    // 0x4cffdc: 0xffbe0850  sd          $fp, 0x850($sp)
    ctx->pc = 0x4cffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2128), GPR_U64(ctx, 30));
label_4cffe0:
    // 0x4cffe0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4cffe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cffe4:
    // 0x4cffe4: 0x8c6239d0  lw          $v0, 0x39D0($v1)
    ctx->pc = 0x4cffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14800)));
label_4cffe8:
    // 0x4cffe8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x4cffe8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4cffec:
    // 0x4cffec: 0xffb00810  sd          $s0, 0x810($sp)
    ctx->pc = 0x4cffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 16));
label_4cfff0:
    // 0x4cfff0: 0xffb10818  sd          $s1, 0x818($sp)
    ctx->pc = 0x4cfff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2072), GPR_U64(ctx, 17));
label_4cfff4:
    // 0x4cfff4: 0xffb20820  sd          $s2, 0x820($sp)
    ctx->pc = 0x4cfff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2080), GPR_U64(ctx, 18));
label_4cfff8:
    // 0x4cfff8: 0xffb30828  sd          $s3, 0x828($sp)
    ctx->pc = 0x4cfff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2088), GPR_U64(ctx, 19));
label_4cfffc:
    // 0x4cfffc: 0xffb40830  sd          $s4, 0x830($sp)
    ctx->pc = 0x4cfffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2096), GPR_U64(ctx, 20));
label_4d0000:
    // 0x4d0000: 0xffb60840  sd          $s6, 0x840($sp)
    ctx->pc = 0x4d0000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 22));
label_4d0004:
    // 0x4d0004: 0xffb70848  sd          $s7, 0x848($sp)
    ctx->pc = 0x4d0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2120), GPR_U64(ctx, 23));
label_4d0008:
    // 0x4d0008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4d000c:
    if (ctx->pc == 0x4D000Cu) {
        ctx->pc = 0x4D000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0008u;
        // 0x4d000c: 0xffbf0858  sd          $ra, 0x858($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0010u;
        goto label_4d0010;
    }
    ctx->pc = 0x4D0008u;
    {
        const bool branch_taken_0x4d0008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0008u;
        // 0x4d000c: 0xffbf0858  sd          $ra, 0x858($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0008) {
            ctx->pc = 0x4D0018u;
            goto label_4d0018;
        }
    }
    ctx->pc = 0x4D0010u;
label_4d0010:
    // 0x4d0010: 0x10000055  b           . + 4 + (0x55 << 2)
label_4d0014:
    if (ctx->pc == 0x4D0014u) {
        ctx->pc = 0x4D0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0010u;
        // 0x4d0014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0018u;
        goto label_4d0018;
    }
    ctx->pc = 0x4D0010u;
    {
        const bool branch_taken_0x4d0010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0010u;
        // 0x4d0014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0010) {
            ctx->pc = 0x4D0168u;
            goto label_4d0168;
        }
    }
    ctx->pc = 0x4D0018u;
label_4d0018:
    // 0x4d0018: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4d0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4d001c:
    // 0x4d001c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4d001cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0020:
    // 0x4d0020: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x4d0020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_4d0024:
    // 0x4d0024: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_4d0028:
    if (ctx->pc == 0x4D0028u) {
        ctx->pc = 0x4D0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0024u;
        // 0x4d0028: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D002Cu;
        goto label_4d002c;
    }
    ctx->pc = 0x4D0024u;
    {
        const bool branch_taken_0x4d0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0024u;
        // 0x4d0028: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0024) {
            ctx->pc = 0x4D0164u;
            goto label_4d0164;
        }
    }
    ctx->pc = 0x4D002Cu;
label_4d002c:
    // 0x4d002c: 0x0  nop
    ctx->pc = 0x4d002cu;
    // NOP
label_4d0030:
    // 0x4d0030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4d0030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4d0034:
    // 0x4d0034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d0034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0038:
    // 0x4d0038: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x4d0038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_4d003c:
    // 0x4d003c: 0xc13372a  jal         func_4CDCA8
label_4d0040:
    if (ctx->pc == 0x4D0040u) {
        ctx->pc = 0x4D0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D003Cu;
        // 0x4d0040: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0044u;
        goto label_4d0044;
    }
    ctx->pc = 0x4D003Cu;
    SET_GPR_U32(ctx, 31, 0x4D0044u);
    ctx->pc = 0x4D0040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D003Cu;
    // 0x4d0040: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4D003Cu, 0x4D0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0044u;
label_4d0044:
    // 0x4d0044: 0x8fd139d0  lw          $s1, 0x39D0($fp)
    ctx->pc = 0x4d0044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14800)));
label_4d0048:
    // 0x4d0048: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_4d004c:
    if (ctx->pc == 0x4D004Cu) {
        ctx->pc = 0x4D004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0048u;
        // 0x4d004c: 0x26970400  addiu       $s7, $s4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0050u;
        goto label_4d0050;
    }
    ctx->pc = 0x4D0048u;
    {
        const bool branch_taken_0x4d0048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0048u;
        // 0x4d004c: 0x26970400  addiu       $s7, $s4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0048) {
            ctx->pc = 0x4D0124u;
            goto label_4d0124;
        }
    }
    ctx->pc = 0x4D0050u;
label_4d0050:
    // 0x4d0050: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4d0050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0054:
    // 0x4d0054: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x4d0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_4d0058:
    // 0x4d0058: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_4d005c:
    if (ctx->pc == 0x4D005Cu) {
        ctx->pc = 0x4D005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0058u;
        // 0x4d005c: 0x8e3100ac  lw          $s1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0060u;
        goto label_4d0060;
    }
    ctx->pc = 0x4D0058u;
    {
        const bool branch_taken_0x4d0058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0058) {
            ctx->pc = 0x4D005Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0058u;
            // 0x4d005c: 0x8e3100ac  lw          $s1, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D011Cu;
            goto label_4d011c;
        }
    }
    ctx->pc = 0x4D0060u;
label_4d0060:
    // 0x4d0060: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x4d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_4d0064:
    // 0x4d0064: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_4d0068:
    if (ctx->pc == 0x4D0068u) {
        ctx->pc = 0x4D0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0064u;
        // 0x4d0068: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D006Cu;
        goto label_4d006c;
    }
    ctx->pc = 0x4D0064u;
    {
        const bool branch_taken_0x4d0064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0064u;
        // 0x4d0068: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0064) {
            ctx->pc = 0x4D0118u;
            goto label_4d0118;
        }
    }
    ctx->pc = 0x4D006Cu;
label_4d006c:
    // 0x4d006c: 0xafbd0800  sw          $sp, 0x800($sp)
    ctx->pc = 0x4d006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2048), GPR_U32(ctx, 29));
label_4d0070:
    // 0x4d0070: 0x24520800  addiu       $s2, $v0, 0x800
    ctx->pc = 0x4d0070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_4d0074:
    // 0x4d0074: 0x10000022  b           . + 4 + (0x22 << 2)
label_4d0078:
    if (ctx->pc == 0x4D0078u) {
        ctx->pc = 0x4D0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0074u;
        // 0x4d0078: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D007Cu;
        goto label_4d007c;
    }
    ctx->pc = 0x4D0074u;
    {
        const bool branch_taken_0x4d0074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0074u;
        // 0x4d0078: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0074) {
            ctx->pc = 0x4D0100u;
            goto label_4d0100;
        }
    }
    ctx->pc = 0x4D007Cu;
label_4d007c:
    // 0x4d007c: 0x0  nop
    ctx->pc = 0x4d007cu;
    // NOP
label_4d0080:
    // 0x4d0080: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x4d0080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_4d0084:
    // 0x4d0084: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_4d0088:
    if (ctx->pc == 0x4D0088u) {
        ctx->pc = 0x4D0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0084u;
        // 0x4d0088: 0xafa20804  sw          $v0, 0x804($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D008Cu;
        goto label_4d008c;
    }
    ctx->pc = 0x4D0084u;
    {
        const bool branch_taken_0x4d0084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4D0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0084u;
        // 0x4d0088: 0xafa20804  sw          $v0, 0x804($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0084) {
            ctx->pc = 0x4D0098u;
            goto label_4d0098;
        }
    }
    ctx->pc = 0x4D008Cu;
label_4d008c:
    // 0x4d008c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x4d008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_4d0090:
    // 0x4d0090: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x4d0090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_4d0094:
    // 0x4d0094: 0xafa20804  sw          $v0, 0x804($sp)
    ctx->pc = 0x4d0094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2052), GPR_U32(ctx, 2));
label_4d0098:
    // 0x4d0098: 0x8fa20804  lw          $v0, 0x804($sp)
    ctx->pc = 0x4d0098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
label_4d009c:
    // 0x4d009c: 0x2624008c  addiu       $a0, $s1, 0x8C
    ctx->pc = 0x4d009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_4d00a0:
    // 0x4d00a0: 0x8e280030  lw          $t0, 0x30($s1)
    ctx->pc = 0x4d00a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_4d00a4:
    // 0x4d00a4: 0x27a50800  addiu       $a1, $sp, 0x800
    ctx->pc = 0x4d00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_4d00a8:
    // 0x4d00a8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x4d00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4d00ac:
    // 0x4d00ac: 0x27a60804  addiu       $a2, $sp, 0x804
    ctx->pc = 0x4d00acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2052));
label_4d00b0:
    // 0x4d00b0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4d00b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4d00b4:
    // 0x4d00b4: 0x8fa70800  lw          $a3, 0x800($sp)
    ctx->pc = 0x4d00b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
label_4d00b8:
    // 0x4d00b8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4d00b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d00bc:
    // 0x4d00bc: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x4d00bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_4d00c0:
    // 0x4d00c0: 0xc135f9a  jal         func_4D7E68
label_4d00c4:
    if (ctx->pc == 0x4D00C4u) {
        ctx->pc = 0x4D00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00C0u;
        // 0x4d00c4: 0x2473823  subu        $a3, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D00C8u;
        goto label_4d00c8;
    }
    ctx->pc = 0x4D00C0u;
    SET_GPR_U32(ctx, 31, 0x4D00C8u);
    ctx->pc = 0x4D00C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D00C0u;
    // 0x4d00c4: 0x2473823  subu        $a3, $s2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7E68u, 0x4D00C0u, 0x4D00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D00C8u;
label_4d00c8:
    // 0x4d00c8: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x4d00c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4d00cc:
    // 0x4d00cc: 0x8fa20804  lw          $v0, 0x804($sp)
    ctx->pc = 0x4d00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
label_4d00d0:
    // 0x4d00d0: 0xc110cb0  jal         func_4432C0
label_4d00d4:
    if (ctx->pc == 0x4D00D4u) {
        ctx->pc = 0x4D00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00D0u;
        // 0x4d00d4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D00D8u;
        goto label_4d00d8;
    }
    ctx->pc = 0x4D00D0u;
    SET_GPR_U32(ctx, 31, 0x4D00D8u);
    ctx->pc = 0x4D00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D00D0u;
    // 0x4d00d4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4D00D0u, 0x4D00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D00D8u;
label_4d00d8:
    // 0x4d00d8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x4d00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4d00dc:
    // 0x4d00dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4d00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4d00e0:
    // 0x4d00e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4d00e4:
    if (ctx->pc == 0x4D00E4u) {
        ctx->pc = 0x4D00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00E0u;
        // 0x4d00e4: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D00E8u;
        goto label_4d00e8;
    }
    ctx->pc = 0x4D00E0u;
    {
        const bool branch_taken_0x4d00e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00E0u;
        // 0x4d00e4: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d00e0) {
            ctx->pc = 0x4D00F0u;
            goto label_4d00f0;
        }
    }
    ctx->pc = 0x4D00E8u;
label_4d00e8:
    // 0x4d00e8: 0xc110cc4  jal         func_443310
label_4d00ec:
    if (ctx->pc == 0x4D00ECu) {
        ctx->pc = 0x4D00F0u;
        goto label_4d00f0;
    }
    ctx->pc = 0x4D00E8u;
    SET_GPR_U32(ctx, 31, 0x4D00F0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4D00E8u, 0x4D00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D00F0u;
label_4d00f0:
    // 0x4d00f0: 0x8fa20800  lw          $v0, 0x800($sp)
    ctx->pc = 0x4d00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
label_4d00f4:
    // 0x4d00f4: 0x8fa30804  lw          $v1, 0x804($sp)
    ctx->pc = 0x4d00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
label_4d00f8:
    // 0x4d00f8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4d00f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4d00fc:
    // 0x4d00fc: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x4d00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_4d0100:
    // 0x4d0100: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4d0104:
    if (ctx->pc == 0x4D0104u) {
        ctx->pc = 0x4D0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0100u;
        // 0x4d0104: 0x8e3100ac  lw          $s1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0108u;
        goto label_4d0108;
    }
    ctx->pc = 0x4D0100u;
    {
        const bool branch_taken_0x4d0100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0100) {
            ctx->pc = 0x4D0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0100u;
            // 0x4d0104: 0x8e3100ac  lw          $s1, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D011Cu;
            goto label_4d011c;
        }
    }
    ctx->pc = 0x4D0108u;
label_4d0108:
    // 0x4d0108: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x4d0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4d010c:
    // 0x4d010c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
label_4d0110:
    if (ctx->pc == 0x4D0110u) {
        ctx->pc = 0x4D0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D010Cu;
        // 0x4d0110: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0114u;
        goto label_4d0114;
    }
    ctx->pc = 0x4D010Cu;
    {
        const bool branch_taken_0x4d010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d010c) {
            ctx->pc = 0x4D0110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D010Cu;
            // 0x4d0110: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0080;
        }
    }
    ctx->pc = 0x4D0114u;
label_4d0114:
    // 0x4d0114: 0xae33005c  sw          $s3, 0x5C($s1)
    ctx->pc = 0x4d0114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 19));
label_4d0118:
    // 0x4d0118: 0x8e3100ac  lw          $s1, 0xAC($s1)
    ctx->pc = 0x4d0118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_4d011c:
    // 0x4d011c: 0x5620ffce  bnel        $s1, $zero, . + 4 + (-0x32 << 2)
label_4d0120:
    if (ctx->pc == 0x4D0120u) {
        ctx->pc = 0x4D0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D011Cu;
        // 0x4d0120: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0124u;
        goto label_4d0124;
    }
    ctx->pc = 0x4D011Cu;
    {
        const bool branch_taken_0x4d011c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d011c) {
            ctx->pc = 0x4D0120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D011Cu;
            // 0x4d0120: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0058;
        }
    }
    ctx->pc = 0x4D0124u;
label_4d0124:
    // 0x4d0124: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d0124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d0128:
    // 0x4d0128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4d012c:
    if (ctx->pc == 0x4D012Cu) {
        ctx->pc = 0x4D012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0128u;
        // 0x4d012c: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0130u;
        goto label_4d0130;
    }
    ctx->pc = 0x4D0128u;
    {
        const bool branch_taken_0x4d0128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0128u;
        // 0x4d012c: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0128) {
            ctx->pc = 0x4D0138u;
            goto label_4d0138;
        }
    }
    ctx->pc = 0x4D0130u;
label_4d0130:
    // 0x4d0130: 0x10000003  b           . + 4 + (0x3 << 2)
label_4d0134:
    if (ctx->pc == 0x4D0134u) {
        ctx->pc = 0x4D0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0130u;
        // 0x4d0134: 0x244201b0  addiu       $v0, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0138u;
        goto label_4d0138;
    }
    ctx->pc = 0x4D0130u;
    {
        const bool branch_taken_0x4d0130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0130u;
        // 0x4d0134: 0x244201b0  addiu       $v0, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0130) {
            ctx->pc = 0x4D0140u;
            goto label_4d0140;
        }
    }
    ctx->pc = 0x4D0138u;
label_4d0138:
    // 0x4d0138: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x4d0138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_4d013c:
    // 0x4d013c: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x4d013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_4d0140:
    // 0x4d0140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d0140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d0144:
    // 0x4d0144: 0x40f809  jalr        $v0
label_4d0148:
    if (ctx->pc == 0x4D0148u) {
        ctx->pc = 0x4D0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0144u;
        // 0x4d0148: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D014Cu;
        goto label_4d014c;
    }
    ctx->pc = 0x4D0144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D014Cu);
        ctx->pc = 0x4D0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0144u;
        // 0x4d0148: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0144u, 0x4D014Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D014Cu;
label_4d014c:
    // 0x4d014c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x4d014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d0150:
    // 0x4d0150: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4d0154:
    // 0x4d0154: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x4d0154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_4d0158:
    // 0x4d0158: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4d0158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d015c:
    // 0x4d015c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_4d0160:
    if (ctx->pc == 0x4D0160u) {
        ctx->pc = 0x4D0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D015Cu;
        // 0x4d0160: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0164u;
        goto label_4d0164;
    }
    ctx->pc = 0x4D015Cu;
    {
        const bool branch_taken_0x4d015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D015Cu;
        // 0x4d0160: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d015c) {
            ctx->pc = 0x4D0030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0030;
        }
    }
    ctx->pc = 0x4D0164u;
label_4d0164:
    // 0x4d0164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d0164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0168:
    // 0x4d0168: 0xdfb00810  ld          $s0, 0x810($sp)
    ctx->pc = 0x4d0168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
label_4d016c:
    // 0x4d016c: 0xdfb10818  ld          $s1, 0x818($sp)
    ctx->pc = 0x4d016cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2072)));
label_4d0170:
    // 0x4d0170: 0xdfb20820  ld          $s2, 0x820($sp)
    ctx->pc = 0x4d0170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2080)));
label_4d0174:
    // 0x4d0174: 0xdfb30828  ld          $s3, 0x828($sp)
    ctx->pc = 0x4d0174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2088)));
label_4d0178:
    // 0x4d0178: 0xdfb40830  ld          $s4, 0x830($sp)
    ctx->pc = 0x4d0178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2096)));
label_4d017c:
    // 0x4d017c: 0xdfb50838  ld          $s5, 0x838($sp)
    ctx->pc = 0x4d017cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2104)));
label_4d0180:
    // 0x4d0180: 0xdfb60840  ld          $s6, 0x840($sp)
    ctx->pc = 0x4d0180u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_4d0184:
    // 0x4d0184: 0xdfb70848  ld          $s7, 0x848($sp)
    ctx->pc = 0x4d0184u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2120)));
label_4d0188:
    // 0x4d0188: 0xdfbe0850  ld          $fp, 0x850($sp)
    ctx->pc = 0x4d0188u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2128)));
label_4d018c:
    // 0x4d018c: 0xdfbf0858  ld          $ra, 0x858($sp)
    ctx->pc = 0x4d018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2136)));
label_4d0190:
    // 0x4d0190: 0x3e00008  jr          $ra
label_4d0194:
    if (ctx->pc == 0x4D0194u) {
        ctx->pc = 0x4D0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0190u;
        // 0x4d0194: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0198u;
        goto label_fallthrough_0x4d0190;
    }
    ctx->pc = 0x4D0190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0190u;
        // 0x4d0194: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4d0190:
    ctx->pc = 0x4D0198u;
}
