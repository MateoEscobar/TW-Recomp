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

// Function: sub_00192908
// Address: 0x192908 - 0x192a08
void sub_00192908_0x192908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192908_0x192908");
#endif

    switch (ctx->pc) {
        case 0x192908u: goto label_192908;
        case 0x19290cu: goto label_19290c;
        case 0x192910u: goto label_192910;
        case 0x192914u: goto label_192914;
        case 0x192918u: goto label_192918;
        case 0x19291cu: goto label_19291c;
        case 0x192920u: goto label_192920;
        case 0x192924u: goto label_192924;
        case 0x192928u: goto label_192928;
        case 0x19292cu: goto label_19292c;
        case 0x192930u: goto label_192930;
        case 0x192934u: goto label_192934;
        case 0x192938u: goto label_192938;
        case 0x19293cu: goto label_19293c;
        case 0x192940u: goto label_192940;
        case 0x192944u: goto label_192944;
        case 0x192948u: goto label_192948;
        case 0x19294cu: goto label_19294c;
        case 0x192950u: goto label_192950;
        case 0x192954u: goto label_192954;
        case 0x192958u: goto label_192958;
        case 0x19295cu: goto label_19295c;
        case 0x192960u: goto label_192960;
        case 0x192964u: goto label_192964;
        case 0x192968u: goto label_192968;
        case 0x19296cu: goto label_19296c;
        case 0x192970u: goto label_192970;
        case 0x192974u: goto label_192974;
        case 0x192978u: goto label_192978;
        case 0x19297cu: goto label_19297c;
        case 0x192980u: goto label_192980;
        case 0x192984u: goto label_192984;
        case 0x192988u: goto label_192988;
        case 0x19298cu: goto label_19298c;
        case 0x192990u: goto label_192990;
        case 0x192994u: goto label_192994;
        case 0x192998u: goto label_192998;
        case 0x19299cu: goto label_19299c;
        case 0x1929a0u: goto label_1929a0;
        case 0x1929a4u: goto label_1929a4;
        case 0x1929a8u: goto label_1929a8;
        case 0x1929acu: goto label_1929ac;
        case 0x1929b0u: goto label_1929b0;
        case 0x1929b4u: goto label_1929b4;
        case 0x1929b8u: goto label_1929b8;
        case 0x1929bcu: goto label_1929bc;
        case 0x1929c0u: goto label_1929c0;
        case 0x1929c4u: goto label_1929c4;
        case 0x1929c8u: goto label_1929c8;
        case 0x1929ccu: goto label_1929cc;
        case 0x1929d0u: goto label_1929d0;
        case 0x1929d4u: goto label_1929d4;
        case 0x1929d8u: goto label_1929d8;
        case 0x1929dcu: goto label_1929dc;
        case 0x1929e0u: goto label_1929e0;
        case 0x1929e4u: goto label_1929e4;
        case 0x1929e8u: goto label_1929e8;
        case 0x1929ecu: goto label_1929ec;
        case 0x1929f0u: goto label_1929f0;
        case 0x1929f4u: goto label_1929f4;
        case 0x1929f8u: goto label_1929f8;
        case 0x1929fcu: goto label_1929fc;
        case 0x192a00u: goto label_192a00;
        case 0x192a04u: goto label_192a04;
        default: break;
    }

    ctx->pc = 0x192908u;

label_192908:
    // 0x192908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19290c:
    // 0x19290c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x19290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_192910:
    // 0x192910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192914:
    // 0x192914: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x192914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_192918:
    // 0x192918: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_19291c:
    // 0x19291c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_192920:
    if (ctx->pc == 0x192920u) {
        ctx->pc = 0x192920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19291Cu;
        // 0x192920: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192924u;
        goto label_192924;
    }
    ctx->pc = 0x19291Cu;
    {
        const bool branch_taken_0x19291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x192920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19291Cu;
        // 0x192920: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19291c) {
            ctx->pc = 0x192958u;
            goto label_192958;
        }
    }
    ctx->pc = 0x192924u;
label_192924:
    // 0x192924: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x192924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_192928:
    // 0x192928: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x192928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
label_19292c:
    // 0x19292c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_192930:
    if (ctx->pc == 0x192930u) {
        ctx->pc = 0x192930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19292Cu;
        // 0x192930: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192934u;
        goto label_192934;
    }
    ctx->pc = 0x19292Cu;
    {
        const bool branch_taken_0x19292c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x192930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19292Cu;
        // 0x192930: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19292c) {
            ctx->pc = 0x192958u;
            goto label_192958;
        }
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x192934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
label_192938:
    // 0x192938: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_19293c:
    if (ctx->pc == 0x19293Cu) {
        ctx->pc = 0x19293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192938u;
        // 0x19293c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192940u;
        goto label_192940;
    }
    ctx->pc = 0x192938u;
    {
        const bool branch_taken_0x192938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192938u;
        // 0x19293c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192938) {
            ctx->pc = 0x192958u;
            goto label_192958;
        }
    }
    ctx->pc = 0x192940u;
label_192940:
    // 0x192940: 0x3442050d  ori         $v0, $v0, 0x50D
    ctx->pc = 0x192940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1293);
label_192944:
    // 0x192944: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
label_192948:
    if (ctx->pc == 0x192948u) {
        ctx->pc = 0x192948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192944u;
        // 0x192948: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19294Cu;
        goto label_19294c;
    }
    ctx->pc = 0x192944u;
    {
        const bool branch_taken_0x192944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x192948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192944u;
        // 0x192948: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192944) {
            ctx->pc = 0x1929A8u;
            goto label_1929a8;
        }
    }
    ctx->pc = 0x19294Cu;
label_19294c:
    // 0x19294c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_192950:
    // 0x192950: 0x15220016  bne         $t1, $v0, . + 4 + (0x16 << 2)
label_192954:
    if (ctx->pc == 0x192954u) {
        ctx->pc = 0x192954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192950u;
        // 0x192954: 0x51b82  srl         $v1, $a1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192958u;
        goto label_192958;
    }
    ctx->pc = 0x192950u;
    {
        const bool branch_taken_0x192950 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x192954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192950u;
        // 0x192954: 0x51b82  srl         $v1, $a1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192950) {
            ctx->pc = 0x1929ACu;
            goto label_1929ac;
        }
    }
    ctx->pc = 0x192958u;
label_192958:
    // 0x192958: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x192958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_19295c:
    // 0x19295c: 0x51b82  srl         $v1, $a1, 14
    ctx->pc = 0x19295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
label_192960:
    // 0x192960: 0x8c87b9d0  lw          $a3, -0x4630($a0)
    ctx->pc = 0x192960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949328)));
label_192964:
    // 0x192964: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_192968:
    // 0x192968: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x192968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_19296c:
    // 0x19296c: 0x306303fc  andi        $v1, $v1, 0x3FC
    ctx->pc = 0x19296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1020);
label_192970:
    // 0x192970: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x192970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_192974:
    // 0x192974: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_192978:
    // 0x192978: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x192978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_19297c:
    // 0x19297c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x19297cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_192980:
    // 0x192980: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x192980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_192984:
    // 0x192984: 0x24a534c0  addiu       $a1, $a1, 0x34C0
    ctx->pc = 0x192984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
label_192988:
    // 0x192988: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x192988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_19298c:
    // 0x19298c: 0x250834d0  addiu       $t0, $t0, 0x34D0
    ctx->pc = 0x19298cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13520));
label_192990:
    // 0x192990: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_192994:
    // 0x192994: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x192994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_192998:
    // 0x192998: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19299c:
    // 0x19299c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x19299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1929a0:
    // 0x1929a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1929a4:
    if (ctx->pc == 0x1929A4u) {
        ctx->pc = 0x1929A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929A0u;
        // 0x1929a4: 0x24090094  addiu       $t1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929A8u;
        goto label_1929a8;
    }
    ctx->pc = 0x1929A0u;
    {
        const bool branch_taken_0x1929a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929A0u;
        // 0x1929a4: 0x24090094  addiu       $t1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929a0) {
            ctx->pc = 0x1929F0u;
            goto label_1929f0;
        }
    }
    ctx->pc = 0x1929A8u;
label_1929a8:
    // 0x1929a8: 0x51b82  srl         $v1, $a1, 14
    ctx->pc = 0x1929a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
label_1929ac:
    // 0x1929ac: 0x8c8727e4  lw          $a3, 0x27E4($a0)
    ctx->pc = 0x1929acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1929b0:
    // 0x1929b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1929b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1929b4:
    // 0x1929b4: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1929b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1929b8:
    // 0x1929b8: 0x306303fc  andi        $v1, $v1, 0x3FC
    ctx->pc = 0x1929b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1020);
label_1929bc:
    // 0x1929bc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1929bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1929c0:
    // 0x1929c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1929c4:
    // 0x1929c4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1929c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1929c8:
    // 0x1929c8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1929c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1929cc:
    // 0x1929cc: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x1929ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_1929d0:
    // 0x1929d0: 0x24a534c0  addiu       $a1, $a1, 0x34C0
    ctx->pc = 0x1929d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
label_1929d4:
    // 0x1929d4: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x1929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_1929d8:
    // 0x1929d8: 0x250834d0  addiu       $t0, $t0, 0x34D0
    ctx->pc = 0x1929d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13520));
label_1929dc:
    // 0x1929dc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1929dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1929e0:
    // 0x1929e0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1929e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1929e4:
    // 0x1929e4: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1929e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1929e8:
    // 0x1929e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1929e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1929ec:
    // 0x1929ec: 0x2409009a  addiu       $t1, $zero, 0x9A
    ctx->pc = 0x1929ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1929f0:
    // 0x1929f0: 0x40f809  jalr        $v0
label_1929f4:
    if (ctx->pc == 0x1929F4u) {
        ctx->pc = 0x1929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F0u;
        // 0x1929f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929F8u;
        goto label_1929f8;
    }
    ctx->pc = 0x1929F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1929F8u);
        ctx->pc = 0x1929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F0u;
        // 0x1929f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929F0u, 0x1929F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1929F8u;
label_1929f8:
    // 0x1929f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1929f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1929fc:
    // 0x1929fc: 0x3e00008  jr          $ra
label_192a00:
    if (ctx->pc == 0x192A00u) {
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929FCu;
        // 0x192a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A04u;
        goto label_192a04;
    }
    ctx->pc = 0x1929FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929FCu;
        // 0x192a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0x0  nop
    ctx->pc = 0x192a04u;
    // NOP
    ctx->pc = 0x192a08u;
}
